#include <iostream>
#include "TString.h"
#include "TRandom.h"

using namespace std;


void PlotPer(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int rb, float xmin, float xmax, TString period);
TH1F* getData(TString hist, TString reg, TString period);
TH1F* getSignal(TString hist, TString reg, TString period);
TH1F* getEW(TString hist, TString reg, TString period);
float getQCDNorm(TString hist);
void HistScale(TH1F* hist, float lumi, float NE, float xsct);
void PlotBins(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int nbins, double bins[]);

bool prong = true;

void plotPer(){

  gROOT->LoadMacro("AtlasStyle.C");
  SetAtlasStyle();
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  gStyle->SetPalette(1);

  bool normz = false;
  
  //  PlotPer("DeltaR_first","DeltaR","TkClus_DeltaR","#Delta R(Lead Track, #tau jet)","NEvts",4,0,0.25, normz, "first");
  //  PlotPer("DeltaR_second","DeltaR","TkClus_DeltaR","#Delta R(Lead Track, #tau jet)","NEvts",4,0,0.25, normz, "second");
  //  PlotPer("DeltaEta_second","Et","Tau_Et","E_{T} [GeV]","NEvts",4,0,70, normz, "second");


  //PlotPer("FwdPt_p1","FwdPt","LdTrkPt_out","p_{T}^{Ltrk} [GeV] (#eta > 1.7)","NEvts",4,0,80,normz,"first");
  //PlotPer("FwdPt_p2","FwdPt","LdTrkPt_out","p_{T}^{Ltrk} [GeV] (#eta > 1.7)","NEvts",4,0,80,normz,"second");
  //PlotPer("centPt_p1","centPt","LdTrkPt_in","p_{T}^{Ltrk} [GeV] (#eta < 1.7)","NEvts",4,0,80,normz,"first");
  //PlotPer("centPt_p2","centPt","LdTrkPt_in","p_{T}^{Ltrk} [GeV] (#eta < 1.7)","NEvts",4,0,80,normz,"second");
  
  //PlotPer("Et_tight_first","Et","Tau_Et","E_{T} [GeV]","NEvts",4,0,70, normz, "first");
  //PlotPer("Et_tight_second","Et","Tau_Et","E_{T} [GeV]","NEvts",4,0,70, normz, "second");
  
  //PlotPer("Et_both","Et","Tau_Et","Tau Et [GeV]","NEvts",2,0,70, normz, "both");
  //PlotPer("Y_first","Y","Tau_Y","#varUpsilon","NEvts",20,-1.5,3, normz, "first");
  //PlotPer("Y_second","Y","Tau_Y","#varUpsilon","NEvts",20,-1.5,3, normz, "second");
  
  PlotPer("Tau_LdTrkPt_tight_first","Tau_LdTrkPt","Tau_LdTrkPt","p_{T}^{trk} [GeV]", "Nevts",4,0,80,normz, "first");
  PlotPer("Tau_LdTrkPt_tight_second","Tau_LdTrkPt","Tau_LdTrkPt","p_{T}^{trk} [GeV]", "Nevts",4,0,80,normz, "second");
  //PlotPer("Tau_LdTrkPt_both","Tau_LdTrkPt","Tau_LdTrkPt","Lead Track Pt", "Nevts",2,0,80,normz, "both");
  //PlotPer("EMfrac_first","EMfrac","EMfrac","f_{EM}", "Nevts",4,0,1.0,normz,"first");
  //PlotPer("EMfrac_second","EMfrac","EMfrac","f_{EM}", "Nevts",4,0,1.0,normz,"second");
  //PlotPer("EMfracHI_first","EMfracHI","LdTrkPt_EMhi","p_{T}^{Ltrk} [GeV] (f_{EM}>0.9)", "Nevts",4,0,80,normz,"first");
  //PlotPer("EMfracHI_second","EMfracHI","LdTrkPt_EMhi","p_{T}^{Ltrk} [GeV] (f_{EM}>0.9)", "Nevts",4,0,80,normz,"second");
  //PlotPer("EMfracLO_first","EMfracLO","LdTrkPt_EMlo","p_{T}^{Ltrk} [GeV] (f_{EM}<0.9)", "Nevts",4,0,80,normz,"first");
  //PlotPer("EMfracLO_second","EMfracLO","LdTrkPt_EMlo","p_{T}^{Ltrk} [GeV] (f_{EM}<0.9)", "Nevts",4,0,80,normz,"second");

  //PlotPer("RW_Et_first","RW_Et","PtRW_Tau_Et","E_{T} [GeV], W p_{T} Reweighted","NEvts",2,0,70, normz, "first");
  //PlotPer("PtRW_Tau_LdTrkPt_first","PtRW_Tau_LdTrkPt","PtRW_Tau_LdTrkPt","p_{T}^{Ltrk}, W p_{T} Reweighted", "Nevts",2,0,80,normz, "first");
  //PlotPer("RW_Et_second","RW_Et","PtRW_Tau_Et","E_{T} [GeV], W p_{T} Reweighted","NEvts",2,0,70, normz, "second");
  //PlotPer("PtRW_Tau_LdTrkPt_second","PtRW_Tau_LdTrkPt","PtRW_Tau_LdTrkPt","p_{T}^{Ltrk}, W p_{T} Reweighted", "Nevts",2,0,80,normz, "second");


  //PlotPer("EMfrac_both","EMfrac","EMfrac","EM Fraction", "Nevts",4,0,1.0,normz,"both");
  //PlotPer("fCore_first","fCore","fCore","Centrality Fraction,","NEvts",1,0,1.0, normz, "first");
  //PlotPer("fCore_second","fCore","fCore","Centrality Fraction,","NEvts",1,0,1.0, normz, "second");
  //PlotPer("fCore_both","fCore","fCore","Centrality Fraction,","NEvts",1,0,1.0, normz, "both");

  //PlotPer("EMRad_first","EMRad","EMRadius","EM Radius","NEvts",1,0,.2, normz, "first");
  //PlotPer("EMRad_second","EMRad","EMRadius","EM Radius","NEvts",1,0,.2, normz, "second");
  //PlotPer("EMRad_both","EMRad","EMRadius","EM Radius","NEvts",1,0,.2, normz, "both");


  //PlotTrk("FwdEt","FwdEt","Fwd_Et","Tau Et [GeV], Eta>1.7","NEvts",2,0,70, normz);
  //PlotTrk("FwdLdTrkHI","FwdLdTrkHi","Fwd_LdTrkPtHI","Lead Track Pt [GeV], Eta>2.0","NEvts",4,0,80, normz);
  //PlotTrk("FwdLdTrkLo","FwdLdTrkLo","Fwd_LdTrkPtLO","Lead Track Pt [GeV], 1.7 <Eta<2.0","NEvts",4,0,80, normz);
  //PlotTrk("FwdEMRad","FwdEMRad","Fwd_EMRadius","EM Radius, Eta>1.7","NEvts",1,0,.2, normz);
  //PlotTrk("FwdfCore","FwdfCore","Fwd_fCore","Centrality Fraction, Eta>1.7","NEvts",1,0,1.0, normz);
  //PlotTrk("FwdEMfrac","FwdEMfrac","Fwd_EMfrac","EM Fraction, Eta > 1.7", "Nevts",4,0,1.0,normz);  
  //PlotTrk("FwdfTrack","FwdfTrack","Fwd_fTrack","Lead Track Pt Fraction, Eta > 1.7", "Nevts",2,0,1.0,normz);  
  //PlotTrk("FwdRtrack","FwdRtrack","Fwd_trkAvgDist","R_{track}, Eta>1.7","NEvts",1,0,.2, normz); 


  return;

}


void PlotPer(char* cname, TString name, TString hist, TString xtitle, TString ytitle, int rb, float xmin, float xmax, bool normz, TString period){

  ytitle = "Number of Events";

  TCanvas * c1 = new TCanvas(cname, cname, 600,400);
  c1->SetFillColor(0);

  TH1F* signalA = getSignal(hist, "A", period);
  TH1F* data = getData(hist, "A", period);
  TH1F* EWA = getEW(hist, "A", period);
  TH1F* stats = (TH1F*)signalA->Clone();
  stats->Add(EWA);


  //float bin = EWA->GetBinContent(5);
  //float err = EWA->GetBinError(5);
  //cout<<"bin: "<<bin<<endl;
  //cout<<"err: "<<err<<endl;

  TH1F* QCDA = getData(hist, "C", period); //take shape from data in region c

  float norm = data->Integral() - getQCDNorm(hist, period); //normalization for qcd in region a
  float scale = norm/( QCDA->Integral() );
  QCDA->Scale(scale); //normalized

  stats->Add(QCDA);

  signalA->Rebin(rb); data->Rebin(rb); EWA->Rebin(rb); QCDA->Rebin(rb); stats->Rebin(rb);

  //DRAW STAT UNCERTAINTY ON MC

  const int nbins=stats->GetXaxis()->GetNbins();
  const Int_t nb=nbins;
  
  Double_t x[nb]={0};
  Double_t y[nb]={0};
  Double_t ex[nb]={0};
  Double_t ey[nb]={0};
   
  for(int ibin=0; ibin<nbins; ibin++){
    
    x[ibin]=stats->GetXaxis()->GetBinCenter(ibin+1);
    y[ibin]=stats->GetBinContent(ibin+1);
    ex[ibin]=float(stats->GetXaxis()->GetBinWidth(ibin+1))/2;
    float stat=stats->GetBinError(ibin+1);
    ey[ibin]=stat;
  } 
 
  //set line and fill colors
  signalA->SetLineColor(8); signalA->SetFillColor(8); signalA->SetFillStyle(3325);
  EWA->SetLineColor(9); EWA->SetFillColor(9); EWA->SetFillStyle(3001); 
  QCDA->SetLineColor(26); QCDA->SetFillColor(26); QCDA->SetFillStyle(3244);

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

  float max = hs->GetMaximum();
  if(data->GetMaximum() > max) max = data->GetMaximum();
  data->SetMaximum(1.1*max);



  TGraphErrors* gr = new TGraphErrors(nb,x,y,ex,ey);
  gr->SetLineWidth(3); gr->SetFillColor(49); gr->SetFillStyle(3005); 
  gr->Draw("2,same");  

  TLegend* leg = new TLegend(0.6,0.7,.9,.9);
  leg->SetFillColor(0);
 
  if(period == "first"){
    leg->SetHeader("***First Period***");
    leg->AddEntry(data, "2010 Data (10.7 pb^{-1})", "p");
  }
  else if(period=="second"){
    leg->SetHeader("***Second Period***");
    leg->AddEntry(data, "2010 Data (23.6 pb^{-1})", "p");
  }
  leg->AddEntry(signalA,"W#rightarrow #tau#nu MC","f");
  leg->AddEntry(EWA,"EW MC", "f");
  leg->AddEntry(QCDA, "QCD (ABCD)","f");
  leg->Draw();

  TString ntit = ""; 
  TString npro = "";
  if(normz) ntit = "_norm";
  if(prong) npro = "_1P_tight";
  c1->Print(name + npro + ntit + period + ".gif");

  return;
}

TH1F* getData(TString hist, TString reg, TString period){

  TString filename = "../allData";
  if(prong) filename += "_1p_tight";
  TFile * file = TFile::Open(filename + ".root");
  TH1F* h1; TH1F* h2;
  
  h1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
  h2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);

  if(period == "both") {
    h1->Add(h2);
    return h1;
  }
  
  else if(period == "first") {delete h2; return h1;}
  else if(period == "second") {delete h1; return h2;}

  else { cout<<"Bad period in getData"<<endl; delete h2; return h1; } 

}

TH1F* getSignal(TString hist, TString reg, TString period){

  float lumi1 = 10.703; float lumi2;

  TString filename = "../herwig_L";
  if(prong) filename += "_1pboth_tight";
  TFile * f = TFile::Open(filename + ".root");
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

  //  float xsct = 10.46*1*0.6479*1000;
    float xsct = 10.207*1*0.34*1000;
  TH1F* h1 = (TH1F*)gDirectory->Get(hist+"_first_"+reg);
  TH1F* h2 = (TH1F*)gDirectory->Get(hist+"_second_"+reg);
  
  HistScale(h1,lumi1, hW1->Integral(), xsct);
  HistScale(h2,lumi2, hW2->Integral(), xsct);
  
  float all = h2->GetEntries() + h1->GetEntries();
  delete hW1; delete hW2; 
  if(period == "both"){
    h1->Add(h2);
    h1->SetEntries(all);
    delete h2;  
    return h1;
  }
  else if(period == "first"){delete h2; return h1;}
  else if(period == "second"){delete h1; return h2;}
  else { cout<<"Bad period in getSignal"<<endl; delete h2; return h1; } 
  
}

TH1F* getEW(TString hist, TString reg, TString period){

  const int NBINS = 7;
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

  //float xsct[NBINS] = {10.46*1*(1-0.6479)*1000, 10.46*1*1*1000, 10.46*1*1*1000, 0.99*1*1*1000, 0.99*1*1*1000, 0.99*1*1*1000, 0.144*1*0.556*1000, 0.144*1*0.444*1000 };
  float xsct[NBINS] = {10.207*1*(1-0.6479)*1000, 10.207*1*1*1000, 10.207*1*1*1000,0.937*1*1*1000, 0.937*1*1*1000, 0.187*1*0.556*1000, 0.187*1*0.444*1000 };
  
  TString Sample[NBINS] = {"../Wtaulepnu","../Wenu","../Wmunu","../Zmumu","../Ztautau","../ttbarlep", "../ttbarhad" };
  for(int is=0;is<NBINS;is++) {
    if(prong) Sample[is]+= "_1p_tight";
    Sample[is] += ".root";
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

  if(period == "both"){
    ew1->Add(ew2);
    delete ew2;
    return ew1;
  }
  else if(period == "first"){ delete ew2; return ew1;}
  else if(period == "second"){ delete ew1; return ew2;}
  else {cout<<"Bad period in getEW"<<endl; return ew1;}

}  

void HistScale(TH1F* hist, float lumi, float NE, float xsct){

  float scale = xsct*lumi/NE;
  float ne = hist->Integral();
  hist->Scale(scale);
  hist->SetEntries(ne*scale);

  return;
}


float getQCDNorm(TString hist, TString period){

  TH1F* signalA = getSignal(hist, "A", period);
  TH1F* signalB = getSignal(hist, "B", period);
  TH1F* signalC = getSignal(hist, "C", period);
  TH1F* signalD = getSignal(hist, "D", period);
  
  TH1F* ewA = getEW(hist, "A", period);
  TH1F* ewB = getEW(hist, "B", period);
  TH1F* ewC = getEW(hist, "C", period);
  TH1F* ewD = getEW(hist, "D", period);

  TH1F* dataA = getData(hist, "A", period);
  TH1F* dataB = getData(hist, "B", period);
  TH1F* dataC = getData(hist, "C", period);
  TH1F* dataD = getData(hist, "D", period);

    
  cout<<"\t Sample \t A \t B \t C \t D"<<endl;
  cout<<"\t Data \t"<<dataA->Integral()<<"\t"<<dataB->Integral()<<"\t"<<dataC->Integral()<<"\t"<<dataD->Integral()<<endl;
  cout<<"\t Signal \t"<<signalA->Integral()<<"\t"<<signalB->Integral()<<"\t"<<signalC->Integral()<<"\t"<<signalD->Integral()<<endl;
  cout<<"\t EW \t"<<ewA->Integral()<<"\t"<<ewB->Integral()<<"\t"<<ewC->Integral()<<"\t"<<ewD->Integral()<<endl;

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
