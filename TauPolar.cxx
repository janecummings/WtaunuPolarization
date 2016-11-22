#define TauPolar_cxx
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "EventTree.h"
#include "CutFlow.h"
#include "histo.h"

#include "GoodRunsLists/TGoodRunsListReader.h"
#include "GoodRunsLists/TGoodRunsList.h"

#include <iostream>
#include <fstream>
#include <vector>
#include "stdlib.h"
#include <time.h>
#include "math.h"
#include "TLorentzVector.h"

vector<int> WCutFlow(EventTree* evt, bool MC, CutFlow* ana, string period);
void PrintCutFlow(vector<double> WCutFlow, string Names[], int nCuts, TString outputtxt);
vector<int> PassCD(EventTree* evt, CutFlow* ana, bool MC);
vector<int> MonCD(EventTree* evt, CutFlow* ana, bool MC, string region);
void Run(int, bool, bool, bool);

bool tight = false;
TString runP = "both"; //"sec";

int main(int argc, char* argv[]) {


  
  bool test = false;
  // bool test = true;
  bool plotid = true;
  bool plottrk = true;
  bool prong = true;


    //WHICH SAMPLE?
    int INfile = -1;
    cout<<"********WHICH SAMPLE**********"<<endl;
    cout<<"0: Data"<<endl;
    cout<<"1: W->tau_{had} nu"<<endl;
    cout<<"2: W->tau_{lep} nu"<<endl;
    cout<<"3: W->e nu"<<endl;
    cout<<"4: W->mu nu"<<endl;
    cout<<"5: Z->ee"<<endl;
    cout<<"6: Z->mu mu"<<endl;
    cout<<"7: Z->tau tau"<<endl;
    cout<<"8: ttbar had"<<endl;
    cout<<"9: ttbar lep"<<endl;
    cout<<"10: Right Herwig"<<endl;
    cout<<"11: Left Herwig"<<endl;
    cout<<"12: 0-9"<<endl;
    cout<<"Enter #:"<<endl;

    cin>>INfile;
    
    cout<<"Thanks!"<<endl;
    
    
    if(INfile == 12){
      cout<<"Running over all samples."<<endl;
      for(int irun=0; irun < 12; irun++){
	if(irun==1) Run(11,test,plotid,true);//use Herwig Left signal
	if(irun==5 || irun==0 || irun==1 || irun==10) continue;//skip Z->ee, data, and right samples
	else Run(irun, test, plotid, true);
	cout<<"Finished Sample # "<<irun<<endl;
      }

    }

    else Run(INfile,test,plotid,prong);
  
  return 0;

}

void Run(int INfile, bool test, bool plotid, bool prong){

  //Print The Time
  time_t rawtime;
  struct tm * timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  printf("Current Local Time and Date: %s", asctime(timeinfo));

 //Store Weights for MC
  vector<double> corr_First_AB(5,1.);
  vector<double> corr_First_CD(5,1.);
  vector<double> corr_Second_AB(5,1.);
  vector<double> corr_Second_CD(5,1.);

  //TH1F* deltaphi = new TH1F("deltaphi","deltaphi",100,0,10);
  TH1F* hTrack = new TH1F("TrkColl","TrkColl",100,0,100); // clean this up
  TH1F::SetDefaultSumw2(true);//stat unc.
  
  TH2F* EMfracPT[4];
  EMfracPT[0]  = new TH2F("EMFracPT_A","EMFracPT_A",50,0,1.0,80,0,80); 
  EMfracPT[1]  = new TH2F("EMFracPT_B","EMFracPT_B",50,0,1.0,80,0,80);
  EMfracPT[2]  = new TH2F("EMFracPT_C","EMFracPT_C",50,0,1.0,80,0,80); 
  EMfracPT[3]  = new TH2F("EMFracPT_D","EMFracPT_D",50,0,1.0,80,0,80); 

  TH2F* EMfracET[4];
  EMfracET[0]  = new TH2F("EMFracET_A","EMFracET_A",50,0,1.0,80,0,80);  
  EMfracET[1]  = new TH2F("EMFracET_B","EMFracET_B",50,0,1.0,80,0,80); 
  EMfracET[2]  = new TH2F("EMFracET_C","EMFracET_C",50,0,1.0,80,0,80); 
  EMfracET[3]  = new TH2F("EMFracET_D","EMFracET_D",50,0,1.0,80,0,80); 


  //Load Sample

  TChain *chain = new TChain("tauPerf");
  TString outputroot;
  TString outputtxt;
  double xsct=1;
  bool MC = false;
  TString sample;


 
  switch(INfile){
  case 0:
    // if(!test) chain->Add("/work/czyczula/TauD3PDs/user.ZofiaCzyczula.00167844.JetTauEtmiss-AOD.r1774_p327_p333.01-00-01-01.D3PD_SKIM_BASIC.110722153834/*.root/tauPerf");
    //chain->Add("/work/czyczula/TauD3PDs/user.ZofiaCzyczula.00167844.JetTauEtmiss-AOD.r1774_p327_p333.01-00-01-01.D3PD_SKIM_BASIC.110722153834/*.root/tauPerf");
    //#include "AllData.h"
    //#include "AllData_new.h"
    //#include "AllData2.h"
    if(runP =="sec"){
#include "AllDataSecond.h"
    }
    else if(runP == "both"){
#include "AllData.h"
      //#include "AllDataFirst.h"
      //#include "AllDataSecond.h"
    }

outputroot = "allData"; outputtxt = "allData"; sample = "All_Data";
    break;

  case 1:
    //  if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.107054.PythiaWtaunu_incl.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165018/*roo*");
    //chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.107054.PythiaWtaunu_incl.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165018/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/*.root");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115130/*.root");
    if(runP=="sec"){
#include "weights_p2/weights_Wtaunu_had_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_Wtaunu_had.h"
    }
    outputroot = "Wtauhadnu"; outputtxt = "Wtauhadnu"; sample = "Wtauhadnu"; MC=true; xsct=10.46*1*0.6479*1000;
    break;
    
  case 2:
    //    if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.107054.PythiaWtaunu_incl.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165018/*roo*");
    // if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.107054.PythiaWtaunu_incl.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165018/*roo*");
   chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/*.root");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115130/*.root");
    //#include "weights/weights_Wtaunu_lep.h"
    if(runP=="sec"){
#include "weights_p2/weights_Wtaunu_lep_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_Wtaunu_lep.h"
    }
    outputroot = "Wtaulepnu"; outputtxt = "Wtaulepnu"; sample = "Wtaulepnu"; MC=true; xsct=10.46*(1-0.6479)*1000;
    break;
    
  case 3:
    //    if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.106043.PythiaWenu_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728164954/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106043.PythiaWenu_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v1.110907122902/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106043.PythiaWenu_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v2_3.111020104131/*roo*");
    //#include "weights/weights_Wenu.h"
    if(runP=="sec"){
#include "weights_p2/weights_Wenu_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_Wenu.h"
    }
    outputroot = "Wenu"; outputtxt = "Wenu"; sample = "Wenu"; MC=true; xsct=10.46*1*1*1000;
    break;

  case 4:
    //if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.106044.PythiaWmunu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165004/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106044.PythiaWmunu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v1.110907122915/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106044.PythiaWmunu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MCBASIC_v2_2.111021094529/*roo*");
    //#include "weights/weights_Wmunu.h"
    if(runP=="sec"){
#include "weights_p2/weights_Wmunu_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_Wmunu.h"
    }
    outputroot = "Wmunu"; outputtxt = "Wmunu"; sample = "Wmunu"; MC=true; xsct=10.46*1*1*1000;
    break;
    
  case 5: 
    //if(!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.106046.PythiaZee_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD.1_StreamD3PD_TauMEDIUM_MC_TINY.110728165029/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106046.PythiaZee_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD.1_StreamD3PD_TauMEDIUM_MC_BASIC_v1.110907122928/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106046.PythiaZee_no_filter.e574_s933_s946_r1661_r1700.01-00-01-01.D3PD.1_StreamD3PD_TauMEDIUM_MCBASIC_v2_3.111020110743/*roo*");
    //#include "weights/weights_Zee.h"   

    if(runP=="sec"){
#include "weights_p2/weights_Zee_p2.h"   
    }
    else if(runP=="both"){
#include "weights/weights_Zee.h"   
    }
    outputroot = "Zee"; outputtxt = "Zee"; sample = "Zee"; MC=true; xsct=0.99*1*1*1000;
    break;
    
  case 6:
    //if (!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.106047.PythiaZmumu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165042/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106047.PythiaZmumu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v1.110907122939/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106047.PythiaZmumu_no_filter.e574_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v2.111019125905/*roo*");
    //#include "weights/weights_Zmumu.h"
    if(runP=="sec"){
#include "weights_p2/weights_Zmumu_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_Zmumu.h"
    }
    outputroot = "Zmumu"; outputtxt = "Zmumu"; sample = "Zmumu"; MC=true; xsct=0.99*1*1*1000;
    break;

  case 7:
    //if (!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.106052.PythiaZtautau.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165059/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106052.PythiaZtautau.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC.110906104926/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.106052.PythiaZtautau.e574_s934_s946_r1660_r2040.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v2_3.111020104154/*roo*");
    //#include "weights/weights_Ztautau.h"
    if(runP=="sec"){
#include "weights_p2/weights_Ztautau_p2.h"    
    }
    else if(runP=="both"){
#include "weights/weights_Ztautau.h"    
    }
    outputroot = "Ztautau"; outputtxt = "Ztautau"; sample = "Ztautau"; MC=true; xsct=0.99*1*1*1000;
    break;
    
  case 8:
    //    if (!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.105204.TTbar_FullHad_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165123/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.105204.TTbar_FullHad_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC.110906104949/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.105204.TTbar_FullHad_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v2.111019125937/*roo*");
    //#include "weights/weights_ttbar_had.h"
    if(runP=="sec"){
#include "weights_p2/weights_ttbar_had_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_ttbar_had.h"
    }
    outputroot = "ttbarhad"; outputtxt = "ttbarhad"; sample = "ttbarhad"; MC=true; xsct=0.144*1*0.444*1000;
    break;

  case 9:
    //if (!test) chain->Add("/work/czyczula/TauD3PDs/MC_TINY/user.ZofiaCzyczula.mc107.105200.T1_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_TINY.110728165113/*roo*");
    //    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.105200.T1_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC.110906104938/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc107.105200.T1_McAtNlo_.e598_s933_s946_r1659_r1700.01-00-01-01.D3PD_StreamD3PD_TauMEDIUM_MC_BASIC_v2.111019125929/*roo*");
    //#include "weights/weights_ttbar_lep.h"
    if(runP=="sec"){
#include "weights_p2/weights_ttbar_lep_p2.h"
    }
    else if(runP=="both"){
#include "weights/weights_ttbar_lep.h"
    }
    outputroot = "ttbarlep"; outputtxt = "ttbarlep"; sample = "ttbarlep"; MC=true; xsct=0.144*1*0.556*1000;
    break;

  case 10:
    //need to add herr right weights
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.126221.HerwigppWtauhadnu_right.recon.AOD.e873_s933_s946_r2071_TauD3PDs.110914122834/*roo*");
    //#include "weightsv2/weights_Wtaunu_had_HerR_p2.h"
    if(runP=="sec"){
#include "weights_p2/weights_Wtaunu_had_HerR_p2.h"
    }
    else if(runP=="both"){
#include "weightsv2/weights_Wtaunu_had_HerR.h"
    }
    outputroot = "herwig_R"; outputtxt = "herwig_R"; sample = "herwig_R"; MC=true; xsct=10.46*1.0*0.415*1000;
    break;

  case 11:
    //need to add herL weights
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.126304.HerwigppWtauhadnu_left.merge.AOD.e891_s933_s946_r2071_r2040_TauD3PDs.110912102927/*roo*");
    chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.126304.HerwigppWtauhadnu_left.merge.AOD.e891_s933_s946_r2071_r2040_TauD3PDs.110912102927_r1/*roo*");
    //#include "weightsv2/weights_Wtaunu_had_Her_p2.h"
    if(runP=="sec"){
#include "weights_p2/weights_Wtaunu_had_Her_p2.h"
    }
    else if(runP=="both"){
#include "weightsv2/weights_Wtaunu_had_Her.h"
    }
    outputroot = "herwig_L"; outputtxt = "herwig_L"; sample = "herwig_L"; MC=true; xsct=10.46*1.0*0.34*1000;
    break;
  }
  
  if(prong){outputtxt += "_1p"; outputroot += "_1p";}
  outputtxt += runP; outputroot += runP;
  
  if(test){outputtxt += "_test"; outputroot += "_test";}
  if(tight){ outputtxt += "_tight"; outputroot += "_tight";}
  outputtxt += ".txt"; outputroot += ".root";
  TFile* out = new TFile(outputroot, "RECREATE");
 
  //----------------
  //Counters
  //----------------
  double nEvts=0; double nEvts_p1=0; double nEvts_p2=0; double nGRL=0;
  double nABEvts_p1=0; double nABEvts_p2=0; double nCDEvts_p1=0; double nCDEvts_p2=0;
    
  const int nCuts = 13;
  vector<double> WCut_p1(nCuts,0);   vector<double> WCut_p2(nCuts,0);   vector<double> WCut_all(nCuts,0);
  //debugging
  vector<double> CDCut_p1(nCuts,0); vector<double> CDCut_p2(nCuts,0); 
  
  
  string WCuts[nCuts] = {"Trigger", "CLSN Cleaning", "Jet Cleaning", "Gap Jet Veto",
			 "DPhi(Jet,MET)","MET>30GeV","Tau ID, PT>20","Tau Pt Cut","Gap Tau Veto",
			 "TauID Lep Veto","El Veto","Mu Veto", "MET Sig"};
  
  double weightAB=1.0; double weightCD=1.0; double weightTT=1.0; double weight = 1.0;
  bool passA, passB, passC, passD;
  
  double NaP1=0; double NbP1=0; double NcP1=0; double NdP1=0;
  double NaP2=0; double NbP2=0; double NcP2=0; double NdP2=0;
  
  double Na=0; double Nb=0; double Nc=0; double Nd=0;
  vector<int> aflag(13,1); vector<int> bflag(13,1); bflag[12] = 2;
  vector<int> plotflag(13,0);

  string period="";
  string region="";

  double nevts_beforeid=0;
  double nevts_afterid=0;

  //-----------------
  //Good Runs List
  //-----------------
  TGoodRunsListReader* grlR;
  Root::TGoodRunsList grl;
  grlR = new TGoodRunsListReader();
  
  string sname = "data10_7TeV.periodAllYear_DetStatus-v03-pro05_Tau_h.xml";
  
  //cout << "XML to load: " << sname.c_str() << endl;
  grlR->SetXMLFile(sname.c_str());
  grlR->Interpret();
  grl = grlR->GetMergedGoodRunsList();
  //grl.Summary(true);
  //cout << endl;

  //-----------------
  //Histograms
  //-----------------
  
  histo* gram = new histo();
  gram->Create();
    
  //---------------
  //Event Loop
  //---------------
  //EventTree* evt = EventTree::getObj();
  EventTree* evt = new EventTree();
  
  //initialize 
  evt->Init(chain);
  int nentries = evt->GetNentries(); 

  int nbytes = 0, nb = 0;
  ////////////////////
  //loop over events//
  ////////////////////
  for(int jentry=0; jentry < nentries; jentry++){
    int ientry = evt->LoadTree(jentry);
    if(ientry < 0) break;
    nb = evt->GetEntry(jentry);   nbytes += nb;
    
    //if(jentry%100000==0) cout<<"Event Number "<<jentry<<endl;

    
    if(test) if(jentry == 10000) break;
    //    cout<<"******"<<jentry<<"********"<<endl;
    
    nEvts++; //Count events

    if( INfile == 1 && evt->trueTau_n == 0) continue; //filters out lep decays
    if( INfile == 2 && evt->trueTau_n > 0) continue; //filters out had decays

  
    //--------------
    //SET PERIOD 
    //--------------
    period =""; 
    if(!MC){
      if(evt->RunNumber<166786) {period = "first";}//!
      else if(evt->RunNumber>=166786) {period = "second";}
    }
    else if(MC){
      if(runP=="both"){
	if(nEvts < 0.34*nentries) {period = "first";}
	else if(nEvts >= .34*nentries) {period = "second";}
      }
      else if(runP=="sec"){
	period = "second";
      }
    }
  


    //--------------
    //GRL
    //-------------
    if(!MC) {
      if (!grl.HasRunLumiBlock(evt->RunNumber, evt->lbn)) continue;
      nGRL++;
    }


    //------------
    //CUTFLOW
    //------------
    CutFlow* ana = CutFlow::getObj();

    //Get Number of well-reconstructed vertices
    int nv = ana->nVertex(evt);
    if(nv > 5) nv = 5;
    if(nv==0) {continue; }


    //-------------
    //Set Weights
    //-------------

    weightAB=1.0; weightCD=1.0; weightTT=1.0;
    if(period == "first"){ 
      weightAB = corr_First_AB[nv-1]; weightCD = corr_First_CD[nv-1];
      gram->GetTH1F("W1")->Fill(1.0,weightAB);      
      gram->GetTH1F("W3")->Fill(1.0,weightCD);      
    }//!turn on/off weights
    if(period == "second"){ 
      weightAB = corr_Second_AB[nv-1]; weightCD = corr_Second_CD[nv-1];//!turn on/off weightsless 
      
      gram->GetTH1F("W2")->Fill(1.0,weightAB);      
      gram->GetTH1F("W4")->Fill(1.0,weightCD);
    }      
    if( (INfile == 8 || INfile == 9) && (evt->mcevt_weight)->size() ) weightTT = (*evt->mcevt_weight)[0]; 
    weightAB *= weightTT; weightCD *= weightTT;
    
    //Count Weighted Events per Period
    if(period == "first") { nEvts_p1++; nABEvts_p1 += weightAB;nCDEvts_p1 += weightCD;}
    else if(period == "second") {nEvts_p2++; nABEvts_p2 += weightAB; nCDEvts_p2 += weightCD;}

    //    cout<<"nevts_P1:"<<nEvts_p1<<endl;
    //    cout<<"nevts_P2:"<<nEvts_p2<<endl;
    
    vector<int> EvtCuts = WCutFlow(evt, MC, ana, period);
    //vector<int> CDEvt = MonCD(evt, ana, MC, "C");
    passA = false; passB = false; passC = false; passD = false;


    //-------------
    //QCD ESTIMATE
    //-------------
    
    vector<int> passCD = PassCD(evt,ana,MC);
   
    
    if(period == "first"){
      if(EvtCuts == aflag) {passA = true; region="A"; if(!prong) NaP1+=weightAB;}
      if(EvtCuts == bflag) {passB=true; region="B";if(!prong) NbP1 += weightAB;}
      if(passCD[0]==1) {if(!prong) NcP1+=weightCD; region="C"; passC = true;}
      if(passCD[1]==1) {if(!prong)NdP1+=weightCD; region="D"; passD=true;}
    }
    else if(period == "second"){
      if(EvtCuts == aflag) {passA = true; region="A"; if(!prong) NaP2+=weightAB;}
      if(EvtCuts == bflag) {passB=true; region="B"; if(!prong) NbP2 += weightAB;}
      if(passCD[0]==1) {if (!prong)NcP2+=weightCD; region="C"; passC = true;}
      if(passCD[1]==1) {if (!prong)NdP2+=weightCD; region="D"; passD=true;}
    }
    
    //plot kinematics and tau id variables before tau id 
    TString hist_noID;
    if(EvtCuts[5]==1){
      
      if(plotid){
      for(int it=0; it < evt->tau_n; it++){
	
	//require calo seeded
	
	if((evt->tau_author)->at(it) != 1 && (evt->tau_author)->at(it) != 3) continue;
	if( (evt->tau_Et)->at(it) < 20000 ) continue;
	if((evt->tau_seedCalo_numTrack)->at(it) != 1) continue;
	if(MC && (evt->tau_trueTauAssoc_index)->at(it) == -1) continue;

	hist_noID = "Tau_Et_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill(((evt->tau_Et)->at(it))/1000.0);
	hist_noID = "Tau_EtNeu_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill(((evt->tau_Et)->at(it) - (evt->tau_leadTrkPt)->at(it))/1000.0);
	hist_noID = "Tau_Eta_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill(((evt->tau_eta)->at(it)));
	hist_noID = "Tau_LdTrkPt_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill(((evt->tau_leadTrkPt)->at(it))/1000.0);
	hist_noID = "Tau_Y_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill((2*(evt->tau_leadTrkPt)->at(it)/(evt->tau_Et)->at(it))-1);

	hist_noID = "EMRadius_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill((evt->tau_seedCalo_EMRadius)->at(it));
	hist_noID = "fTrack_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill((evt->tau_leadTrkPt)->at(it)/(evt->tau_pt)->at(it));
	hist_noID = "fCore_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill((evt->tau_seedCalo_centFrac)->at(it));
	hist_noID = "EMfrac_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill((evt->tau_jet_emfrac)->at(it));
	hist_noID = "topoInvMass_" + period  + "_notauID_1p";
	gram->GetTH1F(hist_noID)->Fill(((evt->tau_topoInvMass)->at(it))/1000.0);
      }

      }
    
      int itau;
      TString cutFlag;
      TString hist_name;
      
      if( region == "A" || region == "B" ) weight = weightAB;
      else if( region == "C" || region == "D" ) weight = weightCD;

      if(plotid){
      for(int id=0; id<2; id++){
	if(id==0) {itau = ana->ITau(evt, "tight"); cutFlag = "_BDTtight_1p";}
	else if(id==1) {itau = ana->ITau(evt, "loose"); cutFlag = "_BDTloose_1p";}
	if(itau == -1 ) continue;
	
	if(prong && (evt->tau_seedCalo_numTrack)->at(itau) != 1) continue; //!
	//if(MC && (evt->tau_trueTauAssoc_index)->at(itau) == -1) continue;
	
	hist_name = "Tau_Et_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0,weight);
	hist_name = "Tau_EtNeu_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau) - (evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	hist_name = "Tau_Eta_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill(((evt->tau_eta)->at(itau)), weight);
	hist_name = "Tau_LdTrkPt_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	hist_name = "Tau_Y_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill((2*(evt->tau_leadTrkPt)->at(itau)/(evt->tau_Et)->at(itau))-1, weight);
	
	hist_name = "EMRadius_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_EMRadius)->at(itau));
	hist_name = "fTrack_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill((evt->tau_leadTrkPt)->at(itau)/(evt->tau_pt)->at(itau));
	hist_name = "fCore_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_centFrac)->at(itau));
	hist_name = "EMfrac_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill((evt->tau_jet_emfrac)->at(itau));
	hist_name = "topoInvMass_" + period  + cutFlag;
	gram->GetTH1F(hist_name)->Fill(((evt->tau_topoInvMass)->at(itau))/1000.0);

	
	
      }
      }
      
      //plot kinematics & tracking in ABCD regions
      vector<bool> pass(4,false);
      pass[0] = passA; pass[1] = passB; pass[2] = passC; pass[3] = passD;
      for(int iPass=0; iPass<4; iPass++){
	if(pass[iPass]){
	  
	  if(iPass < 2) {itau = ana->ITau(evt, "tight");}
	  else if(iPass > 1) {itau = ana->ITau(evt, "loose");}
	  if( prong && (evt->tau_seedCalo_numTrack)->at(itau) != 1) continue;//!
	  if( prong &&(evt->tau_seedCalo_numTrack)->at(itau) ==1){
	    if(period == "first"){
	      if(iPass==0) NaP1+=weightAB; if(iPass==1) NbP1+=weightAB; if(iPass==2) NcP1+=weightCD; if(iPass==3) NdP1+=weightCD;
	    }
	    else if(period == "second"){
	      if(iPass==0) NaP2+=weightAB;if(iPass==1) NbP2+=weightAB;if(iPass==2) NcP2+=weightCD; if(iPass==3) NdP2+=weightCD;
	    } 
	  }

	  //plot kinematics 
	  hist_name = "Tau_Et_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0, weight);
	  hist_name = "Tau_EtNeu_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau) - (evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	  hist_name = "Tau_Eta_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_eta)->at(itau)), weight);
	  hist_name = "Tau_LdTrkPt_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	  hist_name = "Tau_Y_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((2*(evt->tau_leadTrkPt)->at(itau)/(evt->tau_Et)->at(itau))-1, weight);
	  hist_name = "MET_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( evt->MET_LocHadTopo_et/1000.0,weight);
	  hist_name = "METSig_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( ana->metSig(evt),weight );


	  //plot id variables with weights!
	  hist_name = "EMRadius_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_EMRadius)->at(itau), weight);
	  hist_name = "fTrack_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_leadTrkPt)->at(itau)/(evt->tau_pt)->at(itau), weight);
	  hist_name = "fCore_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_centFrac)->at(itau), weight);
	  hist_name = "EMfrac_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_jet_emfrac)->at(itau), weight);
	  hist_name = "topoInvMass_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_topoInvMass)->at(itau))/1000.0, weight);
	  hist_name = "trkAvgDist_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_trkAvgDist)->at(itau), weight);
	  
	  
	  //plot track kinematic & quality variables
	  int NTrk = 0; int trt=0;
	  hist_name = "Track_N_" + period + "_" + region;
	  NTrk = (evt->tau_seedCalo_track_n)->at(itau);
	  gram->GetTH1F(hist_name)->Fill(NTrk, weight);
	  
	  double ldpt = 0; double ldeta, ldphi;
	  int ltrk = -1;
	    
	  for(int itrk=0; itrk<NTrk; itrk++){
	    hist_name = "Track_Pt_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ( ((evt->tau_seedCalo_track_pt)->at(itau)).at(itrk) )/1000.0, weight);
	    hist_name = "Track_Eta_"+period+ "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_track_eta)->at(itau)).at(itrk), weight);
	    hist_name = "Track_Phi_"+period+ "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_track_phi)->at(itau)).at(itrk), weight);
	   
	    
	    hist_name = "BLHits_" + period +"_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_track_nBLHits)->at(itau)).at(itrk), weight);
	    hist_name = "PxlHits_" + period +"_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_track_nPixHits)->at(itau)).at(itrk), weight);
	    hist_name = "SCTHits_" + period+"_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_track_nSCTHits)->at(itau)).at(itrk), weight);
	    hist_name = "TRTHits_" + period +"_" + region;
	    trt = ((evt->tau_seedCalo_track_nTRTHits)->at(itau)).at(itrk) + ((evt->tau_seedCalo_track_nTRTOutliers)->at(itau)).at(itrk);
	    gram->GetTH1F(hist_name)->Fill(trt, weight);


	    hist_name = "Track_d0_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_track_d0)->at(itau)).at(itrk), weight);
	    hist_name = "Track_z0_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_track_z0)->at(itau)).at(itrk), weight);
	    hist_name = "Track_atPVd0_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_track_atPV_d0)->at(itau)).at(itrk), weight);
	    //	    hist_name = "Track_atPVz0_" + period + "_" + region;
	    //	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_track_atPV_z0)->at(itau)).at(itrk), weight);
	    
	    if( ((evt->tau_seedCalo_track_pt)->at(itau).at(itrk)) > ldpt ) {
	      ldpt = ((evt->tau_seedCalo_track_pt)->at(itau).at(itrk));
	      ldeta = ((evt->tau_seedCalo_track_eta)->at(itau).at(itrk));
	      ldphi = ((evt->tau_seedCalo_track_phi)->at(itau).at(itrk));
	    }
	  } 

	  hist_name = "TkClus_DeltaPhi_" + period + "_" + region;
	  double cphi = (evt->tau_jet_phi)->at(itau);
	  double ceta = (evt->tau_jet_eta)->at(itau);
	  gram->GetTH1F(hist_name)->Fill( ana->DeltaPhi( ldphi,cphi), weight);
	  
	  hist_name = "TkClus_DeltaEta_" + period + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( fabs( ldeta - ceta ), weight );
	
	  hist_name = "TkClus_DeltaR_" + period + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( ana->DeltaR( ldphi, cphi, ldeta, ceta) , weight);

	  //Wide Tracks
	  int NWTrk = 0;
	  //	  for(int nwt=0; nwt<(evt->tau_seedCalo_wideTrk_n)->size();nwt++){
	  hist_name = "WideTrack_N_" + period + "_" + region;
	  NWTrk = (evt->tau_seedCalo_wideTrk_n)->at(itau);
	  gram->GetTH1F(hist_name)->Fill(NWTrk);
	  for(int iwt=0; iwt<NWTrk; iwt++){
	    hist_name = "WideTrack_Pt_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ( ((evt->tau_seedCalo_wideTrk_pt)->at(itau)).at(iwt) )/1000.0, weight);
	    //hist_name = "WideTrack_Eta_"+ period + "_" + region;
	    //gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_wideTrk_eta)->at(itau))[iwt], weight);
	    hist_name = "WideTrack_Phi_"+period+ "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_seedCalo_wideTrk_phi)->at(itau)).at(iwt), weight);
	    
//	    hist_name = "WideTrack_d0_" + period + "_" + region;
//	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_wideTrk_d0)->at(itau)).at(iwt), weight);
//	    hist_name = "WideTrack_z0_" + period + "_" + region;
//	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_wideTrk_z0)->at(itau)).at(iwt), weight);
//	    hist_name = "WideTrack_atPVd0_" + period + "_" + region;
//	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_wideTrk_atPV_d0)->at(itau)).at(iwt), weight);
//	    hist_name = "WideTrack_atPVz0_" + period + "_" + region;
//	    gram->GetTH1F(hist_name)->Fill( ((evt->tau_seedCalo_wideTrk_atPV_z0)->at(itau)).at(iwt), weight);
	  }//end loop over wide tracks
	  
	  //Plot W Pt
	  TLorentzVector vTau;
	  double Wx, Wy, Wpt;
	  vTau.SetPtEtaPhiE( (evt->tau_pt)->at(itau), (evt->tau_eta)->at(itau),
			     (evt->tau_phi)->at(itau), (evt->tau_Et)->at(itau) );
	  Wx = vTau.Px()+(evt->MET_LocHadTopo_etx);
	  Wy = vTau.Py()+(evt->MET_LocHadTopo_ety);
	  Wpt = sqrt( Wx*Wx + Wy*Wy )/1000.0;
	  hist_name = "WPt_" + period + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( Wpt , weight);

	  //reweight Wpt
	  double wtwpt = weight; double ctwt = weight;
	  double bins[] = {0,5,10,15,20,30,40,60,80,120};
	  //double RW[] = {0.950113, 0.958111,1.06305,1.14626,0.987396,1.09896,0.815558,0.907549,1.00045};//med
	  
	  //double RW_p1[] = {1.10874,1.06643,0.947058,1.01264,0.882637,1.10591,1.13847,0.654484,0.887799};
	  //double RW_p2[] = {1.14752,0.992011,0.969482,1.0658,0.806914,1.18043,0.900916,1.01907,1.12445};	 
	  double RW_p1[] = {1.14513,1.08971,0.967423,1.00946,0.819616,1.00714,0.990131,0.716688,0.987886};
	  double RW_p2[] = {1.13415,1.01638,0.992597,1.05096,0.78804,1.05132,0.845031,1.05109,1.2112};


	  double ctRW[] = {0.957829,0.949683,1.10363,1.06368,0.976854,1.14816,0.769736,1.00434,0.9941};//med&central
	  //double RW[] = {0.953248,1.09467,0.940236,0.878635,1.1195};//tight
	  //double ctRW[] = {0.953438, 1.0885, 0.956908, 0.872847, 1.15515};//tight&central
	  //double RW[] = {0.955302,1.09449,1.02283,0.815558,0.960965};//test
	 
	  if(MC && passA && prong){
	    for(int ip=0; ip<9;ip++){
	      if(Wpt >= bins[ip] && Wpt < bins[ip+1]){ 
		if(period=="first"){
		  wtwpt *= RW_p1[ip]; ctwt *= ctRW[ip];
		}
		else if(period=="second"){
		  wtwpt *= RW_p2[ip]; ctwt *= ctRW[ip];
		}
		//  cout<<ip<<"  "<<bins[ip]<<" "<<bins[ip+1]<<" "<<RW[ip]<<endl;
	      }
	    }
	  }
	  //plot w pt reweighted kinematics
	  hist_name = "PtRW_WPt_" + period + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( Wpt , wtwpt);
	  
	  hist_name = "PtRW_Tau_Et_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0, wtwpt);
	  hist_name = "PtRW_Tau_Eta_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_eta)->at(itau)), wtwpt);
	  hist_name = "PtRW_Tau_LdTrkPt_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, wtwpt);
	  hist_name = "PtRW_Tau_Y_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((2*(evt->tau_leadTrkPt)->at(itau)/(evt->tau_Et)->at(itau))-1, wtwpt);
	  hist_name = "PtRW_MET_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( evt->MET_LocHadTopo_et/1000.0,wtwpt);
	  hist_name = "PtRW_METSig_" + period  + "_" + region;
	  gram->GetTH1F(hist_name)->Fill( ana->metSig(evt),wtwpt );	  
	  
	  //Plot leadtrk pt by emfrac
	  if( (evt->tau_jet_emfrac)->at(itau) < .9 ){
	      hist_name = "LdTrkPt_EMlo_" + period + "_" + region;
	      gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	  }
	  
	  else if( (evt->tau_jet_emfrac)->at(itau) >= .9 ){
	    hist_name = "LdTrkPt_EMhi_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	    //high em frack ld trk pt for hilo regions of et
	    if( (evt->tau_Et)->at(itau) <= 35000 ) hist_name = "LdTrkPt_ETlo_" + period + "_" + region;
	    else if( (evt->tau_Et)->at(itau) > 35000 )   hist_name = "LdTrkPt_EThi_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	  }
	  
	  if( (evt->tau_Et)->at(itau) <= 35000 ) hist_name = "EMfrac_EThi_" + period + "_" + region;
	  else if( (evt->tau_Et)->at(itau) > 3500 ) hist_name = "EMfrac_ETlo_" + period + "_" + region;
	  gram->GetTH1F(hist_name)->Fill((evt->tau_jet_emfrac)->at(itau), weight);
	  
	  if( fabs( (evt->tau_jet_emscale_eta)->at(itau) ) < 1.3 ) {
	    hist_name = "LdTrkPt_in_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	    
	    hist_name = "cent_Tau_Et_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0, weight);
	    hist_name = "cent_Tau_Eta_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_eta)->at(itau)), weight);
	    hist_name = "cent_Tau_LdTrkPt_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	    hist_name = "cent_Tau_Y_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((2*(evt->tau_leadTrkPt)->at(itau)/(evt->tau_Et)->at(itau))-1, weight);
	    
	    hist_name = "cent_MET_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( evt->MET_LocHadTopo_et/1000.0,weight);
	    hist_name = "cent_METSig_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ana->metSig(evt),weight );
	    
	    hist_name = "cent_WPt_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( Wpt , weight);
	    
	    hist_name = "PtRW_cent_WPt_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( Wpt , ctwt);
	    
	    hist_name = "PtRW_cent_Tau_Et_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0, ctwt);
	    hist_name = "PtRW_cent_Tau_Eta_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_eta)->at(itau)), ctwt);
	    hist_name = "PtRW_cent_Tau_LdTrkPt_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, ctwt);
	    hist_name = "PtRW_cent_Tau_Y_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((2*(evt->tau_leadTrkPt)->at(itau)/(evt->tau_Et)->at(itau))-1, ctwt);
	    hist_name = "PtRW_cent_MET_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( evt->MET_LocHadTopo_et/1000.0,ctwt);
	    hist_name = "PtRW_cent_METSig_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill( ana->metSig(evt),ctwt );
	  }
	  else if( fabs( (evt->tau_jet_emscale_eta)->at(itau) ) > 1.7 ){
	    hist_name = "LdTrkPt_out_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	    if( fabs( (evt->tau_jet_emscale_eta)->at(itau) ) > 2.0) hist_name = "Fwd_LdTrkPtHI_" + period + "_" + region;
	    else if( fabs( (evt->tau_jet_emscale_eta)->at(itau) ) <= 2.0) hist_name = "Fwd_LdTrkPtLO_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_leadTrkPt)->at(itau))/1000.0, weight);
	    
	    hist_name = "Fwd_Et_" + period + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(((evt->tau_Et)->at(itau))/1000.0, weight);
	    hist_name = "Fwd_EMRadius_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_EMRadius)->at(itau), weight);
	    hist_name = "Fwd_fTrack_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((evt->tau_leadTrkPt)->at(itau)/(evt->tau_pt)->at(itau), weight);
	    hist_name = "Fwd_fCore_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_centFrac)->at(itau), weight);
	    hist_name = "Fwd_EMfrac_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((evt->tau_jet_emfrac)->at(itau), weight);
	    hist_name = "Fwd_trkAvgDist_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill((evt->tau_seedCalo_trkAvgDist)->at(itau), weight);
	    hist_name = "Fwd_WPt_" + period  + "_" + region;
	    gram->GetTH1F(hist_name)->Fill(Wpt, weight);
	    
	    
	    
	    }
	  
	  

	  EMfracPT[iPass]->Fill( (evt->tau_jet_emfrac)->at(itau), (evt->tau_leadTrkPt)->at(itau)/1000.0, weight );
	  EMfracET[iPass]->Fill( (evt->tau_jet_emfrac)->at(itau), (evt->tau_leadTrkPt)->at(itau)/1000.0, weight );
	  
	  }
      }//end loop over pass region bools
	
      
      
    }//pass id cut
    
    
    for(int iCut=0; iCut<nCuts; iCut++) {
      if (EvtCuts[iCut]==1 && period == "first") WCut_p1[iCut]+=weightAB; 
      else if (EvtCuts[iCut]==1 && period == "second") {WCut_p2[iCut]+=weightAB;}
      //For monitoring CD Regions
      //if (CDEvt[iCut]==1 && period == "first") CDCut_p1[iCut] += weightCD;
      //else if (CDEvt[iCut]==1 && period == "second") CDCut_p2[iCut] += weightCD;
      //      cout<<iCut<<"   "<<CDCut_p1[iCut]<<endl;
      else break;
    }
    
    
  }//ends loop over events
  
  for(int em=0; em<4;em++) {EMfracPT[em]->Write(); EMfracET[em]->Write();}
  hTrack->Write();
  //deltaphi->Write();
  gram->Store(out);

  //Normalize to Cross Section
  if(MC){
    //Na = NaP1*xsct*10.703/nABEvts_p1 + NaP2*xsct*23.594/nABEvts_p2;
    //Nb = NbP1*xsct*10.703/nABEvts_p1 + NbP2*xsct*23.594/nABEvts_p2;
    //Nc = NcP1*xsct*10.703/nCDEvts_p1 + NcP2*xsct*5.6/nCDEvts_p2;
    //Nd = NdP1*xsct*10.703/nCDEvts_p1 + NdP2*xsct*5.6/nCDEvts_p2;

    Na = NaP2*xsct*23.594/nABEvts_p2;
    Nb = NbP2*xsct*23.594/nABEvts_p2;
    Nc = NcP2*xsct*5.6/nCDEvts_p2;
    Nd = NdP2*xsct*5.6/nCDEvts_p2;
  }
  else if(!MC){
    Na = NaP1 + NaP2;
    Nb = NbP1 + NbP2;
    Nc = NcP1 + NcP2;
    Nd = NdP1 + NdP2;

    for(int iC=0; iC<nCuts; iC++)WCut_all[iC] = WCut_p1[iC] + WCut_p2[iC];
  }
    
  ofstream outfile(outputtxt);


  outfile<<asctime(timeinfo)<<endl;
  outfile<<"\t ********SUMMARY*********"<<endl;
  outfile<<"Sample:\t"<<sample<<", XSection:\t"<<xsct<<endl;
  outfile<<"TOTAL NUMBER OF EVENTS:\t\t"<<nEvts<<endl;
  outfile<<"Period 1: "<<nEvts_p1<<"  Period 2: "<<nEvts_p2<<endl;
  outfile<<"Weighted AB Period 1: "<<nABEvts_p1<<endl;
  outfile<<"Weighted AB Period 2: "<<nABEvts_p2<<endl;
   outfile<<"Weighted CD Period 1: "<<nCDEvts_p1<<endl;
  outfile<<"Weighted CD Period 2: "<<nCDEvts_p2<<endl;
  outfile<<"AFTER GOODRUNSLIST:\t\t"<<nGRL<<endl;
  outfile<<"\t **Cutflow in Region C Period 1**"<<endl;
  //  PrintCutFlow(WCut_p1, WCuts, nCuts, outputtxt);
  double temp1;
  //for(int iCut=0; iCut<nCuts; iCut++){
  //  temp1 = WCut_p1[iCut]*xsct*10.703/nABEvts_p1;
  //  outfile<<WCuts[iCut]<<":\t\t\t"<<temp1<<endl;
  //}
  outfile<<""<<endl;
  //outfile<<"\t **Cutflow in Region C: Period 2**"<<endl;
  PrintCutFlow(WCut_p2, WCuts, nCuts, outputtxt);
  double temp2;
  //for(int iCut=0; iCut<nCuts; iCut++){
  //  temp2 = WCut_p2[iCut]*xsct*23.594/nABEvts_p2;
  //  outfile<<WCuts[iCut]<<":\t\t\t"<<temp2<<endl;
  //}
  outfile<<""<<endl;
  if(!MC){
  outfile<<"\t **Cutflow in Region A: P1+P2**"<<endl;
  //PrintCutFlow(WCut_all, WCuts, nCuts,outputtxt);

  for(int iCut=0; iCut<nCuts; iCut++){
    outfile<<WCuts[iCut]<<":\t\t\t"<<WCut_all[iCut]<<endl;
  }
  outfile<<""<<endl;
  }
  outfile<<"\t**QCD ESTIMATE**\t"<<endl;
  outfile<<"Na:\t"<<Na<<endl;
  outfile<<"Nb:\t"<<Nb<<endl;
  outfile<<"Nc:\t"<<Nc<<endl;
  outfile<<"Nd:\t"<<Nd<<endl;

  return;

}


vector<int> WCutFlow(EventTree* evt, bool MC, CutFlow* ana, string period){
  
  vector<int> cuts(13,0);
  //Trigger
  if(period=="first") {if(ana->passTrigger(evt, "loose")) cuts[0] = 1;}
  else if(period=="second"){
    if(ana->passTrigger(evt,"medium")) cuts[0]=1;
  }
  //Collision Cleaning
  if(!ana->cleanCollision(evt)) return cuts;
  cuts[1]=1;
  //Jet Cleaning
  vector<bool> jetflag = ana->JetFlags(evt, MC);
  if(!jetflag[0]) return cuts;
  cuts[2]=1;     
  //Gap Jet
  if(!jetflag[1]) return cuts;
  cuts[3]=1;     
  //Delta Phi (MET, jet)
  if(!jetflag[2]) return cuts;
  cuts[4]=1;     
  //MET cut
  if(evt->MET_LocHadTopo_et < 30000) return cuts;
  cuts[5]=1;
  
  //HERE - STOP BREAKING      
  //Tau ID
  int ltau = ana->ITau(evt, "tight");
  vector<int> tauflag = ana->TauFlags(evt, ltau);
  //vector<int> tauflag = ana->TauFlags(evt, "tight");

  if(!(tauflag[0]==1)) return cuts;
  cuts[6] = 1;

  //Tau PT cut
  if(!tauflag[1]==1) return cuts;
  cuts[7] = 1;

  //Gap Tau Veto
  if(!tauflag[2]==1) return cuts;
  cuts[8] = 1;

  //Tau Lep Veto
  if(!tauflag[3]==1) return cuts;
  cuts[9]=1;
  
  //El veto
  if(!ana->eVeto(evt)) cuts[10] = 0;
  else cuts[10]=1;     
  //Mu Veto
  if(!ana->mVeto(evt)) cuts[11] = 0;
  else cuts[11]=1; 
    
  //MET Sig Cut
  if(ana->metSig(evt) >= 6 ) cuts[12] = 1;
  else if(ana->metSig(evt) <= 4.5) cuts[12] = 2;
  else cuts[12] = 0;

  //1Prong
  //  if(evt

  return cuts;
  
}

vector<int> MonCD(EventTree* evt, CutFlow* ana, bool MC, string region){
  vector<int> CutFlow(13,0);
  vector<bool> jet_flag = ana->JetFlags(evt,MC);
  

  if(!ana->passTrigger(evt,"loose")) return CutFlow;
  CutFlow[0]=1;
  if(!(ana->cleanCollision(evt)))  return CutFlow;
  CutFlow[1]=1;
  if(!jet_flag[0]) return CutFlow;
  CutFlow[2]=1;
  if(!jet_flag[1]) return CutFlow;
  CutFlow[3]=1;
  if(!jet_flag[2]) return CutFlow;
  CutFlow[4]=1;
  if(evt->MET_LocHadTopo_et < 30000 ) return CutFlow;
  CutFlow[5]=1;
  int l_tau = ana->ITau(evt,"loose");
  vector<int> tau_flag = ana->TauFlags(evt, l_tau);
  if(!tau_flag[0]) return CutFlow;
  CutFlow[6]=1;
  if(!tau_flag[1]) return CutFlow;
  CutFlow[7]=1;
  if(!tau_flag[2]) return CutFlow;
  CutFlow[8]=1;
  if(!tau_flag[3]) return CutFlow;
  CutFlow[9]=1;
  if(!ana->eVeto(evt)) return CutFlow;
  CutFlow[10]=1;
  if(!ana->mVeto(evt)) return CutFlow;
  CutFlow[11]=1;
  if(region == "C" && (ana->metSig(evt) >= 6)) CutFlow[12]=1;
  else if(region == "D" && (ana->metSig(evt)) <= 4.5) CutFlow[12]=1;
  
  return CutFlow;
}
vector<int> PassCD(EventTree* evt, CutFlow* ana, bool MC){

  vector<int> CD(2,0);
  vector<bool> goodJet(3,true);
  vector<int> goodTau(4,1);
  
  //Region C+D 
  
  if(!ana->passTrigger(evt,"loose")) return CD;
  if(!ana->cleanCollision(evt)) return CD;
  if(ana->JetFlags(evt, MC) != goodJet) return CD;
  if( evt->MET_LocHadTopo_et < 30000 )  return CD;

  int ltau = ana->ITau(evt, "loose");//loose

  if(ana->TauFlags(evt, ltau) != goodTau) return CD;
  if(!(ana->eVeto(evt)) || !(ana->mVeto(evt)) ) return CD;
  if(ana->metSig(evt) >= 6) {CD[0] = 1;}
  else if(ana->metSig(evt) <= 4.5) {CD[1] = 1;}

  return CD;
}

  
void PrintCutFlow(vector<double> CutFlow, string Names[], int nCuts, TString outputtxt){
  
  cout.precision(10);

  for(int iCut=0; iCut<nCuts; iCut++){
    cout<<Names[iCut]<<":\t\t\t"<<CutFlow[iCut]<<endl;
  }
  
  
  return;
}

