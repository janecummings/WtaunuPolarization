#include <iostream>
#include "TString.h"
#include "TRandom.h"

using namespace std;


void PlotTrk(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int rb, float xmin, float xmax);
TH1F* getData(TString hist, TString reg);
TH1F* getSignal(TString hist, TString reg);
TH1F* getEW(TString hist, TString reg);
float getQCDNorm(TString hist);
void HistScale(TH1F* hist, float lumi, float NE, float xsct);
void PlotBins(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int nbins, double bins[]);
void Plot2D(char* cname, TString name, TString hist, TString xtitle, TString ytitle);

bool prong = true;

void trkplot(){

  gROOT->LoadMacro("AtlasStyle.C");
  SetAtlasStyle();
  gStyle->SetOptStat(11111111);
  gStyle->SetOptTitle(0);
  gStyle->SetPalette(1);

  bool normz = false;
  //bool normz = true;

  PlotTrk("Et","Et","Tau_Et","Tau Et [GeV]","NEvts",2,0,70, normz);
  PlotTrk("Tau_LdTrkPt","Tau_LdTrkPt","Tau_LdTrkPt","Lead Track Pt", "Nevts",2,0,80,normz);
  //PlotTrk("EMfrac","EMfrac","EMfrac","EM Fraction", "Nevts",2,0,1.0,normz);
  //PlotTrk("LdTrkPt_EMhi", "LdTrkPt_EMhi","LdTrkPt_EMhi", "Lead Track Pt, EMfrac>=.9","Nevts",4,0,100, normz); 
  //PlotTrk("LdTrkPt_EMlo", "LdTrkPt_EMlo","LdTrkPt_EMlo", "Lead Track Pt, EMfrac<=.9","Nevts",4,0,100, normz); 
  
  //PlotTrk("FwdEt","FwdEt","Fwd_Et","Tau Et [GeV], Eta>1.7","NEvts",2,0,70, normz);
  //PlotTrk("FwdLdTrkHI","FwdLdTrkHi","Fwd_LdTrkPtHI","Lead Track Pt [GeV], Eta>2.0","NEvts",4,0,80, normz);
  //PlotTrk("FwdLdTrkLo","FwdLdTrkLo","Fwd_LdTrkPtLO","Lead Track Pt [GeV], 1.7 <Eta<2.0","NEvts",4,0,80, normz);
  //PlotTrk("FwdEMRad","FwdEMRad","Fwd_EMRadius","EM Radius, Eta>1.7","NEvts",1,0,.2, normz);
  //PlotTrk("FwdfCore","FwdfCore","Fwd_fCore","Centrality Fraction, Eta>1.7","NEvts",1,0,1.0, normz);
  //PlotTrk("FwdEMfrac","FwdEMfrac","Fwd_EMfrac","EM Fraction, Eta > 1.7", "Nevts",4,0,1.0,normz);  
  //PlotTrk("FwdfTrack","FwdfTrack","Fwd_fTrack","Lead Track Pt Fraction, Eta > 1.7", "Nevts",2,0,1.0,normz);  
  //PlotTrk("FwdRtrack","FwdRtrack","Fwd_trkAvgDist","R_{track}, Eta>1.7","NEvts",1,0,.2, normz); 

  int nbins = 5;
  //double wbins[] = {0,5,10,15,20,30,40,60,80,100,120};
  double wbins[] = {0,10,20,40,60,200};
  //PlotBins("PtRW_WPt_bin","PtRW_WPt_bin","PtRW_WPt","W Pt, Reweighted","Nevts",nbins,wbins); 
  //PlotBins("WPt_bin","WPt_bin","WPt","W Pt","Nevts",nbins,wbins); 

  //cout<<"Central Region"<<endl;
  //PlotBins("centWPt_bin","centWPt_bin","cent_WPt","W Pt, eta<1.3","Nevts",nbins,wbins);   


  //pt reweighted kinematics 
  //PlotTrk("RW_Et","RW_Et","PtRW_Tau_Et","Tau Et [GeV], WPT Reweighted","NEvts",2,0,70, normz);
  //PlotTrk("PtRW_Tau_LdTrkPt","PtRW_Tau_LdTrkPt","PtRW_Tau_LdTrkPt","Lead Track Pt, WPT Reweighted", "Nevts",2,0,80,normz);
  //PlotTrk("RW_Eta","RW_Eta","PtRW_Tau_Eta","Tau Eta, WPT Reweighted","NEvts",5,-2.7,2.7, normz);
  //PlotTrk("RW_Y","RW_Y","PtRW_Tau_Y","Y, WPT Reweighted","NEvts",5,-1,2, normz);
  //PlotTrk("RW_MET","RW_MET","PtRW_MET","MET [GeV], WPT Reweighted","NEvts",4,0,100, normz);
  //PlotTrk("RW_METSig","RW_METSig","PtRW_METSig","MET Signficance, WPT Reweighted","NEvts",4,0,20, normz);
  //
  //PlotTrk("Et","Et","Tau_Et","Tau Et [GeV]","NEvts",2,0,70, normz);
  //PlotTrk("Tau_LdTrkPt","Tau_LdTrkPt","Tau_LdTrkPt","Lead Track Pt", "Nevts",2,0,80,normz);
  //PlotTrk("Eta","Eta","Tau_Eta","Tau Eta","NEvts",5,-2.7,2.7, normz);
  //PlotTrk("Y","Y","Tau_Y","Y","NEvts",5,-1,2, normz);
  //PlotTrk("MET","MET","MET","MET [GeV]","NEvts",4,0,100, normz);
  //PlotTrk("METSig","METSig","METSig","MET Signficance","NEvts",4,0,20, normz);

  
  
  //PlotTrk("TkClus_DeltaPhi", "TkClus_DeltaPhi","TkClus_DeltaPhi", "#DeltaPhi (Lead Track, Jet)","Nevts",2,0,.25, normz);
  //PlotTrk("TkClus_DeltaEta", "TkClus_DeltaEta","TkClus_DeltaEta", "#DeltaEta (Lead Track, Jet)","Nevts",2,0,.25, normz);
  //PlotTrk("TkClus_DeltaR", "TkClus_DeltaR","TkClus_DeltaR", "#DeltaR (Lead Track, Jet)","Nevts",2,0,0.25, normz); 

  //Plot2D("EMFracPT","EMFracPT","EMFracPT","EM Fraction","Lead Track Pt");
  //Plot2D("EMFracET","EMFracET","EMFracET","EM Fraction","Tau Et");

  //PlotTrk("EMfrac_EThi","EMfrac_EThi","EMfrac_EThi","EM Fraction for Tau Et > 35 GeV", "Nevts",4,0,1.0,normz);
  //PlotTrk("EMfrac_ETlo","EMfrac_ETlo","EMfrac_ETlo","EM Fraction for Tau Et < 35 GeV", "Nevts",4,0,1.0,normz);

  //PlotTrk("LdTrkPt_EThi", "LdTrkPt_EThi","LdTrkPt_EThi", "Lead Track Pt w. EMfrac>=.9 for Tau ET > 35 GeV","Nevts",4,0,100, normz); 
  //PlotTrk("LdTrkPt_ETlo", "LdTrkPt_ETlo","LdTrkPt_ETlo", "Lead Track Pt w. EMfrac>=.9 for Tau ET < 35 GeV","Nevts",4,0,100, normz); 

  //PlotTrk("LdTrkPt_in", "LdTrkPt_in","LdTrkPt_in", "Lead Track Pt, Eta < 1.3","Nevts",4,0,80, normz); 
  //PlotTrk("LdTrkPt_out", "LdTrkPt_out","LdTrkPt_out", "Lead Track Pt, Eta > 1.7","Nevts",4,0,80, normz);   

  //PlotTrk("TrackPT", "TrackPT","Track_Pt", "Track Pt","Nevts",2,0,80, normz);
  //PlotTrk("TrackEta", "TrackEta","Track_Eta", "Eta_{Track}","Nevts",10,-99,99, normz);
  //PlotTrk("TrackPhi", "TrackPhi","Track_Phi", "Phi_{Track}","Nevts",10,-99,99, normz);
  //PlotTrk("NWdTrack", "NWdTrack","WideTrack_N", "Number of Wide Tracks","Nevts",1,0,10, normz);
  //PlotTrk("WdTrackPT", "WdTrackPT","WideTrack_Pt", "Wide Track Pt","Nevts",1,0,20, normz);
  //PlotTrk("WdTrackEta", "WdTrackEta","WideTrack_Eta", "Eta_{Track}","Nevts",1,-99,99, normz);
  //PlotTrk("WdTrackPhi", "WdTrackPhi","WideTrack_Phi", "Wide Track Phi","Nevts",10,-99,99, normz);
  //PlotTrk("dZero", "dZero","Track_d0", "d0","Nevts",2,-99,99, normz);
  //PlotTrk("zZero", "zZero","Track_z0", "z0","Nevts",5,-99,99, normz);
  //PlotTrk("EMfrac","EMfrac","EMfrac","EM Fraction", "Nevts",2,0,1.0,normz);

  return;

}

void Plot2D(char* cname, TString name, TString hist, TString xtitle, TString ytitle){

  TCanvas * c1 = new TCanvas(cname, cname, 600,400);
  c1->SetFillColor(0);

  TString filename = "../Wtauhadnu";
  if(prong) filename += "_1p";
  TFile * f = TFile::Open(filename + "_tight.root");

  signal = (TH2F*)gDirectory->Get(hist+"_A");  

  signal->Draw("cont0");
  signal->GetXaxis()->SetTitle(xtitle);
  signal->GetYaxis()->SetTitle(ytitle);

  TLegend* leg = new TLegend(0.75,0.8,.9,.9);
  leg->SetFillColor(0);
  if(prong) leg->SetHeader("*single prong taus*, *BDT Tight ID*");
  else leg->SetHeader("*BDT Tight ID*");
  leg->AddEntry((TObject*)0,"W#rightarrow #tau#nu MC",""); 
  leg->Draw();

  TString npro = "";
  if(prong) npro = "_1P";
  c1->Print(name + npro + ".gif"); 
}

void PlotBins(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int nbins, double bins[]){

 
  TCanvas * c1 = new TCanvas(cname, cname, 600,400);
  c1->SetFillColor(0);

  TH1F* signalA = getSignal(hist, "A");
  TH1F* data = getData(hist, "A");
  TH1F* EWA = getEW(hist, "A");

  TH1F* QCDA = getData(hist, "C"); //take shape from data in region c
  
 
 float norm = data->Integral() - getQCDNorm(hist); //normalization for qcd in region a
  float scale = norm/( QCDA->Integral() );
  QCDA->Scale(scale); //normalized
  
  cout<<QCDA->Integral()<<endl;

  TH1F* MC = (TH1F*)signalA->Clone("MC"); MC->Add(EWA); MC->Add(QCDA);

  ytitle += "-Normalized";
  float sData = 1/data->Integral();
  float sMC = 1/(MC->Integral());
  data->Scale(sData);
  MC->Scale(sMC);
  
  TH1F* MC_rebin = MC->Rebin(nbins,"MC_rebin",bins); 
  TH1F* data_rebin = data->Rebin(nbins,"data_rebin",bins); 

  //set line and fill colors
  MC_rebin->SetLineColor(8); MC_rebin->SetFillColor(8);

  data_rebin->Draw("e");
  data_rebin->GetXaxis()->SetTitle(xtitle);
  data_rebin->GetYaxis()->SetTitle(ytitle);

  data_rebin->SetMinimum(0);
  
  MC_rebin->Draw("hist, same");
  data_rebin->Draw("same,e");


  TH1F* divid = new TH1F("div","div",200,0,200); divid->Rebin(nbins, "divid_rebin",bins);
  divid_rebin->Divide(data_rebin, MC_rebin,1.0,1.0,"B");
  cout<<"{"<<endl;
  for(int bin = 1; bin<6; bin++){
    cout<<divid_rebin->GetBinContent(bin)<<", "<<endl;
  }
  cout<<"}"<<endl;

  TLegend* leg = new TLegend(0.6,0.7,.9,.9);
  leg->SetFillColor(0);
  if(prong) leg->SetHeader("*single prong taus*, *BDT Tight*");
  leg->AddEntry(data_rebin, "2010 Data", "p");
  leg->AddEntry(MC_rebin,"MC","f");
  leg->Draw();

  TString npro = "";
  if(prong) npro = "_1P";
  c1->Print(name + npro + ".gif");

  return;

}


void TrkQ(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int rb, float xmin, float xmax, bool normz){

    TCanvas * c1 = new TCanvas(cname,cname,600,400);
    c1->SetFillColor(0);
 
    TH1F* hits = getData(hist, "na");
    
    hits->Rebin(rb);
    if(xmax !=99) hits->SetAxisRange(xmin,xmax);
    
    hits->Draw("e0");
    hits->GetXaxis()->SetTitle(xtitle);
    hits->GetYaxis()->SetTitle(ytitle);

    TLegend * leg = new TLegend(0.6,0.8,0.9,0.9);
    leg->SetFillColor(0);
    leg->AddEntry(hits,"Data, After Full Cutflow");
    leg->Draw();

    c1->Print("trkQ_" + name + ".gif");

    return;
}

void PlotTrk(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int rb, float xmin, float xmax, bool normz){

  TCanvas * c1 = new TCanvas(cname, cname, 600,400);
  c1->SetFillColor(0);

  TH1F* signalA = getSignal(hist, "A");
  TH1F* data = getData(hist, "A");
  TH1F* EWA = getEW(hist, "A");

  TH1F* QCDA = getData(hist, "C"); //take shape from data in region c

  
  float norm = data->Integral() - getQCDNorm(hist); //normalization for qcd in region a
  float scale = norm/( QCDA->Integral() );
  QCDA->Scale(scale); //normalized

  signalA->Rebin(rb); data->Rebin(rb); EWA->Rebin(rb); QCDA->Rebin(rb);
  //set line and fill colors
  signalA->SetLineColor(8); signalA->SetFillColor(8);
  EWA->SetLineColor(2); EWA->SetFillColor(2);
  QCDA->SetLineColor(9); QCDA->SetFillColor(9);
  
  //cout<<signalA->GetBinContent(12)<<endl;
  //cout<<signalA->GetBinContent(16)<<endl;
  //cout<<signalA->GetBinContent(20)<<endl;
  cout<<"Data: "<<data->Integral()<<endl;
  cout<<"Signal: "<<signalA->Integral()<<endl;
  cout<<"EW: "<<EWA->Integral()<<endl;
  cout<<"QCD: "<<QCDA->Integral()<<endl;
  if(normz){
    ytitle += "-Normalized";
    float sData = 1/data->Integral();
    float sMC = 1/(signalA->Integral() + EWA->Integral() + QCDA->Integral());
    data->Scale(sData);
    EWA->Scale(sMC);
    signalA->Scale(sMC);
    QCDA->Scale(sMC);
  }
  data->Draw("e");
  data->GetXaxis()->SetTitle(xtitle);
  data->GetYaxis()->SetTitle(ytitle);

  if(xmax != 99){
    data->SetAxisRange(xmin,xmax);
  }
  data->SetMinimum(0);
  THStack * hs = new THStack("hs","test");
  hs->Add(EWA);
  hs->Add(QCDA);
  hs->Add(signalA);
  hs->Draw("hist, same");
  data->Draw("same,e");

  TLegend* leg = new TLegend(0.6,0.7,.9,.9);
  leg->SetFillColor(0);
  if(prong) leg->SetHeader("*single prong taus*, *BDT Tight ID*");
  else  leg->SetHeader("*BDT Tight ID*");
  leg->AddEntry(data, "2010 Data", "p");
  leg->AddEntry(signalA,"W#rightarrow #tau#nu MC","f");
  leg->AddEntry(EWA,"EW MC", "f");
  leg->AddEntry(QCDA, "QCD (ABCD)","f");
  leg->Draw();

  TString ntit = ""; 
  TString npro = "";
  if(normz) ntit = "_norm";
  if(prong) npro = "_1P";
  c1->Print(name + npro + ntit + ".gif");

  return;
}

TH1F* getData(TString hist, TString reg){

  TString filename = "../allData";
  if(prong) filename += "_1p";
  TFile * file = TFile::Open(filename + "_tight.root");
  TH1F* h1; TH1F* h2;
  h1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
  h2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);

  h1->Add(h2);
  delete h2;

  return h1;

}

TH1F* getSignal(TString hist, TString reg){

  float lumi1 = 10.703; float lumi2;

  TString filename = "../Wtauhadnu";
  if(prong) filename += "_1p";
  TFile * f = TFile::Open(filename + "_tight.root");
  TH1F* hW1; TH1F* hW2;

  if( reg == "A" || reg == "B" ){
    lumi2 = 23.594;
    hW1=(TH1F*)gDirectory->Get("W1");
    hW2=(TH1F*)gDirectory->Get("W2");
  }
  else if( reg == "C" || reg == "D" ){
    lumi2 = 5.6;
    hW1 = (TH1F*)gDirectory->Get("W3");
    hW2 = (TH1F*)gDirectory->Get("W4");
  }

  float xsct = 10.46*1*0.6479*1000;
  TH1F* h1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
  TH1F* h2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);
  
  HistScale(h1,lumi1, hW1->Integral(), xsct);
  HistScale(h2,lumi2, hW2->Integral(), xsct);
  
  float all = h2->GetEntries() + h1->GetEntries();
  h1->Add(h2);
  h1->SetEntries(all);
  
  delete hW1; delete hW2; delete h2;

  return h1;
  
}

TH1F* getEW(TString hist, TString reg){

  const int NBINS = 8;
  float lumi1 = 10.703; float lumi2;
  TString hW1, hW2;
  TH1F* HW1; TH1F* HW2; TH1F* ew1; TH1F* ew2;

  if( reg == "A" || reg == "B" ){
    lumi2 = 23.594;
    hW1 = "W1"; hW2 = "W2";
  }
  else if( reg == "C" || reg == "D" ){
    lumi2 = 5.6;
    hW1 = "W3"; hW2 = "W4";
  }

  float xsct[NBINS] = {10.46*1*(1-0.6479)*1000, 10.46*1*1*1000, 10.46*1*1*1000, 0.99*1*1*1000, 0.99*1*1*1000, 0.99*1*1*1000, 0.144*1*0.556*1000, 0.144*1*0.444*1000 };

  TString Sample[NBINS] = {"../Wtaulepnu","../Wenu","../Wmunu","../Zee","../Zmumu","../Ztautau","../ttbarlep", "../ttbarhad" };
  for(int is=0;is<NBINS;is++) {
    if(prong) Sample[is]+= "_1p";
    Sample[is] += "_tight.root";
  }

  TFile * f = TFile::Open(Sample[0]);
  ew1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
  HW1 = (TH1F*)gDirectory->Get(hW1);
  HistScale(ew1,lumi1,HW1->Integral(),xsct[0]);

  ew2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);
  HW2 = (TH1F*)gDirectory->Get(hW2);
  HistScale(ew2,lumi2,HW2->Integral(),xsct[0]);

  TH1F* temp1; TH1F* temp2;
  for(int isam = 1; isam<NBINS; isam++){
    f = TFile::Open(Sample[isam]);
    HW1 = (TH1F*)gDirectory->Get(hW1);
    temp1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
    HistScale(temp1,lumi1,HW1->Integral(),xsct[isam]);
    ew1->Add(temp1);
    
    HW2 = (TH1F*)gDirectory->Get(hW2);
    temp2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);
    HistScale(temp2,lumi2,HW2->Integral(),xsct[isam]);
    ew2->Add(temp2);

  }
  delete temp1; delete temp2;
  
  ew1->Add(ew2);
  delete ew2;
  
  return ew1;

}  

void HistScale(TH1F* hist, float lumi, float NE, float xsct){

  float scale = xsct*lumi/NE;
  float ne = hist->Integral();
  hist->Scale(scale);
  hist->SetEntries(ne*scale);

  return;
}


float getQCDNorm(TString hist){

  TH1F* signalA = getSignal(hist, "A");
  TH1F* signalB = getSignal(hist, "B");
  TH1F* signalC = getSignal(hist, "C");
  TH1F* signalD = getSignal(hist, "D");
  
  TH1F* ewA = getEW(hist, "A");
  TH1F* ewB = getEW(hist, "B");
  TH1F* ewC = getEW(hist, "C");
  TH1F* ewD = getEW(hist, "D");

  TH1F* dataA = getData(hist, "A");
  TH1F* dataB = getData(hist, "B");
  TH1F* dataC = getData(hist, "C");
  TH1F* dataD = getData(hist, "D");

    
  //  cout<<"\t Sample \t A \t B \t C \t D"<<endl;
  //  cout<<"\t Data \t"<<dataA->Integral()<<"\t"<<dataB->Integral()<<"\t"<<dataC->Integral()<<"\t"<<dataD->Integral()<<endl;
  //  cout<<"\t Signal \t"<<signalA->Integral()<<"\t"<<signalB->Integral()<<"\t"<<signalC->Integral()<<"\t"<<signalD->Integral()<<endl;
  //  cout<<"\t EW \t"<<ewA->Integral()<<"\t"<<ewB->Integral()<<"\t"<<ewC->Integral()<<"\t"<<ewD->Integral()<<endl;

  float cDen = (signalA->Integral()+ewA->Integral());
  float cA = (signalA->Integral()+ewA->Integral())/ cDen;
  float cB = (signalB->Integral()+ewB->Integral())/ cDen;
  float cC = (signalC->Integral()+ewC->Integral())/ cDen;
  float cD = (signalD->Integral()+ewD->Integral())/ cDen;

  
  //  cout<<"\t \t cA \t cB \t cC \t cD"<<endl;
  //  cout<<"\t"<<c A<<" \t"<<cB<<" \t"<<cC<<" \t"<<cD<<endl;

  float b = cC*dataB->Integral() + cB*dataC->Integral() - cD*dataA->Integral()-cA*dataD->Integral();
  float c = dataA->Integral()*dataD->Integral() - dataC->Integral()*dataB->Integral();
  float a = cA*cD - cB*cC;
  float delta = b*b-4*a*c;
  float x1=(-b+sqrt(delta))/(2*a);
  float x2=(-b-sqrt(delta))/(2*a);
  float norm = -1;
  
  if(x1>=0 && x1<dataA->Integral()) norm = x1;
  if(x2>=0 && x2 < dataA->Integral()) norm = x2;

  return norm;

}
