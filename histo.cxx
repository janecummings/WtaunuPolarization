#include "histo.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "string.h"

using namespace std;


MyTH1F::MyTH1F()
{
}

MyTH1F::MyTH1F(const char *name, const char *title, int bins, float xlo, float xhi){

  m_name = name;
  m_title = title;
  m_nbins = bins;
  m_xlo = xlo;
  m_xhi = xhi;
}

MyTH1F::~MyTH1F()
{
}

histo* histo::gObj=NULL;
histo* histo::getObj(){
  if(!gObj) gObj = new histo();
  return gObj;
}

histo::histo()
{ 
}

histo::~histo(){
  if(m_TH1FArray) delete m_TH1FArray;
}

void histo::Create(){
  TH1F::SetDefaultSumw2(true);

  const int NPER = 2;
  const int nREG = 4;
  const int nCUT = 3;

  TString period[NPER] = {"first_", "second_"};
  TString region[nREG] = {"A","B","C","D"};
  TString cutFLAG[nCUT] = {"notauID_1p","BDTtight_1p","BDTloose_1p"};
 
  TString hist_name;

  TH1F::SetDefaultSumw2(true);
  
  for(int iper=0; iper < NPER; iper++){

    
    //plot in regions ABCD after full cutflow
    for(int ireg=0; ireg < nREG; ireg++){
    //track quality
      hist_name = "BLHits_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,20,0,20));
      hist_name = "PxlHits_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,20,0,20));
      hist_name = "SCTHits_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,20,0,20));
      hist_name = "TRTHits_" + period[iper] + region[ireg]; 
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,50,0,50));			  
      
      //kinematics
      hist_name = "Tau_Et_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_EtNeu_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_Eta_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,108,-2.7,2.7));
      hist_name = "Tau_LdTrkPt_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_Y_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,500,-1.5,3.5));

      hist_name = "MET_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "METSig_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,20));
      
      //tau id variables
      hist_name = "EMRadius_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100, 0.0,1.0);
      hist_name = "fTrack_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,2.0));
      hist_name = "fCore_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-2.0,2.0));
      hist_name = "EMfrac_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,2.0));
      hist_name = "topoInvMass_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,30));
      hist_name = "trkAvgDist_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,20,0.0,.20));

      //track kinematics
      hist_name = "Track_N_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,10,0.0,10));
      hist_name = "Track_Pt_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,100));
      hist_name = "Track_Eta_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,108,-2.7,2.7));
      hist_name = "Track_Phi_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-3.2,3.2));
      hist_name = "Track_d0_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));
      hist_name = "Track_z0_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,-200,200));
      hist_name = "Track_atPVd0_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));
      hist_name = "Track_atPVz0_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-50,50));

      hist_name = "WideTrack_N_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,10,0.0,10));
      hist_name = "WideTrack_Pt_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,100));
      hist_name = "WideTrack_Eta_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,108,-2.7,2.7));
      hist_name = "WideTrack_Phi_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-3.2,3.2));
//      hist_name = "WideTrack_d0_" + period[iper]+region[ireg];
//      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));
//      hist_name = "WideTrack_z0_" + period[iper]+region[ireg];
//      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));
//      hist_name = "WideTrack_atPVd0_" + period[iper]+region[ireg];
//      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));
//      hist_name = "WideTrack_atPVz0_" + period[iper]+region[ireg];
//      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,80,-2,2));

      hist_name = "TkClus_DeltaPhi_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0,.5));
      hist_name = "TkClus_DeltaEta_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0,.5));
      hist_name = "TkClus_DeltaR_" + period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0,.5));

      hist_name = "WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200));
      
      //lead trk pt for hi,lo,med regions of emfrac
      hist_name = "LdTrkPt_EMhi_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "LdTrkPt_EMlo_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));

      hist_name = "EMfrac_EThi_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,200,0,2.0));
      hist_name = "EMfrac_ETlo_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,200,0,2.0));

      hist_name = "LdTrkPt_EThi_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100.0));
      hist_name = "LdTrkPt_ETlo_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100.0));

      hist_name = "LdTrkPt_in_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "LdTrkPt_out_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));

      //plots in forward regions
      
      hist_name = "Fwd_Et_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));      
      hist_name = "Fwd_LdTrkPtHI_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Fwd_LdTrkPtLO_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Fwd_EMRadius_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100, -.1,1.1));
      hist_name = "Fwd_fTrack_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,2.0));
      hist_name = "Fwd_fCore_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-2.0,2.0));
      hist_name = "Fwd_EMfrac_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,2.0));
      hist_name = "Fwd_trkAvgDist_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,20,0.0,0.2));

      hist_name = "Fwd_WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200));

      hist_name = "Cent_WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200));

      //w pt reweighted kinematics 
      hist_name = "PtRW_Tau_Et_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_Tau_Eta_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,108,-2.7,2.7));
      hist_name = "PtRW_Tau_LdTrkPt_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_Tau_Y_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,180,-1.5,2.5));

      hist_name = "PtRW_MET_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_METSig_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,20));

      hist_name = "PtRW_WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200));      

      hist_name = "PtRW_cent_Tau_Et_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_cent_Tau_Eta_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,108,-2.7,2.7));
      hist_name = "PtRW_cent_Tau_LdTrkPt_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_cent_Tau_Y_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,180,-1.5,2.5));

      hist_name = "PtRW_cent_MET_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "PtRW_cent_METSig_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,20));

      hist_name = "PtRW_cent_WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200));    

      hist_name = "cent_Tau_Et_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "cent_Tau_Eta_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,108,-2.7,2.7));
      hist_name = "cent_Tau_LdTrkPt_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "cent_Tau_Y_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,180,-1.5,2.5));

      hist_name = "cent_MET_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "cent_METSig_"+period[iper]+region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,20));

      hist_name = "cent_WPt_" + period[iper] + region[ireg];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,200,0.0,200)); 

    }

    ///////////////////////
    //plot within cutflow//
    ///////////////////////
    for(int iCut=0; iCut < nCUT; iCut++){
      //kinematics
      hist_name = "Tau_Et_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_EtNeu_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_Eta_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,108,-2.7,2.7));
      hist_name = "Tau_LdTrkPt_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,100,0,100));
      hist_name = "Tau_Y_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name, hist_name,180,-1.5,2.5));
      
      //tau id variables
      hist_name = "EMRadius_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100, -.1,1.1));
      hist_name = "fTrack_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,-2.0,2.0));
      hist_name = "fCore_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,2.0));
      hist_name = "EMfrac_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,1.1));
      hist_name = "topoInvMass_"+period[iper]+cutFLAG[iCut];
      m_histoTH1F.push_back(MyTH1F::MyTH1F(hist_name,hist_name,100,0.0,30));

      
    }
  }

 
  
 
  
  m_histoTH1F.push_back(MyTH1F::MyTH1F("W1","W1",2,0,2));
  m_histoTH1F.push_back(MyTH1F::MyTH1F("W2","W2",2,0,2));
  m_histoTH1F.push_back(MyTH1F::MyTH1F("W3","W3",2,0,2));
  m_histoTH1F.push_back(MyTH1F::MyTH1F("W4","W4",2,0,2));

  m_TH1FArray = new TClonesArray("TH1F",5);
  TClonesArray &ahis = *m_TH1FArray;
  for(int iHIS=0; iHIS<int(m_histoTH1F.size()); iHIS++){
    ahis[iHIS] = new(ahis[iHIS]) TH1F(m_histoTH1F[iHIS].m_name.c_str(),
				      m_histoTH1F[iHIS].m_title.c_str(),
				      m_histoTH1F[iHIS].m_nbins,
				      m_histoTH1F[iHIS].m_xlo,
				      m_histoTH1F[iHIS].m_xhi);
  }

}

void histo::Store(TFile *root_file){
  m_outputRootFile = root_file;
  m_outputRootFile->cd();
  m_TH1FArray->Write();
}

TH1F *histo::GetTH1F(TString a){
  TH1F *phisto;
  TString name = a;
  phisto=(TH1F*) m_TH1FArray->FindObject(name);
  if(phisto == NULL){
    std::cout<<"NULL histogram: "<<name<<std::endl;
    return 0;
  }
  return phisto;
}
