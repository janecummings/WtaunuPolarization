#include "CutFlow.h"
#include "TMath.h"
#include "EventTree.h"
#include "egammaPIDdefs.h"

#include "GoodRunsLists/TGoodRunsListReader.h"
#include "GoodRunsLists/TGoodRunsList.h"

#include <fstream>
#include <iostream>
#include <vector>
#include "TLorentzVector.h"
#include "string.h"

using namespace std;

CutFlow* CutFlow::gObj=NULL;
CutFlow* CutFlow::getObj(){
  if(!gObj) gObj=new CutFlow();
  return gObj;
}

//ClassImp(CutFlow)
CutFlow::CutFlow()
{
}
CutFlow::~CutFlow()
{
}

bool CutFlow::passTrigger(EventTree* a, string trigger){

  if(trigger == "loose") return a->EF_tau12_loose_xe20_noMu;
  if(trigger == "medium") return a->EF_tau16_medium_xe22_noMu;
  else{
    cout<<"Wrong trigger choice"<<endl;
    return false;
  }
}

int CutFlow::nVertex(EventTree* a){
  
  int nVtx = 0;
  for(int iPVx = 0; iPVx < a->vxp_n; iPVx++){
    if(((a->vxp_nTracks)->at(iPVx))>2) nVtx++;
  }

  return nVtx;
}
bool CutFlow::cleanCollision(EventTree* a){

  for(int iPVx = 0; iPVx < a->vxp_n; iPVx++) {
    if(((a->vxp_nTracks)->at(iPVx))>2) return true;
  }
  
  return false;
}

vector<bool> CutFlow::JetFlags(EventTree* a, bool MC){
  vector<bool> jetflag(3,true); //cleanjet, gapjet, deltaphi
  double chf = 0;
  
  for (int ijet=0; ijet < a->jet_n; ijet++){
    
    if( (a->jet_pt)->at(ijet) <= 20000 ) continue;
    if(!MC){
      //JET CLEANING
   
    if(  (a->jet_hecf)->at(ijet) > 0.5 && fabs( (a->jet_HECQuality)->at(ijet) ) > 0.5 ) jetflag[0] = false; 
    if( fabs( (a->jet_NegativeE)->at(ijet) )> 60000.0 ) jetflag[0] = false;
    
    if( (a->jet_emfrac)->at(ijet) > 0.95 &&
	fabs( (a->jet_LArQuality)->at(ijet)) > 0.8  &&
	fabs( (a->jet_emscale_eta)->at(ijet)) < 2.8 ) 
      jetflag[0] = false;
    
    chf = (a->jet_sumPtTrk)->at(ijet)/(a->jet_pt)->at(ijet);
    
    if( fabs( (a->jet_Timing)->at(ijet) ) > 25.0  ) jetflag[0] = false;
    if(	(a->jet_emfrac)->at(ijet) < 0.05 && chf < 0.05 && fabs( (a->jet_emscale_eta)->at(ijet)) < 2.0 ) jetflag[0] = false;
    if( (a->jet_emfrac)->at(ijet) < 0.05 && fabs( (a->jet_emscale_eta)->at(ijet)) >= 2.0 ) jetflag[0] = false;
    if( (a->jet_fracSamplingMax)->at(ijet) > 0.99 && fabs( (a->jet_emscale_eta)->at(ijet)) < 2.0 ) jetflag[0] = false;
    
    }
    
    //GAP JETS
    
    if( (fabs( (a->jet_emscale_eta)->at(ijet)) > 1.3) && (fabs( (a->jet_emscale_eta)->at(ijet)) < 1.7 )) jetflag[1] = false;
    
    //DELTA PHI(MET,JET)
    if (DeltaPhi( (a->jet_phi)->at(ijet), a->MET_LocHadTopo_phi) < 0.5 ) jetflag[2] = false;

  }  
  
  return jetflag;
  
}

float CutFlow::DeltaPhi(float phi1, float phi2){

  float dif = fabs(phi1 - phi2);
  if( dif > TMath::Pi() )  dif = fabs( 2.0*TMath::Pi() - dif);
  //cout<<dif<<endl;
  return dif;
}

float CutFlow::DeltaR(float phi1, float phi2, float eta1, float eta2){
  double dphi = phi1 - phi2;
  if(dphi >= TMath::Pi()) { dphi = 2.0*TMath::Pi() - dphi; }
  if(dphi < (-1.0*TMath::Pi())) { dphi = 2.0*TMath::Pi() + dphi; }
  float dr = TMath::Sqrt((dphi*dphi) + ((eta1-eta2)*(eta1-eta2)));
  return dr; 
}

//floatdCutFlow::DeltaR(float& phi1, float& phi2, float& eta1, float& eta2){
//
//  return DeltaR(phi1,phi2,eta1,eta2);
//}

vector<int> CutFlow::TauFlagsOld(EventTree* a, string id){
  vector<int> tauflag(4,0);
  float leadEt = 20.0;
  int ltau = -1;
  
  for(int itau = 0; itau < a->tau_n; itau++) {
    
    //require calo-seeded tau
    if((a->tau_author)->at(itau) != 1 && (a->tau_author)->at(itau) != 3) continue;
    
    if( id=="tight"){
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_JetBDTMedium)->at(itau)==1 ) ||  
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_JetBDTTight)->at(itau)==1 ) ) &&
	  (a->tau_Et)->at(itau)/1000 >= leadEt ){
	leadEt = (a->tau_Et)->at(itau)/1000; 
	ltau = itau;
      }
    }
    else if(id=="loose"){
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_JetBDTMedium)->at(itau)==1 ) ||  
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_JetBDTTight)->at(itau)==1 ) ) &&
	  ( (a->tau_author)->at(itau)==1 || (a->tau_author)->at(itau)==3 ) ) return tauflag;
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_BDTJetScore)->at(itau)<=0.5 ) ||  
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_BDTJetScore)->at(itau)<=0.45 ) ) &&
	  (a->tau_Et)->at(itau)/1000 >= leadEt ) {
	leadEt = (a->tau_Et)->at(itau)/1000;
	ltau=itau;
      }
    }
  }
  

  
  if(ltau == -1) return tauflag;
  if((a->tau_seedCalo_numTrack)->at(ltau)==0) return tauflag;
  tauflag[0] = 1; 

  if(leadEt > 60.0 || leadEt < 20.0) return tauflag;
  tauflag[1] = 1; 
  float tauEta = fabs((a->tau_jet_emscale_eta)->at(ltau));
  if(tauEta > 1.3 && tauEta < 1.7) return tauflag;
  tauflag[2] = 1;
  if( (a->tau_electronVetoTight)->at(ltau)  || (a->tau_muonVeto)->at(ltau) ) return tauflag;
  tauflag[3] = 1;
  
  return tauflag;
}

int CutFlow::ITau(EventTree* a, string id){

  float leadEt = 20.0;
  int ltau = -1;

  for(int itau = 0; itau < a->tau_n; itau++) {
    
    //require calo-seeded tau
    if((a->tau_author)->at(itau) != 1 && (a->tau_author)->at(itau) != 3) continue;
    
    if( id=="tight"){
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_JetBDTMedium)->at(itau)==1 ) ||  //! 
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_JetBDTTight)->at(itau)==1 ) ) &&
	  (a->tau_Et)->at(itau)/1000 >= leadEt ){
	leadEt = (a->tau_Et)->at(itau)/1000; 
	ltau = itau;
      }
    }
    else if(id=="loose"){
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_JetBDTMedium)->at(itau)==1 ) ||  
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_JetBDTTight)->at(itau)==1 ) ) &&
	  ( (a->tau_author)->at(itau)==1 || (a->tau_author)->at(itau)==3 ) ) return -1;
      if( ( ( (a->tau_seedCalo_numTrack)->at(itau)<=1 && (a->tau_BDTJetScore)->at(itau)<=0.5 ) ||  
	    ( (a->tau_seedCalo_numTrack)->at(itau)>1 && (a->tau_BDTJetScore)->at(itau)<=0.45 ) ) &&
	  (a->tau_Et)->at(itau)/1000 >= leadEt ) {
	leadEt = (a->tau_Et)->at(itau)/1000;
	ltau=itau;
      }
    }
  }

  return ltau;
}  

vector<int> CutFlow::TauFlags(EventTree* a, int ltau){
  vector<int> tauflag(4,0);
  
  if(ltau == -1) return tauflag;
  if((a->tau_seedCalo_numTrack)->at(ltau)==0) return tauflag;
  tauflag[0] = 1; 
  float leadEt = ((a->tau_Et)->at(ltau))/1000;
  if( leadEt > 60.0 || leadEt < 20.0) return tauflag;
  tauflag[1] = 1; 
  float tauEta = fabs((a->tau_jet_emscale_eta)->at(ltau));
  //cout<<tauEta<<endl;
  if(tauEta > 1.3 && tauEta < 1.7) return tauflag;
  tauflag[2] = 1;
  if( (a->tau_electronVetoTight)->at(ltau)  || (a->tau_muonVeto)->at(ltau) ) return tauflag;
  tauflag[3] = 1;
  
  
  return tauflag;
}

bool CutFlow::eVeto(EventTree* a){
  for(int iel = 0; iel < a->el_n; iel++){
    float pt = ( (a->el_cl_E)->at(iel)/cosh( (a->el_tracketa)->at(iel)) )/1000.0;
    if(pt >= 15.0 && (a->el_author)->at(iel)!=8 && 
       (fabs( (a->el_cl_eta)->at(iel)) <= 1.37 || fabs( (a->el_cl_eta)->at(iel)) >= 1.52 ) &&
       ( (a->el_isEM)->at(iel) & egammaPID::ElectronMedium_WithTrackMatch) == 0) 
      return false;
  }
  
  return true;
  
}

bool CutFlow::mVeto(EventTree* a){
  for(int imu = 0; imu < a->mu_staco_n; imu++){
    if( (a->mu_staco_isCombinedMuon)->at(imu) == 1 && (a->mu_staco_pt)->at(imu) > 15000 
	&& (a->mu_staco_author)->at(imu) == 6 )
      return false;
  }
  return true;
}

float CutFlow::metSig(EventTree* a){

  float num = (a->MET_LocHadTopo_et)/1000.0;
  float den = 0.5*sqrt( (a->MET_LocHadTopo_sumet)/1000.0 );

  return num/den;
}

 
