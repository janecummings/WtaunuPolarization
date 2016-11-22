//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Sep 16 11:01:29 2011 by ROOT version 5.26/00e
// from TChain tauPerf/
//////////////////////////////////////////////////////////

#ifndef EventTree_h
#define EventTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

using namespace std;

class EventTree: public TObject {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           tau_n;
   vector<float>   *tau_Et;
   vector<float>   *tau_pt;
   vector<float>   *tau_m;
   vector<float>   *tau_eta;
   vector<float>   *tau_phi;
   vector<float>   *tau_charge;
   vector<float>   *tau_BDTEleScore;
   vector<float>   *tau_BDTJetScore;
   vector<float>   *tau_discCut;
   vector<float>   *tau_discCutTMVA;
   vector<float>   *tau_discLL;
   vector<float>   *tau_discNN;
   vector<float>   *tau_efficLL;
   vector<float>   *tau_efficNN;
   vector<float>   *tau_likelihood;
   vector<float>   *tau_tauJetNeuralNetwork;
   vector<float>   *tau_tauENeuralNetwork;
   vector<float>   *tau_tauElTauLikelihood;
   vector<float>   *tau_SafeLikelihood;
   vector<int>     *tau_electronVetoLoose;
   vector<int>     *tau_electronVetoMedium;
   vector<int>     *tau_electronVetoTight;
   vector<int>     *tau_muonVeto;
   vector<int>     *tau_tauCutLoose;
   vector<int>     *tau_tauCutMedium;
   vector<int>     *tau_tauCutTight;
   vector<int>     *tau_tauCutSafeLoose;
   vector<int>     *tau_tauCutSafeMedium;
   vector<int>     *tau_tauCutSafeTight;
   vector<int>     *tau_tauCutSafeCaloLoose;
   vector<int>     *tau_tauCutSafeCaloMedium;
   vector<int>     *tau_tauCutSafeCaloTight;
   vector<int>     *tau_tauLlhLoose;
   vector<int>     *tau_tauLlhMedium;
   vector<int>     *tau_tauLlhTight;
   vector<int>     *tau_JetBDTLoose;
   vector<int>     *tau_JetBDTMedium;
   vector<int>     *tau_JetBDTTight;
   vector<int>     *tau_EleBDTLoose;
   vector<int>     *tau_EleBDTMedium;
   vector<int>     *tau_EleBDTTight;
   vector<int>     *tau_SafeLlhLoose;
   vector<int>     *tau_SafeLlhMedium;
   vector<int>     *tau_SafeLlhTight;
   vector<int>     *tau_author;
   vector<int>     *tau_ROIword;
   vector<int>     *tau_nProng;
   vector<int>     *tau_numTrack;
   vector<int>     *tau_seedCalo_numTrack;
   vector<float>   *tau_etOverPtLeadTrk;
   vector<float>   *tau_ipZ0SinThetaSigLeadTrk;
   vector<float>   *tau_leadTrkPt;
   vector<int>     *tau_nLooseTrk;
   vector<int>     *tau_nLooseConvTrk;
   vector<int>     *tau_nProngLoose;
   vector<float>   *tau_ipSigLeadTrk;
   vector<float>   *tau_ipSigLeadLooseTrk;
   vector<float>   *tau_etOverPtLeadLooseTrk;
   vector<float>   *tau_leadLooseTrkPt;
   vector<float>   *tau_chrgLooseTrk;
   vector<float>   *tau_massTrkSys;
   vector<float>   *tau_trkWidth2;
   vector<float>   *tau_trFlightPathSig;
   vector<float>   *tau_etEflow;
   vector<float>   *tau_mEflow;
   vector<int>     *tau_nPi0;
   vector<float>   *tau_ele_E237E277;
   vector<float>   *tau_ele_PresamplerFraction;
   vector<float>   *tau_ele_ECALFirstFraction;
   vector<float>   *tau_seedCalo_EMRadius;
   vector<float>   *tau_seedCalo_hadRadius;
   vector<float>   *tau_seedCalo_etEMAtEMScale;
   vector<float>   *tau_seedCalo_etHadAtEMScale;
   vector<float>   *tau_seedCalo_isolFrac;
   vector<float>   *tau_seedCalo_centFrac;
   vector<float>   *tau_seedCalo_stripWidth2;
   vector<int>     *tau_seedCalo_nStrip;
   vector<float>   *tau_seedCalo_etEMCalib;
   vector<float>   *tau_seedCalo_etHadCalib;
   vector<float>   *tau_seedCalo_eta;
   vector<float>   *tau_seedCalo_phi;
   vector<float>   *tau_seedCalo_nIsolLooseTrk;
   vector<float>   *tau_seedCalo_trkAvgDist;
   vector<float>   *tau_seedCalo_trkRmsDist;
   vector<int>     *tau_numTopoClusters;
   vector<float>   *tau_numEffTopoClusters;
   vector<float>   *tau_topoInvMass;
   vector<float>   *tau_effTopoInvMass;
   vector<float>   *tau_topoMeanDeltaR;
   vector<float>   *tau_effTopoMeanDeltaR;
   vector<float>   *tau_numCells;
   vector<float>   *tau_seedTrk_EMRadius;
   vector<float>   *tau_seedTrk_isolFrac;
   vector<float>   *tau_seedTrk_etChrgHadOverSumTrkPt;
   vector<float>   *tau_seedTrk_isolFracWide;
   vector<float>   *tau_seedTrk_etHadAtEMScale;
   vector<float>   *tau_seedTrk_etEMAtEMScale;
   vector<float>   *tau_seedTrk_etEMCL;
   vector<float>   *tau_seedTrk_etChrgEM;
   vector<float>   *tau_seedTrk_etNeuEM;
   vector<float>   *tau_seedTrk_etResNeuEM;
   vector<float>   *tau_seedTrk_hadLeakEt;
   vector<float>   *tau_seedTrk_sumEMCellEtOverLeadTrkPt;
   vector<float>   *tau_seedTrk_secMaxStripEt;
   vector<float>   *tau_seedTrk_stripWidth2;
   vector<int>     *tau_seedTrk_nStrip;
   vector<float>   *tau_seedTrk_etChrgHad;
   vector<int>     *tau_seedTrk_nOtherCoreTrk;
   vector<int>     *tau_seedTrk_nIsolTrk;
   vector<float>   *tau_seedTrk_etIsolEM;
   vector<float>   *tau_seedTrk_etIsolHad;
   vector<float>   *tau_calcVars_sumTrkPt;
   vector<float>   *tau_calcVars_etHadSumPtTracks;
   vector<float>   *tau_calcVars_etEMSumPtTracks;
   vector<float>   *tau_calcVars_etHad_EMScale_Pt3Trks;
   vector<float>   *tau_calcVars_etEM_EMScale_Pt3Trks;
   vector<float>   *tau_calcVars_mass;
   vector<float>   *tau_calcVars_ipSigLeadLooseTrk;
   vector<float>   *tau_calcVars_drMax;
   vector<float>   *tau_calcVars_drMin;
   vector<float>   *tau_calcVars_emFracCalib;
   vector<float>   *tau_calcVars_TRTHTOverLT_LeadTrk;
   vector<float>   *tau_calcVars_calRadius;
   vector<float>   *tau_calcVars_EMFractionAtEMScale;
   vector<int>     *tau_calcVars_BDTLooseBkg;
   vector<int>     *tau_calcVars_BDTMediumBkg;
   vector<int>     *tau_calcVars_BDTTightBkg;
   vector<vector<float> > *tau_cluster_E;
   vector<vector<float> > *tau_cluster_eta;
   vector<vector<float> > *tau_cluster_phi;
   vector<unsigned int> *tau_cluster_n;
   vector<vector<float> > *tau_Pi0Cluster_pt;
   vector<vector<float> > *tau_Pi0Cluster_eta;
   vector<vector<float> > *tau_Pi0Cluster_phi;
   vector<float>   *tau_secvtx_x;
   vector<float>   *tau_secvtx_y;
   vector<float>   *tau_secvtx_z;
   vector<float>   *tau_secvtx_chiSquared;
   vector<float>   *tau_secvtx_numberDoF;
   vector<vector<float> > *tau_cell_E;
   vector<vector<float> > *tau_cell_eta;
   vector<vector<float> > *tau_cell_phi;
   vector<unsigned int> *tau_cell_n;
   vector<float>   *tau_cell_nEffCells;
   vector<vector<int> > *tau_cell_samplingID;
   vector<float>   *tau_jet_Et;
   vector<float>   *tau_jet_pt;
   vector<float>   *tau_jet_m;
   vector<float>   *tau_jet_eta;
   vector<float>   *tau_jet_phi;
   vector<float>   *tau_jet_WIDTH;
   vector<float>   *tau_jet_n90;
   vector<float>   *tau_jet_n90constituents;
   vector<float>   *tau_jet_BCH_CORR_CELL;
   vector<float>   *tau_jet_BCH_CORR_JET;
   vector<float>   *tau_jet_BCH_CORR_JET_FORCELL;
   vector<float>   *tau_jet_ENG_BAD_CELLS;
   vector<float>   *tau_jet_N_BAD_CELLS;
   vector<float>   *tau_jet_N_BAD_CELLS_CORR;
   vector<float>   *tau_jet_BAD_CELLS_CORR_E;
   vector<float>   *tau_jet_Timing;
   vector<float>   *tau_jet_LArQuality;
   vector<int>     *tau_jet_SamplingMax;
   vector<double>  *tau_jet_fracSamplingMax;
   vector<float>   *tau_jet_hecf;
   vector<float>   *tau_jet_tgap3f;
   vector<int>     *tau_jet_isUgly;
   vector<int>     *tau_jet_isBadLoose;
   vector<int>     *tau_jet_isBadTight;
   vector<float>   *tau_jet_emfrac;
   vector<float>   *tau_jet_GCWJES;
   vector<float>   *tau_jet_EMJES;
   vector<float>   *tau_jet_emscale_E;
   vector<float>   *tau_jet_emscale_pt;
   vector<float>   *tau_jet_emscale_m;
   vector<float>   *tau_jet_emscale_eta;
   vector<float>   *tau_jet_emscale_phi;
   vector<float>   *tau_jet_jvtxf;
   vector<float>   *tau_jet_jvtx_x;
   vector<float>   *tau_jet_jvtx_y;
   vector<float>   *tau_jet_jvtx_z;
   vector<double>  *tau_jet_flavor_weight;
   vector<double>  *tau_jet_flavor_weight_TrackCounting2D;
   vector<double>  *tau_jet_flavor_weight_JetProb;
   vector<double>  *tau_jet_flavor_weight_IP1D;
   vector<double>  *tau_jet_flavor_weight_IP2D;
   vector<double>  *tau_jet_flavor_weight_IP3D;
   vector<double>  *tau_jet_flavor_weight_SV0;
   vector<double>  *tau_jet_flavor_weight_SV1;
   vector<double>  *tau_jet_flavor_weight_SV2;
   vector<double>  *tau_jet_flavor_weight_JetFitterTag;
   vector<double>  *tau_jet_flavor_weight_JetFitterCOMB;
   vector<double>  *tau_jet_flavor_weight_JetFitterTagNN;
   vector<double>  *tau_jet_flavor_weight_JetFitterCOMBNN;
   vector<double>  *tau_jet_flavor_weight_SoftMuonTag;
   vector<double>  *tau_jet_flavor_weight_SoftElectronTag;
   vector<double>  *tau_jet_flavor_weight_IP3DSV1;
   vector<float>   *tau_jet_e_PreSamplerB;
   vector<float>   *tau_jet_e_EMB1;
   vector<float>   *tau_jet_e_EMB2;
   vector<float>   *tau_jet_e_EMB3;
   vector<float>   *tau_jet_e_PreSamplerE;
   vector<float>   *tau_jet_e_EME1;
   vector<float>   *tau_jet_e_EME2;
   vector<float>   *tau_jet_e_EME3;
   vector<float>   *tau_jet_e_HEC0;
   vector<float>   *tau_jet_e_HEC1;
   vector<float>   *tau_jet_e_HEC2;
   vector<float>   *tau_jet_e_HEC3;
   vector<float>   *tau_jet_e_TileBar0;
   vector<float>   *tau_jet_e_TileBar1;
   vector<float>   *tau_jet_e_TileBar2;
   vector<float>   *tau_jet_e_TileGap1;
   vector<float>   *tau_jet_e_TileGap2;
   vector<float>   *tau_jet_e_TileGap3;
   vector<float>   *tau_jet_e_TileExt0;
   vector<float>   *tau_jet_e_TileExt1;
   vector<float>   *tau_jet_e_TileExt2;
   vector<float>   *tau_jet_e_FCAL0;
   vector<float>   *tau_jet_e_FCAL1;
   vector<float>   *tau_jet_e_FCAL2;
   vector<vector<float> > *tau_jet_shapeBins;
   vector<int>     *tau_seedCalo_track_n;
   vector<vector<float> > *tau_seedCalo_track_d0;
   vector<vector<float> > *tau_seedCalo_track_z0;
   vector<vector<float> > *tau_seedCalo_track_phi;
   vector<vector<float> > *tau_seedCalo_track_theta;
   vector<vector<float> > *tau_seedCalo_track_qoverp;
   vector<vector<float> > *tau_seedCalo_track_pt;
   vector<vector<float> > *tau_seedCalo_track_eta;
   vector<vector<float> > *tau_seedCalo_track_atPV_d0;
   vector<vector<float> > *tau_seedCalo_track_atPV_z0;
   vector<vector<float> > *tau_seedCalo_track_atPV_phi;
   vector<vector<float> > *tau_seedCalo_track_atPV_theta;
   vector<vector<float> > *tau_seedCalo_track_atPV_qoverp;
   vector<vector<float> > *tau_seedCalo_track_atPV_pt;
   vector<vector<float> > *tau_seedCalo_track_atPV_eta;
   vector<vector<int> > *tau_seedCalo_track_nBLHits;
   vector<vector<int> > *tau_seedCalo_track_nPixHits;
   vector<vector<int> > *tau_seedCalo_track_nSCTHits;
   vector<vector<int> > *tau_seedCalo_track_nTRTHits;
   vector<vector<int> > *tau_seedCalo_track_nPixHoles;
   vector<vector<int> > *tau_seedCalo_track_nSCTHoles;
   vector<vector<int> > *tau_seedCalo_track_nBLSharedHits;
   vector<vector<int> > *tau_seedCalo_track_nPixSharedHits;
   vector<vector<int> > *tau_seedCalo_track_nSCTSharedHits;
   vector<vector<int> > *tau_seedCalo_track_nTRTHighTHits;
   vector<vector<int> > *tau_seedCalo_track_nTRTOutliers;
   vector<vector<int> > *tau_seedCalo_track_nTRTHighTOutliers;
   vector<vector<int> > *tau_seedCalo_track_nHits;
   vector<vector<float> > *tau_seedCalo_track_pixeldEdx;
   vector<int>     *tau_seedCalo_wideTrk_n;
   vector<vector<float> > *tau_seedCalo_wideTrk_d0;
   vector<vector<float> > *tau_seedCalo_wideTrk_z0;
   vector<vector<float> > *tau_seedCalo_wideTrk_phi;
   vector<vector<float> > *tau_seedCalo_wideTrk_theta;
   vector<vector<float> > *tau_seedCalo_wideTrk_qoverp;
   vector<vector<float> > *tau_seedCalo_wideTrk_pt;
   vector<vector<float> > *tau_seedCalo_wideTrk_eta;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_d0;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_z0;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_phi;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_theta;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_qoverp;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_pt;
   vector<vector<float> > *tau_seedCalo_wideTrk_atPV_eta;
   vector<vector<int> > *tau_seedCalo_wideTrk_nBLHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nPixHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nSCTHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nTRTHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nPixHoles;
   vector<vector<int> > *tau_seedCalo_wideTrk_nSCTHoles;
   vector<vector<int> > *tau_seedCalo_wideTrk_nBLSharedHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nPixSharedHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nSCTSharedHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nTRTHighTHits;
   vector<vector<int> > *tau_seedCalo_wideTrk_nTRTOutliers;
   vector<vector<int> > *tau_seedCalo_wideTrk_nTRTHighTOutliers;
   vector<vector<int> > *tau_seedCalo_wideTrk_nHits;
   vector<vector<float> > *tau_seedCalo_wideTrk_pixeldEdx;
   vector<int>     *tau_otherTrk_n;
   vector<vector<float> > *tau_otherTrk_d0;
   vector<vector<float> > *tau_otherTrk_z0;
   vector<vector<float> > *tau_otherTrk_phi;
   vector<vector<float> > *tau_otherTrk_theta;
   vector<vector<float> > *tau_otherTrk_qoverp;
   vector<vector<float> > *tau_otherTrk_pt;
   vector<vector<float> > *tau_otherTrk_eta;
   vector<vector<float> > *tau_otherTrk_atPV_d0;
   vector<vector<float> > *tau_otherTrk_atPV_z0;
   vector<vector<float> > *tau_otherTrk_atPV_phi;
   vector<vector<float> > *tau_otherTrk_atPV_theta;
   vector<vector<float> > *tau_otherTrk_atPV_qoverp;
   vector<vector<float> > *tau_otherTrk_atPV_pt;
   vector<vector<float> > *tau_otherTrk_atPV_eta;
   vector<vector<int> > *tau_otherTrk_nBLHits;
   vector<vector<int> > *tau_otherTrk_nPixHits;
   vector<vector<int> > *tau_otherTrk_nSCTHits;
   vector<vector<int> > *tau_otherTrk_nTRTHits;
   vector<vector<int> > *tau_otherTrk_nPixHoles;
   vector<vector<int> > *tau_otherTrk_nSCTHoles;
   vector<vector<int> > *tau_otherTrk_nBLSharedHits;
   vector<vector<int> > *tau_otherTrk_nPixSharedHits;
   vector<vector<int> > *tau_otherTrk_nSCTSharedHits;
   vector<vector<int> > *tau_otherTrk_nTRTHighTHits;
   vector<vector<int> > *tau_otherTrk_nTRTOutliers;
   vector<vector<int> > *tau_otherTrk_nTRTHighTOutliers;
   vector<vector<int> > *tau_otherTrk_nHits;
   vector<vector<float> > *tau_otherTrk_pixeldEdx;
   vector<float>   *tau_EF_dr;
   vector<float>   *tau_EF_E;
   vector<float>   *tau_EF_Et;
   vector<float>   *tau_EF_pt;
   vector<float>   *tau_EF_eta;
   vector<float>   *tau_EF_phi;
   vector<int>     *tau_EF_matched;
   vector<float>   *tau_L2_dr;
   vector<float>   *tau_L2_E;
   vector<float>   *tau_L2_Et;
   vector<float>   *tau_L2_pt;
   vector<float>   *tau_L2_eta;
   vector<float>   *tau_L2_phi;
   vector<int>     *tau_L2_matched;
   vector<float>   *tau_L1_dr;
   vector<float>   *tau_L1_Et;
   vector<float>   *tau_L1_pt;
   vector<float>   *tau_L1_eta;
   vector<float>   *tau_L1_phi;
   vector<int>     *tau_L1_matched;
   vector<vector<int> > *tau_elAssoc_index;
   vector<vector<int> > *tau_jetAssoc_index;
   vector<float>   *tau_trueTauAssoc_dr;
   vector<int>     *tau_trueTauAssoc_index;
   vector<int>     *tau_trueTauAssoc_matched;
   vector<vector<int> > *tau_truthAssoc_index;
   Bool_t          EF_2e10_loose;
   Bool_t          EF_2e10_medium;
   Bool_t          EF_2e15_loose;
   Bool_t          EF_2e3_loose;
   Bool_t          EF_2e3_loose_SiTrk;
   Bool_t          EF_2e3_loose_TRT;
   Bool_t          EF_2e3_medium;
   Bool_t          EF_2e3_medium_SiTrk;
   Bool_t          EF_2e3_medium_TRT;
   Bool_t          EF_2e3_tight;
   Bool_t          EF_2e5_medium;
   Bool_t          EF_2e5_medium_SiTrk;
   Bool_t          EF_2e5_medium_TRT;
   Bool_t          EF_2e5_tight;
   Bool_t          EF_2j35_jetNoEF_xe20_noMu;
   Bool_t          EF_2j35_jetNoEF_xe30_noMu;
   Bool_t          EF_2j35_jetNoEF_xe40_noMu;
   Bool_t          EF_2j35_xe20_noMu;
   Bool_t          EF_2j35_xe30_noMu;
   Bool_t          EF_2j35_xe40_noMu;
   Bool_t          EF_2mu0_NoAlg;
   Bool_t          EF_2mu10;
   Bool_t          EF_2mu10_NoAlg;
   Bool_t          EF_2mu4;
   Bool_t          EF_2mu4_Bmumu;
   Bool_t          EF_2mu4_Bmumux;
   Bool_t          EF_2mu4_DiMu;
   Bool_t          EF_2mu4_DiMu_SiTrk;
   Bool_t          EF_2mu4_DiMu_noVtx;
   Bool_t          EF_2mu4_DiMu_noVtx_noOS;
   Bool_t          EF_2mu4_Jpsimumu;
   Bool_t          EF_2mu4_Jpsimumu_IDTrkNoCut;
   Bool_t          EF_2mu4_Upsimumu;
   Bool_t          EF_2mu6;
   Bool_t          EF_2mu6_Bmumu;
   Bool_t          EF_2mu6_Bmumux;
   Bool_t          EF_2mu6_DiMu;
   Bool_t          EF_2mu6_Jpsimumu;
   Bool_t          EF_2mu6_MG;
   Bool_t          EF_2mu6_NoAlg;
   Bool_t          EF_2mu6_Upsimumu;
   Bool_t          EF_2mu6_g10_loose;
   Bool_t          EF_2tau12_loose;
   Bool_t          EF_2tau16_loose;
   Bool_t          EF_2tau20_loose;
   Bool_t          EF_2tau29_loose;
   Bool_t          EF_2tau29_loose1;
   Bool_t          EF_2tau38_loose;
   Bool_t          EF_e10_NoCut;
   Bool_t          EF_e10_loose;
   Bool_t          EF_e10_loose_mu10;
   Bool_t          EF_e10_loose_mu6;
   Bool_t          EF_e10_medium;
   Bool_t          EF_e10_medium_IDTrkNoCut;
   Bool_t          EF_e10_medium_SiTrk;
   Bool_t          EF_e10_medium_TRT;
   Bool_t          EF_e10_tight;
   Bool_t          EF_e10_tight_TRT;
   Bool_t          EF_e15_loose;
   Bool_t          EF_e15_loose_IDTrkNoCut;
   Bool_t          EF_e15_medium;
   Bool_t          EF_e15_medium_SiTrk;
   Bool_t          EF_e15_medium_TRT;
   Bool_t          EF_e15_tight;
   Bool_t          EF_e15_tight_TRT;
   Bool_t          EF_e18_medium;
   Bool_t          EF_e20_loose;
   Bool_t          EF_e20_loose_IDTrkNoCut;
   Bool_t          EF_e20_loose_TRT;
   Bool_t          EF_e20_loose_passEF;
   Bool_t          EF_e20_loose_passL2;
   Bool_t          EF_e20_loose_xe20;
   Bool_t          EF_e20_loose_xe20_noMu;
   Bool_t          EF_e20_loose_xe30;
   Bool_t          EF_e20_loose_xe30_noMu;
   Bool_t          EF_e20_medium;
   Bool_t          EF_e25_loose;
   Bool_t          EF_e25_medium;
   Bool_t          EF_e30_loose;
   Bool_t          EF_e3_loose;
   Bool_t          EF_e3_loose_SiTrk;
   Bool_t          EF_e3_loose_TRT;
   Bool_t          EF_e3_medium;
   Bool_t          EF_e3_medium_SiTrk;
   Bool_t          EF_e3_medium_TRT;
   Bool_t          EF_e5_NoCut_L2SW;
   Bool_t          EF_e5_NoCut_Ringer;
   Bool_t          EF_e5_NoCut_firstempty;
   Bool_t          EF_e5_loose_mu4;
   Bool_t          EF_e5_medium;
   Bool_t          EF_e5_medium_MV;
   Bool_t          EF_e5_medium_SiTrk;
   Bool_t          EF_e5_medium_TRT;
   Bool_t          EF_e5_medium_mu4;
   Bool_t          EF_e5_tight;
   Bool_t          EF_e5_tight_SiTrk;
   Bool_t          EF_e5_tight_TRT;
   Bool_t          EF_e5_tight_e5_NoCut;
   Bool_t          EF_em105_passHLT;
   Bool_t          EF_g10_loose;
   Bool_t          EF_g10_loose_larcalib;
   Bool_t          EF_g11_etcut;
   Bool_t          EF_g15_loose;
   Bool_t          EF_g17_etcut;
   Bool_t          EF_g17_etcut_EFxe20_noMu;
   Bool_t          EF_g17_etcut_EFxe30_noMu;
   Bool_t          EF_g20_loose;
   Bool_t          EF_g20_loose_cnv;
   Bool_t          EF_g20_loose_larcalib;
   Bool_t          EF_g20_loose_xe20_noMu;
   Bool_t          EF_g20_loose_xe30_noMu;
   Bool_t          EF_g20_tight;
   Bool_t          EF_g25_loose_xe30_noMu;
   Bool_t          EF_g30_loose;
   Bool_t          EF_g30_tight;
   Bool_t          EF_g3_NoCut_unpaired_iso;
   Bool_t          EF_g3_NoCut_unpaired_noniso;
   Bool_t          EF_g40_loose;
   Bool_t          EF_g40_loose_larcalib;
   Bool_t          EF_g40_tight;
   Bool_t          EF_g50_loose;
   Bool_t          EF_g50_loose_larcalib;
   Bool_t          EF_g5_NoCut_cosmic;
   Bool_t          EF_g5_loose;
   Bool_t          EF_g5_loose_cnv;
   Bool_t          EF_g5_loose_larcalib;
   Bool_t          EF_g7_loose;
   Bool_t          EF_j115_jetNoCut_larcalib;
   Bool_t          EF_j20;
   Bool_t          EF_j20_jetNoEF;
   Bool_t          EF_j20_jetNoEF_larcalib;
   Bool_t          EF_j20a4;
   Bool_t          EF_j20a4fs;
   Bool_t          EF_j20a6;
   Bool_t          EF_j20a6fs;
   Bool_t          EF_j30;
   Bool_t          EF_j30_cosmic;
   Bool_t          EF_j30_firstempty;
   Bool_t          EF_j30_fj30_jetNoEF;
   Bool_t          EF_j30_jetNoCut_cosmic;
   Bool_t          EF_j30_jetNoCut_firstempty;
   Bool_t          EF_j30_jetNoCut_unpaired;
   Bool_t          EF_j30_jetNoEF;
   Bool_t          EF_j30_jetNoEF_cosmic;
   Bool_t          EF_j30_jetNoEF_firstempty;
   Bool_t          EF_j30_jetNoEF_unpaired;
   Bool_t          EF_j30_unpaired;
   Bool_t          EF_j35;
   Bool_t          EF_j35_L1TAU_HV;
   Bool_t          EF_j35_L1TAU_HV_jetNoEF;
   Bool_t          EF_j35_jetNoCut_xe30_e15_medium;
   Bool_t          EF_j35_jetNoCut_xe30_mu15;
   Bool_t          EF_j35_jetNoEF;
   Bool_t          EF_j35_xe30_e15_medium;
   Bool_t          EF_j35_xe30_mu15;
   Bool_t          EF_j50;
   Bool_t          EF_j50_cosmic;
   Bool_t          EF_j50_firstempty;
   Bool_t          EF_j50_jetNoCut_cosmic;
   Bool_t          EF_j50_jetNoCut_firstempty;
   Bool_t          EF_j50_jetNoCut_unpaired;
   Bool_t          EF_j50_jetNoEF;
   Bool_t          EF_j50_jetNoEF_cosmic;
   Bool_t          EF_j50_jetNoEF_firstempty;
   Bool_t          EF_j50_jetNoEF_larcalib;
   Bool_t          EF_j50_jetNoEF_unpaired;
   Bool_t          EF_j50_jetNoEF_xe20_noMu;
   Bool_t          EF_j50_jetNoEF_xe30_noMu;
   Bool_t          EF_j50_jetNoEF_xe40_noMu;
   Bool_t          EF_j50_unpaired;
   Bool_t          EF_j50_xe20_noMu;
   Bool_t          EF_j50_xe30_noMu;
   Bool_t          EF_j50_xe40_noMu;
   Bool_t          EF_j5_empty_NoAlg;
   Bool_t          EF_j5_unpaired_iso_NoAlg;
   Bool_t          EF_j5_unpaired_noniso_NoAlg;
   Bool_t          EF_j75;
   Bool_t          EF_j75_jetNoEF;
   Bool_t          EF_j75_jetNoEF_EFxe20_noMu;
   Bool_t          EF_j75_jetNoEF_EFxe25_noMu;
   Bool_t          EF_j75_jetNoEF_EFxe30_noMu;
   Bool_t          EF_j75_jetNoEF_EFxe35_noMu;
   Bool_t          EF_j75_jetNoEF_EFxe40_noMu;
   Bool_t          EF_j95;
   Bool_t          EF_j95_jetNoEF;
   Bool_t          EF_j95_jetNoEF_larcalib;
   Bool_t          EF_je135_NoEF;
   Bool_t          EF_je195_NoEF;
   Bool_t          EF_je255_NoEF;
   Bool_t          EF_je300_NoEF;
   Bool_t          EF_je350_NoEF;
   Bool_t          EF_mu0_NoAlg;
   Bool_t          EF_mu0_comm_NoAlg;
   Bool_t          EF_mu0_comm_empty_NoAlg;
   Bool_t          EF_mu0_comm_firstempty_NoAlg;
   Bool_t          EF_mu0_comm_unpaired_iso_NoAlg;
   Bool_t          EF_mu0_comm_unpaired_noniso_NoAlg;
   Bool_t          EF_mu0_empty_NoAlg;
   Bool_t          EF_mu0_firstempty_NoAlg;
   Bool_t          EF_mu0_missingRoi;
   Bool_t          EF_mu0_outOfTime1;
   Bool_t          EF_mu0_outOfTime2;
   Bool_t          EF_mu0_rpcOnly;
   Bool_t          EF_mu0_unpaired_iso_NoAlg;
   Bool_t          EF_mu0_unpaired_noniso_NoAlg;
   Bool_t          EF_mu10;
   Bool_t          EF_mu10_Ecut12;
   Bool_t          EF_mu10_Ecut123;
   Bool_t          EF_mu10_Ecut13;
   Bool_t          EF_mu10_IDTrkNoCut;
   Bool_t          EF_mu10_MG;
   Bool_t          EF_mu10_MSonly;
   Bool_t          EF_mu10_MSonly_Ecut12;
   Bool_t          EF_mu10_MSonly_Ecut123;
   Bool_t          EF_mu10_MSonly_Ecut13;
   Bool_t          EF_mu10_MSonly_tight;
   Bool_t          EF_mu10_NoAlg;
   Bool_t          EF_mu10_SiTrk;
   Bool_t          EF_mu10_j30;
   Bool_t          EF_mu10_tight;
   Bool_t          EF_mu10i_loose;
   Bool_t          EF_mu13;
   Bool_t          EF_mu13_MG;
   Bool_t          EF_mu13_MG_tight;
   Bool_t          EF_mu13_tight;
   Bool_t          EF_mu15;
   Bool_t          EF_mu15_MG;
   Bool_t          EF_mu15_NoAlg;
   Bool_t          EF_mu20;
   Bool_t          EF_mu20_MSonly;
   Bool_t          EF_mu20_NoAlg;
   Bool_t          EF_mu20_passHLT;
   Bool_t          EF_mu20_slow;
   Bool_t          EF_mu30_MSonly;
   Bool_t          EF_mu4;
   Bool_t          EF_mu40_MSonly;
   Bool_t          EF_mu4_Bmumu;
   Bool_t          EF_mu4_BmumuX;
   Bool_t          EF_mu4_DiMu;
   Bool_t          EF_mu4_DiMu_FS;
   Bool_t          EF_mu4_DiMu_FS_noOS;
   Bool_t          EF_mu4_DiMu_MG;
   Bool_t          EF_mu4_DiMu_MG_FS;
   Bool_t          EF_mu4_DiMu_SiTrk;
   Bool_t          EF_mu4_DiMu_SiTrk_FS;
   Bool_t          EF_mu4_DiMu_noOS;
   Bool_t          EF_mu4_IDTrkNoCut;
   Bool_t          EF_mu4_Jpsie5e3;
   Bool_t          EF_mu4_Jpsie5e3_FS;
   Bool_t          EF_mu4_Jpsie5e3_SiTrk;
   Bool_t          EF_mu4_Jpsie5e3_SiTrk_FS;
   Bool_t          EF_mu4_Jpsimumu;
   Bool_t          EF_mu4_Jpsimumu_FS;
   Bool_t          EF_mu4_Jpsimumu_SiTrk_FS;
   Bool_t          EF_mu4_L1J10_matched;
   Bool_t          EF_mu4_L1J15_matched;
   Bool_t          EF_mu4_L1J30_matched;
   Bool_t          EF_mu4_L1J55_matched;
   Bool_t          EF_mu4_L1J5_matched;
   Bool_t          EF_mu4_L2MSonly_EFFS_passL2;
   Bool_t          EF_mu4_MG;
   Bool_t          EF_mu4_MSonly;
   Bool_t          EF_mu4_MSonly_EFFS_passL2;
   Bool_t          EF_mu4_MSonly_MB2_noL2_EFFS;
   Bool_t          EF_mu4_MSonly_cosmic;
   Bool_t          EF_mu4_MSonly_outOfTime;
   Bool_t          EF_mu4_MV;
   Bool_t          EF_mu4_SiTrk;
   Bool_t          EF_mu4_Trk_Jpsi;
   Bool_t          EF_mu4_Trk_Jpsi_FS;
   Bool_t          EF_mu4_Trk_Jpsi_loose;
   Bool_t          EF_mu4_Trk_Upsi_FS;
   Bool_t          EF_mu4_Trk_Upsi_loose_FS;
   Bool_t          EF_mu4_Upsimumu_FS;
   Bool_t          EF_mu4_Upsimumu_SiTrk_FS;
   Bool_t          EF_mu4_comm_MSonly_cosmic;
   Bool_t          EF_mu4_comm_cosmic;
   Bool_t          EF_mu4_comm_firstempty;
   Bool_t          EF_mu4_comm_unpaired_iso;
   Bool_t          EF_mu4_cosmic;
   Bool_t          EF_mu4_firstempty;
   Bool_t          EF_mu4_j20;
   Bool_t          EF_mu4_j20_jetNoEF;
   Bool_t          EF_mu4_j30;
   Bool_t          EF_mu4_j30_jetNoEF;
   Bool_t          EF_mu4_mu6;
   Bool_t          EF_mu4_muCombTag;
   Bool_t          EF_mu4_tile;
   Bool_t          EF_mu4_tile_cosmic;
   Bool_t          EF_mu4_unpaired_iso;
   Bool_t          EF_mu4mu6_Bmumu;
   Bool_t          EF_mu4mu6_BmumuX;
   Bool_t          EF_mu4mu6_DiMu;
   Bool_t          EF_mu4mu6_Jpsimumu;
   Bool_t          EF_mu4mu6_Jpsimumu_IDTrkNoCut;
   Bool_t          EF_mu4mu6_Upsimumu;
   Bool_t          EF_mu6;
   Bool_t          EF_mu6_Bmumu;
   Bool_t          EF_mu6_BmumuX;
   Bool_t          EF_mu6_DiMu;
   Bool_t          EF_mu6_Ecut12;
   Bool_t          EF_mu6_Ecut123;
   Bool_t          EF_mu6_Ecut13;
   Bool_t          EF_mu6_Ecut2;
   Bool_t          EF_mu6_Ecut3;
   Bool_t          EF_mu6_IDTrkNoCut;
   Bool_t          EF_mu6_Jpsie5e3;
   Bool_t          EF_mu6_Jpsie5e3_FS;
   Bool_t          EF_mu6_Jpsie5e3_SiTrk;
   Bool_t          EF_mu6_Jpsie5e3_SiTrk_FS;
   Bool_t          EF_mu6_Jpsimumu;
   Bool_t          EF_mu6_MG;
   Bool_t          EF_mu6_MSonly;
   Bool_t          EF_mu6_MSonly_Ecut12;
   Bool_t          EF_mu6_MSonly_Ecut123;
   Bool_t          EF_mu6_MSonly_Ecut13;
   Bool_t          EF_mu6_MSonly_Ecut2;
   Bool_t          EF_mu6_MSonly_Ecut3;
   Bool_t          EF_mu6_MSonly_outOfTime;
   Bool_t          EF_mu6_NoAlg;
   Bool_t          EF_mu6_SiTrk;
   Bool_t          EF_mu6_Trk_Jpsi;
   Bool_t          EF_mu6_Upsimumu_FS;
   Bool_t          EF_mu6_muCombTag;
   Bool_t          EF_tau125_loose;
   Bool_t          EF_tau125_medium;
   Bool_t          EF_tau12_IDTrkNoCut;
   Bool_t          EF_tau12_loose;
   Bool_t          EF_tau12_loose_2b15;
   Bool_t          EF_tau12_loose_3j35;
   Bool_t          EF_tau12_loose_3j35_jetNoEF;
   Bool_t          EF_tau12_loose_EFxe12_noMu;
   Bool_t          EF_tau12_loose_IdScan_EFxe12_noMu;
   Bool_t          EF_tau12_loose_IdScan_xe15_noMu;
   Bool_t          EF_tau12_loose_e10_loose;
   Bool_t          EF_tau12_loose_e10_medium;
   Bool_t          EF_tau12_loose_e10_tight;
   Bool_t          EF_tau12_loose_mu10;
   Bool_t          EF_tau12_loose_xe15_noMu;
   Bool_t          EF_tau12_loose_xe20_noMu;
   Bool_t          EF_tau16_loose;
   Bool_t          EF_tau16_loose_2b15;
   Bool_t          EF_tau16_loose_3j35;
   Bool_t          EF_tau16_loose_3j35_jetNoEF;
   Bool_t          EF_tau16_loose_e10_loose;
   Bool_t          EF_tau16_loose_e15_loose;
   Bool_t          EF_tau16_loose_mu10;
   Bool_t          EF_tau16_loose_mu15;
   Bool_t          EF_tau16_loose_xe20_noMu;
   Bool_t          EF_tau16_loose_xe25_noMu;
   Bool_t          EF_tau16_loose_xe25_tight_noMu;
   Bool_t          EF_tau16_loose_xe30_noMu;
   Bool_t          EF_tau16_medium;
   Bool_t          EF_tau16_medium_xe22_noMu;
   Bool_t          EF_tau16_medium_xe25_noMu;
   Bool_t          EF_tau16_medium_xe25_tight_noMu;
   Bool_t          EF_tau20_loose;
   Bool_t          EF_tau20_loose_xe25_noMu;
   Bool_t          EF_tau29_loose;
   Bool_t          EF_tau29_loose1;
   Bool_t          EF_tau38_loose;
   Bool_t          EF_tau38_medium;
   Bool_t          EF_tau50_IDTrkNoCut;
   Bool_t          EF_tau50_loose;
   Bool_t          EF_tau50_loose_IdScan;
   Bool_t          EF_tau50_medium;
   Bool_t          EF_tau84_loose;
   Bool_t          EF_tau84_medium;
   Bool_t          EF_tauNoCut;
   Bool_t          EF_tauNoCut_IdScan;
   Bool_t          EF_tauNoCut_cosmic;
   Bool_t          EF_tauNoCut_firstempty;
   Bool_t          EF_tauNoCut_hasTrk6_EFxe15_noMu;
   Bool_t          EF_tauNoCut_hasTrk6_IdScan_EFxe15_noMu;
   Bool_t          EF_tauNoCut_hasTrk6_IdScan_xe20_noMu;
   Bool_t          EF_tauNoCut_hasTrk6_xe20_noMu;
   Bool_t          EF_tauNoCut_hasTrk9_xe20_noMu;
   Bool_t          EF_tauNoCut_hasTrk_MV;
   Bool_t          EF_tauNoCut_hasTrk_e10_tight;
   Bool_t          EF_tauNoCut_hasTrk_xe20_noMu;
   Bool_t          EF_tauNoCut_unpaired_iso;
   Bool_t          EF_tauNoCut_unpaired_noniso;
   Bool_t          EF_xe15;
   Bool_t          EF_xe15_noMu;
   Bool_t          EF_xe15_unbiased_noMu;
   Bool_t          EF_xe20;
   Bool_t          EF_xe20_noMu;
   Bool_t          EF_xe20_tight_noMu;
   Bool_t          EF_xe20_tight_vfj_noMu;
   Bool_t          EF_xe25;
   Bool_t          EF_xe25_medium;
   Bool_t          EF_xe25_medium_noMu;
   Bool_t          EF_xe25_noMu;
   Bool_t          EF_xe25_tight_noMu;
   Bool_t          EF_xe25_tight_vfj_noMu;
   Bool_t          EF_xe25_vfj_noMu;
   Bool_t          EF_xe30;
   Bool_t          EF_xe30_allL1;
   Bool_t          EF_xe30_allL1_FEB;
   Bool_t          EF_xe30_allL1_allCells;
   Bool_t          EF_xe30_allL1_noMu;
   Bool_t          EF_xe30_loose;
   Bool_t          EF_xe30_loose_noMu;
   Bool_t          EF_xe30_medium;
   Bool_t          EF_xe30_medium_noMu;
   Bool_t          EF_xe30_medium_vfj_noMu;
   Bool_t          EF_xe30_noMu;
   Bool_t          EF_xe30_tight_noMu;
   Bool_t          EF_xe30_tight_vfj_noMu;
   Bool_t          EF_xe30_vfj_noMu;
   Bool_t          EF_xe35;
   Bool_t          EF_xe35_loose_noMu;
   Bool_t          EF_xe35_noMu;
   Bool_t          EF_xe35_tight_noMu;
   Bool_t          EF_xe40;
   Bool_t          EF_xe40_noMu;
   Bool_t          EF_xe40_tight_noMu;
   Bool_t          EF_xe45;
   Bool_t          EF_xe45_noMu;
   Bool_t          EF_xe55;
   Bool_t          EF_xe55_noMu;
   Bool_t          EF_xe60_medium;
   Bool_t          EF_xe60_medium_noMu;
   Bool_t          EF_xe80_medium;
   Bool_t          EF_xe80_medium_noMu;
   Bool_t          L1_2EM10;
   Bool_t          L1_2EM14;
   Bool_t          L1_2EM2;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM5;
   Bool_t          L1_2J10;
   Bool_t          L1_2J10_J30;
   Bool_t          L1_2J10_J55;
   Bool_t          L1_2J15;
   Bool_t          L1_2J15_J75;
   Bool_t          L1_2J15_XE10;
   Bool_t          L1_2J15_XE15;
   Bool_t          L1_2J15_XE25;
   Bool_t          L1_2J30;
   Bool_t          L1_2J5;
   Bool_t          L1_2J55;
   Bool_t          L1_2J95;
   Bool_t          L1_2MU0;
   Bool_t          L1_2MU0_FIRSTEMPTY;
   Bool_t          L1_2MU0_MU6;
   Bool_t          L1_2MU10;
   Bool_t          L1_2MU20;
   Bool_t          L1_2MU6;
   Bool_t          L1_2MU6_EM5;
   Bool_t          L1_2TAU11;
   Bool_t          L1_2TAU5;
   Bool_t          L1_2TAU5_EM5;
   Bool_t          L1_2TAU6;
   Bool_t          L1_2TAU6_EM10;
   Bool_t          L1_2TAU6_EM5;
   Bool_t          L1_3J10;
   Bool_t          L1_3J10_2J30;
   Bool_t          L1_3J15;
   Bool_t          L1_3J30;
   Bool_t          L1_3J5_J30;
   Bool_t          L1_4J10;
   Bool_t          L1_4J10_3J15;
   Bool_t          L1_4J10_EM10;
   Bool_t          L1_4J10_MU15;
   Bool_t          L1_4J15;
   Bool_t          L1_4J30;
   Bool_t          L1_4J5;
   Bool_t          L1_4J5_J15;
   Bool_t          L1_4J5_J30;
   Bool_t          L1_EM10;
   Bool_t          L1_EM10I;
   Bool_t          L1_EM14;
   Bool_t          L1_EM14I;
   Bool_t          L1_EM14_XE10;
   Bool_t          L1_EM14_XE15;
   Bool_t          L1_EM2;
   Bool_t          L1_EM2_UNPAIRED_ISO;
   Bool_t          L1_EM2_UNPAIRED_NONISO;
   Bool_t          L1_EM3;
   Bool_t          L1_EM3_EMPTY;
   Bool_t          L1_EM3_FIRSTEMPTY;
   Bool_t          L1_EM3_MV;
   Bool_t          L1_EM5;
   Bool_t          L1_EM5_MU10;
   Bool_t          L1_EM5_MU6;
   Bool_t          L1_EM85;
   Bool_t          L1_J10;
   Bool_t          L1_J10_EMPTY;
   Bool_t          L1_J10_FIRSTEMPTY;
   Bool_t          L1_J10_FJ10;
   Bool_t          L1_J10_MV;
   Bool_t          L1_J10_UNPAIRED;
   Bool_t          L1_J115;
   Bool_t          L1_J15;
   Bool_t          L1_J15_MV;
   Bool_t          L1_J15_XE15_EM10;
   Bool_t          L1_J15_XE15_MU15;
   Bool_t          L1_J30;
   Bool_t          L1_J30_EMPTY;
   Bool_t          L1_J30_FIRSTEMPTY;
   Bool_t          L1_J30_UNPAIRED;
   Bool_t          L1_J30_XE10;
   Bool_t          L1_J30_XE15;
   Bool_t          L1_J30_XE25;
   Bool_t          L1_J5;
   Bool_t          L1_J55;
   Bool_t          L1_J5_EMPTY;
   Bool_t          L1_J5_FIRSTEMPTY;
   Bool_t          L1_J5_UNPAIRED_ISO;
   Bool_t          L1_J5_UNPAIRED_NONISO;
   Bool_t          L1_J75;
   Bool_t          L1_J95;
   Bool_t          L1_JE100;
   Bool_t          L1_JE140;
   Bool_t          L1_JE200;
   Bool_t          L1_JE60;
   Bool_t          L1_MU0;
   Bool_t          L1_MU0_COMM;
   Bool_t          L1_MU0_COMM_EMPTY;
   Bool_t          L1_MU0_COMM_FIRSTEMPTY;
   Bool_t          L1_MU0_COMM_UNPAIRED_ISO;
   Bool_t          L1_MU0_COMM_UNPAIRED_NONISO;
   Bool_t          L1_MU0_EM3;
   Bool_t          L1_MU0_EMPTY;
   Bool_t          L1_MU0_FIRSTEMPTY;
   Bool_t          L1_MU0_J10;
   Bool_t          L1_MU0_J15;
   Bool_t          L1_MU0_J30;
   Bool_t          L1_MU0_J5;
   Bool_t          L1_MU0_J55;
   Bool_t          L1_MU0_MV;
   Bool_t          L1_MU0_UNPAIRED_ISO;
   Bool_t          L1_MU0_UNPAIRED_NONISO;
   Bool_t          L1_MU10;
   Bool_t          L1_MU10_FIRSTEMPTY;
   Bool_t          L1_MU10_J10;
   Bool_t          L1_MU15;
   Bool_t          L1_MU20;
   Bool_t          L1_MU6;
   Bool_t          L1_MU6_EM3;
   Bool_t          L1_MU6_FIRSTEMPTY;
   Bool_t          L1_MU6_J5;
   Bool_t          L1_TAU11;
   Bool_t          L1_TAU11I;
   Bool_t          L1_TAU20;
   Bool_t          L1_TAU30;
   Bool_t          L1_TAU5;
   Bool_t          L1_TAU50;
   Bool_t          L1_TAU5_3J5_2J15;
   Bool_t          L1_TAU5_4J5_3J15;
   Bool_t          L1_TAU5_EMPTY;
   Bool_t          L1_TAU5_FIRSTEMPTY;
   Bool_t          L1_TAU5_MU6;
   Bool_t          L1_TAU5_MV;
   Bool_t          L1_TAU5_UNPAIRED_ISO;
   Bool_t          L1_TAU5_UNPAIRED_NONISO;
   Bool_t          L1_TAU5_XE10;
   Bool_t          L1_TAU6;
   Bool_t          L1_TAU6I;
   Bool_t          L1_TAU6_3J5_2J15;
   Bool_t          L1_TAU6_4J5_3J15;
   Bool_t          L1_TAU6_MU10;
   Bool_t          L1_TAU6_MU15;
   Bool_t          L1_TAU6_XE10;
   Bool_t          L1_XE10;
   Bool_t          L1_XE15;
   Bool_t          L1_XE20;
   Bool_t          L1_XE25;
   Bool_t          L1_XE30;
   Bool_t          L1_XE35;
   Bool_t          L1_XE40;
   Bool_t          L1_XE50;
   Bool_t          L2_2e10_loose;
   Bool_t          L2_2e10_medium;
   Bool_t          L2_2e15_loose;
   Bool_t          L2_2e3_loose;
   Bool_t          L2_2e3_loose_SiTrk;
   Bool_t          L2_2e3_loose_TRT;
   Bool_t          L2_2e3_medium;
   Bool_t          L2_2e3_medium_SiTrk;
   Bool_t          L2_2e3_medium_TRT;
   Bool_t          L2_2e3_tight;
   Bool_t          L2_2e5_medium;
   Bool_t          L2_2e5_medium_SiTrk;
   Bool_t          L2_2e5_medium_TRT;
   Bool_t          L2_2e5_tight;
   Bool_t          L2_2j30_xe12_noMu;
   Bool_t          L2_2j30_xe20_noMu;
   Bool_t          L2_2j30_xe30_noMu;
   Bool_t          L2_2j35_jetNoEF_xe20_noMu;
   Bool_t          L2_2j35_jetNoEF_xe30_noMu;
   Bool_t          L2_2j35_jetNoEF_xe40_noMu;
   Bool_t          L2_2mu0_NoAlg;
   Bool_t          L2_2mu10;
   Bool_t          L2_2mu10_NoAlg;
   Bool_t          L2_2mu4;
   Bool_t          L2_2mu4_Bmumu;
   Bool_t          L2_2mu4_Bmumux;
   Bool_t          L2_2mu4_DiMu;
   Bool_t          L2_2mu4_DiMu_SiTrk;
   Bool_t          L2_2mu4_DiMu_noVtx;
   Bool_t          L2_2mu4_DiMu_noVtx_noOS;
   Bool_t          L2_2mu4_Jpsimumu;
   Bool_t          L2_2mu4_Jpsimumu_IDTrkNoCut;
   Bool_t          L2_2mu4_Upsimumu;
   Bool_t          L2_2mu6;
   Bool_t          L2_2mu6_Bmumu;
   Bool_t          L2_2mu6_Bmumux;
   Bool_t          L2_2mu6_DiMu;
   Bool_t          L2_2mu6_Jpsimumu;
   Bool_t          L2_2mu6_MG;
   Bool_t          L2_2mu6_NoAlg;
   Bool_t          L2_2mu6_Upsimumu;
   Bool_t          L2_2mu6_g10_loose;
   Bool_t          L2_2tau12_loose;
   Bool_t          L2_2tau16_loose;
   Bool_t          L2_2tau20_loose;
   Bool_t          L2_2tau29_loose;
   Bool_t          L2_2tau29_loose1;
   Bool_t          L2_2tau38_loose;
   Bool_t          L2_e10_NoCut;
   Bool_t          L2_e10_loose;
   Bool_t          L2_e10_loose_mu10;
   Bool_t          L2_e10_loose_mu6;
   Bool_t          L2_e10_medium;
   Bool_t          L2_e10_medium_IDTrkNoCut;
   Bool_t          L2_e10_medium_SiTrk;
   Bool_t          L2_e10_medium_TRT;
   Bool_t          L2_e10_tight;
   Bool_t          L2_e10_tight_TRT;
   Bool_t          L2_e15_loose;
   Bool_t          L2_e15_loose_IDTrkNoCut;
   Bool_t          L2_e15_medium;
   Bool_t          L2_e15_medium_SiTrk;
   Bool_t          L2_e15_medium_TRT;
   Bool_t          L2_e15_tight;
   Bool_t          L2_e15_tight_TRT;
   Bool_t          L2_e18_medium;
   Bool_t          L2_e20_loose;
   Bool_t          L2_e20_loose_IDTrkNoCut;
   Bool_t          L2_e20_loose_TRT;
   Bool_t          L2_e20_loose_passEF;
   Bool_t          L2_e20_loose_passL2;
   Bool_t          L2_e20_loose_xe20;
   Bool_t          L2_e20_loose_xe20_noMu;
   Bool_t          L2_e20_loose_xe30;
   Bool_t          L2_e20_loose_xe30_noMu;
   Bool_t          L2_e20_medium;
   Bool_t          L2_e25_loose;
   Bool_t          L2_e25_medium;
   Bool_t          L2_e30_loose;
   Bool_t          L2_e3_loose;
   Bool_t          L2_e3_loose_SiTrk;
   Bool_t          L2_e3_loose_TRT;
   Bool_t          L2_e3_medium;
   Bool_t          L2_e3_medium_SiTrk;
   Bool_t          L2_e3_medium_TRT;
   Bool_t          L2_e5_NoCut_L2SW;
   Bool_t          L2_e5_NoCut_Ringer;
   Bool_t          L2_e5_NoCut_firstempty;
   Bool_t          L2_e5_loose_mu4;
   Bool_t          L2_e5_medium;
   Bool_t          L2_e5_medium_MV;
   Bool_t          L2_e5_medium_SiTrk;
   Bool_t          L2_e5_medium_TRT;
   Bool_t          L2_e5_medium_mu4;
   Bool_t          L2_e5_tight;
   Bool_t          L2_e5_tight_SiTrk;
   Bool_t          L2_e5_tight_TRT;
   Bool_t          L2_e5_tight_e5_NoCut;
   Bool_t          L2_em105_passHLT;
   Bool_t          L2_em3_empty_larcalib;
   Bool_t          L2_g20_loose_xe20_noMu;
   Bool_t          L2_g20_loose_xe30_noMu;
   Bool_t          L2_g25_loose_xe30_noMu;
   Bool_t          L2_j30_jetNoCut_xe20_e15_medium;
   Bool_t          L2_j30_xe20_e15_medium;
   Bool_t          L2_j35_jetNoCut_xe30_mu15;
   Bool_t          L2_j35_xe30_mu15;
   Bool_t          L2_j45_xe12_noMu;
   Bool_t          L2_j45_xe20_noMu;
   Bool_t          L2_j45_xe30_noMu;
   Bool_t          L2_mu0_NoAlg;
   Bool_t          L2_mu0_comm_NoAlg;
   Bool_t          L2_mu0_comm_empty_NoAlg;
   Bool_t          L2_mu0_comm_firstempty_NoAlg;
   Bool_t          L2_mu0_comm_unpaired_iso_NoAlg;
   Bool_t          L2_mu0_comm_unpaired_noniso_NoAlg;
   Bool_t          L2_mu0_empty_NoAlg;
   Bool_t          L2_mu0_firstempty_NoAlg;
   Bool_t          L2_mu0_missingRoi;
   Bool_t          L2_mu0_outOfTime1;
   Bool_t          L2_mu0_outOfTime2;
   Bool_t          L2_mu0_rpcOnly;
   Bool_t          L2_mu0_unpaired_iso_NoAlg;
   Bool_t          L2_mu0_unpaired_noniso_NoAlg;
   Bool_t          L2_mu10;
   Bool_t          L2_mu10_Ecut12;
   Bool_t          L2_mu10_Ecut123;
   Bool_t          L2_mu10_Ecut13;
   Bool_t          L2_mu10_IDTrkNoCut;
   Bool_t          L2_mu10_MG;
   Bool_t          L2_mu10_MSonly;
   Bool_t          L2_mu10_MSonly_Ecut12;
   Bool_t          L2_mu10_MSonly_Ecut123;
   Bool_t          L2_mu10_MSonly_Ecut13;
   Bool_t          L2_mu10_MSonly_tight;
   Bool_t          L2_mu10_NoAlg;
   Bool_t          L2_mu10_SiTrk;
   Bool_t          L2_mu10_j30;
   Bool_t          L2_mu10_tight;
   Bool_t          L2_mu10i_loose;
   Bool_t          L2_mu13;
   Bool_t          L2_mu13_MG;
   Bool_t          L2_mu13_MG_tight;
   Bool_t          L2_mu13_tight;
   Bool_t          L2_mu15;
   Bool_t          L2_mu15_MG;
   Bool_t          L2_mu15_NoAlg;
   Bool_t          L2_mu20;
   Bool_t          L2_mu20_MSonly;
   Bool_t          L2_mu20_NoAlg;
   Bool_t          L2_mu20_passHLT;
   Bool_t          L2_mu20_slow;
   Bool_t          L2_mu30_MSonly;
   Bool_t          L2_mu4;
   Bool_t          L2_mu40_MSonly;
   Bool_t          L2_mu4_Bmumu;
   Bool_t          L2_mu4_BmumuX;
   Bool_t          L2_mu4_DiMu;
   Bool_t          L2_mu4_DiMu_FS;
   Bool_t          L2_mu4_DiMu_FS_noOS;
   Bool_t          L2_mu4_DiMu_MG;
   Bool_t          L2_mu4_DiMu_MG_FS;
   Bool_t          L2_mu4_DiMu_SiTrk;
   Bool_t          L2_mu4_DiMu_SiTrk_FS;
   Bool_t          L2_mu4_DiMu_noOS;
   Bool_t          L2_mu4_IDTrkNoCut;
   Bool_t          L2_mu4_Jpsie5e3;
   Bool_t          L2_mu4_Jpsie5e3_FS;
   Bool_t          L2_mu4_Jpsie5e3_SiTrk;
   Bool_t          L2_mu4_Jpsie5e3_SiTrk_FS;
   Bool_t          L2_mu4_Jpsimumu;
   Bool_t          L2_mu4_Jpsimumu_FS;
   Bool_t          L2_mu4_Jpsimumu_SiTrk_FS;
   Bool_t          L2_mu4_L1J10_matched;
   Bool_t          L2_mu4_L1J15_matched;
   Bool_t          L2_mu4_L1J30_matched;
   Bool_t          L2_mu4_L1J55_matched;
   Bool_t          L2_mu4_L1J5_matched;
   Bool_t          L2_mu4_L2MSonly_EFFS_passL2;
   Bool_t          L2_mu4_MG;
   Bool_t          L2_mu4_MSonly;
   Bool_t          L2_mu4_MSonly_EFFS_passL2;
   Bool_t          L2_mu4_MSonly_MB2_noL2_EFFS;
   Bool_t          L2_mu4_MSonly_cosmic;
   Bool_t          L2_mu4_MSonly_outOfTime;
   Bool_t          L2_mu4_MV;
   Bool_t          L2_mu4_SiTrk;
   Bool_t          L2_mu4_Trk_Jpsi;
   Bool_t          L2_mu4_Trk_Jpsi_FS;
   Bool_t          L2_mu4_Trk_Jpsi_loose;
   Bool_t          L2_mu4_Trk_Upsi_FS;
   Bool_t          L2_mu4_Trk_Upsi_loose_FS;
   Bool_t          L2_mu4_Upsimumu_FS;
   Bool_t          L2_mu4_Upsimumu_SiTrk_FS;
   Bool_t          L2_mu4_comm_MSonly_cosmic;
   Bool_t          L2_mu4_comm_cosmic;
   Bool_t          L2_mu4_comm_firstempty;
   Bool_t          L2_mu4_comm_unpaired_iso;
   Bool_t          L2_mu4_cosmic;
   Bool_t          L2_mu4_firstempty;
   Bool_t          L2_mu4_j20;
   Bool_t          L2_mu4_j20_jetNoEF;
   Bool_t          L2_mu4_j25;
   Bool_t          L2_mu4_mu6;
   Bool_t          L2_mu4_muCombTag;
   Bool_t          L2_mu4_tile;
   Bool_t          L2_mu4_tile_cosmic;
   Bool_t          L2_mu4_unpaired_iso;
   Bool_t          L2_mu4mu6_Bmumu;
   Bool_t          L2_mu4mu6_BmumuX;
   Bool_t          L2_mu4mu6_DiMu;
   Bool_t          L2_mu4mu6_Jpsimumu;
   Bool_t          L2_mu4mu6_Jpsimumu_IDTrkNoCut;
   Bool_t          L2_mu4mu6_Upsimumu;
   Bool_t          L2_mu6;
   Bool_t          L2_mu6_Bmumu;
   Bool_t          L2_mu6_BmumuX;
   Bool_t          L2_mu6_DiMu;
   Bool_t          L2_mu6_Ecut12;
   Bool_t          L2_mu6_Ecut123;
   Bool_t          L2_mu6_Ecut13;
   Bool_t          L2_mu6_Ecut2;
   Bool_t          L2_mu6_Ecut3;
   Bool_t          L2_mu6_IDTrkNoCut;
   Bool_t          L2_mu6_Jpsie5e3;
   Bool_t          L2_mu6_Jpsie5e3_FS;
   Bool_t          L2_mu6_Jpsie5e3_SiTrk;
   Bool_t          L2_mu6_Jpsie5e3_SiTrk_FS;
   Bool_t          L2_mu6_Jpsimumu;
   Bool_t          L2_mu6_MG;
   Bool_t          L2_mu6_MSonly;
   Bool_t          L2_mu6_MSonly_Ecut12;
   Bool_t          L2_mu6_MSonly_Ecut123;
   Bool_t          L2_mu6_MSonly_Ecut13;
   Bool_t          L2_mu6_MSonly_Ecut2;
   Bool_t          L2_mu6_MSonly_Ecut3;
   Bool_t          L2_mu6_MSonly_outOfTime;
   Bool_t          L2_mu6_NoAlg;
   Bool_t          L2_mu6_SiTrk;
   Bool_t          L2_mu6_Trk_Jpsi;
   Bool_t          L2_mu6_Upsimumu_FS;
   Bool_t          L2_mu6_muCombTag;
   Bool_t          L2_tau125_loose;
   Bool_t          L2_tau125_medium;
   Bool_t          L2_tau12_IDTrkNoCut;
   Bool_t          L2_tau12_loose;
   Bool_t          L2_tau12_loose_2b15;
   Bool_t          L2_tau12_loose_3j30;
   Bool_t          L2_tau12_loose_EFxe12_noMu;
   Bool_t          L2_tau12_loose_IdScan_EFxe12_noMu;
   Bool_t          L2_tau12_loose_IdScan_xe15_noMu;
   Bool_t          L2_tau12_loose_e10_loose;
   Bool_t          L2_tau12_loose_e10_medium;
   Bool_t          L2_tau12_loose_e10_tight;
   Bool_t          L2_tau12_loose_mu10;
   Bool_t          L2_tau12_loose_xe15_noMu;
   Bool_t          L2_tau12_loose_xe20_noMu;
   Bool_t          L2_tau16_loose;
   Bool_t          L2_tau16_loose_2b15;
   Bool_t          L2_tau16_loose_3j30;
   Bool_t          L2_tau16_loose_e10_loose;
   Bool_t          L2_tau16_loose_e15_loose;
   Bool_t          L2_tau16_loose_mu10;
   Bool_t          L2_tau16_loose_mu15;
   Bool_t          L2_tau16_loose_xe20_noMu;
   Bool_t          L2_tau16_loose_xe25_noMu;
   Bool_t          L2_tau16_loose_xe25_tight_noMu;
   Bool_t          L2_tau16_loose_xe30_noMu;
   Bool_t          L2_tau16_medium;
   Bool_t          L2_tau16_medium_xe22_noMu;
   Bool_t          L2_tau16_medium_xe25_noMu;
   Bool_t          L2_tau16_medium_xe25_tight_noMu;
   Bool_t          L2_tau20_loose;
   Bool_t          L2_tau20_loose_xe25_noMu;
   Bool_t          L2_tau29_loose;
   Bool_t          L2_tau29_loose1;
   Bool_t          L2_tau38_loose;
   Bool_t          L2_tau38_medium;
   Bool_t          L2_tau50_IDTrkNoCut;
   Bool_t          L2_tau50_loose;
   Bool_t          L2_tau50_loose_IdScan;
   Bool_t          L2_tau50_medium;
   Bool_t          L2_tau5_empty_larcalib;
   Bool_t          L2_tau84_loose;
   Bool_t          L2_tau84_medium;
   Bool_t          L2_tauNoCut;
   Bool_t          L2_tauNoCut_IdScan;
   Bool_t          L2_tauNoCut_cosmic;
   Bool_t          L2_tauNoCut_firstempty;
   Bool_t          L2_tauNoCut_hasTrk6_EFxe15_noMu;
   Bool_t          L2_tauNoCut_hasTrk6_IdScan_EFxe15_noMu;
   Bool_t          L2_tauNoCut_hasTrk6_IdScan_xe20_noMu;
   Bool_t          L2_tauNoCut_hasTrk6_xe20_noMu;
   Bool_t          L2_tauNoCut_hasTrk9_xe20_noMu;
   Bool_t          L2_tauNoCut_hasTrk_MV;
   Bool_t          L2_tauNoCut_hasTrk_e10_tight;
   Bool_t          L2_tauNoCut_hasTrk_xe20_noMu;
   Bool_t          L2_tauNoCut_unpaired_iso;
   Bool_t          L2_tauNoCut_unpaired_noniso;
   Bool_t          L2_xe12;
   Bool_t          L2_xe12_loose;
   Bool_t          L2_xe12_loose_noMu;
   Bool_t          L2_xe12_medium;
   Bool_t          L2_xe12_medium_noMu;
   Bool_t          L2_xe12_noMu;
   Bool_t          L2_xe15;
   Bool_t          L2_xe15_medium;
   Bool_t          L2_xe15_medium_noMu;
   Bool_t          L2_xe15_medium_vfj_noMu;
   Bool_t          L2_xe15_noMu;
   Bool_t          L2_xe15_tight_noMu;
   Bool_t          L2_xe15_tight_vfj_noMu;
   Bool_t          L2_xe15_unbiased_noMu;
   Bool_t          L2_xe15_vfj_noMu;
   Bool_t          L2_xe17_tight_noMu;
   Bool_t          L2_xe17_tight_vfj_noMu;
   Bool_t          L2_xe20;
   Bool_t          L2_xe20_noMu;
   Bool_t          L2_xe20_vfj_noMu;
   Bool_t          L2_xe22_loose_noMu;
   Bool_t          L2_xe22_tight_noMu;
   Bool_t          L2_xe22_tight_vfj_noMu;
   Bool_t          L2_xe25;
   Bool_t          L2_xe25_noMu;
   Bool_t          L2_xe27_tight_noMu;
   Bool_t          L2_xe30;
   Bool_t          L2_xe30_allL1;
   Bool_t          L2_xe30_allL1_FEB;
   Bool_t          L2_xe30_allL1_allCells;
   Bool_t          L2_xe30_allL1_noMu;
   Bool_t          L2_xe30_noMu;
   Bool_t          L2_xe32_tight_noMu;
   Bool_t          L2_xe35;
   Bool_t          L2_xe35_noMu;
   Bool_t          L2_xe40_medium;
   Bool_t          L2_xe40_medium_noMu;
   Bool_t          L2_xe45;
   Bool_t          L2_xe45_noMu;
   Bool_t          L2_xe60_medium;
   Bool_t          L2_xe60_medium_noMu;
   Int_t           evt_calcVars_numGoodVertices;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<unsigned int> *el_OQ;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<unsigned int> *el_OQRecalc;
   vector<int>     *el_type;
   vector<int>     *el_origin;
   vector<int>     *el_typebkg;
   vector<int>     *el_originbkg;
   vector<float>   *el_truth_E;
   vector<float>   *el_truth_pt;
   vector<float>   *el_truth_eta;
   vector<float>   *el_truth_phi;
   vector<int>     *el_truth_type;
   vector<int>     *el_truth_status;
   vector<int>     *el_truth_barcode;
   vector<int>     *el_truth_mothertype;
   vector<int>     *el_truth_motherbarcode;
   vector<int>     *el_truth_hasHardBrem;
   vector<int>     *el_truth_index;
   vector<int>     *el_truth_matched;
   vector<int>     *el_loose;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<int>     *el_goodOQ;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone15;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone25;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone35;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone20;
   vector<float>   *el_ptcone30;
   vector<float>   *el_ptcone40;
   vector<float>   *el_nucone20;
   vector<float>   *el_nucone30;
   vector<float>   *el_nucone40;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<int>     *el_hasconv;
   vector<float>   *el_convvtxx;
   vector<float>   *el_convvtxy;
   vector<float>   *el_convvtxz;
   vector<float>   *el_Rconv;
   vector<float>   *el_zconv;
   vector<float>   *el_convvtxchi2;
   vector<float>   *el_pt1conv;
   vector<int>     *el_convtrk1nBLHits;
   vector<int>     *el_convtrk1nPixHits;
   vector<int>     *el_convtrk1nSCTHits;
   vector<int>     *el_convtrk1nTRTHits;
   vector<float>   *el_pt2conv;
   vector<int>     *el_convtrk2nBLHits;
   vector<int>     *el_convtrk2nPixHits;
   vector<int>     *el_convtrk2nSCTHits;
   vector<int>     *el_convtrk2nTRTHits;
   vector<float>   *el_ptconv;
   vector<float>   *el_pzconv;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<int>     *el_refittedTrack_n;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_rawcl_E;
   vector<float>   *el_rawcl_pt;
   vector<float>   *el_rawcl_eta;
   vector<float>   *el_rawcl_phi;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_TRTHighTHitsRatioOutliers;
   vector<float>   *el_pixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_EF_dr;
   vector<int>     *el_EF_index;
   vector<float>   *el_L2_dr;
   vector<int>     *el_L2_index;
   vector<float>   *el_L1_dr;
   vector<int>     *el_L1_index;
   Int_t           ph_n;
   vector<float>   *ph_E;
   vector<float>   *ph_Et;
   vector<float>   *ph_pt;
   vector<float>   *ph_m;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_px;
   vector<float>   *ph_py;
   vector<float>   *ph_pz;
   vector<int>     *ph_author;
   vector<int>     *ph_isRecovered;
   vector<unsigned int> *ph_isEM;
   vector<unsigned int> *ph_OQ;
   vector<unsigned int> *ph_OQRecalc;
   vector<int>     *ph_convFlag;
   vector<int>     *ph_isConv;
   vector<int>     *ph_nConv;
   vector<int>     *ph_nSingleTrackConv;
   vector<int>     *ph_nDoubleTrackConv;
   vector<float>   *ph_truth_deltaRRecPhoton;
   vector<float>   *ph_truth_E;
   vector<float>   *ph_truth_pt;
   vector<float>   *ph_truth_eta;
   vector<float>   *ph_truth_phi;
   vector<int>     *ph_truth_type;
   vector<int>     *ph_truth_status;
   vector<int>     *ph_truth_barcode;
   vector<int>     *ph_truth_mothertype;
   vector<int>     *ph_truth_motherbarcode;
   vector<int>     *ph_truth_index;
   vector<int>     *ph_truth_matched;
   vector<int>     *ph_loose;
   vector<int>     *ph_tight;
   vector<int>     *ph_tightIso;
   vector<int>     *ph_goodOQ;
   vector<float>   *ph_Ethad;
   vector<float>   *ph_Ethad1;
   vector<float>   *ph_f1;
   vector<float>   *ph_f1core;
   vector<float>   *ph_Emins1;
   vector<float>   *ph_fside;
   vector<float>   *ph_Emax2;
   vector<float>   *ph_ws3;
   vector<float>   *ph_wstot;
   vector<float>   *ph_E132;
   vector<float>   *ph_E1152;
   vector<float>   *ph_emaxs1;
   vector<float>   *ph_E233;
   vector<float>   *ph_E237;
   vector<float>   *ph_E277;
   vector<float>   *ph_weta2;
   vector<float>   *ph_rphiallcalo;
   vector<float>   *ph_Etcone45;
   vector<float>   *ph_Etcone15;
   vector<float>   *ph_Etcone20;
   vector<float>   *ph_Etcone25;
   vector<float>   *ph_Etcone30;
   vector<float>   *ph_Etcone35;
   vector<float>   *ph_Etcone40;
   vector<float>   *ph_ptcone20;
   vector<float>   *ph_ptcone30;
   vector<float>   *ph_ptcone40;
   vector<float>   *ph_nucone20;
   vector<float>   *ph_nucone30;
   vector<float>   *ph_nucone40;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
   vector<float>   *ph_Es0;
   vector<float>   *ph_etas0;
   vector<float>   *ph_phis0;
   vector<float>   *ph_Es1;
   vector<float>   *ph_etas1;
   vector<float>   *ph_phis1;
   vector<float>   *ph_Es2;
   vector<float>   *ph_etas2;
   vector<float>   *ph_phis2;
   vector<float>   *ph_Es3;
   vector<float>   *ph_etas3;
   vector<float>   *ph_phis3;
   vector<int>     *ph_truth_isConv;
   vector<int>     *ph_truth_isBrem;
   vector<int>     *ph_truth_isFromHardProc;
   vector<int>     *ph_truth_isPhotonFromHardProc;
   Int_t           cl_n;
   vector<float>   *cl_pt;
   vector<float>   *cl_eta;
   vector<float>   *cl_phi;
   Int_t           jet_n;
   vector<float>   *jet_E;
   vector<float>   *jet_pt;
   vector<float>   *jet_m;
   vector<float>   *jet_eta;
   vector<float>   *jet_phi;
   vector<float>   *jet_EtaOrigin;
   vector<float>   *jet_PhiOrigin;
   vector<float>   *jet_MOrigin;
   vector<float>   *jet_EtaOriginEM;
   vector<float>   *jet_PhiOriginEM;
   vector<float>   *jet_MOriginEM;
   vector<float>   *jet_WIDTH;
   vector<float>   *jet_n90;
   vector<float>   *jet_Timing;
   vector<float>   *jet_LArQuality;
   vector<float>   *jet_nTrk;
   vector<float>   *jet_sumPtTrk;
   vector<float>   *jet_OriginIndex;
   vector<float>   *jet_HECQuality;
   vector<float>   *jet_NegativeE;
   vector<float>   *jet_BCH_CORR_CELL;
   vector<float>   *jet_BCH_CORR_DOTX;
   vector<float>   *jet_BCH_CORR_JET;
   vector<float>   *jet_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_ENG_BAD_CELLS;
   vector<float>   *jet_N_BAD_CELLS;
   vector<float>   *jet_N_BAD_CELLS_CORR;
   vector<float>   *jet_BAD_CELLS_CORR_E;
   vector<int>     *jet_SamplingMax;
   vector<double>  *jet_fracSamplingMax;
   vector<float>   *jet_hecf;
   vector<float>   *jet_tgap3f;
   vector<int>     *jet_isUgly;
   vector<int>     *jet_isBadLoose;
   vector<int>     *jet_isBadTight;
   vector<float>   *jet_emfrac;
   vector<float>   *jet_Offset;
   vector<float>   *jet_EMJES;
   vector<float>   *jet_EMJES_EtaCorr;
   vector<float>   *jet_EMJESnooffset;
   vector<float>   *jet_GCWJES;
   vector<float>   *jet_GCWJES_EtaCorr;
   vector<float>   *jet_CB;
   vector<float>   *jet_emscale_E;
   vector<float>   *jet_emscale_pt;
   vector<float>   *jet_emscale_m;
   vector<float>   *jet_emscale_eta;
   vector<float>   *jet_emscale_phi;
   vector<double>  *jet_flavor_weight_TrackCounting2D;
   vector<double>  *jet_flavor_weight_JetProb;
   vector<double>  *jet_flavor_weight_IP1D;
   vector<double>  *jet_flavor_weight_IP2D;
   vector<double>  *jet_flavor_weight_IP3D;
   vector<double>  *jet_flavor_weight_SV0;
   vector<double>  *jet_flavor_weight_SV1;
   vector<double>  *jet_flavor_weight_SV2;
   vector<double>  *jet_flavor_weight_JetFitterTag;
   vector<double>  *jet_flavor_weight_JetFitterCOMB;
   vector<double>  *jet_flavor_weight_JetFitterTagNN;
   vector<double>  *jet_flavor_weight_JetFitterCOMBNN;
   vector<double>  *jet_flavor_weight_SoftMuonTag;
   vector<double>  *jet_flavor_weight_SoftElectronTag;
   vector<double>  *jet_flavor_weight_IP3DSV1;
   vector<float>   *jet_el_dr;
   vector<int>     *jet_el_matched;
   vector<float>   *jet_mu_dr;
   vector<int>     *jet_mu_matched;
   vector<float>   *jet_L1_dr;
   vector<int>     *jet_L1_matched;
   vector<float>   *jet_L2_dr;
   vector<int>     *jet_L2_matched;
   vector<float>   *jet_EF_dr;
   vector<int>     *jet_EF_matched;
   vector<vector<int> > *jet_elAssoc_index;
   vector<vector<int> > *jet_tauAssoc_index;
   vector<vector<int> > *jet_truthAssoc_index;
   Int_t           jet_AntiKt4TopoEM_n;
   vector<float>   *jet_AntiKt4TopoEM_E;
   vector<float>   *jet_AntiKt4TopoEM_pt;
   vector<float>   *jet_AntiKt4TopoEM_m;
   vector<float>   *jet_AntiKt4TopoEM_eta;
   vector<float>   *jet_AntiKt4TopoEM_phi;
   vector<float>   *jet_AntiKt4TopoEM_EtaOrigin;
   vector<float>   *jet_AntiKt4TopoEM_PhiOrigin;
   vector<float>   *jet_AntiKt4TopoEM_MOrigin;
   vector<float>   *jet_AntiKt4TopoEM_EtaOriginEM;
   vector<float>   *jet_AntiKt4TopoEM_PhiOriginEM;
   vector<float>   *jet_AntiKt4TopoEM_MOriginEM;
   vector<float>   *jet_AntiKt4TopoEM_WIDTH;
   vector<float>   *jet_AntiKt4TopoEM_n90;
   vector<float>   *jet_AntiKt4TopoEM_Timing;
   vector<float>   *jet_AntiKt4TopoEM_LArQuality;
   vector<float>   *jet_AntiKt4TopoEM_nTrk;
   vector<float>   *jet_AntiKt4TopoEM_sumPtTrk;
   vector<float>   *jet_AntiKt4TopoEM_OriginIndex;
   vector<float>   *jet_AntiKt4TopoEM_HECQuality;
   vector<float>   *jet_AntiKt4TopoEM_NegativeE;
   vector<float>   *jet_AntiKt4TopoEM_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4TopoEM_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4TopoEM_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4TopoEM_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEM_N_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEM_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt4TopoEM_BAD_CELLS_CORR_E;
   vector<int>     *jet_AntiKt4TopoEM_SamplingMax;
   vector<double>  *jet_AntiKt4TopoEM_fracSamplingMax;
   vector<float>   *jet_AntiKt4TopoEM_hecf;
   vector<float>   *jet_AntiKt4TopoEM_tgap3f;
   vector<int>     *jet_AntiKt4TopoEM_isUgly;
   vector<int>     *jet_AntiKt4TopoEM_isBadLoose;
   vector<int>     *jet_AntiKt4TopoEM_isBadTight;
   vector<float>   *jet_AntiKt4TopoEM_emfrac;
   vector<float>   *jet_AntiKt4TopoEM_Offset;
   vector<float>   *jet_AntiKt4TopoEM_EMJES;
   vector<float>   *jet_AntiKt4TopoEM_EMJES_EtaCorr;
   vector<float>   *jet_AntiKt4TopoEM_EMJESnooffset;
   vector<float>   *jet_AntiKt4TopoEM_GCWJES;
   vector<float>   *jet_AntiKt4TopoEM_GCWJES_EtaCorr;
   vector<float>   *jet_AntiKt4TopoEM_CB;
   vector<float>   *jet_AntiKt4TopoEM_emscale_E;
   vector<float>   *jet_AntiKt4TopoEM_emscale_pt;
   vector<float>   *jet_AntiKt4TopoEM_emscale_m;
   vector<float>   *jet_AntiKt4TopoEM_emscale_eta;
   vector<float>   *jet_AntiKt4TopoEM_emscale_phi;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_JetProb;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_IP1D;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_IP2D;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_IP3D;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_SV0;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_SV1;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_SV2;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_JetFitterTag;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag;
   vector<double>  *jet_AntiKt4TopoEM_flavor_weight_IP3DSV1;
   vector<float>   *jet_AntiKt4TopoEM_el_dr;
   vector<int>     *jet_AntiKt4TopoEM_el_matched;
   vector<float>   *jet_AntiKt4TopoEM_mu_dr;
   vector<int>     *jet_AntiKt4TopoEM_mu_matched;
   vector<float>   *jet_AntiKt4TopoEM_L1_dr;
   vector<int>     *jet_AntiKt4TopoEM_L1_matched;
   vector<float>   *jet_AntiKt4TopoEM_L2_dr;
   vector<int>     *jet_AntiKt4TopoEM_L2_matched;
   vector<float>   *jet_AntiKt4TopoEM_EF_dr;
   vector<int>     *jet_AntiKt4TopoEM_EF_matched;
   vector<vector<int> > *jet_AntiKt4TopoEM_elAssoc_index;
   vector<vector<int> > *jet_AntiKt4TopoEM_tauAssoc_index;
   vector<vector<int> > *jet_AntiKt4TopoEM_truthAssoc_index;
   Int_t           mu_muid_n;
   vector<float>   *mu_muid_E;
   vector<float>   *mu_muid_pt;
   vector<float>   *mu_muid_m;
   vector<float>   *mu_muid_eta;
   vector<float>   *mu_muid_phi;
   vector<float>   *mu_muid_px;
   vector<float>   *mu_muid_py;
   vector<float>   *mu_muid_pz;
   vector<float>   *mu_muid_charge;
   vector<unsigned short> *mu_muid_allauthor;
   vector<int>     *mu_muid_author;
   vector<float>   *mu_muid_beta;
   vector<float>   *mu_muid_isMuonLikelihood;
   vector<float>   *mu_muid_matchchi2;
   vector<int>     *mu_muid_matchndof;
   vector<float>   *mu_muid_etcone20;
   vector<float>   *mu_muid_etcone30;
   vector<float>   *mu_muid_etcone40;
   vector<float>   *mu_muid_nucone20;
   vector<float>   *mu_muid_nucone30;
   vector<float>   *mu_muid_nucone40;
   vector<float>   *mu_muid_ptcone20;
   vector<float>   *mu_muid_ptcone30;
   vector<float>   *mu_muid_ptcone40;
   vector<float>   *mu_muid_energyLossPar;
   vector<float>   *mu_muid_energyLossErr;
   vector<float>   *mu_muid_etCore;
   vector<float>   *mu_muid_energyLossType;
   vector<unsigned short> *mu_muid_caloMuonIdTag;
   vector<double>  *mu_muid_caloLRLikelihood;
   vector<int>     *mu_muid_bestMatch;
   vector<int>     *mu_muid_isStandAloneMuon;
   vector<int>     *mu_muid_isCombinedMuon;
   vector<int>     *mu_muid_isLowPtReconstructedMuon;
   vector<int>     *mu_muid_loose;
   vector<int>     *mu_muid_medium;
   vector<int>     *mu_muid_tight;
   vector<float>   *mu_muid_d0_exPV;
   vector<float>   *mu_muid_z0_exPV;
   vector<float>   *mu_muid_phi_exPV;
   vector<float>   *mu_muid_theta_exPV;
   vector<float>   *mu_muid_qoverp_exPV;
   vector<float>   *mu_muid_cb_d0_exPV;
   vector<float>   *mu_muid_cb_z0_exPV;
   vector<float>   *mu_muid_cb_phi_exPV;
   vector<float>   *mu_muid_cb_theta_exPV;
   vector<float>   *mu_muid_cb_qoverp_exPV;
   vector<float>   *mu_muid_id_d0_exPV;
   vector<float>   *mu_muid_id_z0_exPV;
   vector<float>   *mu_muid_id_phi_exPV;
   vector<float>   *mu_muid_id_theta_exPV;
   vector<float>   *mu_muid_id_qoverp_exPV;
   vector<float>   *mu_muid_me_d0_exPV;
   vector<float>   *mu_muid_me_z0_exPV;
   vector<float>   *mu_muid_me_phi_exPV;
   vector<float>   *mu_muid_me_theta_exPV;
   vector<float>   *mu_muid_me_qoverp_exPV;
   vector<float>   *mu_muid_ie_d0_exPV;
   vector<float>   *mu_muid_ie_z0_exPV;
   vector<float>   *mu_muid_ie_phi_exPV;
   vector<float>   *mu_muid_ie_theta_exPV;
   vector<float>   *mu_muid_ie_qoverp_exPV;
   vector<vector<int> > *mu_muid_SpaceTime_detID;
   vector<vector<float> > *mu_muid_SpaceTime_t;
   vector<vector<float> > *mu_muid_SpaceTime_tError;
   vector<vector<float> > *mu_muid_SpaceTime_weight;
   vector<vector<float> > *mu_muid_SpaceTime_x;
   vector<vector<float> > *mu_muid_SpaceTime_y;
   vector<vector<float> > *mu_muid_SpaceTime_z;
   vector<vector<float> > *mu_muid_SpaceTime_t_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_tError_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_weight_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_x_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_y_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_z_Tile;
   vector<vector<float> > *mu_muid_SpaceTime_t_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_tError_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_weight_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_x_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_y_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_z_TRT;
   vector<vector<float> > *mu_muid_SpaceTime_t_MDT;
   vector<vector<float> > *mu_muid_SpaceTime_tError_MDT;
   vector<vector<float> > *mu_muid_SpaceTime_weight_MDT;
   vector<vector<float> > *mu_muid_SpaceTime_x_MDT;
   vector<vector<float> > *mu_muid_SpaceTime_y_MDT;
   vector<vector<float> > *mu_muid_SpaceTime_z_MDT;
   vector<float>   *mu_muid_TileCellEnergyLayer1;
   vector<float>   *mu_muid_TileTimeLayer1;
   vector<float>   *mu_muid_TileCellRmsNoiseLayer1;
   vector<float>   *mu_muid_TileCellSignLayer1;
   vector<float>   *mu_muid_TileCellEnergyLayer2;
   vector<float>   *mu_muid_TileTimeLayer2;
   vector<float>   *mu_muid_TileCellRmsNoiseLayer2;
   vector<float>   *mu_muid_TileCellSignLayer2;
   vector<float>   *mu_muid_TileCellEnergyLayer3;
   vector<float>   *mu_muid_TileTimeLayer3;
   vector<float>   *mu_muid_TileCellRmsNoiseLayer3;
   vector<float>   *mu_muid_TileCellSignLayer3;
   vector<float>   *mu_muid_MSTrkT0_1;
   vector<float>   *mu_muid_MSTrkT0_2;
   vector<float>   *mu_muid_MSTrkT0_3;
   vector<float>   *mu_muid_cov_d0_exPV;
   vector<float>   *mu_muid_cov_z0_exPV;
   vector<float>   *mu_muid_cov_phi_exPV;
   vector<float>   *mu_muid_cov_theta_exPV;
   vector<float>   *mu_muid_cov_qoverp_exPV;
   vector<float>   *mu_muid_cov_d0_z0_exPV;
   vector<float>   *mu_muid_cov_d0_phi_exPV;
   vector<float>   *mu_muid_cov_d0_theta_exPV;
   vector<float>   *mu_muid_cov_d0_qoverp_exPV;
   vector<float>   *mu_muid_cov_z0_phi_exPV;
   vector<float>   *mu_muid_cov_z0_theta_exPV;
   vector<float>   *mu_muid_cov_z0_qoverp_exPV;
   vector<float>   *mu_muid_cov_phi_theta_exPV;
   vector<float>   *mu_muid_cov_phi_qoverp_exPV;
   vector<float>   *mu_muid_cov_theta_qoverp_exPV;
   vector<float>   *mu_muid_ms_d0;
   vector<float>   *mu_muid_ms_z0;
   vector<float>   *mu_muid_ms_phi;
   vector<float>   *mu_muid_ms_theta;
   vector<float>   *mu_muid_ms_qoverp;
   vector<float>   *mu_muid_id_d0;
   vector<float>   *mu_muid_id_z0;
   vector<float>   *mu_muid_id_phi;
   vector<float>   *mu_muid_id_theta;
   vector<float>   *mu_muid_id_qoverp;
   vector<float>   *mu_muid_me_d0;
   vector<float>   *mu_muid_me_z0;
   vector<float>   *mu_muid_me_phi;
   vector<float>   *mu_muid_me_theta;
   vector<float>   *mu_muid_me_qoverp;
   vector<float>   *mu_muid_ie_d0;
   vector<float>   *mu_muid_ie_z0;
   vector<float>   *mu_muid_ie_phi;
   vector<float>   *mu_muid_ie_theta;
   vector<float>   *mu_muid_ie_qoverp;
   vector<int>     *mu_muid_nOutliersOnTrack;
   vector<int>     *mu_muid_nBLHits;
   vector<int>     *mu_muid_nPixHits;
   vector<int>     *mu_muid_nSCTHits;
   vector<int>     *mu_muid_nTRTHits;
   vector<int>     *mu_muid_nTRTHighTHits;
   vector<int>     *mu_muid_nBLSharedHits;
   vector<int>     *mu_muid_nPixSharedHits;
   vector<int>     *mu_muid_nPixHoles;
   vector<int>     *mu_muid_nSCTSharedHits;
   vector<int>     *mu_muid_nSCTHoles;
   vector<int>     *mu_muid_nTRTOutliers;
   vector<int>     *mu_muid_nTRTHighTOutliers;
   vector<int>     *mu_muid_nGangedPixels;
   vector<int>     *mu_muid_nPixelDeadSensors;
   vector<int>     *mu_muid_nSCTDeadSensors;
   vector<int>     *mu_muid_nTRTDeadStraws;
   vector<int>     *mu_muid_expectBLayerHit;
   vector<int>     *mu_muid_nMDTHits;
   vector<int>     *mu_muid_nMDTHoles;
   vector<int>     *mu_muid_nCSCEtaHits;
   vector<int>     *mu_muid_nCSCEtaHoles;
   vector<int>     *mu_muid_nCSCPhiHits;
   vector<int>     *mu_muid_nCSCPhiHoles;
   vector<int>     *mu_muid_nRPCEtaHits;
   vector<int>     *mu_muid_nRPCEtaHoles;
   vector<int>     *mu_muid_nRPCPhiHits;
   vector<int>     *mu_muid_nRPCPhiHoles;
   vector<int>     *mu_muid_nTGCEtaHits;
   vector<int>     *mu_muid_nTGCEtaHoles;
   vector<int>     *mu_muid_nTGCPhiHits;
   vector<int>     *mu_muid_nTGCPhiHoles;
   vector<float>   *mu_muid_trackd0;
   vector<float>   *mu_muid_trackz0;
   vector<float>   *mu_muid_trackphi;
   vector<float>   *mu_muid_tracktheta;
   vector<float>   *mu_muid_trackqoverp;
   vector<float>   *mu_muid_trackcov_d0;
   vector<float>   *mu_muid_trackcov_z0;
   vector<float>   *mu_muid_trackcov_phi;
   vector<float>   *mu_muid_trackcov_theta;
   vector<float>   *mu_muid_trackcov_qoverp;
   vector<float>   *mu_muid_trackfitchi2;
   vector<int>     *mu_muid_trackfitndof;
   vector<int>     *mu_muid_hastrack;
   vector<float>   *mu_muid_truth_dr;
   vector<float>   *mu_muid_truth_E;
   vector<float>   *mu_muid_truth_pt;
   vector<float>   *mu_muid_truth_eta;
   vector<float>   *mu_muid_truth_phi;
   vector<int>     *mu_muid_truth_type;
   vector<int>     *mu_muid_truth_status;
   vector<int>     *mu_muid_truth_barcode;
   vector<int>     *mu_muid_truth_mothertype;
   vector<int>     *mu_muid_truth_motherbarcode;
   vector<int>     *mu_muid_truth_matched;
   vector<float>   *mu_muid_EFCB_dr;
   vector<int>     *mu_muid_EFCB_n;
   vector<vector<int> > *mu_muid_EFCB_MuonType;
   vector<vector<float> > *mu_muid_EFCB_pt;
   vector<vector<float> > *mu_muid_EFCB_eta;
   vector<vector<float> > *mu_muid_EFCB_phi;
   vector<vector<int> > *mu_muid_EFCB_hasCB;
   vector<int>     *mu_muid_EFCB_matched;
   vector<float>   *mu_muid_EFMG_dr;
   vector<int>     *mu_muid_EFMG_n;
   vector<vector<int> > *mu_muid_EFMG_MuonType;
   vector<vector<float> > *mu_muid_EFMG_pt;
   vector<vector<float> > *mu_muid_EFMG_eta;
   vector<vector<float> > *mu_muid_EFMG_phi;
   vector<vector<int> > *mu_muid_EFMG_hasMG;
   vector<int>     *mu_muid_EFMG_matched;
   vector<float>   *mu_muid_EFME_dr;
   vector<int>     *mu_muid_EFME_n;
   vector<vector<int> > *mu_muid_EFME_MuonType;
   vector<vector<float> > *mu_muid_EFME_pt;
   vector<vector<float> > *mu_muid_EFME_eta;
   vector<vector<float> > *mu_muid_EFME_phi;
   vector<vector<int> > *mu_muid_EFME_hasME;
   vector<int>     *mu_muid_EFME_matched;
   vector<float>   *mu_muid_L2CB_dr;
   vector<float>   *mu_muid_L2CB_pt;
   vector<float>   *mu_muid_L2CB_eta;
   vector<float>   *mu_muid_L2CB_phi;
   vector<float>   *mu_muid_L2CB_id_pt;
   vector<float>   *mu_muid_L2CB_ms_pt;
   vector<int>     *mu_muid_L2CB_matched;
   vector<float>   *mu_muid_L1_dr;
   vector<float>   *mu_muid_L1_pt;
   vector<float>   *mu_muid_L1_eta;
   vector<float>   *mu_muid_L1_phi;
   vector<int>     *mu_muid_L1_matched;
   vector<vector<int> > *mu_muid_truthAssoc_index;
   Int_t           mu_staco_n;
   vector<float>   *mu_staco_E;
   vector<float>   *mu_staco_pt;
   vector<float>   *mu_staco_m;
   vector<float>   *mu_staco_eta;
   vector<float>   *mu_staco_phi;
   vector<float>   *mu_staco_px;
   vector<float>   *mu_staco_py;
   vector<float>   *mu_staco_pz;
   vector<float>   *mu_staco_charge;
   vector<unsigned short> *mu_staco_allauthor;
   vector<int>     *mu_staco_author;
   vector<float>   *mu_staco_beta;
   vector<float>   *mu_staco_isMuonLikelihood;
   vector<float>   *mu_staco_matchchi2;
   vector<int>     *mu_staco_matchndof;
   vector<float>   *mu_staco_etcone20;
   vector<float>   *mu_staco_etcone30;
   vector<float>   *mu_staco_etcone40;
   vector<float>   *mu_staco_nucone20;
   vector<float>   *mu_staco_nucone30;
   vector<float>   *mu_staco_nucone40;
   vector<float>   *mu_staco_ptcone20;
   vector<float>   *mu_staco_ptcone30;
   vector<float>   *mu_staco_ptcone40;
   vector<float>   *mu_staco_energyLossPar;
   vector<float>   *mu_staco_energyLossErr;
   vector<float>   *mu_staco_etCore;
   vector<float>   *mu_staco_energyLossType;
   vector<unsigned short> *mu_staco_caloMuonIdTag;
   vector<double>  *mu_staco_caloLRLikelihood;
   vector<int>     *mu_staco_bestMatch;
   vector<int>     *mu_staco_isStandAloneMuon;
   vector<int>     *mu_staco_isCombinedMuon;
   vector<int>     *mu_staco_isLowPtReconstructedMuon;
   vector<int>     *mu_staco_loose;
   vector<int>     *mu_staco_medium;
   vector<int>     *mu_staco_tight;
   vector<float>   *mu_staco_d0_exPV;
   vector<float>   *mu_staco_z0_exPV;
   vector<float>   *mu_staco_phi_exPV;
   vector<float>   *mu_staco_theta_exPV;
   vector<float>   *mu_staco_qoverp_exPV;
   vector<float>   *mu_staco_cb_d0_exPV;
   vector<float>   *mu_staco_cb_z0_exPV;
   vector<float>   *mu_staco_cb_phi_exPV;
   vector<float>   *mu_staco_cb_theta_exPV;
   vector<float>   *mu_staco_cb_qoverp_exPV;
   vector<float>   *mu_staco_id_d0_exPV;
   vector<float>   *mu_staco_id_z0_exPV;
   vector<float>   *mu_staco_id_phi_exPV;
   vector<float>   *mu_staco_id_theta_exPV;
   vector<float>   *mu_staco_id_qoverp_exPV;
   vector<float>   *mu_staco_me_d0_exPV;
   vector<float>   *mu_staco_me_z0_exPV;
   vector<float>   *mu_staco_me_phi_exPV;
   vector<float>   *mu_staco_me_theta_exPV;
   vector<float>   *mu_staco_me_qoverp_exPV;
   vector<float>   *mu_staco_ie_d0_exPV;
   vector<float>   *mu_staco_ie_z0_exPV;
   vector<float>   *mu_staco_ie_phi_exPV;
   vector<float>   *mu_staco_ie_theta_exPV;
   vector<float>   *mu_staco_ie_qoverp_exPV;
   vector<vector<int> > *mu_staco_SpaceTime_detID;
   vector<vector<float> > *mu_staco_SpaceTime_t;
   vector<vector<float> > *mu_staco_SpaceTime_tError;
   vector<vector<float> > *mu_staco_SpaceTime_weight;
   vector<vector<float> > *mu_staco_SpaceTime_x;
   vector<vector<float> > *mu_staco_SpaceTime_y;
   vector<vector<float> > *mu_staco_SpaceTime_z;
   vector<vector<float> > *mu_staco_SpaceTime_t_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_tError_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_weight_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_x_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_y_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_z_Tile;
   vector<vector<float> > *mu_staco_SpaceTime_t_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_tError_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_weight_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_x_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_y_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_z_TRT;
   vector<vector<float> > *mu_staco_SpaceTime_t_MDT;
   vector<vector<float> > *mu_staco_SpaceTime_tError_MDT;
   vector<vector<float> > *mu_staco_SpaceTime_weight_MDT;
   vector<vector<float> > *mu_staco_SpaceTime_x_MDT;
   vector<vector<float> > *mu_staco_SpaceTime_y_MDT;
   vector<vector<float> > *mu_staco_SpaceTime_z_MDT;
   vector<float>   *mu_staco_TileCellEnergyLayer1;
   vector<float>   *mu_staco_TileTimeLayer1;
   vector<float>   *mu_staco_TileCellRmsNoiseLayer1;
   vector<float>   *mu_staco_TileCellSignLayer1;
   vector<float>   *mu_staco_TileCellEnergyLayer2;
   vector<float>   *mu_staco_TileTimeLayer2;
   vector<float>   *mu_staco_TileCellRmsNoiseLayer2;
   vector<float>   *mu_staco_TileCellSignLayer2;
   vector<float>   *mu_staco_TileCellEnergyLayer3;
   vector<float>   *mu_staco_TileTimeLayer3;
   vector<float>   *mu_staco_TileCellRmsNoiseLayer3;
   vector<float>   *mu_staco_TileCellSignLayer3;
   vector<float>   *mu_staco_MSTrkT0_1;
   vector<float>   *mu_staco_MSTrkT0_2;
   vector<float>   *mu_staco_MSTrkT0_3;
   vector<float>   *mu_staco_cov_d0_exPV;
   vector<float>   *mu_staco_cov_z0_exPV;
   vector<float>   *mu_staco_cov_phi_exPV;
   vector<float>   *mu_staco_cov_theta_exPV;
   vector<float>   *mu_staco_cov_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_z0_exPV;
   vector<float>   *mu_staco_cov_d0_phi_exPV;
   vector<float>   *mu_staco_cov_d0_theta_exPV;
   vector<float>   *mu_staco_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_cov_z0_phi_exPV;
   vector<float>   *mu_staco_cov_z0_theta_exPV;
   vector<float>   *mu_staco_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_cov_phi_theta_exPV;
   vector<float>   *mu_staco_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_ms_d0;
   vector<float>   *mu_staco_ms_z0;
   vector<float>   *mu_staco_ms_phi;
   vector<float>   *mu_staco_ms_theta;
   vector<float>   *mu_staco_ms_qoverp;
   vector<float>   *mu_staco_id_d0;
   vector<float>   *mu_staco_id_z0;
   vector<float>   *mu_staco_id_phi;
   vector<float>   *mu_staco_id_theta;
   vector<float>   *mu_staco_id_qoverp;
   vector<float>   *mu_staco_me_d0;
   vector<float>   *mu_staco_me_z0;
   vector<float>   *mu_staco_me_phi;
   vector<float>   *mu_staco_me_theta;
   vector<float>   *mu_staco_me_qoverp;
   vector<float>   *mu_staco_ie_d0;
   vector<float>   *mu_staco_ie_z0;
   vector<float>   *mu_staco_ie_phi;
   vector<float>   *mu_staco_ie_theta;
   vector<float>   *mu_staco_ie_qoverp;
   vector<int>     *mu_staco_nOutliersOnTrack;
   vector<int>     *mu_staco_nBLHits;
   vector<int>     *mu_staco_nPixHits;
   vector<int>     *mu_staco_nSCTHits;
   vector<int>     *mu_staco_nTRTHits;
   vector<int>     *mu_staco_nTRTHighTHits;
   vector<int>     *mu_staco_nBLSharedHits;
   vector<int>     *mu_staco_nPixSharedHits;
   vector<int>     *mu_staco_nPixHoles;
   vector<int>     *mu_staco_nSCTSharedHits;
   vector<int>     *mu_staco_nSCTHoles;
   vector<int>     *mu_staco_nTRTOutliers;
   vector<int>     *mu_staco_nTRTHighTOutliers;
   vector<int>     *mu_staco_nGangedPixels;
   vector<int>     *mu_staco_nPixelDeadSensors;
   vector<int>     *mu_staco_nSCTDeadSensors;
   vector<int>     *mu_staco_nTRTDeadStraws;
   vector<int>     *mu_staco_expectBLayerHit;
   vector<int>     *mu_staco_nMDTHits;
   vector<int>     *mu_staco_nMDTHoles;
   vector<int>     *mu_staco_nCSCEtaHits;
   vector<int>     *mu_staco_nCSCEtaHoles;
   vector<int>     *mu_staco_nCSCPhiHits;
   vector<int>     *mu_staco_nCSCPhiHoles;
   vector<int>     *mu_staco_nRPCEtaHits;
   vector<int>     *mu_staco_nRPCEtaHoles;
   vector<int>     *mu_staco_nRPCPhiHits;
   vector<int>     *mu_staco_nRPCPhiHoles;
   vector<int>     *mu_staco_nTGCEtaHits;
   vector<int>     *mu_staco_nTGCEtaHoles;
   vector<int>     *mu_staco_nTGCPhiHits;
   vector<int>     *mu_staco_nTGCPhiHoles;
   vector<float>   *mu_staco_trackd0;
   vector<float>   *mu_staco_trackz0;
   vector<float>   *mu_staco_trackphi;
   vector<float>   *mu_staco_tracktheta;
   vector<float>   *mu_staco_trackqoverp;
   vector<float>   *mu_staco_trackcov_d0;
   vector<float>   *mu_staco_trackcov_z0;
   vector<float>   *mu_staco_trackcov_phi;
   vector<float>   *mu_staco_trackcov_theta;
   vector<float>   *mu_staco_trackcov_qoverp;
   vector<float>   *mu_staco_trackfitchi2;
   vector<int>     *mu_staco_trackfitndof;
   vector<int>     *mu_staco_hastrack;
   vector<float>   *mu_staco_truth_dr;
   vector<float>   *mu_staco_truth_E;
   vector<float>   *mu_staco_truth_pt;
   vector<float>   *mu_staco_truth_eta;
   vector<float>   *mu_staco_truth_phi;
   vector<int>     *mu_staco_truth_type;
   vector<int>     *mu_staco_truth_status;
   vector<int>     *mu_staco_truth_barcode;
   vector<int>     *mu_staco_truth_mothertype;
   vector<int>     *mu_staco_truth_motherbarcode;
   vector<int>     *mu_staco_truth_matched;
   vector<float>   *mu_staco_EFCB_dr;
   vector<int>     *mu_staco_EFCB_n;
   vector<vector<int> > *mu_staco_EFCB_MuonType;
   vector<vector<float> > *mu_staco_EFCB_pt;
   vector<vector<float> > *mu_staco_EFCB_eta;
   vector<vector<float> > *mu_staco_EFCB_phi;
   vector<vector<int> > *mu_staco_EFCB_hasCB;
   vector<int>     *mu_staco_EFCB_matched;
   vector<float>   *mu_staco_EFMG_dr;
   vector<int>     *mu_staco_EFMG_n;
   vector<vector<int> > *mu_staco_EFMG_MuonType;
   vector<vector<float> > *mu_staco_EFMG_pt;
   vector<vector<float> > *mu_staco_EFMG_eta;
   vector<vector<float> > *mu_staco_EFMG_phi;
   vector<vector<int> > *mu_staco_EFMG_hasMG;
   vector<int>     *mu_staco_EFMG_matched;
   vector<float>   *mu_staco_EFME_dr;
   vector<int>     *mu_staco_EFME_n;
   vector<vector<int> > *mu_staco_EFME_MuonType;
   vector<vector<float> > *mu_staco_EFME_pt;
   vector<vector<float> > *mu_staco_EFME_eta;
   vector<vector<float> > *mu_staco_EFME_phi;
   vector<vector<int> > *mu_staco_EFME_hasME;
   vector<int>     *mu_staco_EFME_matched;
   vector<float>   *mu_staco_L2CB_dr;
   vector<float>   *mu_staco_L2CB_pt;
   vector<float>   *mu_staco_L2CB_eta;
   vector<float>   *mu_staco_L2CB_phi;
   vector<float>   *mu_staco_L2CB_id_pt;
   vector<float>   *mu_staco_L2CB_ms_pt;
   vector<int>     *mu_staco_L2CB_matched;
   vector<float>   *mu_staco_L1_dr;
   vector<float>   *mu_staco_L1_pt;
   vector<float>   *mu_staco_L1_eta;
   vector<float>   *mu_staco_L1_phi;
   vector<int>     *mu_staco_L1_matched;
   vector<vector<int> > *mu_staco_truthAssoc_index;
   Float_t         MET_RefFinal_etx;
   Float_t         MET_RefFinal_ety;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_RefFinal_et;
   Float_t         MET_RefFinal_sumet;
   Float_t         MET_Cryo_etx;
   Float_t         MET_Cryo_ety;
   Float_t         MET_Cryo_phi;
   Float_t         MET_Cryo_et;
   Float_t         MET_Cryo_sumet;
   Float_t         MET_RefEle_etx;
   Float_t         MET_RefEle_ety;
   Float_t         MET_RefEle_phi;
   Float_t         MET_RefEle_et;
   Float_t         MET_RefEle_sumet;
   Float_t         MET_RefJet_etx;
   Float_t         MET_RefJet_ety;
   Float_t         MET_RefJet_phi;
   Float_t         MET_RefJet_et;
   Float_t         MET_RefJet_sumet;
   Float_t         MET_RefMuon_etx;
   Float_t         MET_RefMuon_ety;
   Float_t         MET_RefMuon_phi;
   Float_t         MET_RefMuon_et;
   Float_t         MET_RefMuon_sumet;
   Float_t         MET_RefGamma_etx;
   Float_t         MET_RefGamma_ety;
   Float_t         MET_RefGamma_phi;
   Float_t         MET_RefGamma_et;
   Float_t         MET_RefGamma_sumet;
   Float_t         MET_RefTau_etx;
   Float_t         MET_RefTau_ety;
   Float_t         MET_RefTau_phi;
   Float_t         MET_RefTau_et;
   Float_t         MET_RefTau_sumet;
   Float_t         MET_CellOut_etx;
   Float_t         MET_CellOut_ety;
   Float_t         MET_CellOut_phi;
   Float_t         MET_CellOut_et;
   Float_t         MET_CellOut_sumet;
   Float_t         MET_Track_etx;
   Float_t         MET_Track_ety;
   Float_t         MET_Track_phi;
   Float_t         MET_Track_et;
   Float_t         MET_Track_sumet;
   Float_t         MET_MuonBoy_etx;
   Float_t         MET_MuonBoy_ety;
   Float_t         MET_MuonBoy_phi;
   Float_t         MET_MuonBoy_et;
   Float_t         MET_MuonBoy_sumet;
   Float_t         MET_RefMuon_Track_etx;
   Float_t         MET_RefMuon_Track_ety;
   Float_t         MET_RefMuon_Track_phi;
   Float_t         MET_RefMuon_Track_et;
   Float_t         MET_RefMuon_Track_sumet;
   Float_t         MET_Final_etx;
   Float_t         MET_Final_ety;
   Float_t         MET_Final_phi;
   Float_t         MET_Final_et;
   Float_t         MET_Final_sumet;
   Float_t         MET_Muid_etx;
   Float_t         MET_Muid_ety;
   Float_t         MET_Muid_phi;
   Float_t         MET_Muid_et;
   Float_t         MET_Muid_sumet;
   Float_t         MET_Muon_etx;
   Float_t         MET_Muon_ety;
   Float_t         MET_Muon_phi;
   Float_t         MET_Muon_et;
   Float_t         MET_Muon_sumet;
   Float_t         MET_Topo_etx;
   Float_t         MET_Topo_ety;
   Float_t         MET_Topo_phi;
   Float_t         MET_Topo_et;
   Float_t         MET_Topo_sumet;
   Float_t         MET_Topo_etx_PEMB;
   Float_t         MET_Topo_ety_PEMB;
   Float_t         MET_Topo_sumet_PEMB;
   Float_t         MET_Topo_phi_PEMB;
   Float_t         MET_Topo_etx_EMB;
   Float_t         MET_Topo_ety_EMB;
   Float_t         MET_Topo_sumet_EMB;
   Float_t         MET_Topo_phi_EMB;
   Float_t         MET_Topo_etx_PEMEC;
   Float_t         MET_Topo_ety_PEMEC;
   Float_t         MET_Topo_sumet_PEMEC;
   Float_t         MET_Topo_phi_PEMEC;
   Float_t         MET_Topo_etx_EME;
   Float_t         MET_Topo_ety_EME;
   Float_t         MET_Topo_sumet_EME;
   Float_t         MET_Topo_phi_EME;
   Float_t         MET_Topo_etx_TILE;
   Float_t         MET_Topo_ety_TILE;
   Float_t         MET_Topo_sumet_TILE;
   Float_t         MET_Topo_phi_TILE;
   Float_t         MET_Topo_etx_HEC;
   Float_t         MET_Topo_ety_HEC;
   Float_t         MET_Topo_sumet_HEC;
   Float_t         MET_Topo_phi_HEC;
   Float_t         MET_Topo_etx_FCAL;
   Float_t         MET_Topo_ety_FCAL;
   Float_t         MET_Topo_sumet_FCAL;
   Float_t         MET_Topo_phi_FCAL;
   Float_t         MET_Topo_nCell_PEMB;
   Float_t         MET_Topo_nCell_EMB;
   Float_t         MET_Topo_nCell_PEMEC;
   Float_t         MET_Topo_nCell_EME;
   Float_t         MET_Topo_nCell_TILE;
   Float_t         MET_Topo_nCell_HEC;
   Float_t         MET_Topo_nCell_FCAL;
   Float_t         MET_Topo_etx_CentralReg;
   Float_t         MET_Topo_ety_CentralReg;
   Float_t         MET_Topo_sumet_CentralReg;
   Float_t         MET_Topo_phi_CentralReg;
   Float_t         MET_Topo_etx_EndcapRegion;
   Float_t         MET_Topo_ety_EndcapRegion;
   Float_t         MET_Topo_sumet_EndcapRegion;
   Float_t         MET_Topo_phi_EndcapRegion;
   Float_t         MET_Topo_etx_ForwardReg;
   Float_t         MET_Topo_ety_ForwardReg;
   Float_t         MET_Topo_sumet_ForwardReg;
   Float_t         MET_Topo_phi_ForwardReg;
   Float_t         MET_LocHadTopo_etx;
   Float_t         MET_LocHadTopo_ety;
   Float_t         MET_LocHadTopo_phi;
   Float_t         MET_LocHadTopo_et;
   Float_t         MET_LocHadTopo_sumet;
   Float_t         MET_LocHadTopo_etx_PEMB;
   Float_t         MET_LocHadTopo_ety_PEMB;
   Float_t         MET_LocHadTopo_sumet_PEMB;
   Float_t         MET_LocHadTopo_phi_PEMB;
   Float_t         MET_LocHadTopo_etx_EMB;
   Float_t         MET_LocHadTopo_ety_EMB;
   Float_t         MET_LocHadTopo_sumet_EMB;
   Float_t         MET_LocHadTopo_phi_EMB;
   Float_t         MET_LocHadTopo_etx_PEMEC;
   Float_t         MET_LocHadTopo_ety_PEMEC;
   Float_t         MET_LocHadTopo_sumet_PEMEC;
   Float_t         MET_LocHadTopo_phi_PEMEC;
   Float_t         MET_LocHadTopo_etx_EME;
   Float_t         MET_LocHadTopo_ety_EME;
   Float_t         MET_LocHadTopo_sumet_EME;
   Float_t         MET_LocHadTopo_phi_EME;
   Float_t         MET_LocHadTopo_etx_TILE;
   Float_t         MET_LocHadTopo_ety_TILE;
   Float_t         MET_LocHadTopo_sumet_TILE;
   Float_t         MET_LocHadTopo_phi_TILE;
   Float_t         MET_LocHadTopo_etx_HEC;
   Float_t         MET_LocHadTopo_ety_HEC;
   Float_t         MET_LocHadTopo_sumet_HEC;
   Float_t         MET_LocHadTopo_phi_HEC;
   Float_t         MET_LocHadTopo_etx_FCAL;
   Float_t         MET_LocHadTopo_ety_FCAL;
   Float_t         MET_LocHadTopo_sumet_FCAL;
   Float_t         MET_LocHadTopo_phi_FCAL;
   Float_t         MET_LocHadTopo_nCell_PEMB;
   Float_t         MET_LocHadTopo_nCell_EMB;
   Float_t         MET_LocHadTopo_nCell_PEMEC;
   Float_t         MET_LocHadTopo_nCell_EME;
   Float_t         MET_LocHadTopo_nCell_TILE;
   Float_t         MET_LocHadTopo_nCell_HEC;
   Float_t         MET_LocHadTopo_nCell_FCAL;
   Float_t         MET_LocHadTopo_etx_CentralReg;
   Float_t         MET_LocHadTopo_ety_CentralReg;
   Float_t         MET_LocHadTopo_sumet_CentralReg;
   Float_t         MET_LocHadTopo_phi_CentralReg;
   Float_t         MET_LocHadTopo_etx_EndcapRegion;
   Float_t         MET_LocHadTopo_ety_EndcapRegion;
   Float_t         MET_LocHadTopo_sumet_EndcapRegion;
   Float_t         MET_LocHadTopo_phi_EndcapRegion;
   Float_t         MET_LocHadTopo_etx_ForwardReg;
   Float_t         MET_LocHadTopo_ety_ForwardReg;
   Float_t         MET_LocHadTopo_sumet_ForwardReg;
   Float_t         MET_LocHadTopo_phi_ForwardReg;
   Int_t           trk_n;
   vector<float>   *trk_d0;
   vector<float>   *trk_z0;
   vector<float>   *trk_phi;
   vector<float>   *trk_theta;
   vector<float>   *trk_qoverp;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_theta_wrtPV;
   vector<float>   *trk_qoverp_wrtPV;
   vector<float>   *trk_err_d0_wrtPV;
   vector<float>   *trk_err_z0_wrtPV;
   vector<float>   *trk_err_phi_wrtPV;
   vector<float>   *trk_err_theta_wrtPV;
   vector<float>   *trk_err_qoverp_wrtPV;
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nBLHits;
   vector<int>     *trk_nPixHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<int>     *trk_nPixHoles;
   vector<int>     *trk_nSCTHoles;
   vector<int>     *trk_nMDTHits;
   vector<int>     *trk_nCSCEtaHits;
   vector<int>     *trk_nCSCPhiHits;
   vector<int>     *trk_nRPCEtaHits;
   vector<int>     *trk_nRPCPhiHits;
   vector<int>     *trk_nTGCEtaHits;
   vector<int>     *trk_nTGCPhiHits;
   vector<int>     *trk_nHits;
   vector<int>     *trk_nHoles;
   vector<int>     *trk_hitPattern;
   vector<float>   *trk_TRTHighTHitsRatio;
   vector<float>   *trk_TRTHighTHitsRatioOutliers;
   vector<float>   *trk_pixeldEdx;
   vector<int>     *trk_fitter;
   vector<int>     *trk_patternReco1;
   vector<int>     *trk_patternReco2;
   vector<int>     *trk_seedFinder;
   vector<float>   *trk_mc_probability;
   vector<int>     *trk_mc_barcode;
   Int_t           vxp_n;
   vector<float>   *vxp_x;
   vector<float>   *vxp_y;
   vector<float>   *vxp_z;
   vector<float>   *vxp_chi2;
   vector<int>     *vxp_ndof;
   vector<float>   *vxp_px;
   vector<float>   *vxp_py;
   vector<float>   *vxp_pz;
   vector<float>   *vxp_E;
   vector<float>   *vxp_m;
   vector<int>     *vxp_nTracks;
   vector<float>   *vxp_sumPt;
   vector<int>     *vxp_type;
   vector<float>   *vxp_sumWeightInliers;
   vector<float>   *vxp_sumWeightOutliers;
   vector<float>   *vxp_sumWeightPileup;
   vector<float>   *vxp_sumWeightFakes;
   vector<int>     *vxp_nInliers;
   vector<int>     *vxp_nOutliers;
   vector<int>     *vxp_nPileUp;
   vector<int>     *vxp_nFakes;
   vector<float>   *vxp_purity;
   vector<int>     *vxp_trk_n;
   vector<vector<int> > *vxp_trk_index;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Bool_t          collcand_passCaloTime;
   Bool_t          collcand_passMBTSTime;
   Bool_t          collcand_passTrigger;
   Bool_t          collcand_pass;
   Int_t           mcevt_n;
   vector<int>     *mcevt_signal_process_id;
   vector<int>     *mcevt_event_number;
   vector<double>  *mcevt_event_scale;
   vector<double>  *mcevt_alphaQCD;
   vector<double>  *mcevt_alphaQED;
   vector<int>     *mcevt_pdf_id1;
   vector<int>     *mcevt_pdf_id2;
   vector<double>  *mcevt_pdf_x1;
   vector<double>  *mcevt_pdf_x2;
   vector<double>  *mcevt_pdf_scale;
   vector<double>  *mcevt_pdf1;
   vector<double>  *mcevt_pdf2;
   vector<double>  *mcevt_weight;
   Int_t           mc_n;
   vector<float>   *mc_pt;
   vector<float>   *mc_m;
   vector<float>   *mc_eta;
   vector<float>   *mc_phi;
   vector<int>     *mc_status;
   vector<int>     *mc_barcode;
   vector<vector<int> > *mc_parents;
   vector<vector<int> > *mc_children;
   vector<int>     *mc_pdgId;
   vector<float>   *mc_charge;
   vector<float>   *mc_vx_x;
   vector<float>   *mc_vx_y;
   vector<float>   *mc_vx_z;
   vector<vector<int> > *mc_child_index;
   vector<vector<int> > *mc_parent_index;
   Int_t           trueTau_n;
   vector<float>   *trueTau_pt;
   vector<float>   *trueTau_m;
   vector<float>   *trueTau_eta;
   vector<float>   *trueTau_phi;
   vector<float>   *trueTau_vis_m;
   vector<float>   *trueTau_vis_Et;
   vector<float>   *trueTau_vis_eta;
   vector<float>   *trueTau_vis_phi;
   vector<int>     *trueTau_nProng;
   vector<int>     *trueTau_nPi0;
   vector<float>   *trueTau_charge;
   vector<float>   *trueTau_tauAssoc_dr;
   vector<int>     *trueTau_tauAssoc_index;
   vector<int>     *trueTau_tauAssoc_matched;
   vector<vector<int> > *trueTau_truthAssoc_index;
   Int_t           muonTruth_n;
   vector<float>   *muonTruth_pt;
   vector<float>   *muonTruth_m;
   vector<float>   *muonTruth_eta;
   vector<float>   *muonTruth_phi;
   vector<float>   *muonTruth_charge;
   vector<int>     *muonTruth_PDGID;
   vector<int>     *muonTruth_barcode;
   vector<int>     *muonTruth_type;
   vector<int>     *muonTruth_origin;
   Int_t           jet_antikt4truth_n;
   vector<float>   *jet_antikt4truth_E;
   vector<float>   *jet_antikt4truth_pt;
   vector<float>   *jet_antikt4truth_m;
   vector<float>   *jet_antikt4truth_eta;
   vector<float>   *jet_antikt4truth_phi;
   vector<float>   *jet_antikt4truth_EtaOrigin;
   vector<float>   *jet_antikt4truth_PhiOrigin;
   vector<float>   *jet_antikt4truth_MOrigin;
   vector<float>   *jet_antikt4truth_EtaOriginEM;
   vector<float>   *jet_antikt4truth_PhiOriginEM;
   vector<float>   *jet_antikt4truth_MOriginEM;
   vector<float>   *jet_antikt4truth_WIDTH;
   vector<float>   *jet_antikt4truth_n90;
   vector<float>   *jet_antikt4truth_Timing;
   vector<float>   *jet_antikt4truth_LArQuality;
   vector<float>   *jet_antikt4truth_nTrk;
   vector<float>   *jet_antikt4truth_sumPtTrk;
   vector<float>   *jet_antikt4truth_OriginIndex;
   vector<float>   *jet_antikt4truth_HECQuality;
   vector<float>   *jet_antikt4truth_NegativeE;
   vector<float>   *jet_antikt4truth_BCH_CORR_CELL;
   vector<float>   *jet_antikt4truth_BCH_CORR_DOTX;
   vector<float>   *jet_antikt4truth_BCH_CORR_JET;
   vector<float>   *jet_antikt4truth_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_antikt4truth_ENG_BAD_CELLS;
   vector<float>   *jet_antikt4truth_N_BAD_CELLS;
   vector<float>   *jet_antikt4truth_N_BAD_CELLS_CORR;
   vector<float>   *jet_antikt4truth_BAD_CELLS_CORR_E;
   vector<int>     *jet_antikt4truth_SamplingMax;
   vector<double>  *jet_antikt4truth_fracSamplingMax;
   vector<float>   *jet_antikt4truth_hecf;
   vector<float>   *jet_antikt4truth_tgap3f;
   vector<int>     *jet_antikt4truth_isUgly;
   vector<int>     *jet_antikt4truth_isBadLoose;
   vector<int>     *jet_antikt4truth_isBadTight;
   vector<float>   *jet_antikt4truth_emfrac;
   vector<float>   *jet_antikt4truth_Offset;
   vector<float>   *jet_antikt4truth_EMJES;
   vector<float>   *jet_antikt4truth_EMJES_EtaCorr;
   vector<float>   *jet_antikt4truth_EMJESnooffset;
   vector<float>   *jet_antikt4truth_GCWJES;
   vector<float>   *jet_antikt4truth_GCWJES_EtaCorr;
   vector<float>   *jet_antikt4truth_CB;
   vector<float>   *jet_antikt4truth_emscale_E;
   vector<float>   *jet_antikt4truth_emscale_pt;
   vector<float>   *jet_antikt4truth_emscale_m;
   vector<float>   *jet_antikt4truth_emscale_eta;
   vector<float>   *jet_antikt4truth_emscale_phi;
   vector<float>   *jet_antikt4truth_jvtxf;
   vector<float>   *jet_antikt4truth_jvtx_x;
   vector<float>   *jet_antikt4truth_jvtx_y;
   vector<float>   *jet_antikt4truth_jvtx_z;
   vector<float>   *jet_antikt4truth_GSCFactorF;
   vector<float>   *jet_antikt4truth_WidthFraction;
   vector<float>   *jet_antikt4truth_el_dr;
   vector<int>     *jet_antikt4truth_el_matched;
   vector<float>   *jet_antikt4truth_mu_dr;
   vector<int>     *jet_antikt4truth_mu_matched;
   vector<float>   *jet_antikt4truth_L1_dr;
   vector<int>     *jet_antikt4truth_L1_matched;
   vector<float>   *jet_antikt4truth_L2_dr;
   vector<int>     *jet_antikt4truth_L2_matched;
   vector<float>   *jet_antikt4truth_EF_dr;
   vector<int>     *jet_antikt4truth_EF_matched;
   vector<vector<int> > *jet_antikt4truth_elAssoc_index;
   vector<vector<int> > *jet_antikt4truth_tauAssoc_index;
   vector<vector<int> > *jet_antikt4truth_truthAssoc_index;
   Int_t           trig_L1_jet_n;
   vector<float>   *trig_L1_jet_eta;
   vector<float>   *trig_L1_jet_phi;
   vector<vector<string> > *trig_L1_jet_thrNames;
   vector<vector<float> > *trig_L1_jet_thrValues;
   vector<unsigned int> *trig_L1_jet_thrPattern;
   vector<float>   *trig_L1_jet_myKin_pt;
   vector<float>   *trig_L1_jet_myKin_eta;
   vector<float>   *trig_L1_jet_myKin_phi;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   vector<short>   *trig_L2_passedRaw;
   vector<short>   *trig_EF_passedRaw;
   Bool_t          trig_L2_truncated;
   Bool_t          trig_EF_truncated;
   vector<short>   *trig_L2_resurrected;
   vector<short>   *trig_EF_resurrected;
   vector<short>   *trig_L2_passedThrough;
   vector<short>   *trig_EF_passedThrough;
   vector<string>  *trig_L1_esum_thrNames;
   Float_t         trig_L1_esum_energyX;
   Float_t         trig_L1_esum_energyY;
   Float_t         trig_L1_esum_energyT;
   Bool_t          trig_L1_esum_overflowX;
   Bool_t          trig_L1_esum_overflowY;
   Bool_t          trig_L1_esum_overflowT;
   Float_t         trig_L2_met_MEx;
   Float_t         trig_L2_met_MEy;
   Float_t         trig_L2_met_MEz;
   Float_t         trig_L2_met_sumEt;
   Float_t         trig_L2_met_sumE;
   Int_t           trig_L2_met_flag;
   vector<string>  *trig_L2_met_nameOfComponent;
   vector<float>   *trig_L2_met_MExComponent;
   vector<float>   *trig_L2_met_MEyComponent;
   vector<float>   *trig_L2_met_MEzComponent;
   vector<float>   *trig_L2_met_sumEtComponent;
   vector<float>   *trig_L2_met_sumEComponent;
   vector<float>   *trig_L2_met_componentCalib0;
   vector<float>   *trig_L2_met_componentCalib1;
   vector<short>   *trig_L2_met_sumOfSigns;
   vector<unsigned short> *trig_L2_met_usedChannels;
   vector<short>   *trig_L2_met_status;
   Float_t         trig_EF_met_MEx;
   Float_t         trig_EF_met_MEy;
   Float_t         trig_EF_met_MEz;
   Float_t         trig_EF_met_sumEt;
   Float_t         trig_EF_met_sumE;
   Int_t           trig_EF_met_flag;
   vector<string>  *trig_EF_met_nameOfComponent;
   vector<float>   *trig_EF_met_MExComponent;
   vector<float>   *trig_EF_met_MEyComponent;
   vector<float>   *trig_EF_met_MEzComponent;
   vector<float>   *trig_EF_met_sumEtComponent;
   vector<float>   *trig_EF_met_sumEComponent;
   vector<float>   *trig_EF_met_componentCalib0;
   vector<float>   *trig_EF_met_componentCalib1;
   vector<short>   *trig_EF_met_sumOfSigns;
   vector<unsigned short> *trig_EF_met_usedChannels;
   vector<short>   *trig_EF_met_status;
   Int_t           trig_L2_jet_n;
   vector<float>   *trig_L2_jet_E;
   vector<float>   *trig_L2_jet_eta;
   vector<float>   *trig_L2_jet_phi;
   vector<unsigned int> *trig_L2_jet_RoIWord;
   Int_t           trig_EF_jet_n;
   vector<float>   *trig_EF_jet_E;
   vector<float>   *trig_EF_jet_pt;
   vector<float>   *trig_EF_jet_m;
   vector<float>   *trig_EF_jet_eta;
   vector<float>   *trig_EF_jet_phi;
   vector<float>   *trig_EF_jet_emscale_E;
   vector<float>   *trig_EF_jet_emscale_pt;
   vector<float>   *trig_EF_jet_emscale_m;
   vector<float>   *trig_EF_jet_emscale_eta;
   vector<float>   *trig_EF_jet_emscale_phi;
   vector<unsigned int> *trig_EF_jet_RoIword;
   vector<float>   *trig_EF_jet_el_dr;
   vector<int>     *trig_EF_jet_el_matched;
   vector<float>   *trig_EF_jet_mu_dr;
   vector<int>     *trig_EF_jet_mu_matched;
   vector<float>   *trig_EF_jet_L1_dr;
   vector<int>     *trig_EF_jet_L1_matched;
   vector<float>   *trig_EF_jet_L2_dr;
   vector<int>     *trig_EF_jet_L2_matched;
   vector<float>   *trig_EF_jet_EF_dr;
   vector<int>     *trig_EF_jet_EF_matched;
   vector<vector<int> > *trig_EF_jet_elAssoc_index;
   vector<vector<int> > *trig_EF_jet_tauAssoc_index;
   vector<vector<int> > *trig_EF_jet_truthAssoc_index;
   Int_t           trig_Nav_n;
   vector<short>   *trig_Nav_chain_ChainId;
   vector<vector<int> > *trig_Nav_chain_RoIType;
   vector<vector<int> > *trig_Nav_chain_RoIIndex;
   Int_t           trig_RoI_L2_j_n;
   Int_t           trig_RoI_EF_j_n;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   Int_t           trig_EF_trigmuonef_n;
   vector<int>     *trig_EF_trigmuonef_track_n;
   vector<vector<int> > *trig_EF_trigmuonef_track_MuonType;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_hasMS;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_SA_hasSA;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posZ;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_matchChi2;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_hasCB;
   Int_t           trig_L2_el_n;
   vector<float>   *trig_L2_el_E;
   vector<float>   *trig_L2_el_Et;
   vector<float>   *trig_L2_el_pt;
   vector<float>   *trig_L2_el_eta;
   vector<float>   *trig_L2_el_phi;
   vector<int>     *trig_L2_el_RoIWord;
   vector<float>   *trig_L2_el_zvertex;
   vector<int>     *trig_L2_el_charge;
   Int_t           trig_EF_el_n;
   vector<float>   *trig_EF_el_E;
   vector<float>   *trig_EF_el_Et;
   vector<float>   *trig_EF_el_pt;
   vector<float>   *trig_EF_el_m;
   vector<float>   *trig_EF_el_eta;
   vector<float>   *trig_EF_el_phi;
   vector<float>   *trig_EF_el_px;
   vector<float>   *trig_EF_el_py;
   vector<float>   *trig_EF_el_pz;
   vector<float>   *trig_EF_el_charge;
   vector<int>     *trig_EF_el_author;
   vector<unsigned int> *trig_EF_el_isEM;
   vector<int>     *trig_EF_el_loose;
   vector<int>     *trig_EF_el_medium;
   vector<int>     *trig_EF_el_mediumIso;
   vector<int>     *trig_EF_el_tight;
   vector<int>     *trig_EF_el_tightIso;
   vector<int>     *trig_EF_el_EF_2e10_loose;
   vector<int>     *trig_EF_el_EF_2e10_medium;
   vector<int>     *trig_EF_el_EF_2e15_loose;
   vector<int>     *trig_EF_el_EF_2e3_loose;
   vector<int>     *trig_EF_el_EF_2e3_loose_SiTrk;
   vector<int>     *trig_EF_el_EF_2e3_loose_TRT;
   vector<int>     *trig_EF_el_EF_2e3_medium;
   vector<int>     *trig_EF_el_EF_2e3_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_2e3_medium_TRT;
   vector<int>     *trig_EF_el_EF_2e3_tight;
   vector<int>     *trig_EF_el_EF_2e5_medium;
   vector<int>     *trig_EF_el_EF_2e5_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_2e5_medium_TRT;
   vector<int>     *trig_EF_el_EF_2e5_tight;
   vector<int>     *trig_EF_el_EF_e10_NoCut;
   vector<int>     *trig_EF_el_EF_e10_loose;
   vector<int>     *trig_EF_el_EF_e10_loose_mu10;
   vector<int>     *trig_EF_el_EF_e10_loose_mu6;
   vector<int>     *trig_EF_el_EF_e10_medium;
   vector<int>     *trig_EF_el_EF_e10_medium_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e10_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e10_medium_TRT;
   vector<int>     *trig_EF_el_EF_e10_tight;
   vector<int>     *trig_EF_el_EF_e10_tight_TRT;
   vector<int>     *trig_EF_el_EF_e15_loose;
   vector<int>     *trig_EF_el_EF_e15_loose_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e15_medium;
   vector<int>     *trig_EF_el_EF_e15_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e15_medium_TRT;
   vector<int>     *trig_EF_el_EF_e15_tight;
   vector<int>     *trig_EF_el_EF_e15_tight_TRT;
   vector<int>     *trig_EF_el_EF_e18_medium;
   vector<int>     *trig_EF_el_EF_e20_loose;
   vector<int>     *trig_EF_el_EF_e20_loose_IDTrkNoCut;
   vector<int>     *trig_EF_el_EF_e20_loose_TRT;
   vector<int>     *trig_EF_el_EF_e20_loose_passEF;
   vector<int>     *trig_EF_el_EF_e20_loose_passL2;
   vector<int>     *trig_EF_el_EF_e20_loose_xe20;
   vector<int>     *trig_EF_el_EF_e20_loose_xe20_noMu;
   vector<int>     *trig_EF_el_EF_e20_loose_xe30;
   vector<int>     *trig_EF_el_EF_e20_loose_xe30_noMu;
   vector<int>     *trig_EF_el_EF_e20_medium;
   vector<int>     *trig_EF_el_EF_e25_loose;
   vector<int>     *trig_EF_el_EF_e25_medium;
   vector<int>     *trig_EF_el_EF_e30_loose;
   vector<int>     *trig_EF_el_EF_e3_loose;
   vector<int>     *trig_EF_el_EF_e3_loose_SiTrk;
   vector<int>     *trig_EF_el_EF_e3_loose_TRT;
   vector<int>     *trig_EF_el_EF_e3_medium;
   vector<int>     *trig_EF_el_EF_e3_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e3_medium_TRT;
   vector<int>     *trig_EF_el_EF_e5_NoCut_L2SW;
   vector<int>     *trig_EF_el_EF_e5_NoCut_Ringer;
   vector<int>     *trig_EF_el_EF_e5_NoCut_firstempty;
   vector<int>     *trig_EF_el_EF_e5_loose_mu4;
   vector<int>     *trig_EF_el_EF_e5_medium;
   vector<int>     *trig_EF_el_EF_e5_medium_MV;
   vector<int>     *trig_EF_el_EF_e5_medium_SiTrk;
   vector<int>     *trig_EF_el_EF_e5_medium_TRT;
   vector<int>     *trig_EF_el_EF_e5_medium_mu4;
   vector<int>     *trig_EF_el_EF_e5_tight;
   vector<int>     *trig_EF_el_EF_e5_tight_SiTrk;
   vector<int>     *trig_EF_el_EF_e5_tight_TRT;
   vector<int>     *trig_EF_el_EF_e5_tight_e5_NoCut;
   vector<int>     *trig_EF_el_EF_em105_passHLT;
   vector<int>     *trig_EF_el_hastrack;
   Int_t           trig_RoI_EF_mu_n;
   vector<short>   *trig_RoI_EF_mu_type;
   vector<short>   *trig_RoI_EF_mu_lastStep;
   vector<int>     *trig_RoI_EF_mu_Muon_ROI;
   vector<int>     *trig_RoI_EF_mu_Muon_ROIStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID;
   vector<vector<int> > *trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;
   Int_t           trig_RoI_EF_e_n;
   vector<short>   *trig_RoI_EF_e_type;
   vector<short>   *trig_RoI_EF_e_lastStep;
   vector<int>     *trig_RoI_EF_e_EmTau_ROI;
   vector<int>     *trig_RoI_EF_e_EmTau_ROIStatus;
   //   vector<vector<int> > *trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID;
   //   vector<vector<int> > *trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Electrons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Photons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;
   Int_t           trig_L1_emtau_n;
   vector<float>   *trig_L1_emtau_eta;
   vector<float>   *trig_L1_emtau_phi;
   vector<vector<string> > *trig_L1_emtau_thrNames;
   vector<vector<float> > *trig_L1_emtau_thrValues;
   vector<float>   *trig_L1_emtau_core;
   vector<float>   *trig_L1_emtau_EMClus;
   vector<float>   *trig_L1_emtau_tauClus;
   vector<float>   *trig_L1_emtau_EMIsol;
   vector<float>   *trig_L1_emtau_hadIsol;
   vector<float>   *trig_L1_emtau_hadCore;
   vector<unsigned int> *trig_L1_emtau_thrPattern;
   vector<int>     *trig_L1_emtau_L1_2EM10;
   vector<int>     *trig_L1_emtau_L1_2EM14;
   vector<int>     *trig_L1_emtau_L1_2EM2;
   vector<int>     *trig_L1_emtau_L1_2EM3;
   vector<int>     *trig_L1_emtau_L1_2EM5;
   vector<int>     *trig_L1_emtau_L1_EM10;
   vector<int>     *trig_L1_emtau_L1_EM10I;
   vector<int>     *trig_L1_emtau_L1_EM14;
   vector<int>     *trig_L1_emtau_L1_EM14I;
   vector<int>     *trig_L1_emtau_L1_EM14_XE10;
   vector<int>     *trig_L1_emtau_L1_EM14_XE15;
   vector<int>     *trig_L1_emtau_L1_EM2;
   vector<int>     *trig_L1_emtau_L1_EM2_UNPAIRED_ISO;
   vector<int>     *trig_L1_emtau_L1_EM2_UNPAIRED_NONISO;
   vector<int>     *trig_L1_emtau_L1_EM3;
   vector<int>     *trig_L1_emtau_L1_EM3_EMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_FIRSTEMPTY;
   vector<int>     *trig_L1_emtau_L1_EM3_MV;
   vector<int>     *trig_L1_emtau_L1_EM5;
   vector<int>     *trig_L1_emtau_L1_EM5_MU10;
   vector<int>     *trig_L1_emtau_L1_EM5_MU6;
   vector<int>     *trig_L1_emtau_L1_EM85;
   vector<unsigned int> *trig_L1_emtau_RoIWord;
   Int_t           trig_EF_tau_n;
   vector<float>   *trig_EF_tau_Et;
   vector<float>   *trig_EF_tau_pt;
   vector<float>   *trig_EF_tau_m;
   vector<float>   *trig_EF_tau_eta;
   vector<float>   *trig_EF_tau_phi;
   vector<float>   *trig_EF_tau_px;
   vector<float>   *trig_EF_tau_py;
   vector<float>   *trig_EF_tau_pz;
   vector<unsigned int> *trig_EF_tau_RoIword;
   vector<int>     *trig_EF_tau_author;
   vector<int>     *trig_EF_tau_ROIword;
   vector<int>     *trig_EF_tau_nProng;
   vector<int>     *trig_EF_tau_numTrack;
   vector<int>     *trig_EF_tau_seedCalo_numTrack;
   vector<float>   *trig_EF_tau_calcVars_sumTrkPt;
   vector<unsigned int> *trig_EF_tau_nLooseTrk;
   vector<double>  *trig_EF_tau_leadLooseTrkPt;
   vector<float>   *trig_EF_tau_leadLooseTrkEta;
   vector<float>   *trig_EF_tau_leadLooseTrkPhi;
   vector<double>  *trig_EF_tau_seedCalo_EMRadius;
   vector<double>  *trig_EF_tau_seedCalo_hadRadius;
   vector<double>  *trig_EF_tau_seedCalo_etEMAtEMScale;
   vector<double>  *trig_EF_tau_seedCalo_etHadAtEMScale;
   vector<double>  *trig_EF_tau_seedCalo_isolFrac;
   vector<double>  *trig_EF_tau_seedCalo_centFrac;
   vector<double>  *trig_EF_tau_seedCalo_etEMCalib;
   vector<double>  *trig_EF_tau_seedCalo_etHadCalib;
   vector<double>  *trig_EF_tau_seedCalo_eta;
   vector<double>  *trig_EF_tau_seedCalo_phi;
   vector<float>   *trig_EF_tau_invMassOfTrks;
   vector<float>   *trig_EF_tau_looseTrkWidth;
   vector<float>   *trig_EF_tau_looseTrkRadius;
   vector<float>   *trig_EF_tau_etOverPtLeadTrk;
   vector<float>   *trig_EF_tau_ipZ0SinThetaSigLeadTrk;
   vector<float>   *trig_EF_tau_leadTrkPt;
   vector<float>   *trig_EF_tau_ipSigLeadTrk;
   vector<float>   *trig_EF_tau_ipSigLeadLooseTrk;
   vector<float>   *trig_EF_tau_trFlightPathSig;
   vector<float>   *trig_EF_tau_seedCalo_stripWidth2;
   vector<int>     *trig_EF_tau_seedCalo_nStrip;
   vector<float>   *trig_EF_tau_seedCalo_trkAvgDist;
   vector<float>   *trig_EF_tau_seedCalo_trkRmsDist;
   vector<int>     *trig_EF_tau_numTopoClusters;
   vector<float>   *trig_EF_tau_numEffTopoClusters;
   vector<float>   *trig_EF_tau_topoInvMass;
   vector<float>   *trig_EF_tau_effTopoInvMass;
   vector<float>   *trig_EF_tau_topoMeanDeltaR;
   vector<float>   *trig_EF_tau_effTopoMeanDeltaR;
   vector<float>   *trig_EF_tau_numCells;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_sumTrkPt;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_mass;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_drMax;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_drMin;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_emFracCalib;
   vector<float>   *trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk;
   vector<float>   *trig_EF_tau_calcVars_calRadius;
   vector<float>   *trig_EF_tau_calcVars_EMFractionAtEMScale;
   vector<int>     *trig_EF_tau_track_n;
   vector<vector<float> > *trig_EF_tau_track_d0;
   vector<vector<float> > *trig_EF_tau_track_z0;
   vector<vector<float> > *trig_EF_tau_track_phi;
   vector<vector<float> > *trig_EF_tau_track_theta;
   vector<vector<float> > *trig_EF_tau_track_qoverp;
   vector<vector<float> > *trig_EF_tau_track_pt;
   vector<vector<float> > *trig_EF_tau_track_eta;
   vector<vector<float> > *trig_EF_tau_track_atPV_d0;
   vector<vector<float> > *trig_EF_tau_track_atPV_z0;
   vector<vector<float> > *trig_EF_tau_track_atPV_phi;
   vector<vector<float> > *trig_EF_tau_track_atPV_theta;
   vector<vector<float> > *trig_EF_tau_track_atPV_qoverp;
   vector<vector<float> > *trig_EF_tau_track_atPV_pt;
   vector<vector<float> > *trig_EF_tau_track_atPV_eta;
   vector<vector<int> > *trig_EF_tau_track_nBLHits;
   vector<vector<int> > *trig_EF_tau_track_nPixHits;
   vector<vector<int> > *trig_EF_tau_track_nSCTHits;
   vector<vector<int> > *trig_EF_tau_track_nTRTHits;
   vector<vector<int> > *trig_EF_tau_track_nPixHoles;
   vector<vector<int> > *trig_EF_tau_track_nSCTHoles;
   vector<vector<int> > *trig_EF_tau_track_nBLSharedHits;
   vector<vector<int> > *trig_EF_tau_track_nPixSharedHits;
   vector<vector<int> > *trig_EF_tau_track_nSCTSharedHits;
   vector<vector<int> > *trig_EF_tau_track_nTRTHighTHits;
   vector<vector<int> > *trig_EF_tau_track_nTRTOutliers;
   vector<vector<int> > *trig_EF_tau_track_nTRTHighTOutliers;
   vector<vector<int> > *trig_EF_tau_track_nHits;
   vector<vector<float> > *trig_EF_tau_track_pixeldEdx;
   vector<int>     *trig_EF_tau_seedCalo_track_n;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_d0;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_z0;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_phi;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_theta;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_qoverp;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_pt;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_eta;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_d0;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_z0;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_phi;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_theta;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_qoverp;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_pt;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_atPV_eta;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nBLHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nPixHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nSCTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nTRTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nPixHoles;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nSCTHoles;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nBLSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nPixSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nSCTSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nTRTHighTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nTRTOutliers;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nTRTHighTOutliers;
   vector<vector<int> > *trig_EF_tau_seedCalo_track_nHits;
   vector<vector<float> > *trig_EF_tau_seedCalo_track_pixeldEdx;
   vector<int>     *trig_EF_tau_loosetrack_n;
   vector<vector<float> > *trig_EF_tau_loosetrack_d0;
   vector<vector<float> > *trig_EF_tau_loosetrack_z0;
   vector<vector<float> > *trig_EF_tau_loosetrack_phi;
   vector<vector<float> > *trig_EF_tau_loosetrack_theta;
   vector<vector<float> > *trig_EF_tau_loosetrack_qoverp;
   vector<vector<float> > *trig_EF_tau_loosetrack_pt;
   vector<vector<float> > *trig_EF_tau_loosetrack_eta;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_d0;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_z0;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_phi;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_theta;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_qoverp;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_pt;
   vector<vector<float> > *trig_EF_tau_loosetrack_atPV_eta;
   vector<vector<int> > *trig_EF_tau_loosetrack_nBLHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nPixHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nSCTHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nTRTHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nPixHoles;
   vector<vector<int> > *trig_EF_tau_loosetrack_nSCTHoles;
   vector<vector<int> > *trig_EF_tau_loosetrack_nBLSharedHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nPixSharedHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nSCTSharedHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nTRTHighTHits;
   vector<vector<int> > *trig_EF_tau_loosetrack_nTRTOutliers;
   vector<vector<int> > *trig_EF_tau_loosetrack_nTRTHighTOutliers;
   vector<vector<int> > *trig_EF_tau_loosetrack_nHits;
   vector<vector<float> > *trig_EF_tau_loosetrack_pixeldEdx;
   vector<int>     *trig_EF_tau_seedCalo_widetrack_n;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_d0;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_z0;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_phi;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_theta;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_qoverp;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_pt;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_eta;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_d0;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_z0;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_phi;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_theta;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_qoverp;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_pt;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_atPV_eta;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nBLHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nPixHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nSCTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nTRTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nPixHoles;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nSCTHoles;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nBLSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nPixSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nSCTSharedHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nTRTHighTHits;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nTRTOutliers;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers;
   vector<vector<int> > *trig_EF_tau_seedCalo_widetrack_nHits;
   vector<vector<float> > *trig_EF_tau_seedCalo_widetrack_pixeldEdx;
   vector<int>     *trig_EF_tau_othertrack_n;
   vector<vector<float> > *trig_EF_tau_othertrack_d0;
   vector<vector<float> > *trig_EF_tau_othertrack_z0;
   vector<vector<float> > *trig_EF_tau_othertrack_phi;
   vector<vector<float> > *trig_EF_tau_othertrack_theta;
   vector<vector<float> > *trig_EF_tau_othertrack_qoverp;
   vector<vector<float> > *trig_EF_tau_othertrack_pt;
   vector<vector<float> > *trig_EF_tau_othertrack_eta;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_d0;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_z0;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_phi;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_theta;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_qoverp;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_pt;
   vector<vector<float> > *trig_EF_tau_othertrack_atPV_eta;
   vector<vector<int> > *trig_EF_tau_othertrack_nBLHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nPixHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nSCTHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nTRTHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nPixHoles;
   vector<vector<int> > *trig_EF_tau_othertrack_nSCTHoles;
   vector<vector<int> > *trig_EF_tau_othertrack_nBLSharedHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nPixSharedHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nSCTSharedHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nTRTHighTHits;
   vector<vector<int> > *trig_EF_tau_othertrack_nTRTOutliers;
   vector<vector<int> > *trig_EF_tau_othertrack_nTRTHighTOutliers;
   vector<vector<int> > *trig_EF_tau_othertrack_nHits;
   vector<vector<float> > *trig_EF_tau_othertrack_pixeldEdx;
   Int_t           trig_L2_trk_idscan_tau_n;
   vector<int>     *trig_L2_trk_idscan_tau_algorithmId;
   vector<short>   *trig_L2_trk_idscan_tau_trackStatus;
   vector<float>   *trig_L2_trk_idscan_tau_chi2Ndof;
   vector<int>     *trig_L2_trk_idscan_tau_nStrawHits;
   vector<int>     *trig_L2_trk_idscan_tau_nHighThrHits;
   vector<int>     *trig_L2_trk_idscan_tau_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_idscan_tau_nSCT_SpacePoints;
   vector<long>    *trig_L2_trk_idscan_tau_hitPattern;
   vector<int>     *trig_L2_trk_idscan_tau_nStraw;
   vector<int>     *trig_L2_trk_idscan_tau_nStrawTime;
   vector<float>   *trig_L2_trk_idscan_tau_a0;
   vector<float>   *trig_L2_trk_idscan_tau_z0;
   vector<float>   *trig_L2_trk_idscan_tau_phi0;
   vector<float>   *trig_L2_trk_idscan_tau_eta;
   vector<float>   *trig_L2_trk_idscan_tau_pt;
   vector<vector<float> > *trig_L2_trk_idscan_tau_covariance;
   Int_t           trig_L2_trk_sitrack_tau_n;
   vector<int>     *trig_L2_trk_sitrack_tau_algorithmId;
   vector<short>   *trig_L2_trk_sitrack_tau_trackStatus;
   vector<float>   *trig_L2_trk_sitrack_tau_chi2Ndof;
   vector<int>     *trig_L2_trk_sitrack_tau_nStrawHits;
   vector<int>     *trig_L2_trk_sitrack_tau_nHighThrHits;
   vector<int>     *trig_L2_trk_sitrack_tau_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_sitrack_tau_nSCT_SpacePoints;
   vector<long>    *trig_L2_trk_sitrack_tau_hitPattern;
   vector<int>     *trig_L2_trk_sitrack_tau_nStraw;
   vector<int>     *trig_L2_trk_sitrack_tau_nStrawTime;
   vector<float>   *trig_L2_trk_sitrack_tau_a0;
   vector<float>   *trig_L2_trk_sitrack_tau_z0;
   vector<float>   *trig_L2_trk_sitrack_tau_phi0;
   vector<float>   *trig_L2_trk_sitrack_tau_eta;
   vector<float>   *trig_L2_trk_sitrack_tau_pt;
   vector<vector<float> > *trig_L2_trk_sitrack_tau_covariance;
   Int_t           trig_L2_tau_n;
   vector<float>   *trig_L2_tau_pt;
   vector<float>   *trig_L2_tau_eta;
   vector<float>   *trig_L2_tau_phi;
   vector<float>   *trig_L2_tau_px;
   vector<float>   *trig_L2_tau_py;
   vector<float>   *trig_L2_tau_pz;
   vector<unsigned int> *trig_L2_tau_RoIword;
   vector<float>   *trig_L2_tau_simpleEtFlow;
   vector<int>     *trig_L2_tau_nMatchedTracks;
   vector<int>     *trig_L2_tau_cluster_quality;
   vector<float>   *trig_L2_tau_cluster_EMenergy;
   vector<float>   *trig_L2_tau_cluster_HADenergy;
   vector<float>   *trig_L2_tau_cluster_eta;
   vector<float>   *trig_L2_tau_cluster_phi;
   vector<float>   *trig_L2_tau_cluster_EMRadius2;
   vector<float>   *trig_L2_tau_cluster_CaloRadius;
   vector<float>   *trig_L2_tau_cluster_IsoFrac;
   vector<int>     *trig_L2_tau_cluster_numTotCells;
   vector<float>   *trig_L2_tau_cluster_stripWidth;
   vector<float>   *trig_L2_tau_cluster_stripWidthOffline;
   vector<vector<float> > *trig_L2_tau_cluster_EMenergyNor;
   vector<vector<float> > *trig_L2_tau_cluster_EMenergyNar;
   vector<vector<float> > *trig_L2_tau_cluster_HADenergyNor;
   vector<vector<float> > *trig_L2_tau_cluster_HADenergyNar;
   vector<float>   *trig_L2_tau_cluster_etNar;
   vector<int>     *trig_L2_tau_tracksinfo_nCoreTracks;
   vector<int>     *trig_L2_tau_tracksinfo_nSlowTracks;
   vector<int>     *trig_L2_tau_tracksinfo_nIsoTracks;
   vector<float>   *trig_L2_tau_tracksinfo_charge;
   vector<float>   *trig_L2_tau_tracksinfo_leadingTrackPt;
   vector<float>   *trig_L2_tau_tracksinfo_scalarPtSumCore;
   vector<float>   *trig_L2_tau_tracksinfo_scalarPtSumIso;
   vector<double>  *trig_L2_tau_tracksinfo_3fastest_pt;
   vector<double>  *trig_L2_tau_tracksinfo_3fastest_eta;
   vector<double>  *trig_L2_tau_tracksinfo_3fastest_phi;
   vector<double>  *trig_L2_tau_tracksinfo_3fastest_m;
   vector<int>     *trig_L2_tau_tracks_algorithmId;
   vector<int>     *trig_L2_tau_idscan_trk_n;
   vector<vector<int> > *trig_L2_tau_idscan_trk_index;
   vector<int>     *trig_L2_tau_sitrack_trk_n;
   vector<vector<int> > *trig_L2_tau_sitrack_trk_index;
   Int_t           trig_RoI_L2_tau_n;
   vector<short>   *trig_RoI_L2_tau_type;
   vector<short>   *trig_RoI_L2_tau_lastStep;
   vector<int>     *trig_RoI_L2_tau_TrigRoiDescriptor;
   vector<int>     *trig_RoI_L2_tau_TrigRoiDescriptorStatus;
   vector<int>     *trig_RoI_L2_tau_TrigTauCluster;
   vector<int>     *trig_RoI_L2_tau_TrigTauClusterStatus;
   vector<int>     *trig_RoI_L2_tau_TrigTauClusterDetails;
   vector<int>     *trig_RoI_L2_tau_TrigTauClusterDetailsStatus;
   vector<int>     *trig_RoI_L2_tau_TrigTauTracksInfo;
   vector<int>     *trig_RoI_L2_tau_TrigTauTracksInfoStatus;
   vector<int>     *trig_RoI_L2_tau_TrigTau;
   vector<int>     *trig_RoI_L2_tau_TrigTauStatus;
   vector<int>     *trig_RoI_L2_tau_EmTau_ROI;
   vector<int>     *trig_RoI_L2_tau_EmTau_ROIStatus;
   vector<vector<int> > *trig_RoI_L2_tau_TrigInDetTrackCollection;
   vector<vector<int> > *trig_RoI_L2_tau_TrigInDetTrackCollectionStatus;
   Int_t           trig_RoI_EF_tau_n;
   vector<short>   *trig_RoI_EF_tau_type;
   vector<short>   *trig_RoI_EF_tau_lastStep;
   vector<int>     *trig_RoI_EF_tau_EmTau_ROI;
   vector<int>     *trig_RoI_EF_tau_EmTau_ROIStatus;
   //   vector<vector<int> > *trig_RoI_EF_tau_Analysis::TauJetContainer;
   //   vector<vector<int> > *trig_RoI_EF_tau_Analysis::TauJetContainerStatus;

   // List of branches
   TBranch        *b_tau_n;   //!
   TBranch        *b_tau_Et;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_m;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_tau_charge;   //!
   TBranch        *b_tau_BDTEleScore;   //!
   TBranch        *b_tau_BDTJetScore;   //!
   TBranch        *b_tau_discCut;   //!
   TBranch        *b_tau_discCutTMVA;   //!
   TBranch        *b_tau_discLL;   //!
   TBranch        *b_tau_discNN;   //!
   TBranch        *b_tau_efficLL;   //!
   TBranch        *b_tau_efficNN;   //!
   TBranch        *b_tau_likelihood;   //!
   TBranch        *b_tau_tauJetNeuralNetwork;   //!
   TBranch        *b_tau_tauENeuralNetwork;   //!
   TBranch        *b_tau_tauElTauLikelihood;   //!
   TBranch        *b_tau_SafeLikelihood;   //!
   TBranch        *b_tau_electronVetoLoose;   //!
   TBranch        *b_tau_electronVetoMedium;   //!
   TBranch        *b_tau_electronVetoTight;   //!
   TBranch        *b_tau_muonVeto;   //!
   TBranch        *b_tau_tauCutLoose;   //!
   TBranch        *b_tau_tauCutMedium;   //!
   TBranch        *b_tau_tauCutTight;   //!
   TBranch        *b_tau_tauCutSafeLoose;   //!
   TBranch        *b_tau_tauCutSafeMedium;   //!
   TBranch        *b_tau_tauCutSafeTight;   //!
   TBranch        *b_tau_tauCutSafeCaloLoose;   //!
   TBranch        *b_tau_tauCutSafeCaloMedium;   //!
   TBranch        *b_tau_tauCutSafeCaloTight;   //!
   TBranch        *b_tau_tauLlhLoose;   //!
   TBranch        *b_tau_tauLlhMedium;   //!
   TBranch        *b_tau_tauLlhTight;   //!
   TBranch        *b_tau_JetBDTLoose;   //!
   TBranch        *b_tau_JetBDTMedium;   //!
   TBranch        *b_tau_JetBDTTight;   //!
   TBranch        *b_tau_EleBDTLoose;   //!
   TBranch        *b_tau_EleBDTMedium;   //!
   TBranch        *b_tau_EleBDTTight;   //!
   TBranch        *b_tau_SafeLlhLoose;   //!
   TBranch        *b_tau_SafeLlhMedium;   //!
   TBranch        *b_tau_SafeLlhTight;   //!
   TBranch        *b_tau_author;   //!
   TBranch        *b_tau_ROIword;   //!
   TBranch        *b_tau_nProng;   //!
   TBranch        *b_tau_numTrack;   //!
   TBranch        *b_tau_seedCalo_numTrack;   //!
   TBranch        *b_tau_etOverPtLeadTrk;   //!
   TBranch        *b_tau_ipZ0SinThetaSigLeadTrk;   //!
   TBranch        *b_tau_leadTrkPt;   //!
   TBranch        *b_tau_nLooseTrk;   //!
   TBranch        *b_tau_nLooseConvTrk;   //!
   TBranch        *b_tau_nProngLoose;   //!
   TBranch        *b_tau_ipSigLeadTrk;   //!
   TBranch        *b_tau_ipSigLeadLooseTrk;   //!
   TBranch        *b_tau_etOverPtLeadLooseTrk;   //!
   TBranch        *b_tau_leadLooseTrkPt;   //!
   TBranch        *b_tau_chrgLooseTrk;   //!
   TBranch        *b_tau_massTrkSys;   //!
   TBranch        *b_tau_trkWidth2;   //!
   TBranch        *b_tau_trFlightPathSig;   //!
   TBranch        *b_tau_etEflow;   //!
   TBranch        *b_tau_mEflow;   //!
   TBranch        *b_tau_nPi0;   //!
   TBranch        *b_tau_ele_E237E277;   //!
   TBranch        *b_tau_ele_PresamplerFraction;   //!
   TBranch        *b_tau_ele_ECALFirstFraction;   //!
   TBranch        *b_tau_seedCalo_EMRadius;   //!
   TBranch        *b_tau_seedCalo_hadRadius;   //!
   TBranch        *b_tau_seedCalo_etEMAtEMScale;   //!
   TBranch        *b_tau_seedCalo_etHadAtEMScale;   //!
   TBranch        *b_tau_seedCalo_isolFrac;   //!
   TBranch        *b_tau_seedCalo_centFrac;   //!
   TBranch        *b_tau_seedCalo_stripWidth2;   //!
   TBranch        *b_tau_seedCalo_nStrip;   //!
   TBranch        *b_tau_seedCalo_etEMCalib;   //!
   TBranch        *b_tau_seedCalo_etHadCalib;   //!
   TBranch        *b_tau_seedCalo_eta;   //!
   TBranch        *b_tau_seedCalo_phi;   //!
   TBranch        *b_tau_seedCalo_nIsolLooseTrk;   //!
   TBranch        *b_tau_seedCalo_trkAvgDist;   //!
   TBranch        *b_tau_seedCalo_trkRmsDist;   //!
   TBranch        *b_tau_numTopoClusters;   //!
   TBranch        *b_tau_numEffTopoClusters;   //!
   TBranch        *b_tau_topoInvMass;   //!
   TBranch        *b_tau_effTopoInvMass;   //!
   TBranch        *b_tau_topoMeanDeltaR;   //!
   TBranch        *b_tau_effTopoMeanDeltaR;   //!
   TBranch        *b_tau_numCells;   //!
   TBranch        *b_tau_seedTrk_EMRadius;   //!
   TBranch        *b_tau_seedTrk_isolFrac;   //!
   TBranch        *b_tau_seedTrk_etChrgHadOverSumTrkPt;   //!
   TBranch        *b_tau_seedTrk_isolFracWide;   //!
   TBranch        *b_tau_seedTrk_etHadAtEMScale;   //!
   TBranch        *b_tau_seedTrk_etEMAtEMScale;   //!
   TBranch        *b_tau_seedTrk_etEMCL;   //!
   TBranch        *b_tau_seedTrk_etChrgEM;   //!
   TBranch        *b_tau_seedTrk_etNeuEM;   //!
   TBranch        *b_tau_seedTrk_etResNeuEM;   //!
   TBranch        *b_tau_seedTrk_hadLeakEt;   //!
   TBranch        *b_tau_seedTrk_sumEMCellEtOverLeadTrkPt;   //!
   TBranch        *b_tau_seedTrk_secMaxStripEt;   //!
   TBranch        *b_tau_seedTrk_stripWidth2;   //!
   TBranch        *b_tau_seedTrk_nStrip;   //!
   TBranch        *b_tau_seedTrk_etChrgHad;   //!
   TBranch        *b_tau_seedTrk_nOtherCoreTrk;   //!
   TBranch        *b_tau_seedTrk_nIsolTrk;   //!
   TBranch        *b_tau_seedTrk_etIsolEM;   //!
   TBranch        *b_tau_seedTrk_etIsolHad;   //!
   TBranch        *b_tau_calcVars_sumTrkPt;   //!
   TBranch        *b_tau_calcVars_etHadSumPtTracks;   //!
   TBranch        *b_tau_calcVars_etEMSumPtTracks;   //!
   TBranch        *b_tau_calcVars_etHad_EMScale_Pt3Trks;   //!
   TBranch        *b_tau_calcVars_etEM_EMScale_Pt3Trks;   //!
   TBranch        *b_tau_calcVars_mass;   //!
   TBranch        *b_tau_calcVars_ipSigLeadLooseTrk;   //!
   TBranch        *b_tau_calcVars_drMax;   //!
   TBranch        *b_tau_calcVars_drMin;   //!
   TBranch        *b_tau_calcVars_emFracCalib;   //!
   TBranch        *b_tau_calcVars_TRTHTOverLT_LeadTrk;   //!
   TBranch        *b_tau_calcVars_calRadius;   //!
   TBranch        *b_tau_calcVars_EMFractionAtEMScale;   //!
   TBranch        *b_tau_calcVars_BDTLooseBkg;   //!
   TBranch        *b_tau_calcVars_BDTMediumBkg;   //!
   TBranch        *b_tau_calcVars_BDTTightBkg;   //!
   TBranch        *b_tau_cluster_E;   //!
   TBranch        *b_tau_cluster_eta;   //!
   TBranch        *b_tau_cluster_phi;   //!
   TBranch        *b_tau_cluster_n;   //!
   TBranch        *b_tau_Pi0Cluster_pt;   //!
   TBranch        *b_tau_Pi0Cluster_eta;   //!
   TBranch        *b_tau_Pi0Cluster_phi;   //!
   TBranch        *b_tau_secvtx_x;   //!
   TBranch        *b_tau_secvtx_y;   //!
   TBranch        *b_tau_secvtx_z;   //!
   TBranch        *b_tau_secvtx_chiSquared;   //!
   TBranch        *b_tau_secvtx_numberDoF;   //!
   TBranch        *b_tau_cell_E;   //!
   TBranch        *b_tau_cell_eta;   //!
   TBranch        *b_tau_cell_phi;   //!
   TBranch        *b_tau_cell_n;   //!
   TBranch        *b_tau_cell_nEffCells;   //!
   TBranch        *b_tau_cell_samplingID;   //!
   TBranch        *b_tau_jet_Et;   //!
   TBranch        *b_tau_jet_pt;   //!
   TBranch        *b_tau_jet_m;   //!
   TBranch        *b_tau_jet_eta;   //!
   TBranch        *b_tau_jet_phi;   //!
   TBranch        *b_tau_jet_WIDTH;   //!
   TBranch        *b_tau_jet_n90;   //!
   TBranch        *b_tau_jet_n90constituents;   //!
   TBranch        *b_tau_jet_BCH_CORR_CELL;   //!
   TBranch        *b_tau_jet_BCH_CORR_JET;   //!
   TBranch        *b_tau_jet_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_tau_jet_ENG_BAD_CELLS;   //!
   TBranch        *b_tau_jet_N_BAD_CELLS;   //!
   TBranch        *b_tau_jet_N_BAD_CELLS_CORR;   //!
   TBranch        *b_tau_jet_BAD_CELLS_CORR_E;   //!
   TBranch        *b_tau_jet_Timing;   //!
   TBranch        *b_tau_jet_LArQuality;   //!
   TBranch        *b_tau_jet_SamplingMax;   //!
   TBranch        *b_tau_jet_fracSamplingMax;   //!
   TBranch        *b_tau_jet_hecf;   //!
   TBranch        *b_tau_jet_tgap3f;   //!
   TBranch        *b_tau_jet_isUgly;   //!
   TBranch        *b_tau_jet_isBadLoose;   //!
   TBranch        *b_tau_jet_isBadTight;   //!
   TBranch        *b_tau_jet_emfrac;   //!
   TBranch        *b_tau_jet_GCWJES;   //!
   TBranch        *b_tau_jet_EMJES;   //!
   TBranch        *b_tau_jet_emscale_E;   //!
   TBranch        *b_tau_jet_emscale_pt;   //!
   TBranch        *b_tau_jet_emscale_m;   //!
   TBranch        *b_tau_jet_emscale_eta;   //!
   TBranch        *b_tau_jet_emscale_phi;   //!
   TBranch        *b_tau_jet_jvtxf;   //!
   TBranch        *b_tau_jet_jvtx_x;   //!
   TBranch        *b_tau_jet_jvtx_y;   //!
   TBranch        *b_tau_jet_jvtx_z;   //!
   TBranch        *b_tau_jet_flavor_weight;   //!
   TBranch        *b_tau_jet_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_tau_jet_flavor_weight_JetProb;   //!
   TBranch        *b_tau_jet_flavor_weight_IP1D;   //!
   TBranch        *b_tau_jet_flavor_weight_IP2D;   //!
   TBranch        *b_tau_jet_flavor_weight_IP3D;   //!
   TBranch        *b_tau_jet_flavor_weight_SV0;   //!
   TBranch        *b_tau_jet_flavor_weight_SV1;   //!
   TBranch        *b_tau_jet_flavor_weight_SV2;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterTag;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_tau_jet_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_tau_jet_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_tau_jet_flavor_weight_IP3DSV1;   //!
   TBranch        *b_tau_jet_e_PreSamplerB;   //!
   TBranch        *b_tau_jet_e_EMB1;   //!
   TBranch        *b_tau_jet_e_EMB2;   //!
   TBranch        *b_tau_jet_e_EMB3;   //!
   TBranch        *b_tau_jet_e_PreSamplerE;   //!
   TBranch        *b_tau_jet_e_EME1;   //!
   TBranch        *b_tau_jet_e_EME2;   //!
   TBranch        *b_tau_jet_e_EME3;   //!
   TBranch        *b_tau_jet_e_HEC0;   //!
   TBranch        *b_tau_jet_e_HEC1;   //!
   TBranch        *b_tau_jet_e_HEC2;   //!
   TBranch        *b_tau_jet_e_HEC3;   //!
   TBranch        *b_tau_jet_e_TileBar0;   //!
   TBranch        *b_tau_jet_e_TileBar1;   //!
   TBranch        *b_tau_jet_e_TileBar2;   //!
   TBranch        *b_tau_jet_e_TileGap1;   //!
   TBranch        *b_tau_jet_e_TileGap2;   //!
   TBranch        *b_tau_jet_e_TileGap3;   //!
   TBranch        *b_tau_jet_e_TileExt0;   //!
   TBranch        *b_tau_jet_e_TileExt1;   //!
   TBranch        *b_tau_jet_e_TileExt2;   //!
   TBranch        *b_tau_jet_e_FCAL0;   //!
   TBranch        *b_tau_jet_e_FCAL1;   //!
   TBranch        *b_tau_jet_e_FCAL2;   //!
   TBranch        *b_tau_jet_shapeBins;   //!
   TBranch        *b_tau_seedCalo_track_n;   //!
   TBranch        *b_tau_seedCalo_track_d0;   //!
   TBranch        *b_tau_seedCalo_track_z0;   //!
   TBranch        *b_tau_seedCalo_track_phi;   //!
   TBranch        *b_tau_seedCalo_track_theta;   //!
   TBranch        *b_tau_seedCalo_track_qoverp;   //!
   TBranch        *b_tau_seedCalo_track_pt;   //!
   TBranch        *b_tau_seedCalo_track_eta;   //!
   TBranch        *b_tau_seedCalo_track_atPV_d0;   //!
   TBranch        *b_tau_seedCalo_track_atPV_z0;   //!
   TBranch        *b_tau_seedCalo_track_atPV_phi;   //!
   TBranch        *b_tau_seedCalo_track_atPV_theta;   //!
   TBranch        *b_tau_seedCalo_track_atPV_qoverp;   //!
   TBranch        *b_tau_seedCalo_track_atPV_pt;   //!
   TBranch        *b_tau_seedCalo_track_atPV_eta;   //!
   TBranch        *b_tau_seedCalo_track_nBLHits;   //!
   TBranch        *b_tau_seedCalo_track_nPixHits;   //!
   TBranch        *b_tau_seedCalo_track_nSCTHits;   //!
   TBranch        *b_tau_seedCalo_track_nTRTHits;   //!
   TBranch        *b_tau_seedCalo_track_nPixHoles;   //!
   TBranch        *b_tau_seedCalo_track_nSCTHoles;   //!
   TBranch        *b_tau_seedCalo_track_nBLSharedHits;   //!
   TBranch        *b_tau_seedCalo_track_nPixSharedHits;   //!
   TBranch        *b_tau_seedCalo_track_nSCTSharedHits;   //!
   TBranch        *b_tau_seedCalo_track_nTRTHighTHits;   //!
   TBranch        *b_tau_seedCalo_track_nTRTOutliers;   //!
   TBranch        *b_tau_seedCalo_track_nTRTHighTOutliers;   //!
   TBranch        *b_tau_seedCalo_track_nHits;   //!
   TBranch        *b_tau_seedCalo_track_pixeldEdx;   //!
   TBranch        *b_tau_seedCalo_wideTrk_n;   //!
   TBranch        *b_tau_seedCalo_wideTrk_d0;   //!
   TBranch        *b_tau_seedCalo_wideTrk_z0;   //!
   TBranch        *b_tau_seedCalo_wideTrk_phi;   //!
   TBranch        *b_tau_seedCalo_wideTrk_theta;   //!
   TBranch        *b_tau_seedCalo_wideTrk_qoverp;   //!
   TBranch        *b_tau_seedCalo_wideTrk_pt;   //!
   TBranch        *b_tau_seedCalo_wideTrk_eta;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_d0;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_z0;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_phi;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_theta;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_qoverp;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_pt;   //!
   TBranch        *b_tau_seedCalo_wideTrk_atPV_eta;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nBLHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nPixHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nSCTHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nTRTHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nPixHoles;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nSCTHoles;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nBLSharedHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nPixSharedHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nSCTSharedHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nTRTHighTHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nTRTOutliers;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nTRTHighTOutliers;   //!
   TBranch        *b_tau_seedCalo_wideTrk_nHits;   //!
   TBranch        *b_tau_seedCalo_wideTrk_pixeldEdx;   //!
   TBranch        *b_tau_otherTrk_n;   //!
   TBranch        *b_tau_otherTrk_d0;   //!
   TBranch        *b_tau_otherTrk_z0;   //!
   TBranch        *b_tau_otherTrk_phi;   //!
   TBranch        *b_tau_otherTrk_theta;   //!
   TBranch        *b_tau_otherTrk_qoverp;   //!
   TBranch        *b_tau_otherTrk_pt;   //!
   TBranch        *b_tau_otherTrk_eta;   //!
   TBranch        *b_tau_otherTrk_atPV_d0;   //!
   TBranch        *b_tau_otherTrk_atPV_z0;   //!
   TBranch        *b_tau_otherTrk_atPV_phi;   //!
   TBranch        *b_tau_otherTrk_atPV_theta;   //!
   TBranch        *b_tau_otherTrk_atPV_qoverp;   //!
   TBranch        *b_tau_otherTrk_atPV_pt;   //!
   TBranch        *b_tau_otherTrk_atPV_eta;   //!
   TBranch        *b_tau_otherTrk_nBLHits;   //!
   TBranch        *b_tau_otherTrk_nPixHits;   //!
   TBranch        *b_tau_otherTrk_nSCTHits;   //!
   TBranch        *b_tau_otherTrk_nTRTHits;   //!
   TBranch        *b_tau_otherTrk_nPixHoles;   //!
   TBranch        *b_tau_otherTrk_nSCTHoles;   //!
   TBranch        *b_tau_otherTrk_nBLSharedHits;   //!
   TBranch        *b_tau_otherTrk_nPixSharedHits;   //!
   TBranch        *b_tau_otherTrk_nSCTSharedHits;   //!
   TBranch        *b_tau_otherTrk_nTRTHighTHits;   //!
   TBranch        *b_tau_otherTrk_nTRTOutliers;   //!
   TBranch        *b_tau_otherTrk_nTRTHighTOutliers;   //!
   TBranch        *b_tau_otherTrk_nHits;   //!
   TBranch        *b_tau_otherTrk_pixeldEdx;   //!
   TBranch        *b_tau_EF_dr;   //!
   TBranch        *b_tau_EF_E;   //!
   TBranch        *b_tau_EF_Et;   //!
   TBranch        *b_tau_EF_pt;   //!
   TBranch        *b_tau_EF_eta;   //!
   TBranch        *b_tau_EF_phi;   //!
   TBranch        *b_tau_EF_matched;   //!
   TBranch        *b_tau_L2_dr;   //!
   TBranch        *b_tau_L2_E;   //!
   TBranch        *b_tau_L2_Et;   //!
   TBranch        *b_tau_L2_pt;   //!
   TBranch        *b_tau_L2_eta;   //!
   TBranch        *b_tau_L2_phi;   //!
   TBranch        *b_tau_L2_matched;   //!
   TBranch        *b_tau_L1_dr;   //!
   TBranch        *b_tau_L1_Et;   //!
   TBranch        *b_tau_L1_pt;   //!
   TBranch        *b_tau_L1_eta;   //!
   TBranch        *b_tau_L1_phi;   //!
   TBranch        *b_tau_L1_matched;   //!
   TBranch        *b_tau_elAssoc_index;   //!
   TBranch        *b_tau_jetAssoc_index;   //!
   TBranch        *b_tau_trueTauAssoc_dr;   //!
   TBranch        *b_tau_trueTauAssoc_index;   //!
   TBranch        *b_tau_trueTauAssoc_matched;   //!
   TBranch        *b_tau_truthAssoc_index;   //!
   TBranch        *b_EF_2e10_loose;   //!
   TBranch        *b_EF_2e10_medium;   //!
   TBranch        *b_EF_2e15_loose;   //!
   TBranch        *b_EF_2e3_loose;   //!
   TBranch        *b_EF_2e3_loose_SiTrk;   //!
   TBranch        *b_EF_2e3_loose_TRT;   //!
   TBranch        *b_EF_2e3_medium;   //!
   TBranch        *b_EF_2e3_medium_SiTrk;   //!
   TBranch        *b_EF_2e3_medium_TRT;   //!
   TBranch        *b_EF_2e3_tight;   //!
   TBranch        *b_EF_2e5_medium;   //!
   TBranch        *b_EF_2e5_medium_SiTrk;   //!
   TBranch        *b_EF_2e5_medium_TRT;   //!
   TBranch        *b_EF_2e5_tight;   //!
   TBranch        *b_EF_2j35_jetNoEF_xe20_noMu;   //!
   TBranch        *b_EF_2j35_jetNoEF_xe30_noMu;   //!
   TBranch        *b_EF_2j35_jetNoEF_xe40_noMu;   //!
   TBranch        *b_EF_2j35_xe20_noMu;   //!
   TBranch        *b_EF_2j35_xe30_noMu;   //!
   TBranch        *b_EF_2j35_xe40_noMu;   //!
   TBranch        *b_EF_2mu0_NoAlg;   //!
   TBranch        *b_EF_2mu10;   //!
   TBranch        *b_EF_2mu10_NoAlg;   //!
   TBranch        *b_EF_2mu4;   //!
   TBranch        *b_EF_2mu4_Bmumu;   //!
   TBranch        *b_EF_2mu4_Bmumux;   //!
   TBranch        *b_EF_2mu4_DiMu;   //!
   TBranch        *b_EF_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_EF_2mu4_DiMu_noVtx;   //!
   TBranch        *b_EF_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_2mu4_Jpsimumu;   //!
   TBranch        *b_EF_2mu4_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_EF_2mu4_Upsimumu;   //!
   TBranch        *b_EF_2mu6;   //!
   TBranch        *b_EF_2mu6_Bmumu;   //!
   TBranch        *b_EF_2mu6_Bmumux;   //!
   TBranch        *b_EF_2mu6_DiMu;   //!
   TBranch        *b_EF_2mu6_Jpsimumu;   //!
   TBranch        *b_EF_2mu6_MG;   //!
   TBranch        *b_EF_2mu6_NoAlg;   //!
   TBranch        *b_EF_2mu6_Upsimumu;   //!
   TBranch        *b_EF_2mu6_g10_loose;   //!
   TBranch        *b_EF_2tau12_loose;   //!
   TBranch        *b_EF_2tau16_loose;   //!
   TBranch        *b_EF_2tau20_loose;   //!
   TBranch        *b_EF_2tau29_loose;   //!
   TBranch        *b_EF_2tau29_loose1;   //!
   TBranch        *b_EF_2tau38_loose;   //!
   TBranch        *b_EF_e10_NoCut;   //!
   TBranch        *b_EF_e10_loose;   //!
   TBranch        *b_EF_e10_loose_mu10;   //!
   TBranch        *b_EF_e10_loose_mu6;   //!
   TBranch        *b_EF_e10_medium;   //!
   TBranch        *b_EF_e10_medium_IDTrkNoCut;   //!
   TBranch        *b_EF_e10_medium_SiTrk;   //!
   TBranch        *b_EF_e10_medium_TRT;   //!
   TBranch        *b_EF_e10_tight;   //!
   TBranch        *b_EF_e10_tight_TRT;   //!
   TBranch        *b_EF_e15_loose;   //!
   TBranch        *b_EF_e15_loose_IDTrkNoCut;   //!
   TBranch        *b_EF_e15_medium;   //!
   TBranch        *b_EF_e15_medium_SiTrk;   //!
   TBranch        *b_EF_e15_medium_TRT;   //!
   TBranch        *b_EF_e15_tight;   //!
   TBranch        *b_EF_e15_tight_TRT;   //!
   TBranch        *b_EF_e18_medium;   //!
   TBranch        *b_EF_e20_loose;   //!
   TBranch        *b_EF_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_EF_e20_loose_TRT;   //!
   TBranch        *b_EF_e20_loose_passEF;   //!
   TBranch        *b_EF_e20_loose_passL2;   //!
   TBranch        *b_EF_e20_loose_xe20;   //!
   TBranch        *b_EF_e20_loose_xe20_noMu;   //!
   TBranch        *b_EF_e20_loose_xe30;   //!
   TBranch        *b_EF_e20_loose_xe30_noMu;   //!
   TBranch        *b_EF_e20_medium;   //!
   TBranch        *b_EF_e25_loose;   //!
   TBranch        *b_EF_e25_medium;   //!
   TBranch        *b_EF_e30_loose;   //!
   TBranch        *b_EF_e3_loose;   //!
   TBranch        *b_EF_e3_loose_SiTrk;   //!
   TBranch        *b_EF_e3_loose_TRT;   //!
   TBranch        *b_EF_e3_medium;   //!
   TBranch        *b_EF_e3_medium_SiTrk;   //!
   TBranch        *b_EF_e3_medium_TRT;   //!
   TBranch        *b_EF_e5_NoCut_L2SW;   //!
   TBranch        *b_EF_e5_NoCut_Ringer;   //!
   TBranch        *b_EF_e5_NoCut_firstempty;   //!
   TBranch        *b_EF_e5_loose_mu4;   //!
   TBranch        *b_EF_e5_medium;   //!
   TBranch        *b_EF_e5_medium_MV;   //!
   TBranch        *b_EF_e5_medium_SiTrk;   //!
   TBranch        *b_EF_e5_medium_TRT;   //!
   TBranch        *b_EF_e5_medium_mu4;   //!
   TBranch        *b_EF_e5_tight;   //!
   TBranch        *b_EF_e5_tight_SiTrk;   //!
   TBranch        *b_EF_e5_tight_TRT;   //!
   TBranch        *b_EF_e5_tight_e5_NoCut;   //!
   TBranch        *b_EF_em105_passHLT;   //!
   TBranch        *b_EF_g10_loose;   //!
   TBranch        *b_EF_g10_loose_larcalib;   //!
   TBranch        *b_EF_g11_etcut;   //!
   TBranch        *b_EF_g15_loose;   //!
   TBranch        *b_EF_g17_etcut;   //!
   TBranch        *b_EF_g17_etcut_EFxe20_noMu;   //!
   TBranch        *b_EF_g17_etcut_EFxe30_noMu;   //!
   TBranch        *b_EF_g20_loose;   //!
   TBranch        *b_EF_g20_loose_cnv;   //!
   TBranch        *b_EF_g20_loose_larcalib;   //!
   TBranch        *b_EF_g20_loose_xe20_noMu;   //!
   TBranch        *b_EF_g20_loose_xe30_noMu;   //!
   TBranch        *b_EF_g20_tight;   //!
   TBranch        *b_EF_g25_loose_xe30_noMu;   //!
   TBranch        *b_EF_g30_loose;   //!
   TBranch        *b_EF_g30_tight;   //!
   TBranch        *b_EF_g3_NoCut_unpaired_iso;   //!
   TBranch        *b_EF_g3_NoCut_unpaired_noniso;   //!
   TBranch        *b_EF_g40_loose;   //!
   TBranch        *b_EF_g40_loose_larcalib;   //!
   TBranch        *b_EF_g40_tight;   //!
   TBranch        *b_EF_g50_loose;   //!
   TBranch        *b_EF_g50_loose_larcalib;   //!
   TBranch        *b_EF_g5_NoCut_cosmic;   //!
   TBranch        *b_EF_g5_loose;   //!
   TBranch        *b_EF_g5_loose_cnv;   //!
   TBranch        *b_EF_g5_loose_larcalib;   //!
   TBranch        *b_EF_g7_loose;   //!
   TBranch        *b_EF_j115_jetNoCut_larcalib;   //!
   TBranch        *b_EF_j20;   //!
   TBranch        *b_EF_j20_jetNoEF;   //!
   TBranch        *b_EF_j20_jetNoEF_larcalib;   //!
   TBranch        *b_EF_j20a4;   //!
   TBranch        *b_EF_j20a4fs;   //!
   TBranch        *b_EF_j20a6;   //!
   TBranch        *b_EF_j20a6fs;   //!
   TBranch        *b_EF_j30;   //!
   TBranch        *b_EF_j30_cosmic;   //!
   TBranch        *b_EF_j30_firstempty;   //!
   TBranch        *b_EF_j30_fj30_jetNoEF;   //!
   TBranch        *b_EF_j30_jetNoCut_cosmic;   //!
   TBranch        *b_EF_j30_jetNoCut_firstempty;   //!
   TBranch        *b_EF_j30_jetNoCut_unpaired;   //!
   TBranch        *b_EF_j30_jetNoEF;   //!
   TBranch        *b_EF_j30_jetNoEF_cosmic;   //!
   TBranch        *b_EF_j30_jetNoEF_firstempty;   //!
   TBranch        *b_EF_j30_jetNoEF_unpaired;   //!
   TBranch        *b_EF_j30_unpaired;   //!
   TBranch        *b_EF_j35;   //!
   TBranch        *b_EF_j35_L1TAU_HV;   //!
   TBranch        *b_EF_j35_L1TAU_HV_jetNoEF;   //!
   TBranch        *b_EF_j35_jetNoCut_xe30_e15_medium;   //!
   TBranch        *b_EF_j35_jetNoCut_xe30_mu15;   //!
   TBranch        *b_EF_j35_jetNoEF;   //!
   TBranch        *b_EF_j35_xe30_e15_medium;   //!
   TBranch        *b_EF_j35_xe30_mu15;   //!
   TBranch        *b_EF_j50;   //!
   TBranch        *b_EF_j50_cosmic;   //!
   TBranch        *b_EF_j50_firstempty;   //!
   TBranch        *b_EF_j50_jetNoCut_cosmic;   //!
   TBranch        *b_EF_j50_jetNoCut_firstempty;   //!
   TBranch        *b_EF_j50_jetNoCut_unpaired;   //!
   TBranch        *b_EF_j50_jetNoEF;   //!
   TBranch        *b_EF_j50_jetNoEF_cosmic;   //!
   TBranch        *b_EF_j50_jetNoEF_firstempty;   //!
   TBranch        *b_EF_j50_jetNoEF_larcalib;   //!
   TBranch        *b_EF_j50_jetNoEF_unpaired;   //!
   TBranch        *b_EF_j50_jetNoEF_xe20_noMu;   //!
   TBranch        *b_EF_j50_jetNoEF_xe30_noMu;   //!
   TBranch        *b_EF_j50_jetNoEF_xe40_noMu;   //!
   TBranch        *b_EF_j50_unpaired;   //!
   TBranch        *b_EF_j50_xe20_noMu;   //!
   TBranch        *b_EF_j50_xe30_noMu;   //!
   TBranch        *b_EF_j50_xe40_noMu;   //!
   TBranch        *b_EF_j5_empty_NoAlg;   //!
   TBranch        *b_EF_j5_unpaired_iso_NoAlg;   //!
   TBranch        *b_EF_j5_unpaired_noniso_NoAlg;   //!
   TBranch        *b_EF_j75;   //!
   TBranch        *b_EF_j75_jetNoEF;   //!
   TBranch        *b_EF_j75_jetNoEF_EFxe20_noMu;   //!
   TBranch        *b_EF_j75_jetNoEF_EFxe25_noMu;   //!
   TBranch        *b_EF_j75_jetNoEF_EFxe30_noMu;   //!
   TBranch        *b_EF_j75_jetNoEF_EFxe35_noMu;   //!
   TBranch        *b_EF_j75_jetNoEF_EFxe40_noMu;   //!
   TBranch        *b_EF_j95;   //!
   TBranch        *b_EF_j95_jetNoEF;   //!
   TBranch        *b_EF_j95_jetNoEF_larcalib;   //!
   TBranch        *b_EF_je135_NoEF;   //!
   TBranch        *b_EF_je195_NoEF;   //!
   TBranch        *b_EF_je255_NoEF;   //!
   TBranch        *b_EF_je300_NoEF;   //!
   TBranch        *b_EF_je350_NoEF;   //!
   TBranch        *b_EF_mu0_NoAlg;   //!
   TBranch        *b_EF_mu0_comm_NoAlg;   //!
   TBranch        *b_EF_mu0_comm_empty_NoAlg;   //!
   TBranch        *b_EF_mu0_comm_firstempty_NoAlg;   //!
   TBranch        *b_EF_mu0_comm_unpaired_iso_NoAlg;   //!
   TBranch        *b_EF_mu0_comm_unpaired_noniso_NoAlg;   //!
   TBranch        *b_EF_mu0_empty_NoAlg;   //!
   TBranch        *b_EF_mu0_firstempty_NoAlg;   //!
   TBranch        *b_EF_mu0_missingRoi;   //!
   TBranch        *b_EF_mu0_outOfTime1;   //!
   TBranch        *b_EF_mu0_outOfTime2;   //!
   TBranch        *b_EF_mu0_rpcOnly;   //!
   TBranch        *b_EF_mu0_unpaired_iso_NoAlg;   //!
   TBranch        *b_EF_mu0_unpaired_noniso_NoAlg;   //!
   TBranch        *b_EF_mu10;   //!
   TBranch        *b_EF_mu10_Ecut12;   //!
   TBranch        *b_EF_mu10_Ecut123;   //!
   TBranch        *b_EF_mu10_Ecut13;   //!
   TBranch        *b_EF_mu10_IDTrkNoCut;   //!
   TBranch        *b_EF_mu10_MG;   //!
   TBranch        *b_EF_mu10_MSonly;   //!
   TBranch        *b_EF_mu10_MSonly_Ecut12;   //!
   TBranch        *b_EF_mu10_MSonly_Ecut123;   //!
   TBranch        *b_EF_mu10_MSonly_Ecut13;   //!
   TBranch        *b_EF_mu10_MSonly_tight;   //!
   TBranch        *b_EF_mu10_NoAlg;   //!
   TBranch        *b_EF_mu10_SiTrk;   //!
   TBranch        *b_EF_mu10_j30;   //!
   TBranch        *b_EF_mu10_tight;   //!
   TBranch        *b_EF_mu10i_loose;   //!
   TBranch        *b_EF_mu13;   //!
   TBranch        *b_EF_mu13_MG;   //!
   TBranch        *b_EF_mu13_MG_tight;   //!
   TBranch        *b_EF_mu13_tight;   //!
   TBranch        *b_EF_mu15;   //!
   TBranch        *b_EF_mu15_MG;   //!
   TBranch        *b_EF_mu15_NoAlg;   //!
   TBranch        *b_EF_mu20;   //!
   TBranch        *b_EF_mu20_MSonly;   //!
   TBranch        *b_EF_mu20_NoAlg;   //!
   TBranch        *b_EF_mu20_passHLT;   //!
   TBranch        *b_EF_mu20_slow;   //!
   TBranch        *b_EF_mu30_MSonly;   //!
   TBranch        *b_EF_mu4;   //!
   TBranch        *b_EF_mu40_MSonly;   //!
   TBranch        *b_EF_mu4_Bmumu;   //!
   TBranch        *b_EF_mu4_BmumuX;   //!
   TBranch        *b_EF_mu4_DiMu;   //!
   TBranch        *b_EF_mu4_DiMu_FS;   //!
   TBranch        *b_EF_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_EF_mu4_DiMu_MG;   //!
   TBranch        *b_EF_mu4_DiMu_MG_FS;   //!
   TBranch        *b_EF_mu4_DiMu_SiTrk;   //!
   TBranch        *b_EF_mu4_DiMu_SiTrk_FS;   //!
   TBranch        *b_EF_mu4_DiMu_noOS;   //!
   TBranch        *b_EF_mu4_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4_Jpsie5e3;   //!
   TBranch        *b_EF_mu4_Jpsie5e3_FS;   //!
   TBranch        *b_EF_mu4_Jpsie5e3_SiTrk;   //!
   TBranch        *b_EF_mu4_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_EF_mu4_Jpsimumu;   //!
   TBranch        *b_EF_mu4_Jpsimumu_FS;   //!
   TBranch        *b_EF_mu4_Jpsimumu_SiTrk_FS;   //!
   TBranch        *b_EF_mu4_L1J10_matched;   //!
   TBranch        *b_EF_mu4_L1J15_matched;   //!
   TBranch        *b_EF_mu4_L1J30_matched;   //!
   TBranch        *b_EF_mu4_L1J55_matched;   //!
   TBranch        *b_EF_mu4_L1J5_matched;   //!
   TBranch        *b_EF_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_EF_mu4_MG;   //!
   TBranch        *b_EF_mu4_MSonly;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_EF_mu4_MSonly_MB2_noL2_EFFS;   //!
   TBranch        *b_EF_mu4_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4_MSonly_outOfTime;   //!
   TBranch        *b_EF_mu4_MV;   //!
   TBranch        *b_EF_mu4_SiTrk;   //!
   TBranch        *b_EF_mu4_Trk_Jpsi;   //!
   TBranch        *b_EF_mu4_Trk_Jpsi_FS;   //!
   TBranch        *b_EF_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_mu4_Trk_Upsi_FS;   //!
   TBranch        *b_EF_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_mu4_Upsimumu_FS;   //!
   TBranch        *b_EF_mu4_Upsimumu_SiTrk_FS;   //!
   TBranch        *b_EF_mu4_comm_MSonly_cosmic;   //!
   TBranch        *b_EF_mu4_comm_cosmic;   //!
   TBranch        *b_EF_mu4_comm_firstempty;   //!
   TBranch        *b_EF_mu4_comm_unpaired_iso;   //!
   TBranch        *b_EF_mu4_cosmic;   //!
   TBranch        *b_EF_mu4_firstempty;   //!
   TBranch        *b_EF_mu4_j20;   //!
   TBranch        *b_EF_mu4_j20_jetNoEF;   //!
   TBranch        *b_EF_mu4_j30;   //!
   TBranch        *b_EF_mu4_j30_jetNoEF;   //!
   TBranch        *b_EF_mu4_mu6;   //!
   TBranch        *b_EF_mu4_muCombTag;   //!
   TBranch        *b_EF_mu4_tile;   //!
   TBranch        *b_EF_mu4_tile_cosmic;   //!
   TBranch        *b_EF_mu4_unpaired_iso;   //!
   TBranch        *b_EF_mu4mu6_Bmumu;   //!
   TBranch        *b_EF_mu4mu6_BmumuX;   //!
   TBranch        *b_EF_mu4mu6_DiMu;   //!
   TBranch        *b_EF_mu4mu6_Jpsimumu;   //!
   TBranch        *b_EF_mu4mu6_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_EF_mu4mu6_Upsimumu;   //!
   TBranch        *b_EF_mu6;   //!
   TBranch        *b_EF_mu6_Bmumu;   //!
   TBranch        *b_EF_mu6_BmumuX;   //!
   TBranch        *b_EF_mu6_DiMu;   //!
   TBranch        *b_EF_mu6_Ecut12;   //!
   TBranch        *b_EF_mu6_Ecut123;   //!
   TBranch        *b_EF_mu6_Ecut13;   //!
   TBranch        *b_EF_mu6_Ecut2;   //!
   TBranch        *b_EF_mu6_Ecut3;   //!
   TBranch        *b_EF_mu6_IDTrkNoCut;   //!
   TBranch        *b_EF_mu6_Jpsie5e3;   //!
   TBranch        *b_EF_mu6_Jpsie5e3_FS;   //!
   TBranch        *b_EF_mu6_Jpsie5e3_SiTrk;   //!
   TBranch        *b_EF_mu6_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_EF_mu6_Jpsimumu;   //!
   TBranch        *b_EF_mu6_MG;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_MSonly_Ecut12;   //!
   TBranch        *b_EF_mu6_MSonly_Ecut123;   //!
   TBranch        *b_EF_mu6_MSonly_Ecut13;   //!
   TBranch        *b_EF_mu6_MSonly_Ecut2;   //!
   TBranch        *b_EF_mu6_MSonly_Ecut3;   //!
   TBranch        *b_EF_mu6_MSonly_outOfTime;   //!
   TBranch        *b_EF_mu6_NoAlg;   //!
   TBranch        *b_EF_mu6_SiTrk;   //!
   TBranch        *b_EF_mu6_Trk_Jpsi;   //!
   TBranch        *b_EF_mu6_Upsimumu_FS;   //!
   TBranch        *b_EF_mu6_muCombTag;   //!
   TBranch        *b_EF_tau125_loose;   //!
   TBranch        *b_EF_tau125_medium;   //!
   TBranch        *b_EF_tau12_IDTrkNoCut;   //!
   TBranch        *b_EF_tau12_loose;   //!
   TBranch        *b_EF_tau12_loose_2b15;   //!
   TBranch        *b_EF_tau12_loose_3j35;   //!
   TBranch        *b_EF_tau12_loose_3j35_jetNoEF;   //!
   TBranch        *b_EF_tau12_loose_EFxe12_noMu;   //!
   TBranch        *b_EF_tau12_loose_IdScan_EFxe12_noMu;   //!
   TBranch        *b_EF_tau12_loose_IdScan_xe15_noMu;   //!
   TBranch        *b_EF_tau12_loose_e10_loose;   //!
   TBranch        *b_EF_tau12_loose_e10_medium;   //!
   TBranch        *b_EF_tau12_loose_e10_tight;   //!
   TBranch        *b_EF_tau12_loose_mu10;   //!
   TBranch        *b_EF_tau12_loose_xe15_noMu;   //!
   TBranch        *b_EF_tau12_loose_xe20_noMu;   //!
   TBranch        *b_EF_tau16_loose;   //!
   TBranch        *b_EF_tau16_loose_2b15;   //!
   TBranch        *b_EF_tau16_loose_3j35;   //!
   TBranch        *b_EF_tau16_loose_3j35_jetNoEF;   //!
   TBranch        *b_EF_tau16_loose_e10_loose;   //!
   TBranch        *b_EF_tau16_loose_e15_loose;   //!
   TBranch        *b_EF_tau16_loose_mu10;   //!
   TBranch        *b_EF_tau16_loose_mu15;   //!
   TBranch        *b_EF_tau16_loose_xe20_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe25_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe25_tight_noMu;   //!
   TBranch        *b_EF_tau16_loose_xe30_noMu;   //!
   TBranch        *b_EF_tau16_medium;   //!
   TBranch        *b_EF_tau16_medium_xe22_noMu;   //!
   TBranch        *b_EF_tau16_medium_xe25_noMu;   //!
   TBranch        *b_EF_tau16_medium_xe25_tight_noMu;   //!
   TBranch        *b_EF_tau20_loose;   //!
   TBranch        *b_EF_tau20_loose_xe25_noMu;   //!
   TBranch        *b_EF_tau29_loose;   //!
   TBranch        *b_EF_tau29_loose1;   //!
   TBranch        *b_EF_tau38_loose;   //!
   TBranch        *b_EF_tau38_medium;   //!
   TBranch        *b_EF_tau50_IDTrkNoCut;   //!
   TBranch        *b_EF_tau50_loose;   //!
   TBranch        *b_EF_tau50_loose_IdScan;   //!
   TBranch        *b_EF_tau50_medium;   //!
   TBranch        *b_EF_tau84_loose;   //!
   TBranch        *b_EF_tau84_medium;   //!
   TBranch        *b_EF_tauNoCut;   //!
   TBranch        *b_EF_tauNoCut_IdScan;   //!
   TBranch        *b_EF_tauNoCut_cosmic;   //!
   TBranch        *b_EF_tauNoCut_firstempty;   //!
   TBranch        *b_EF_tauNoCut_hasTrk6_EFxe15_noMu;   //!
   TBranch        *b_EF_tauNoCut_hasTrk6_IdScan_EFxe15_noMu;   //!
   TBranch        *b_EF_tauNoCut_hasTrk6_IdScan_xe20_noMu;   //!
   TBranch        *b_EF_tauNoCut_hasTrk6_xe20_noMu;   //!
   TBranch        *b_EF_tauNoCut_hasTrk9_xe20_noMu;   //!
   TBranch        *b_EF_tauNoCut_hasTrk_MV;   //!
   TBranch        *b_EF_tauNoCut_hasTrk_e10_tight;   //!
   TBranch        *b_EF_tauNoCut_hasTrk_xe20_noMu;   //!
   TBranch        *b_EF_tauNoCut_unpaired_iso;   //!
   TBranch        *b_EF_tauNoCut_unpaired_noniso;   //!
   TBranch        *b_EF_xe15;   //!
   TBranch        *b_EF_xe15_noMu;   //!
   TBranch        *b_EF_xe15_unbiased_noMu;   //!
   TBranch        *b_EF_xe20;   //!
   TBranch        *b_EF_xe20_noMu;   //!
   TBranch        *b_EF_xe20_tight_noMu;   //!
   TBranch        *b_EF_xe20_tight_vfj_noMu;   //!
   TBranch        *b_EF_xe25;   //!
   TBranch        *b_EF_xe25_medium;   //!
   TBranch        *b_EF_xe25_medium_noMu;   //!
   TBranch        *b_EF_xe25_noMu;   //!
   TBranch        *b_EF_xe25_tight_noMu;   //!
   TBranch        *b_EF_xe25_tight_vfj_noMu;   //!
   TBranch        *b_EF_xe25_vfj_noMu;   //!
   TBranch        *b_EF_xe30;   //!
   TBranch        *b_EF_xe30_allL1;   //!
   TBranch        *b_EF_xe30_allL1_FEB;   //!
   TBranch        *b_EF_xe30_allL1_allCells;   //!
   TBranch        *b_EF_xe30_allL1_noMu;   //!
   TBranch        *b_EF_xe30_loose;   //!
   TBranch        *b_EF_xe30_loose_noMu;   //!
   TBranch        *b_EF_xe30_medium;   //!
   TBranch        *b_EF_xe30_medium_noMu;   //!
   TBranch        *b_EF_xe30_medium_vfj_noMu;   //!
   TBranch        *b_EF_xe30_noMu;   //!
   TBranch        *b_EF_xe30_tight_noMu;   //!
   TBranch        *b_EF_xe30_tight_vfj_noMu;   //!
   TBranch        *b_EF_xe30_vfj_noMu;   //!
   TBranch        *b_EF_xe35;   //!
   TBranch        *b_EF_xe35_loose_noMu;   //!
   TBranch        *b_EF_xe35_noMu;   //!
   TBranch        *b_EF_xe35_tight_noMu;   //!
   TBranch        *b_EF_xe40;   //!
   TBranch        *b_EF_xe40_noMu;   //!
   TBranch        *b_EF_xe40_tight_noMu;   //!
   TBranch        *b_EF_xe45;   //!
   TBranch        *b_EF_xe45_noMu;   //!
   TBranch        *b_EF_xe55;   //!
   TBranch        *b_EF_xe55_noMu;   //!
   TBranch        *b_EF_xe60_medium;   //!
   TBranch        *b_EF_xe60_medium_noMu;   //!
   TBranch        *b_EF_xe80_medium;   //!
   TBranch        *b_EF_xe80_medium_noMu;   //!
   TBranch        *b_L1_2EM10;   //!
   TBranch        *b_L1_2EM14;   //!
   TBranch        *b_L1_2EM2;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM5;   //!
   TBranch        *b_L1_2J10;   //!
   TBranch        *b_L1_2J10_J30;   //!
   TBranch        *b_L1_2J10_J55;   //!
   TBranch        *b_L1_2J15;   //!
   TBranch        *b_L1_2J15_J75;   //!
   TBranch        *b_L1_2J15_XE10;   //!
   TBranch        *b_L1_2J15_XE15;   //!
   TBranch        *b_L1_2J15_XE25;   //!
   TBranch        *b_L1_2J30;   //!
   TBranch        *b_L1_2J5;   //!
   TBranch        *b_L1_2J55;   //!
   TBranch        *b_L1_2J95;   //!
   TBranch        *b_L1_2MU0;   //!
   TBranch        *b_L1_2MU0_FIRSTEMPTY;   //!
   TBranch        *b_L1_2MU0_MU6;   //!
   TBranch        *b_L1_2MU10;   //!
   TBranch        *b_L1_2MU20;   //!
   TBranch        *b_L1_2MU6;   //!
   TBranch        *b_L1_2MU6_EM5;   //!
   TBranch        *b_L1_2TAU11;   //!
   TBranch        *b_L1_2TAU5;   //!
   TBranch        *b_L1_2TAU5_EM5;   //!
   TBranch        *b_L1_2TAU6;   //!
   TBranch        *b_L1_2TAU6_EM10;   //!
   TBranch        *b_L1_2TAU6_EM5;   //!
   TBranch        *b_L1_3J10;   //!
   TBranch        *b_L1_3J10_2J30;   //!
   TBranch        *b_L1_3J15;   //!
   TBranch        *b_L1_3J30;   //!
   TBranch        *b_L1_3J5_J30;   //!
   TBranch        *b_L1_4J10;   //!
   TBranch        *b_L1_4J10_3J15;   //!
   TBranch        *b_L1_4J10_EM10;   //!
   TBranch        *b_L1_4J10_MU15;   //!
   TBranch        *b_L1_4J15;   //!
   TBranch        *b_L1_4J30;   //!
   TBranch        *b_L1_4J5;   //!
   TBranch        *b_L1_4J5_J15;   //!
   TBranch        *b_L1_4J5_J30;   //!
   TBranch        *b_L1_EM10;   //!
   TBranch        *b_L1_EM10I;   //!
   TBranch        *b_L1_EM14;   //!
   TBranch        *b_L1_EM14I;   //!
   TBranch        *b_L1_EM14_XE10;   //!
   TBranch        *b_L1_EM14_XE15;   //!
   TBranch        *b_L1_EM2;   //!
   TBranch        *b_L1_EM2_UNPAIRED_ISO;   //!
   TBranch        *b_L1_EM2_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_EM3;   //!
   TBranch        *b_L1_EM3_EMPTY;   //!
   TBranch        *b_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_L1_EM3_MV;   //!
   TBranch        *b_L1_EM5;   //!
   TBranch        *b_L1_EM5_MU10;   //!
   TBranch        *b_L1_EM5_MU6;   //!
   TBranch        *b_L1_EM85;   //!
   TBranch        *b_L1_J10;   //!
   TBranch        *b_L1_J10_EMPTY;   //!
   TBranch        *b_L1_J10_FIRSTEMPTY;   //!
   TBranch        *b_L1_J10_FJ10;   //!
   TBranch        *b_L1_J10_MV;   //!
   TBranch        *b_L1_J10_UNPAIRED;   //!
   TBranch        *b_L1_J115;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J15_MV;   //!
   TBranch        *b_L1_J15_XE15_EM10;   //!
   TBranch        *b_L1_J15_XE15_MU15;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J30_EMPTY;   //!
   TBranch        *b_L1_J30_FIRSTEMPTY;   //!
   TBranch        *b_L1_J30_UNPAIRED;   //!
   TBranch        *b_L1_J30_XE10;   //!
   TBranch        *b_L1_J30_XE15;   //!
   TBranch        *b_L1_J30_XE25;   //!
   TBranch        *b_L1_J5;   //!
   TBranch        *b_L1_J55;   //!
   TBranch        *b_L1_J5_EMPTY;   //!
   TBranch        *b_L1_J5_FIRSTEMPTY;   //!
   TBranch        *b_L1_J5_UNPAIRED_ISO;   //!
   TBranch        *b_L1_J5_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_L1_J95;   //!
   TBranch        *b_L1_JE100;   //!
   TBranch        *b_L1_JE140;   //!
   TBranch        *b_L1_JE200;   //!
   TBranch        *b_L1_JE60;   //!
   TBranch        *b_L1_MU0;   //!
   TBranch        *b_L1_MU0_COMM;   //!
   TBranch        *b_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_L1_MU0_COMM_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU0_COMM_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU0_COMM_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_MU0_EM3;   //!
   TBranch        *b_L1_MU0_EMPTY;   //!
   TBranch        *b_L1_MU0_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU0_J10;   //!
   TBranch        *b_L1_MU0_J15;   //!
   TBranch        *b_L1_MU0_J30;   //!
   TBranch        *b_L1_MU0_J5;   //!
   TBranch        *b_L1_MU0_J55;   //!
   TBranch        *b_L1_MU0_MV;   //!
   TBranch        *b_L1_MU0_UNPAIRED_ISO;   //!
   TBranch        *b_L1_MU0_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_MU10;   //!
   TBranch        *b_L1_MU10_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU10_J10;   //!
   TBranch        *b_L1_MU15;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_MU6_EM3;   //!
   TBranch        *b_L1_MU6_FIRSTEMPTY;   //!
   TBranch        *b_L1_MU6_J5;   //!
   TBranch        *b_L1_TAU11;   //!
   TBranch        *b_L1_TAU11I;   //!
   TBranch        *b_L1_TAU20;   //!
   TBranch        *b_L1_TAU30;   //!
   TBranch        *b_L1_TAU5;   //!
   TBranch        *b_L1_TAU50;   //!
   TBranch        *b_L1_TAU5_3J5_2J15;   //!
   TBranch        *b_L1_TAU5_4J5_3J15;   //!
   TBranch        *b_L1_TAU5_EMPTY;   //!
   TBranch        *b_L1_TAU5_FIRSTEMPTY;   //!
   TBranch        *b_L1_TAU5_MU6;   //!
   TBranch        *b_L1_TAU5_MV;   //!
   TBranch        *b_L1_TAU5_UNPAIRED_ISO;   //!
   TBranch        *b_L1_TAU5_UNPAIRED_NONISO;   //!
   TBranch        *b_L1_TAU5_XE10;   //!
   TBranch        *b_L1_TAU6;   //!
   TBranch        *b_L1_TAU6I;   //!
   TBranch        *b_L1_TAU6_3J5_2J15;   //!
   TBranch        *b_L1_TAU6_4J5_3J15;   //!
   TBranch        *b_L1_TAU6_MU10;   //!
   TBranch        *b_L1_TAU6_MU15;   //!
   TBranch        *b_L1_TAU6_XE10;   //!
   TBranch        *b_L1_XE10;   //!
   TBranch        *b_L1_XE15;   //!
   TBranch        *b_L1_XE20;   //!
   TBranch        *b_L1_XE25;   //!
   TBranch        *b_L1_XE30;   //!
   TBranch        *b_L1_XE35;   //!
   TBranch        *b_L1_XE40;   //!
   TBranch        *b_L1_XE50;   //!
   TBranch        *b_L2_2e10_loose;   //!
   TBranch        *b_L2_2e10_medium;   //!
   TBranch        *b_L2_2e15_loose;   //!
   TBranch        *b_L2_2e3_loose;   //!
   TBranch        *b_L2_2e3_loose_SiTrk;   //!
   TBranch        *b_L2_2e3_loose_TRT;   //!
   TBranch        *b_L2_2e3_medium;   //!
   TBranch        *b_L2_2e3_medium_SiTrk;   //!
   TBranch        *b_L2_2e3_medium_TRT;   //!
   TBranch        *b_L2_2e3_tight;   //!
   TBranch        *b_L2_2e5_medium;   //!
   TBranch        *b_L2_2e5_medium_SiTrk;   //!
   TBranch        *b_L2_2e5_medium_TRT;   //!
   TBranch        *b_L2_2e5_tight;   //!
   TBranch        *b_L2_2j30_xe12_noMu;   //!
   TBranch        *b_L2_2j30_xe20_noMu;   //!
   TBranch        *b_L2_2j30_xe30_noMu;   //!
   TBranch        *b_L2_2j35_jetNoEF_xe20_noMu;   //!
   TBranch        *b_L2_2j35_jetNoEF_xe30_noMu;   //!
   TBranch        *b_L2_2j35_jetNoEF_xe40_noMu;   //!
   TBranch        *b_L2_2mu0_NoAlg;   //!
   TBranch        *b_L2_2mu10;   //!
   TBranch        *b_L2_2mu10_NoAlg;   //!
   TBranch        *b_L2_2mu4;   //!
   TBranch        *b_L2_2mu4_Bmumu;   //!
   TBranch        *b_L2_2mu4_Bmumux;   //!
   TBranch        *b_L2_2mu4_DiMu;   //!
   TBranch        *b_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_L2_2mu4_DiMu_noVtx;   //!
   TBranch        *b_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_2mu4_Jpsimumu;   //!
   TBranch        *b_L2_2mu4_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_L2_2mu4_Upsimumu;   //!
   TBranch        *b_L2_2mu6;   //!
   TBranch        *b_L2_2mu6_Bmumu;   //!
   TBranch        *b_L2_2mu6_Bmumux;   //!
   TBranch        *b_L2_2mu6_DiMu;   //!
   TBranch        *b_L2_2mu6_Jpsimumu;   //!
   TBranch        *b_L2_2mu6_MG;   //!
   TBranch        *b_L2_2mu6_NoAlg;   //!
   TBranch        *b_L2_2mu6_Upsimumu;   //!
   TBranch        *b_L2_2mu6_g10_loose;   //!
   TBranch        *b_L2_2tau12_loose;   //!
   TBranch        *b_L2_2tau16_loose;   //!
   TBranch        *b_L2_2tau20_loose;   //!
   TBranch        *b_L2_2tau29_loose;   //!
   TBranch        *b_L2_2tau29_loose1;   //!
   TBranch        *b_L2_2tau38_loose;   //!
   TBranch        *b_L2_e10_NoCut;   //!
   TBranch        *b_L2_e10_loose;   //!
   TBranch        *b_L2_e10_loose_mu10;   //!
   TBranch        *b_L2_e10_loose_mu6;   //!
   TBranch        *b_L2_e10_medium;   //!
   TBranch        *b_L2_e10_medium_IDTrkNoCut;   //!
   TBranch        *b_L2_e10_medium_SiTrk;   //!
   TBranch        *b_L2_e10_medium_TRT;   //!
   TBranch        *b_L2_e10_tight;   //!
   TBranch        *b_L2_e10_tight_TRT;   //!
   TBranch        *b_L2_e15_loose;   //!
   TBranch        *b_L2_e15_loose_IDTrkNoCut;   //!
   TBranch        *b_L2_e15_medium;   //!
   TBranch        *b_L2_e15_medium_SiTrk;   //!
   TBranch        *b_L2_e15_medium_TRT;   //!
   TBranch        *b_L2_e15_tight;   //!
   TBranch        *b_L2_e15_tight_TRT;   //!
   TBranch        *b_L2_e18_medium;   //!
   TBranch        *b_L2_e20_loose;   //!
   TBranch        *b_L2_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_L2_e20_loose_TRT;   //!
   TBranch        *b_L2_e20_loose_passEF;   //!
   TBranch        *b_L2_e20_loose_passL2;   //!
   TBranch        *b_L2_e20_loose_xe20;   //!
   TBranch        *b_L2_e20_loose_xe20_noMu;   //!
   TBranch        *b_L2_e20_loose_xe30;   //!
   TBranch        *b_L2_e20_loose_xe30_noMu;   //!
   TBranch        *b_L2_e20_medium;   //!
   TBranch        *b_L2_e25_loose;   //!
   TBranch        *b_L2_e25_medium;   //!
   TBranch        *b_L2_e30_loose;   //!
   TBranch        *b_L2_e3_loose;   //!
   TBranch        *b_L2_e3_loose_SiTrk;   //!
   TBranch        *b_L2_e3_loose_TRT;   //!
   TBranch        *b_L2_e3_medium;   //!
   TBranch        *b_L2_e3_medium_SiTrk;   //!
   TBranch        *b_L2_e3_medium_TRT;   //!
   TBranch        *b_L2_e5_NoCut_L2SW;   //!
   TBranch        *b_L2_e5_NoCut_Ringer;   //!
   TBranch        *b_L2_e5_NoCut_firstempty;   //!
   TBranch        *b_L2_e5_loose_mu4;   //!
   TBranch        *b_L2_e5_medium;   //!
   TBranch        *b_L2_e5_medium_MV;   //!
   TBranch        *b_L2_e5_medium_SiTrk;   //!
   TBranch        *b_L2_e5_medium_TRT;   //!
   TBranch        *b_L2_e5_medium_mu4;   //!
   TBranch        *b_L2_e5_tight;   //!
   TBranch        *b_L2_e5_tight_SiTrk;   //!
   TBranch        *b_L2_e5_tight_TRT;   //!
   TBranch        *b_L2_e5_tight_e5_NoCut;   //!
   TBranch        *b_L2_em105_passHLT;   //!
   TBranch        *b_L2_em3_empty_larcalib;   //!
   TBranch        *b_L2_g20_loose_xe20_noMu;   //!
   TBranch        *b_L2_g20_loose_xe30_noMu;   //!
   TBranch        *b_L2_g25_loose_xe30_noMu;   //!
   TBranch        *b_L2_j30_jetNoCut_xe20_e15_medium;   //!
   TBranch        *b_L2_j30_xe20_e15_medium;   //!
   TBranch        *b_L2_j35_jetNoCut_xe30_mu15;   //!
   TBranch        *b_L2_j35_xe30_mu15;   //!
   TBranch        *b_L2_j45_xe12_noMu;   //!
   TBranch        *b_L2_j45_xe20_noMu;   //!
   TBranch        *b_L2_j45_xe30_noMu;   //!
   TBranch        *b_L2_mu0_NoAlg;   //!
   TBranch        *b_L2_mu0_comm_NoAlg;   //!
   TBranch        *b_L2_mu0_comm_empty_NoAlg;   //!
   TBranch        *b_L2_mu0_comm_firstempty_NoAlg;   //!
   TBranch        *b_L2_mu0_comm_unpaired_iso_NoAlg;   //!
   TBranch        *b_L2_mu0_comm_unpaired_noniso_NoAlg;   //!
   TBranch        *b_L2_mu0_empty_NoAlg;   //!
   TBranch        *b_L2_mu0_firstempty_NoAlg;   //!
   TBranch        *b_L2_mu0_missingRoi;   //!
   TBranch        *b_L2_mu0_outOfTime1;   //!
   TBranch        *b_L2_mu0_outOfTime2;   //!
   TBranch        *b_L2_mu0_rpcOnly;   //!
   TBranch        *b_L2_mu0_unpaired_iso_NoAlg;   //!
   TBranch        *b_L2_mu0_unpaired_noniso_NoAlg;   //!
   TBranch        *b_L2_mu10;   //!
   TBranch        *b_L2_mu10_Ecut12;   //!
   TBranch        *b_L2_mu10_Ecut123;   //!
   TBranch        *b_L2_mu10_Ecut13;   //!
   TBranch        *b_L2_mu10_IDTrkNoCut;   //!
   TBranch        *b_L2_mu10_MG;   //!
   TBranch        *b_L2_mu10_MSonly;   //!
   TBranch        *b_L2_mu10_MSonly_Ecut12;   //!
   TBranch        *b_L2_mu10_MSonly_Ecut123;   //!
   TBranch        *b_L2_mu10_MSonly_Ecut13;   //!
   TBranch        *b_L2_mu10_MSonly_tight;   //!
   TBranch        *b_L2_mu10_NoAlg;   //!
   TBranch        *b_L2_mu10_SiTrk;   //!
   TBranch        *b_L2_mu10_j30;   //!
   TBranch        *b_L2_mu10_tight;   //!
   TBranch        *b_L2_mu10i_loose;   //!
   TBranch        *b_L2_mu13;   //!
   TBranch        *b_L2_mu13_MG;   //!
   TBranch        *b_L2_mu13_MG_tight;   //!
   TBranch        *b_L2_mu13_tight;   //!
   TBranch        *b_L2_mu15;   //!
   TBranch        *b_L2_mu15_MG;   //!
   TBranch        *b_L2_mu15_NoAlg;   //!
   TBranch        *b_L2_mu20;   //!
   TBranch        *b_L2_mu20_MSonly;   //!
   TBranch        *b_L2_mu20_NoAlg;   //!
   TBranch        *b_L2_mu20_passHLT;   //!
   TBranch        *b_L2_mu20_slow;   //!
   TBranch        *b_L2_mu30_MSonly;   //!
   TBranch        *b_L2_mu4;   //!
   TBranch        *b_L2_mu40_MSonly;   //!
   TBranch        *b_L2_mu4_Bmumu;   //!
   TBranch        *b_L2_mu4_BmumuX;   //!
   TBranch        *b_L2_mu4_DiMu;   //!
   TBranch        *b_L2_mu4_DiMu_FS;   //!
   TBranch        *b_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_L2_mu4_DiMu_MG;   //!
   TBranch        *b_L2_mu4_DiMu_MG_FS;   //!
   TBranch        *b_L2_mu4_DiMu_SiTrk;   //!
   TBranch        *b_L2_mu4_DiMu_SiTrk_FS;   //!
   TBranch        *b_L2_mu4_DiMu_noOS;   //!
   TBranch        *b_L2_mu4_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4_Jpsie5e3;   //!
   TBranch        *b_L2_mu4_Jpsie5e3_FS;   //!
   TBranch        *b_L2_mu4_Jpsie5e3_SiTrk;   //!
   TBranch        *b_L2_mu4_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_L2_mu4_Jpsimumu;   //!
   TBranch        *b_L2_mu4_Jpsimumu_FS;   //!
   TBranch        *b_L2_mu4_Jpsimumu_SiTrk_FS;   //!
   TBranch        *b_L2_mu4_L1J10_matched;   //!
   TBranch        *b_L2_mu4_L1J15_matched;   //!
   TBranch        *b_L2_mu4_L1J30_matched;   //!
   TBranch        *b_L2_mu4_L1J55_matched;   //!
   TBranch        *b_L2_mu4_L1J5_matched;   //!
   TBranch        *b_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_L2_mu4_MG;   //!
   TBranch        *b_L2_mu4_MSonly;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_L2_mu4_MSonly_MB2_noL2_EFFS;   //!
   TBranch        *b_L2_mu4_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_MSonly_outOfTime;   //!
   TBranch        *b_L2_mu4_MV;   //!
   TBranch        *b_L2_mu4_SiTrk;   //!
   TBranch        *b_L2_mu4_Trk_Jpsi;   //!
   TBranch        *b_L2_mu4_Trk_Jpsi_FS;   //!
   TBranch        *b_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_mu4_Trk_Upsi_FS;   //!
   TBranch        *b_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_mu4_Upsimumu_FS;   //!
   TBranch        *b_L2_mu4_Upsimumu_SiTrk_FS;   //!
   TBranch        *b_L2_mu4_comm_MSonly_cosmic;   //!
   TBranch        *b_L2_mu4_comm_cosmic;   //!
   TBranch        *b_L2_mu4_comm_firstempty;   //!
   TBranch        *b_L2_mu4_comm_unpaired_iso;   //!
   TBranch        *b_L2_mu4_cosmic;   //!
   TBranch        *b_L2_mu4_firstempty;   //!
   TBranch        *b_L2_mu4_j20;   //!
   TBranch        *b_L2_mu4_j20_jetNoEF;   //!
   TBranch        *b_L2_mu4_j25;   //!
   TBranch        *b_L2_mu4_mu6;   //!
   TBranch        *b_L2_mu4_muCombTag;   //!
   TBranch        *b_L2_mu4_tile;   //!
   TBranch        *b_L2_mu4_tile_cosmic;   //!
   TBranch        *b_L2_mu4_unpaired_iso;   //!
   TBranch        *b_L2_mu4mu6_Bmumu;   //!
   TBranch        *b_L2_mu4mu6_BmumuX;   //!
   TBranch        *b_L2_mu4mu6_DiMu;   //!
   TBranch        *b_L2_mu4mu6_Jpsimumu;   //!
   TBranch        *b_L2_mu4mu6_Jpsimumu_IDTrkNoCut;   //!
   TBranch        *b_L2_mu4mu6_Upsimumu;   //!
   TBranch        *b_L2_mu6;   //!
   TBranch        *b_L2_mu6_Bmumu;   //!
   TBranch        *b_L2_mu6_BmumuX;   //!
   TBranch        *b_L2_mu6_DiMu;   //!
   TBranch        *b_L2_mu6_Ecut12;   //!
   TBranch        *b_L2_mu6_Ecut123;   //!
   TBranch        *b_L2_mu6_Ecut13;   //!
   TBranch        *b_L2_mu6_Ecut2;   //!
   TBranch        *b_L2_mu6_Ecut3;   //!
   TBranch        *b_L2_mu6_IDTrkNoCut;   //!
   TBranch        *b_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_L2_mu6_Jpsie5e3_FS;   //!
   TBranch        *b_L2_mu6_Jpsie5e3_SiTrk;   //!
   TBranch        *b_L2_mu6_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_L2_mu6_Jpsimumu;   //!
   TBranch        *b_L2_mu6_MG;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_MSonly_Ecut12;   //!
   TBranch        *b_L2_mu6_MSonly_Ecut123;   //!
   TBranch        *b_L2_mu6_MSonly_Ecut13;   //!
   TBranch        *b_L2_mu6_MSonly_Ecut2;   //!
   TBranch        *b_L2_mu6_MSonly_Ecut3;   //!
   TBranch        *b_L2_mu6_MSonly_outOfTime;   //!
   TBranch        *b_L2_mu6_NoAlg;   //!
   TBranch        *b_L2_mu6_SiTrk;   //!
   TBranch        *b_L2_mu6_Trk_Jpsi;   //!
   TBranch        *b_L2_mu6_Upsimumu_FS;   //!
   TBranch        *b_L2_mu6_muCombTag;   //!
   TBranch        *b_L2_tau125_loose;   //!
   TBranch        *b_L2_tau125_medium;   //!
   TBranch        *b_L2_tau12_IDTrkNoCut;   //!
   TBranch        *b_L2_tau12_loose;   //!
   TBranch        *b_L2_tau12_loose_2b15;   //!
   TBranch        *b_L2_tau12_loose_3j30;   //!
   TBranch        *b_L2_tau12_loose_EFxe12_noMu;   //!
   TBranch        *b_L2_tau12_loose_IdScan_EFxe12_noMu;   //!
   TBranch        *b_L2_tau12_loose_IdScan_xe15_noMu;   //!
   TBranch        *b_L2_tau12_loose_e10_loose;   //!
   TBranch        *b_L2_tau12_loose_e10_medium;   //!
   TBranch        *b_L2_tau12_loose_e10_tight;   //!
   TBranch        *b_L2_tau12_loose_mu10;   //!
   TBranch        *b_L2_tau12_loose_xe15_noMu;   //!
   TBranch        *b_L2_tau12_loose_xe20_noMu;   //!
   TBranch        *b_L2_tau16_loose;   //!
   TBranch        *b_L2_tau16_loose_2b15;   //!
   TBranch        *b_L2_tau16_loose_3j30;   //!
   TBranch        *b_L2_tau16_loose_e10_loose;   //!
   TBranch        *b_L2_tau16_loose_e15_loose;   //!
   TBranch        *b_L2_tau16_loose_mu10;   //!
   TBranch        *b_L2_tau16_loose_mu15;   //!
   TBranch        *b_L2_tau16_loose_xe20_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe25_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe25_tight_noMu;   //!
   TBranch        *b_L2_tau16_loose_xe30_noMu;   //!
   TBranch        *b_L2_tau16_medium;   //!
   TBranch        *b_L2_tau16_medium_xe22_noMu;   //!
   TBranch        *b_L2_tau16_medium_xe25_noMu;   //!
   TBranch        *b_L2_tau16_medium_xe25_tight_noMu;   //!
   TBranch        *b_L2_tau20_loose;   //!
   TBranch        *b_L2_tau20_loose_xe25_noMu;   //!
   TBranch        *b_L2_tau29_loose;   //!
   TBranch        *b_L2_tau29_loose1;   //!
   TBranch        *b_L2_tau38_loose;   //!
   TBranch        *b_L2_tau38_medium;   //!
   TBranch        *b_L2_tau50_IDTrkNoCut;   //!
   TBranch        *b_L2_tau50_loose;   //!
   TBranch        *b_L2_tau50_loose_IdScan;   //!
   TBranch        *b_L2_tau50_medium;   //!
   TBranch        *b_L2_tau5_empty_larcalib;   //!
   TBranch        *b_L2_tau84_loose;   //!
   TBranch        *b_L2_tau84_medium;   //!
   TBranch        *b_L2_tauNoCut;   //!
   TBranch        *b_L2_tauNoCut_IdScan;   //!
   TBranch        *b_L2_tauNoCut_cosmic;   //!
   TBranch        *b_L2_tauNoCut_firstempty;   //!
   TBranch        *b_L2_tauNoCut_hasTrk6_EFxe15_noMu;   //!
   TBranch        *b_L2_tauNoCut_hasTrk6_IdScan_EFxe15_noMu;   //!
   TBranch        *b_L2_tauNoCut_hasTrk6_IdScan_xe20_noMu;   //!
   TBranch        *b_L2_tauNoCut_hasTrk6_xe20_noMu;   //!
   TBranch        *b_L2_tauNoCut_hasTrk9_xe20_noMu;   //!
   TBranch        *b_L2_tauNoCut_hasTrk_MV;   //!
   TBranch        *b_L2_tauNoCut_hasTrk_e10_tight;   //!
   TBranch        *b_L2_tauNoCut_hasTrk_xe20_noMu;   //!
   TBranch        *b_L2_tauNoCut_unpaired_iso;   //!
   TBranch        *b_L2_tauNoCut_unpaired_noniso;   //!
   TBranch        *b_L2_xe12;   //!
   TBranch        *b_L2_xe12_loose;   //!
   TBranch        *b_L2_xe12_loose_noMu;   //!
   TBranch        *b_L2_xe12_medium;   //!
   TBranch        *b_L2_xe12_medium_noMu;   //!
   TBranch        *b_L2_xe12_noMu;   //!
   TBranch        *b_L2_xe15;   //!
   TBranch        *b_L2_xe15_medium;   //!
   TBranch        *b_L2_xe15_medium_noMu;   //!
   TBranch        *b_L2_xe15_medium_vfj_noMu;   //!
   TBranch        *b_L2_xe15_noMu;   //!
   TBranch        *b_L2_xe15_tight_noMu;   //!
   TBranch        *b_L2_xe15_tight_vfj_noMu;   //!
   TBranch        *b_L2_xe15_unbiased_noMu;   //!
   TBranch        *b_L2_xe15_vfj_noMu;   //!
   TBranch        *b_L2_xe17_tight_noMu;   //!
   TBranch        *b_L2_xe17_tight_vfj_noMu;   //!
   TBranch        *b_L2_xe20;   //!
   TBranch        *b_L2_xe20_noMu;   //!
   TBranch        *b_L2_xe20_vfj_noMu;   //!
   TBranch        *b_L2_xe22_loose_noMu;   //!
   TBranch        *b_L2_xe22_tight_noMu;   //!
   TBranch        *b_L2_xe22_tight_vfj_noMu;   //!
   TBranch        *b_L2_xe25;   //!
   TBranch        *b_L2_xe25_noMu;   //!
   TBranch        *b_L2_xe27_tight_noMu;   //!
   TBranch        *b_L2_xe30;   //!
   TBranch        *b_L2_xe30_allL1;   //!
   TBranch        *b_L2_xe30_allL1_FEB;   //!
   TBranch        *b_L2_xe30_allL1_allCells;   //!
   TBranch        *b_L2_xe30_allL1_noMu;   //!
   TBranch        *b_L2_xe30_noMu;   //!
   TBranch        *b_L2_xe32_tight_noMu;   //!
   TBranch        *b_L2_xe35;   //!
   TBranch        *b_L2_xe35_noMu;   //!
   TBranch        *b_L2_xe40_medium;   //!
   TBranch        *b_L2_xe40_medium_noMu;   //!
   TBranch        *b_L2_xe45;   //!
   TBranch        *b_L2_xe45_noMu;   //!
   TBranch        *b_L2_xe60_medium;   //!
   TBranch        *b_L2_xe60_medium_noMu;   //!
   TBranch        *b_evt_calcVars_numGoodVertices;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_OQ;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_OQRecalc;   //!
   TBranch        *b_el_type;   //!
   TBranch        *b_el_origin;   //!
   TBranch        *b_el_typebkg;   //!
   TBranch        *b_el_originbkg;   //!
   TBranch        *b_el_truth_E;   //!
   TBranch        *b_el_truth_pt;   //!
   TBranch        *b_el_truth_eta;   //!
   TBranch        *b_el_truth_phi;   //!
   TBranch        *b_el_truth_type;   //!
   TBranch        *b_el_truth_status;   //!
   TBranch        *b_el_truth_barcode;   //!
   TBranch        *b_el_truth_mothertype;   //!
   TBranch        *b_el_truth_motherbarcode;   //!
   TBranch        *b_el_truth_hasHardBrem;   //!
   TBranch        *b_el_truth_index;   //!
   TBranch        *b_el_truth_matched;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_goodOQ;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone15;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone25;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone35;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone20;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_ptcone40;   //!
   TBranch        *b_el_nucone20;   //!
   TBranch        *b_el_nucone30;   //!
   TBranch        *b_el_nucone40;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_hasconv;   //!
   TBranch        *b_el_convvtxx;   //!
   TBranch        *b_el_convvtxy;   //!
   TBranch        *b_el_convvtxz;   //!
   TBranch        *b_el_Rconv;   //!
   TBranch        *b_el_zconv;   //!
   TBranch        *b_el_convvtxchi2;   //!
   TBranch        *b_el_pt1conv;   //!
   TBranch        *b_el_convtrk1nBLHits;   //!
   TBranch        *b_el_convtrk1nPixHits;   //!
   TBranch        *b_el_convtrk1nSCTHits;   //!
   TBranch        *b_el_convtrk1nTRTHits;   //!
   TBranch        *b_el_pt2conv;   //!
   TBranch        *b_el_convtrk2nBLHits;   //!
   TBranch        *b_el_convtrk2nPixHits;   //!
   TBranch        *b_el_convtrk2nSCTHits;   //!
   TBranch        *b_el_convtrk2nTRTHits;   //!
   TBranch        *b_el_ptconv;   //!
   TBranch        *b_el_pzconv;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_rawcl_E;   //!
   TBranch        *b_el_rawcl_pt;   //!
   TBranch        *b_el_rawcl_eta;   //!
   TBranch        *b_el_rawcl_phi;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_TRTHighTHitsRatioOutliers;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_EF_index;   //!
   TBranch        *b_el_L2_dr;   //!
   TBranch        *b_el_L2_index;   //!
   TBranch        *b_el_L1_dr;   //!
   TBranch        *b_el_L1_index;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_E;   //!
   TBranch        *b_ph_Et;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_m;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_px;   //!
   TBranch        *b_ph_py;   //!
   TBranch        *b_ph_pz;   //!
   TBranch        *b_ph_author;   //!
   TBranch        *b_ph_isRecovered;   //!
   TBranch        *b_ph_isEM;   //!
   TBranch        *b_ph_OQ;   //!
   TBranch        *b_ph_OQRecalc;   //!
   TBranch        *b_ph_convFlag;   //!
   TBranch        *b_ph_isConv;   //!
   TBranch        *b_ph_nConv;   //!
   TBranch        *b_ph_nSingleTrackConv;   //!
   TBranch        *b_ph_nDoubleTrackConv;   //!
   TBranch        *b_ph_truth_deltaRRecPhoton;   //!
   TBranch        *b_ph_truth_E;   //!
   TBranch        *b_ph_truth_pt;   //!
   TBranch        *b_ph_truth_eta;   //!
   TBranch        *b_ph_truth_phi;   //!
   TBranch        *b_ph_truth_type;   //!
   TBranch        *b_ph_truth_status;   //!
   TBranch        *b_ph_truth_barcode;   //!
   TBranch        *b_ph_truth_mothertype;   //!
   TBranch        *b_ph_truth_motherbarcode;   //!
   TBranch        *b_ph_truth_index;   //!
   TBranch        *b_ph_truth_matched;   //!
   TBranch        *b_ph_loose;   //!
   TBranch        *b_ph_tight;   //!
   TBranch        *b_ph_tightIso;   //!
   TBranch        *b_ph_goodOQ;   //!
   TBranch        *b_ph_Ethad;   //!
   TBranch        *b_ph_Ethad1;   //!
   TBranch        *b_ph_f1;   //!
   TBranch        *b_ph_f1core;   //!
   TBranch        *b_ph_Emins1;   //!
   TBranch        *b_ph_fside;   //!
   TBranch        *b_ph_Emax2;   //!
   TBranch        *b_ph_ws3;   //!
   TBranch        *b_ph_wstot;   //!
   TBranch        *b_ph_E132;   //!
   TBranch        *b_ph_E1152;   //!
   TBranch        *b_ph_emaxs1;   //!
   TBranch        *b_ph_E233;   //!
   TBranch        *b_ph_E237;   //!
   TBranch        *b_ph_E277;   //!
   TBranch        *b_ph_weta2;   //!
   TBranch        *b_ph_rphiallcalo;   //!
   TBranch        *b_ph_Etcone45;   //!
   TBranch        *b_ph_Etcone15;   //!
   TBranch        *b_ph_Etcone20;   //!
   TBranch        *b_ph_Etcone25;   //!
   TBranch        *b_ph_Etcone30;   //!
   TBranch        *b_ph_Etcone35;   //!
   TBranch        *b_ph_Etcone40;   //!
   TBranch        *b_ph_ptcone20;   //!
   TBranch        *b_ph_ptcone30;   //!
   TBranch        *b_ph_ptcone40;   //!
   TBranch        *b_ph_nucone20;   //!
   TBranch        *b_ph_nucone30;   //!
   TBranch        *b_ph_nucone40;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_Es0;   //!
   TBranch        *b_ph_etas0;   //!
   TBranch        *b_ph_phis0;   //!
   TBranch        *b_ph_Es1;   //!
   TBranch        *b_ph_etas1;   //!
   TBranch        *b_ph_phis1;   //!
   TBranch        *b_ph_Es2;   //!
   TBranch        *b_ph_etas2;   //!
   TBranch        *b_ph_phis2;   //!
   TBranch        *b_ph_Es3;   //!
   TBranch        *b_ph_etas3;   //!
   TBranch        *b_ph_phis3;   //!
   TBranch        *b_ph_truth_isConv;   //!
   TBranch        *b_ph_truth_isBrem;   //!
   TBranch        *b_ph_truth_isFromHardProc;   //!
   TBranch        *b_ph_truth_isPhotonFromHardProc;   //!
   TBranch        *b_cl_n;   //!
   TBranch        *b_cl_pt;   //!
   TBranch        *b_cl_eta;   //!
   TBranch        *b_cl_phi;   //!
   TBranch        *b_jet_n;   //!
   TBranch        *b_jet_E;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_m;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_EtaOrigin;   //!
   TBranch        *b_jet_PhiOrigin;   //!
   TBranch        *b_jet_MOrigin;   //!
   TBranch        *b_jet_EtaOriginEM;   //!
   TBranch        *b_jet_PhiOriginEM;   //!
   TBranch        *b_jet_MOriginEM;   //!
   TBranch        *b_jet_WIDTH;   //!
   TBranch        *b_jet_n90;   //!
   TBranch        *b_jet_Timing;   //!
   TBranch        *b_jet_LArQuality;   //!
   TBranch        *b_jet_nTrk;   //!
   TBranch        *b_jet_sumPtTrk;   //!
   TBranch        *b_jet_OriginIndex;   //!
   TBranch        *b_jet_HECQuality;   //!
   TBranch        *b_jet_NegativeE;   //!
   TBranch        *b_jet_BCH_CORR_CELL;   //!
   TBranch        *b_jet_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_BCH_CORR_JET;   //!
   TBranch        *b_jet_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_N_BAD_CELLS;   //!
   TBranch        *b_jet_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_SamplingMax;   //!
   TBranch        *b_jet_fracSamplingMax;   //!
   TBranch        *b_jet_hecf;   //!
   TBranch        *b_jet_tgap3f;   //!
   TBranch        *b_jet_isUgly;   //!
   TBranch        *b_jet_isBadLoose;   //!
   TBranch        *b_jet_isBadTight;   //!
   TBranch        *b_jet_emfrac;   //!
   TBranch        *b_jet_Offset;   //!
   TBranch        *b_jet_EMJES;   //!
   TBranch        *b_jet_EMJES_EtaCorr;   //!
   TBranch        *b_jet_EMJESnooffset;   //!
   TBranch        *b_jet_GCWJES;   //!
   TBranch        *b_jet_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_CB;   //!
   TBranch        *b_jet_emscale_E;   //!
   TBranch        *b_jet_emscale_pt;   //!
   TBranch        *b_jet_emscale_m;   //!
   TBranch        *b_jet_emscale_eta;   //!
   TBranch        *b_jet_emscale_phi;   //!
   TBranch        *b_jet_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_jet_flavor_weight_JetProb;   //!
   TBranch        *b_jet_flavor_weight_IP1D;   //!
   TBranch        *b_jet_flavor_weight_IP2D;   //!
   TBranch        *b_jet_flavor_weight_IP3D;   //!
   TBranch        *b_jet_flavor_weight_SV0;   //!
   TBranch        *b_jet_flavor_weight_SV1;   //!
   TBranch        *b_jet_flavor_weight_SV2;   //!
   TBranch        *b_jet_flavor_weight_JetFitterTag;   //!
   TBranch        *b_jet_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_jet_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_jet_flavor_weight_IP3DSV1;   //!
   TBranch        *b_jet_el_dr;   //!
   TBranch        *b_jet_el_matched;   //!
   TBranch        *b_jet_mu_dr;   //!
   TBranch        *b_jet_mu_matched;   //!
   TBranch        *b_jet_L1_dr;   //!
   TBranch        *b_jet_L1_matched;   //!
   TBranch        *b_jet_L2_dr;   //!
   TBranch        *b_jet_L2_matched;   //!
   TBranch        *b_jet_EF_dr;   //!
   TBranch        *b_jet_EF_matched;   //!
   TBranch        *b_jet_elAssoc_index;   //!
   TBranch        *b_jet_tauAssoc_index;   //!
   TBranch        *b_jet_truthAssoc_index;   //!
   TBranch        *b_jet_AntiKt4TopoEM_n;   //!
   TBranch        *b_jet_AntiKt4TopoEM_E;   //!
   TBranch        *b_jet_AntiKt4TopoEM_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEM_m;   //!
   TBranch        *b_jet_AntiKt4TopoEM_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEM_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EtaOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEM_PhiOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MOrigin;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EtaOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEM_PhiOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MOriginEM;   //!
   TBranch        *b_jet_AntiKt4TopoEM_WIDTH;   //!
   TBranch        *b_jet_AntiKt4TopoEM_n90;   //!
   TBranch        *b_jet_AntiKt4TopoEM_Timing;   //!
   TBranch        *b_jet_AntiKt4TopoEM_LArQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEM_nTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEM_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEM_OriginIndex;   //!
   TBranch        *b_jet_AntiKt4TopoEM_HECQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEM_NegativeE;   //!
   TBranch        *b_jet_AntiKt4TopoEM_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4TopoEM_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4TopoEM_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4TopoEM_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEM_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt4TopoEM_SamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEM_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEM_hecf;   //!
   TBranch        *b_jet_AntiKt4TopoEM_tgap3f;   //!
   TBranch        *b_jet_AntiKt4TopoEM_isUgly;   //!
   TBranch        *b_jet_AntiKt4TopoEM_isBadLoose;   //!
   TBranch        *b_jet_AntiKt4TopoEM_isBadTight;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emfrac;   //!
   TBranch        *b_jet_AntiKt4TopoEM_Offset;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EMJES;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EMJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EMJESnooffset;   //!
   TBranch        *b_jet_AntiKt4TopoEM_GCWJES;   //!
   TBranch        *b_jet_AntiKt4TopoEM_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_CB;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emscale_E;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emscale_m;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEM_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_IP1D;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_JetFitterTag;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_jet_AntiKt4TopoEM_flavor_weight_IP3DSV1;   //!
   TBranch        *b_jet_AntiKt4TopoEM_el_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_el_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEM_mu_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_mu_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEM_L1_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_L1_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEM_L2_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_L2_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EF_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEM_EF_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEM_elAssoc_index;   //!
   TBranch        *b_jet_AntiKt4TopoEM_tauAssoc_index;   //!
   TBranch        *b_jet_AntiKt4TopoEM_truthAssoc_index;   //!
   TBranch        *b_mu_muid_n;   //!
   TBranch        *b_mu_muid_E;   //!
   TBranch        *b_mu_muid_pt;   //!
   TBranch        *b_mu_muid_m;   //!
   TBranch        *b_mu_muid_eta;   //!
   TBranch        *b_mu_muid_phi;   //!
   TBranch        *b_mu_muid_px;   //!
   TBranch        *b_mu_muid_py;   //!
   TBranch        *b_mu_muid_pz;   //!
   TBranch        *b_mu_muid_charge;   //!
   TBranch        *b_mu_muid_allauthor;   //!
   TBranch        *b_mu_muid_author;   //!
   TBranch        *b_mu_muid_beta;   //!
   TBranch        *b_mu_muid_isMuonLikelihood;   //!
   TBranch        *b_mu_muid_matchchi2;   //!
   TBranch        *b_mu_muid_matchndof;   //!
   TBranch        *b_mu_muid_etcone20;   //!
   TBranch        *b_mu_muid_etcone30;   //!
   TBranch        *b_mu_muid_etcone40;   //!
   TBranch        *b_mu_muid_nucone20;   //!
   TBranch        *b_mu_muid_nucone30;   //!
   TBranch        *b_mu_muid_nucone40;   //!
   TBranch        *b_mu_muid_ptcone20;   //!
   TBranch        *b_mu_muid_ptcone30;   //!
   TBranch        *b_mu_muid_ptcone40;   //!
   TBranch        *b_mu_muid_energyLossPar;   //!
   TBranch        *b_mu_muid_energyLossErr;   //!
   TBranch        *b_mu_muid_etCore;   //!
   TBranch        *b_mu_muid_energyLossType;   //!
   TBranch        *b_mu_muid_caloMuonIdTag;   //!
   TBranch        *b_mu_muid_caloLRLikelihood;   //!
   TBranch        *b_mu_muid_bestMatch;   //!
   TBranch        *b_mu_muid_isStandAloneMuon;   //!
   TBranch        *b_mu_muid_isCombinedMuon;   //!
   TBranch        *b_mu_muid_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_muid_loose;   //!
   TBranch        *b_mu_muid_medium;   //!
   TBranch        *b_mu_muid_tight;   //!
   TBranch        *b_mu_muid_d0_exPV;   //!
   TBranch        *b_mu_muid_z0_exPV;   //!
   TBranch        *b_mu_muid_phi_exPV;   //!
   TBranch        *b_mu_muid_theta_exPV;   //!
   TBranch        *b_mu_muid_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cb_d0_exPV;   //!
   TBranch        *b_mu_muid_cb_z0_exPV;   //!
   TBranch        *b_mu_muid_cb_phi_exPV;   //!
   TBranch        *b_mu_muid_cb_theta_exPV;   //!
   TBranch        *b_mu_muid_cb_qoverp_exPV;   //!
   TBranch        *b_mu_muid_id_d0_exPV;   //!
   TBranch        *b_mu_muid_id_z0_exPV;   //!
   TBranch        *b_mu_muid_id_phi_exPV;   //!
   TBranch        *b_mu_muid_id_theta_exPV;   //!
   TBranch        *b_mu_muid_id_qoverp_exPV;   //!
   TBranch        *b_mu_muid_me_d0_exPV;   //!
   TBranch        *b_mu_muid_me_z0_exPV;   //!
   TBranch        *b_mu_muid_me_phi_exPV;   //!
   TBranch        *b_mu_muid_me_theta_exPV;   //!
   TBranch        *b_mu_muid_me_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ie_d0_exPV;   //!
   TBranch        *b_mu_muid_ie_z0_exPV;   //!
   TBranch        *b_mu_muid_ie_phi_exPV;   //!
   TBranch        *b_mu_muid_ie_theta_exPV;   //!
   TBranch        *b_mu_muid_ie_qoverp_exPV;   //!
   TBranch        *b_mu_muid_SpaceTime_detID;   //!
   TBranch        *b_mu_muid_SpaceTime_t;   //!
   TBranch        *b_mu_muid_SpaceTime_tError;   //!
   TBranch        *b_mu_muid_SpaceTime_weight;   //!
   TBranch        *b_mu_muid_SpaceTime_x;   //!
   TBranch        *b_mu_muid_SpaceTime_y;   //!
   TBranch        *b_mu_muid_SpaceTime_z;   //!
   TBranch        *b_mu_muid_SpaceTime_t_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_tError_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_weight_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_x_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_y_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_z_Tile;   //!
   TBranch        *b_mu_muid_SpaceTime_t_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_tError_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_weight_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_x_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_y_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_z_TRT;   //!
   TBranch        *b_mu_muid_SpaceTime_t_MDT;   //!
   TBranch        *b_mu_muid_SpaceTime_tError_MDT;   //!
   TBranch        *b_mu_muid_SpaceTime_weight_MDT;   //!
   TBranch        *b_mu_muid_SpaceTime_x_MDT;   //!
   TBranch        *b_mu_muid_SpaceTime_y_MDT;   //!
   TBranch        *b_mu_muid_SpaceTime_z_MDT;   //!
   TBranch        *b_mu_muid_TileCellEnergyLayer1;   //!
   TBranch        *b_mu_muid_TileTimeLayer1;   //!
   TBranch        *b_mu_muid_TileCellRmsNoiseLayer1;   //!
   TBranch        *b_mu_muid_TileCellSignLayer1;   //!
   TBranch        *b_mu_muid_TileCellEnergyLayer2;   //!
   TBranch        *b_mu_muid_TileTimeLayer2;   //!
   TBranch        *b_mu_muid_TileCellRmsNoiseLayer2;   //!
   TBranch        *b_mu_muid_TileCellSignLayer2;   //!
   TBranch        *b_mu_muid_TileCellEnergyLayer3;   //!
   TBranch        *b_mu_muid_TileTimeLayer3;   //!
   TBranch        *b_mu_muid_TileCellRmsNoiseLayer3;   //!
   TBranch        *b_mu_muid_TileCellSignLayer3;   //!
   TBranch        *b_mu_muid_MSTrkT0_1;   //!
   TBranch        *b_mu_muid_MSTrkT0_2;   //!
   TBranch        *b_mu_muid_MSTrkT0_3;   //!
   TBranch        *b_mu_muid_cov_d0_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_muid_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_muid_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_muid_ms_d0;   //!
   TBranch        *b_mu_muid_ms_z0;   //!
   TBranch        *b_mu_muid_ms_phi;   //!
   TBranch        *b_mu_muid_ms_theta;   //!
   TBranch        *b_mu_muid_ms_qoverp;   //!
   TBranch        *b_mu_muid_id_d0;   //!
   TBranch        *b_mu_muid_id_z0;   //!
   TBranch        *b_mu_muid_id_phi;   //!
   TBranch        *b_mu_muid_id_theta;   //!
   TBranch        *b_mu_muid_id_qoverp;   //!
   TBranch        *b_mu_muid_me_d0;   //!
   TBranch        *b_mu_muid_me_z0;   //!
   TBranch        *b_mu_muid_me_phi;   //!
   TBranch        *b_mu_muid_me_theta;   //!
   TBranch        *b_mu_muid_me_qoverp;   //!
   TBranch        *b_mu_muid_ie_d0;   //!
   TBranch        *b_mu_muid_ie_z0;   //!
   TBranch        *b_mu_muid_ie_phi;   //!
   TBranch        *b_mu_muid_ie_theta;   //!
   TBranch        *b_mu_muid_ie_qoverp;   //!
   TBranch        *b_mu_muid_nOutliersOnTrack;   //!
   TBranch        *b_mu_muid_nBLHits;   //!
   TBranch        *b_mu_muid_nPixHits;   //!
   TBranch        *b_mu_muid_nSCTHits;   //!
   TBranch        *b_mu_muid_nTRTHits;   //!
   TBranch        *b_mu_muid_nTRTHighTHits;   //!
   TBranch        *b_mu_muid_nBLSharedHits;   //!
   TBranch        *b_mu_muid_nPixSharedHits;   //!
   TBranch        *b_mu_muid_nPixHoles;   //!
   TBranch        *b_mu_muid_nSCTSharedHits;   //!
   TBranch        *b_mu_muid_nSCTHoles;   //!
   TBranch        *b_mu_muid_nTRTOutliers;   //!
   TBranch        *b_mu_muid_nTRTHighTOutliers;   //!
   TBranch        *b_mu_muid_nGangedPixels;   //!
   TBranch        *b_mu_muid_nPixelDeadSensors;   //!
   TBranch        *b_mu_muid_nSCTDeadSensors;   //!
   TBranch        *b_mu_muid_nTRTDeadStraws;   //!
   TBranch        *b_mu_muid_expectBLayerHit;   //!
   TBranch        *b_mu_muid_nMDTHits;   //!
   TBranch        *b_mu_muid_nMDTHoles;   //!
   TBranch        *b_mu_muid_nCSCEtaHits;   //!
   TBranch        *b_mu_muid_nCSCEtaHoles;   //!
   TBranch        *b_mu_muid_nCSCPhiHits;   //!
   TBranch        *b_mu_muid_nCSCPhiHoles;   //!
   TBranch        *b_mu_muid_nRPCEtaHits;   //!
   TBranch        *b_mu_muid_nRPCEtaHoles;   //!
   TBranch        *b_mu_muid_nRPCPhiHits;   //!
   TBranch        *b_mu_muid_nRPCPhiHoles;   //!
   TBranch        *b_mu_muid_nTGCEtaHits;   //!
   TBranch        *b_mu_muid_nTGCEtaHoles;   //!
   TBranch        *b_mu_muid_nTGCPhiHits;   //!
   TBranch        *b_mu_muid_nTGCPhiHoles;   //!
   TBranch        *b_mu_muid_trackd0;   //!
   TBranch        *b_mu_muid_trackz0;   //!
   TBranch        *b_mu_muid_trackphi;   //!
   TBranch        *b_mu_muid_tracktheta;   //!
   TBranch        *b_mu_muid_trackqoverp;   //!
   TBranch        *b_mu_muid_trackcov_d0;   //!
   TBranch        *b_mu_muid_trackcov_z0;   //!
   TBranch        *b_mu_muid_trackcov_phi;   //!
   TBranch        *b_mu_muid_trackcov_theta;   //!
   TBranch        *b_mu_muid_trackcov_qoverp;   //!
   TBranch        *b_mu_muid_trackfitchi2;   //!
   TBranch        *b_mu_muid_trackfitndof;   //!
   TBranch        *b_mu_muid_hastrack;   //!
   TBranch        *b_mu_muid_truth_dr;   //!
   TBranch        *b_mu_muid_truth_E;   //!
   TBranch        *b_mu_muid_truth_pt;   //!
   TBranch        *b_mu_muid_truth_eta;   //!
   TBranch        *b_mu_muid_truth_phi;   //!
   TBranch        *b_mu_muid_truth_type;   //!
   TBranch        *b_mu_muid_truth_status;   //!
   TBranch        *b_mu_muid_truth_barcode;   //!
   TBranch        *b_mu_muid_truth_mothertype;   //!
   TBranch        *b_mu_muid_truth_motherbarcode;   //!
   TBranch        *b_mu_muid_truth_matched;   //!
   TBranch        *b_mu_muid_EFCB_dr;   //!
   TBranch        *b_mu_muid_EFCB_n;   //!
   TBranch        *b_mu_muid_EFCB_MuonType;   //!
   TBranch        *b_mu_muid_EFCB_pt;   //!
   TBranch        *b_mu_muid_EFCB_eta;   //!
   TBranch        *b_mu_muid_EFCB_phi;   //!
   TBranch        *b_mu_muid_EFCB_hasCB;   //!
   TBranch        *b_mu_muid_EFCB_matched;   //!
   TBranch        *b_mu_muid_EFMG_dr;   //!
   TBranch        *b_mu_muid_EFMG_n;   //!
   TBranch        *b_mu_muid_EFMG_MuonType;   //!
   TBranch        *b_mu_muid_EFMG_pt;   //!
   TBranch        *b_mu_muid_EFMG_eta;   //!
   TBranch        *b_mu_muid_EFMG_phi;   //!
   TBranch        *b_mu_muid_EFMG_hasMG;   //!
   TBranch        *b_mu_muid_EFMG_matched;   //!
   TBranch        *b_mu_muid_EFME_dr;   //!
   TBranch        *b_mu_muid_EFME_n;   //!
   TBranch        *b_mu_muid_EFME_MuonType;   //!
   TBranch        *b_mu_muid_EFME_pt;   //!
   TBranch        *b_mu_muid_EFME_eta;   //!
   TBranch        *b_mu_muid_EFME_phi;   //!
   TBranch        *b_mu_muid_EFME_hasME;   //!
   TBranch        *b_mu_muid_EFME_matched;   //!
   TBranch        *b_mu_muid_L2CB_dr;   //!
   TBranch        *b_mu_muid_L2CB_pt;   //!
   TBranch        *b_mu_muid_L2CB_eta;   //!
   TBranch        *b_mu_muid_L2CB_phi;   //!
   TBranch        *b_mu_muid_L2CB_id_pt;   //!
   TBranch        *b_mu_muid_L2CB_ms_pt;   //!
   TBranch        *b_mu_muid_L2CB_matched;   //!
   TBranch        *b_mu_muid_L1_dr;   //!
   TBranch        *b_mu_muid_L1_pt;   //!
   TBranch        *b_mu_muid_L1_eta;   //!
   TBranch        *b_mu_muid_L1_phi;   //!
   TBranch        *b_mu_muid_L1_matched;   //!
   TBranch        *b_mu_muid_truthAssoc_index;   //!
   TBranch        *b_mu_staco_n;   //!
   TBranch        *b_mu_staco_E;   //!
   TBranch        *b_mu_staco_pt;   //!
   TBranch        *b_mu_staco_m;   //!
   TBranch        *b_mu_staco_eta;   //!
   TBranch        *b_mu_staco_phi;   //!
   TBranch        *b_mu_staco_px;   //!
   TBranch        *b_mu_staco_py;   //!
   TBranch        *b_mu_staco_pz;   //!
   TBranch        *b_mu_staco_charge;   //!
   TBranch        *b_mu_staco_allauthor;   //!
   TBranch        *b_mu_staco_author;   //!
   TBranch        *b_mu_staco_beta;   //!
   TBranch        *b_mu_staco_isMuonLikelihood;   //!
   TBranch        *b_mu_staco_matchchi2;   //!
   TBranch        *b_mu_staco_matchndof;   //!
   TBranch        *b_mu_staco_etcone20;   //!
   TBranch        *b_mu_staco_etcone30;   //!
   TBranch        *b_mu_staco_etcone40;   //!
   TBranch        *b_mu_staco_nucone20;   //!
   TBranch        *b_mu_staco_nucone30;   //!
   TBranch        *b_mu_staco_nucone40;   //!
   TBranch        *b_mu_staco_ptcone20;   //!
   TBranch        *b_mu_staco_ptcone30;   //!
   TBranch        *b_mu_staco_ptcone40;   //!
   TBranch        *b_mu_staco_energyLossPar;   //!
   TBranch        *b_mu_staco_energyLossErr;   //!
   TBranch        *b_mu_staco_etCore;   //!
   TBranch        *b_mu_staco_energyLossType;   //!
   TBranch        *b_mu_staco_caloMuonIdTag;   //!
   TBranch        *b_mu_staco_caloLRLikelihood;   //!
   TBranch        *b_mu_staco_bestMatch;   //!
   TBranch        *b_mu_staco_isStandAloneMuon;   //!
   TBranch        *b_mu_staco_isCombinedMuon;   //!
   TBranch        *b_mu_staco_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_staco_loose;   //!
   TBranch        *b_mu_staco_medium;   //!
   TBranch        *b_mu_staco_tight;   //!
   TBranch        *b_mu_staco_d0_exPV;   //!
   TBranch        *b_mu_staco_z0_exPV;   //!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cb_d0_exPV;   //!
   TBranch        *b_mu_staco_cb_z0_exPV;   //!
   TBranch        *b_mu_staco_cb_phi_exPV;   //!
   TBranch        *b_mu_staco_cb_theta_exPV;   //!
   TBranch        *b_mu_staco_cb_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_d0_exPV;   //!
   TBranch        *b_mu_staco_id_z0_exPV;   //!
   TBranch        *b_mu_staco_id_phi_exPV;   //!
   TBranch        *b_mu_staco_id_theta_exPV;   //!
   TBranch        *b_mu_staco_id_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_d0_exPV;   //!
   TBranch        *b_mu_staco_me_z0_exPV;   //!
   TBranch        *b_mu_staco_me_phi_exPV;   //!
   TBranch        *b_mu_staco_me_theta_exPV;   //!
   TBranch        *b_mu_staco_me_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ie_d0_exPV;   //!
   TBranch        *b_mu_staco_ie_z0_exPV;   //!
   TBranch        *b_mu_staco_ie_phi_exPV;   //!
   TBranch        *b_mu_staco_ie_theta_exPV;   //!
   TBranch        *b_mu_staco_ie_qoverp_exPV;   //!
   TBranch        *b_mu_staco_SpaceTime_detID;   //!
   TBranch        *b_mu_staco_SpaceTime_t;   //!
   TBranch        *b_mu_staco_SpaceTime_tError;   //!
   TBranch        *b_mu_staco_SpaceTime_weight;   //!
   TBranch        *b_mu_staco_SpaceTime_x;   //!
   TBranch        *b_mu_staco_SpaceTime_y;   //!
   TBranch        *b_mu_staco_SpaceTime_z;   //!
   TBranch        *b_mu_staco_SpaceTime_t_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_tError_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_weight_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_x_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_y_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_z_Tile;   //!
   TBranch        *b_mu_staco_SpaceTime_t_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_tError_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_weight_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_x_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_y_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_z_TRT;   //!
   TBranch        *b_mu_staco_SpaceTime_t_MDT;   //!
   TBranch        *b_mu_staco_SpaceTime_tError_MDT;   //!
   TBranch        *b_mu_staco_SpaceTime_weight_MDT;   //!
   TBranch        *b_mu_staco_SpaceTime_x_MDT;   //!
   TBranch        *b_mu_staco_SpaceTime_y_MDT;   //!
   TBranch        *b_mu_staco_SpaceTime_z_MDT;   //!
   TBranch        *b_mu_staco_TileCellEnergyLayer1;   //!
   TBranch        *b_mu_staco_TileTimeLayer1;   //!
   TBranch        *b_mu_staco_TileCellRmsNoiseLayer1;   //!
   TBranch        *b_mu_staco_TileCellSignLayer1;   //!
   TBranch        *b_mu_staco_TileCellEnergyLayer2;   //!
   TBranch        *b_mu_staco_TileTimeLayer2;   //!
   TBranch        *b_mu_staco_TileCellRmsNoiseLayer2;   //!
   TBranch        *b_mu_staco_TileCellSignLayer2;   //!
   TBranch        *b_mu_staco_TileCellEnergyLayer3;   //!
   TBranch        *b_mu_staco_TileTimeLayer3;   //!
   TBranch        *b_mu_staco_TileCellRmsNoiseLayer3;   //!
   TBranch        *b_mu_staco_TileCellSignLayer3;   //!
   TBranch        *b_mu_staco_MSTrkT0_1;   //!
   TBranch        *b_mu_staco_MSTrkT0_2;   //!
   TBranch        *b_mu_staco_MSTrkT0_3;   //!
   TBranch        *b_mu_staco_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ms_d0;   //!
   TBranch        *b_mu_staco_ms_z0;   //!
   TBranch        *b_mu_staco_ms_phi;   //!
   TBranch        *b_mu_staco_ms_theta;   //!
   TBranch        *b_mu_staco_ms_qoverp;   //!
   TBranch        *b_mu_staco_id_d0;   //!
   TBranch        *b_mu_staco_id_z0;   //!
   TBranch        *b_mu_staco_id_phi;   //!
   TBranch        *b_mu_staco_id_theta;   //!
   TBranch        *b_mu_staco_id_qoverp;   //!
   TBranch        *b_mu_staco_me_d0;   //!
   TBranch        *b_mu_staco_me_z0;   //!
   TBranch        *b_mu_staco_me_phi;   //!
   TBranch        *b_mu_staco_me_theta;   //!
   TBranch        *b_mu_staco_me_qoverp;   //!
   TBranch        *b_mu_staco_ie_d0;   //!
   TBranch        *b_mu_staco_ie_z0;   //!
   TBranch        *b_mu_staco_ie_phi;   //!
   TBranch        *b_mu_staco_ie_theta;   //!
   TBranch        *b_mu_staco_ie_qoverp;   //!
   TBranch        *b_mu_staco_nOutliersOnTrack;   //!
   TBranch        *b_mu_staco_nBLHits;   //!
   TBranch        *b_mu_staco_nPixHits;   //!
   TBranch        *b_mu_staco_nSCTHits;   //!
   TBranch        *b_mu_staco_nTRTHits;   //!
   TBranch        *b_mu_staco_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_nBLSharedHits;   //!
   TBranch        *b_mu_staco_nPixSharedHits;   //!
   TBranch        *b_mu_staco_nPixHoles;   //!
   TBranch        *b_mu_staco_nSCTSharedHits;   //!
   TBranch        *b_mu_staco_nSCTHoles;   //!
   TBranch        *b_mu_staco_nTRTOutliers;   //!
   TBranch        *b_mu_staco_nTRTHighTOutliers;   //!
   TBranch        *b_mu_staco_nGangedPixels;   //!
   TBranch        *b_mu_staco_nPixelDeadSensors;   //!
   TBranch        *b_mu_staco_nSCTDeadSensors;   //!
   TBranch        *b_mu_staco_nTRTDeadStraws;   //!
   TBranch        *b_mu_staco_expectBLayerHit;   //!
   TBranch        *b_mu_staco_nMDTHits;   //!
   TBranch        *b_mu_staco_nMDTHoles;   //!
   TBranch        *b_mu_staco_nCSCEtaHits;   //!
   TBranch        *b_mu_staco_nCSCEtaHoles;   //!
   TBranch        *b_mu_staco_nCSCPhiHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHoles;   //!
   TBranch        *b_mu_staco_nRPCEtaHits;   //!
   TBranch        *b_mu_staco_nRPCEtaHoles;   //!
   TBranch        *b_mu_staco_nRPCPhiHits;   //!
   TBranch        *b_mu_staco_nRPCPhiHoles;   //!
   TBranch        *b_mu_staco_nTGCEtaHits;   //!
   TBranch        *b_mu_staco_nTGCEtaHoles;   //!
   TBranch        *b_mu_staco_nTGCPhiHits;   //!
   TBranch        *b_mu_staco_nTGCPhiHoles;   //!
   TBranch        *b_mu_staco_trackd0;   //!
   TBranch        *b_mu_staco_trackz0;   //!
   TBranch        *b_mu_staco_trackphi;   //!
   TBranch        *b_mu_staco_tracktheta;   //!
   TBranch        *b_mu_staco_trackqoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0;   //!
   TBranch        *b_mu_staco_trackcov_z0;   //!
   TBranch        *b_mu_staco_trackcov_phi;   //!
   TBranch        *b_mu_staco_trackcov_theta;   //!
   TBranch        *b_mu_staco_trackcov_qoverp;   //!
   TBranch        *b_mu_staco_trackfitchi2;   //!
   TBranch        *b_mu_staco_trackfitndof;   //!
   TBranch        *b_mu_staco_hastrack;   //!
   TBranch        *b_mu_staco_truth_dr;   //!
   TBranch        *b_mu_staco_truth_E;   //!
   TBranch        *b_mu_staco_truth_pt;   //!
   TBranch        *b_mu_staco_truth_eta;   //!
   TBranch        *b_mu_staco_truth_phi;   //!
   TBranch        *b_mu_staco_truth_type;   //!
   TBranch        *b_mu_staco_truth_status;   //!
   TBranch        *b_mu_staco_truth_barcode;   //!
   TBranch        *b_mu_staco_truth_mothertype;   //!
   TBranch        *b_mu_staco_truth_motherbarcode;   //!
   TBranch        *b_mu_staco_truth_matched;   //!
   TBranch        *b_mu_staco_EFCB_dr;   //!
   TBranch        *b_mu_staco_EFCB_n;   //!
   TBranch        *b_mu_staco_EFCB_MuonType;   //!
   TBranch        *b_mu_staco_EFCB_pt;   //!
   TBranch        *b_mu_staco_EFCB_eta;   //!
   TBranch        *b_mu_staco_EFCB_phi;   //!
   TBranch        *b_mu_staco_EFCB_hasCB;   //!
   TBranch        *b_mu_staco_EFCB_matched;   //!
   TBranch        *b_mu_staco_EFMG_dr;   //!
   TBranch        *b_mu_staco_EFMG_n;   //!
   TBranch        *b_mu_staco_EFMG_MuonType;   //!
   TBranch        *b_mu_staco_EFMG_pt;   //!
   TBranch        *b_mu_staco_EFMG_eta;   //!
   TBranch        *b_mu_staco_EFMG_phi;   //!
   TBranch        *b_mu_staco_EFMG_hasMG;   //!
   TBranch        *b_mu_staco_EFMG_matched;   //!
   TBranch        *b_mu_staco_EFME_dr;   //!
   TBranch        *b_mu_staco_EFME_n;   //!
   TBranch        *b_mu_staco_EFME_MuonType;   //!
   TBranch        *b_mu_staco_EFME_pt;   //!
   TBranch        *b_mu_staco_EFME_eta;   //!
   TBranch        *b_mu_staco_EFME_phi;   //!
   TBranch        *b_mu_staco_EFME_hasME;   //!
   TBranch        *b_mu_staco_EFME_matched;   //!
   TBranch        *b_mu_staco_L2CB_dr;   //!
   TBranch        *b_mu_staco_L2CB_pt;   //!
   TBranch        *b_mu_staco_L2CB_eta;   //!
   TBranch        *b_mu_staco_L2CB_phi;   //!
   TBranch        *b_mu_staco_L2CB_id_pt;   //!
   TBranch        *b_mu_staco_L2CB_ms_pt;   //!
   TBranch        *b_mu_staco_L2CB_matched;   //!
   TBranch        *b_mu_staco_L1_dr;   //!
   TBranch        *b_mu_staco_L1_pt;   //!
   TBranch        *b_mu_staco_L1_eta;   //!
   TBranch        *b_mu_staco_L1_phi;   //!
   TBranch        *b_mu_staco_L1_matched;   //!
   TBranch        *b_mu_staco_truthAssoc_index;   //!
   TBranch        *b_MET_RefFinal_etx;   //!
   TBranch        *b_MET_RefFinal_ety;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_RefFinal_sumet;   //!
   TBranch        *b_MET_Cryo_etx;   //!
   TBranch        *b_MET_Cryo_ety;   //!
   TBranch        *b_MET_Cryo_phi;   //!
   TBranch        *b_MET_Cryo_et;   //!
   TBranch        *b_MET_Cryo_sumet;   //!
   TBranch        *b_MET_RefEle_etx;   //!
   TBranch        *b_MET_RefEle_ety;   //!
   TBranch        *b_MET_RefEle_phi;   //!
   TBranch        *b_MET_RefEle_et;   //!
   TBranch        *b_MET_RefEle_sumet;   //!
   TBranch        *b_MET_RefJet_etx;   //!
   TBranch        *b_MET_RefJet_ety;   //!
   TBranch        *b_MET_RefJet_phi;   //!
   TBranch        *b_MET_RefJet_et;   //!
   TBranch        *b_MET_RefJet_sumet;   //!
   TBranch        *b_MET_RefMuon_etx;   //!
   TBranch        *b_MET_RefMuon_ety;   //!
   TBranch        *b_MET_RefMuon_phi;   //!
   TBranch        *b_MET_RefMuon_et;   //!
   TBranch        *b_MET_RefMuon_sumet;   //!
   TBranch        *b_MET_RefGamma_etx;   //!
   TBranch        *b_MET_RefGamma_ety;   //!
   TBranch        *b_MET_RefGamma_phi;   //!
   TBranch        *b_MET_RefGamma_et;   //!
   TBranch        *b_MET_RefGamma_sumet;   //!
   TBranch        *b_MET_RefTau_etx;   //!
   TBranch        *b_MET_RefTau_ety;   //!
   TBranch        *b_MET_RefTau_phi;   //!
   TBranch        *b_MET_RefTau_et;   //!
   TBranch        *b_MET_RefTau_sumet;   //!
   TBranch        *b_MET_CellOut_etx;   //!
   TBranch        *b_MET_CellOut_ety;   //!
   TBranch        *b_MET_CellOut_phi;   //!
   TBranch        *b_MET_CellOut_et;   //!
   TBranch        *b_MET_CellOut_sumet;   //!
   TBranch        *b_MET_Track_etx;   //!
   TBranch        *b_MET_Track_ety;   //!
   TBranch        *b_MET_Track_phi;   //!
   TBranch        *b_MET_Track_et;   //!
   TBranch        *b_MET_Track_sumet;   //!
   TBranch        *b_MET_MuonBoy_etx;   //!
   TBranch        *b_MET_MuonBoy_ety;   //!
   TBranch        *b_MET_MuonBoy_phi;   //!
   TBranch        *b_MET_MuonBoy_et;   //!
   TBranch        *b_MET_MuonBoy_sumet;   //!
   TBranch        *b_MET_RefMuon_Track_etx;   //!
   TBranch        *b_MET_RefMuon_Track_ety;   //!
   TBranch        *b_MET_RefMuon_Track_phi;   //!
   TBranch        *b_MET_RefMuon_Track_et;   //!
   TBranch        *b_MET_RefMuon_Track_sumet;   //!
   TBranch        *b_MET_Final_etx;   //!
   TBranch        *b_MET_Final_ety;   //!
   TBranch        *b_MET_Final_phi;   //!
   TBranch        *b_MET_Final_et;   //!
   TBranch        *b_MET_Final_sumet;   //!
   TBranch        *b_MET_Muid_etx;   //!
   TBranch        *b_MET_Muid_ety;   //!
   TBranch        *b_MET_Muid_phi;   //!
   TBranch        *b_MET_Muid_et;   //!
   TBranch        *b_MET_Muid_sumet;   //!
   TBranch        *b_MET_Muon_etx;   //!
   TBranch        *b_MET_Muon_ety;   //!
   TBranch        *b_MET_Muon_phi;   //!
   TBranch        *b_MET_Muon_et;   //!
   TBranch        *b_MET_Muon_sumet;   //!
   TBranch        *b_MET_Topo_etx;   //!
   TBranch        *b_MET_Topo_ety;   //!
   TBranch        *b_MET_Topo_phi;   //!
   TBranch        *b_MET_Topo_et;   //!
   TBranch        *b_MET_Topo_sumet;   //!
   TBranch        *b_MET_Topo_etx_PEMB;   //!
   TBranch        *b_MET_Topo_ety_PEMB;   //!
   TBranch        *b_MET_Topo_sumet_PEMB;   //!
   TBranch        *b_MET_Topo_phi_PEMB;   //!
   TBranch        *b_MET_Topo_etx_EMB;   //!
   TBranch        *b_MET_Topo_ety_EMB;   //!
   TBranch        *b_MET_Topo_sumet_EMB;   //!
   TBranch        *b_MET_Topo_phi_EMB;   //!
   TBranch        *b_MET_Topo_etx_PEMEC;   //!
   TBranch        *b_MET_Topo_ety_PEMEC;   //!
   TBranch        *b_MET_Topo_sumet_PEMEC;   //!
   TBranch        *b_MET_Topo_phi_PEMEC;   //!
   TBranch        *b_MET_Topo_etx_EME;   //!
   TBranch        *b_MET_Topo_ety_EME;   //!
   TBranch        *b_MET_Topo_sumet_EME;   //!
   TBranch        *b_MET_Topo_phi_EME;   //!
   TBranch        *b_MET_Topo_etx_TILE;   //!
   TBranch        *b_MET_Topo_ety_TILE;   //!
   TBranch        *b_MET_Topo_sumet_TILE;   //!
   TBranch        *b_MET_Topo_phi_TILE;   //!
   TBranch        *b_MET_Topo_etx_HEC;   //!
   TBranch        *b_MET_Topo_ety_HEC;   //!
   TBranch        *b_MET_Topo_sumet_HEC;   //!
   TBranch        *b_MET_Topo_phi_HEC;   //!
   TBranch        *b_MET_Topo_etx_FCAL;   //!
   TBranch        *b_MET_Topo_ety_FCAL;   //!
   TBranch        *b_MET_Topo_sumet_FCAL;   //!
   TBranch        *b_MET_Topo_phi_FCAL;   //!
   TBranch        *b_MET_Topo_nCell_PEMB;   //!
   TBranch        *b_MET_Topo_nCell_EMB;   //!
   TBranch        *b_MET_Topo_nCell_PEMEC;   //!
   TBranch        *b_MET_Topo_nCell_EME;   //!
   TBranch        *b_MET_Topo_nCell_TILE;   //!
   TBranch        *b_MET_Topo_nCell_HEC;   //!
   TBranch        *b_MET_Topo_nCell_FCAL;   //!
   TBranch        *b_MET_Topo_etx_CentralReg;   //!
   TBranch        *b_MET_Topo_ety_CentralReg;   //!
   TBranch        *b_MET_Topo_sumet_CentralReg;   //!
   TBranch        *b_MET_Topo_phi_CentralReg;   //!
   TBranch        *b_MET_Topo_etx_EndcapRegion;   //!
   TBranch        *b_MET_Topo_ety_EndcapRegion;   //!
   TBranch        *b_MET_Topo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Topo_phi_EndcapRegion;   //!
   TBranch        *b_MET_Topo_etx_ForwardReg;   //!
   TBranch        *b_MET_Topo_ety_ForwardReg;   //!
   TBranch        *b_MET_Topo_sumet_ForwardReg;   //!
   TBranch        *b_MET_Topo_phi_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_etx;   //!
   TBranch        *b_MET_LocHadTopo_ety;   //!
   TBranch        *b_MET_LocHadTopo_phi;   //!
   TBranch        *b_MET_LocHadTopo_et;   //!
   TBranch        *b_MET_LocHadTopo_sumet;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_EMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_EMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_EMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_EME;   //!
   TBranch        *b_MET_LocHadTopo_ety_EME;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EME;   //!
   TBranch        *b_MET_LocHadTopo_phi_EME;   //!
   TBranch        *b_MET_LocHadTopo_etx_TILE;   //!
   TBranch        *b_MET_LocHadTopo_ety_TILE;   //!
   TBranch        *b_MET_LocHadTopo_sumet_TILE;   //!
   TBranch        *b_MET_LocHadTopo_phi_TILE;   //!
   TBranch        *b_MET_LocHadTopo_etx_HEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_HEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_HEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_HEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_ety_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_sumet_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_phi_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EME;   //!
   TBranch        *b_MET_LocHadTopo_nCell_TILE;   //!
   TBranch        *b_MET_LocHadTopo_nCell_HEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_etx_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_phi_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_ForwardReg;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_d0;   //!
   TBranch        *b_trk_z0;   //!
   TBranch        *b_trk_phi;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_qoverp;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_theta_wrtPV;   //!
   TBranch        *b_trk_qoverp_wrtPV;   //!
   TBranch        *b_trk_err_d0_wrtPV;   //!
   TBranch        *b_trk_err_z0_wrtPV;   //!
   TBranch        *b_trk_err_phi_wrtPV;   //!
   TBranch        *b_trk_err_theta_wrtPV;   //!
   TBranch        *b_trk_err_qoverp_wrtPV;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nBLHits;   //!
   TBranch        *b_trk_nPixHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_nPixHoles;   //!
   TBranch        *b_trk_nSCTHoles;   //!
   TBranch        *b_trk_nMDTHits;   //!
   TBranch        *b_trk_nCSCEtaHits;   //!
   TBranch        *b_trk_nCSCPhiHits;   //!
   TBranch        *b_trk_nRPCEtaHits;   //!
   TBranch        *b_trk_nRPCPhiHits;   //!
   TBranch        *b_trk_nTGCEtaHits;   //!
   TBranch        *b_trk_nTGCPhiHits;   //!
   TBranch        *b_trk_nHits;   //!
   TBranch        *b_trk_nHoles;   //!
   TBranch        *b_trk_hitPattern;   //!
   TBranch        *b_trk_TRTHighTHitsRatio;   //!
   TBranch        *b_trk_TRTHighTHitsRatioOutliers;   //!
   TBranch        *b_trk_pixeldEdx;   //!
   TBranch        *b_trk_fitter;   //!
   TBranch        *b_trk_patternReco1;   //!
   TBranch        *b_trk_patternReco2;   //!
   TBranch        *b_trk_seedFinder;   //!
   TBranch        *b_trk_mc_probability;   //!
   TBranch        *b_trk_mc_barcode;   //!
   TBranch        *b_vxp_n;   //!
   TBranch        *b_vxp_x;   //!
   TBranch        *b_vxp_y;   //!
   TBranch        *b_vxp_z;   //!
   TBranch        *b_vxp_chi2;   //!
   TBranch        *b_vxp_ndof;   //!
   TBranch        *b_vxp_px;   //!
   TBranch        *b_vxp_py;   //!
   TBranch        *b_vxp_pz;   //!
   TBranch        *b_vxp_E;   //!
   TBranch        *b_vxp_m;   //!
   TBranch        *b_vxp_nTracks;   //!
   TBranch        *b_vxp_sumPt;   //!
   TBranch        *b_vxp_type;   //!
   TBranch        *b_vxp_sumWeightInliers;   //!
   TBranch        *b_vxp_sumWeightOutliers;   //!
   TBranch        *b_vxp_sumWeightPileup;   //!
   TBranch        *b_vxp_sumWeightFakes;   //!
   TBranch        *b_vxp_nInliers;   //!
   TBranch        *b_vxp_nOutliers;   //!
   TBranch        *b_vxp_nPileUp;   //!
   TBranch        *b_vxp_nFakes;   //!
   TBranch        *b_vxp_purity;   //!
   TBranch        *b_vxp_trk_n;   //!
   TBranch        *b_vxp_trk_index;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_collcand_passCaloTime;   //!
   TBranch        *b_collcand_passMBTSTime;   //!
   TBranch        *b_collcand_passTrigger;   //!
   TBranch        *b_collcand_pass;   //!
   TBranch        *b_mcevt_n;   //!
   TBranch        *b_mcevt_signal_process_id;   //!
   TBranch        *b_mcevt_event_number;   //!
   TBranch        *b_mcevt_event_scale;   //!
   TBranch        *b_mcevt_alphaQCD;   //!
   TBranch        *b_mcevt_alphaQED;   //!
   TBranch        *b_mcevt_pdf_id1;   //!
   TBranch        *b_mcevt_pdf_id2;   //!
   TBranch        *b_mcevt_pdf_x1;   //!
   TBranch        *b_mcevt_pdf_x2;   //!
   TBranch        *b_mcevt_pdf_scale;   //!
   TBranch        *b_mcevt_pdf1;   //!
   TBranch        *b_mcevt_pdf2;   //!
   TBranch        *b_mcevt_weight;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_m;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_status;   //!
   TBranch        *b_mc_barcode;   //!
   TBranch        *b_mc_parents;   //!
   TBranch        *b_mc_children;   //!
   TBranch        *b_mc_pdgId;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_mc_vx_x;   //!
   TBranch        *b_mc_vx_y;   //!
   TBranch        *b_mc_vx_z;   //!
   TBranch        *b_mc_child_index;   //!
   TBranch        *b_mc_parent_index;   //!
   TBranch        *b_trueTau_n;   //!
   TBranch        *b_trueTau_pt;   //!
   TBranch        *b_trueTau_m;   //!
   TBranch        *b_trueTau_eta;   //!
   TBranch        *b_trueTau_phi;   //!
   TBranch        *b_trueTau_vis_m;   //!
   TBranch        *b_trueTau_vis_Et;   //!
   TBranch        *b_trueTau_vis_eta;   //!
   TBranch        *b_trueTau_vis_phi;   //!
   TBranch        *b_trueTau_nProng;   //!
   TBranch        *b_trueTau_nPi0;   //!
   TBranch        *b_trueTau_charge;   //!
   TBranch        *b_trueTau_tauAssoc_dr;   //!
   TBranch        *b_trueTau_tauAssoc_index;   //!
   TBranch        *b_trueTau_tauAssoc_matched;   //!
   TBranch        *b_trueTau_truthAssoc_index;   //!
   TBranch        *b_muonTruth_n;   //!
   TBranch        *b_muonTruth_pt;   //!
   TBranch        *b_muonTruth_m;   //!
   TBranch        *b_muonTruth_eta;   //!
   TBranch        *b_muonTruth_phi;   //!
   TBranch        *b_muonTruth_charge;   //!
   TBranch        *b_muonTruth_PDGID;   //!
   TBranch        *b_muonTruth_barcode;   //!
   TBranch        *b_muonTruth_type;   //!
   TBranch        *b_muonTruth_origin;   //!
   TBranch        *b_jet_antikt4truth_n;   //!
   TBranch        *b_jet_antikt4truth_E;   //!
   TBranch        *b_jet_antikt4truth_pt;   //!
   TBranch        *b_jet_antikt4truth_m;   //!
   TBranch        *b_jet_antikt4truth_eta;   //!
   TBranch        *b_jet_antikt4truth_phi;   //!
   TBranch        *b_jet_antikt4truth_EtaOrigin;   //!
   TBranch        *b_jet_antikt4truth_PhiOrigin;   //!
   TBranch        *b_jet_antikt4truth_MOrigin;   //!
   TBranch        *b_jet_antikt4truth_EtaOriginEM;   //!
   TBranch        *b_jet_antikt4truth_PhiOriginEM;   //!
   TBranch        *b_jet_antikt4truth_MOriginEM;   //!
   TBranch        *b_jet_antikt4truth_WIDTH;   //!
   TBranch        *b_jet_antikt4truth_n90;   //!
   TBranch        *b_jet_antikt4truth_Timing;   //!
   TBranch        *b_jet_antikt4truth_LArQuality;   //!
   TBranch        *b_jet_antikt4truth_nTrk;   //!
   TBranch        *b_jet_antikt4truth_sumPtTrk;   //!
   TBranch        *b_jet_antikt4truth_OriginIndex;   //!
   TBranch        *b_jet_antikt4truth_HECQuality;   //!
   TBranch        *b_jet_antikt4truth_NegativeE;   //!
   TBranch        *b_jet_antikt4truth_BCH_CORR_CELL;   //!
   TBranch        *b_jet_antikt4truth_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_antikt4truth_BCH_CORR_JET;   //!
   TBranch        *b_jet_antikt4truth_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_antikt4truth_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_antikt4truth_N_BAD_CELLS;   //!
   TBranch        *b_jet_antikt4truth_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_antikt4truth_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_antikt4truth_SamplingMax;   //!
   TBranch        *b_jet_antikt4truth_fracSamplingMax;   //!
   TBranch        *b_jet_antikt4truth_hecf;   //!
   TBranch        *b_jet_antikt4truth_tgap3f;   //!
   TBranch        *b_jet_antikt4truth_isUgly;   //!
   TBranch        *b_jet_antikt4truth_isBadLoose;   //!
   TBranch        *b_jet_antikt4truth_isBadTight;   //!
   TBranch        *b_jet_antikt4truth_emfrac;   //!
   TBranch        *b_jet_antikt4truth_Offset;   //!
   TBranch        *b_jet_antikt4truth_EMJES;   //!
   TBranch        *b_jet_antikt4truth_EMJES_EtaCorr;   //!
   TBranch        *b_jet_antikt4truth_EMJESnooffset;   //!
   TBranch        *b_jet_antikt4truth_GCWJES;   //!
   TBranch        *b_jet_antikt4truth_GCWJES_EtaCorr;   //!
   TBranch        *b_jet_antikt4truth_CB;   //!
   TBranch        *b_jet_antikt4truth_emscale_E;   //!
   TBranch        *b_jet_antikt4truth_emscale_pt;   //!
   TBranch        *b_jet_antikt4truth_emscale_m;   //!
   TBranch        *b_jet_antikt4truth_emscale_eta;   //!
   TBranch        *b_jet_antikt4truth_emscale_phi;   //!
   TBranch        *b_jet_antikt4truth_jvtxf;   //!
   TBranch        *b_jet_antikt4truth_jvtx_x;   //!
   TBranch        *b_jet_antikt4truth_jvtx_y;   //!
   TBranch        *b_jet_antikt4truth_jvtx_z;   //!
   TBranch        *b_jet_antikt4truth_GSCFactorF;   //!
   TBranch        *b_jet_antikt4truth_WidthFraction;   //!
   TBranch        *b_jet_antikt4truth_el_dr;   //!
   TBranch        *b_jet_antikt4truth_el_matched;   //!
   TBranch        *b_jet_antikt4truth_mu_dr;   //!
   TBranch        *b_jet_antikt4truth_mu_matched;   //!
   TBranch        *b_jet_antikt4truth_L1_dr;   //!
   TBranch        *b_jet_antikt4truth_L1_matched;   //!
   TBranch        *b_jet_antikt4truth_L2_dr;   //!
   TBranch        *b_jet_antikt4truth_L2_matched;   //!
   TBranch        *b_jet_antikt4truth_EF_dr;   //!
   TBranch        *b_jet_antikt4truth_EF_matched;   //!
   TBranch        *b_jet_antikt4truth_elAssoc_index;   //!
   TBranch        *b_jet_antikt4truth_tauAssoc_index;   //!
   TBranch        *b_jet_antikt4truth_truthAssoc_index;   //!
   TBranch        *b_trig_L1_jet_n;   //!
   TBranch        *b_trig_L1_jet_eta;   //!
   TBranch        *b_trig_L1_jet_phi;   //!
   TBranch        *b_trig_L1_jet_thrNames;   //!
   TBranch        *b_trig_L1_jet_thrValues;   //!
   TBranch        *b_trig_L1_jet_thrPattern;   //!
   TBranch        *b_trig_L1_jet_myKin_pt;   //!
   TBranch        *b_trig_L1_jet_myKin_eta;   //!
   TBranch        *b_trig_L1_jet_myKin_phi;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_L2_passedRaw;   //!
   TBranch        *b_trig_EF_passedRaw;   //!
   TBranch        *b_trig_L2_truncated;   //!
   TBranch        *b_trig_EF_truncated;   //!
   TBranch        *b_trig_L2_resurrected;   //!
   TBranch        *b_trig_EF_resurrected;   //!
   TBranch        *b_trig_L2_passedThrough;   //!
   TBranch        *b_trig_EF_passedThrough;   //!
   TBranch        *b_trig_L1_esum_thrNames;   //!
   TBranch        *b_trig_L1_esum_energyX;   //!
   TBranch        *b_trig_L1_esum_energyY;   //!
   TBranch        *b_trig_L1_esum_energyT;   //!
   TBranch        *b_trig_L1_esum_overflowX;   //!
   TBranch        *b_trig_L1_esum_overflowY;   //!
   TBranch        *b_trig_L1_esum_overflowT;   //!
   TBranch        *b_trig_L2_met_MEx;   //!
   TBranch        *b_trig_L2_met_MEy;   //!
   TBranch        *b_trig_L2_met_MEz;   //!
   TBranch        *b_trig_L2_met_sumEt;   //!
   TBranch        *b_trig_L2_met_sumE;   //!
   TBranch        *b_trig_L2_met_flag;   //!
   TBranch        *b_trig_L2_met_nameOfComponent;   //!
   TBranch        *b_trig_L2_met_MExComponent;   //!
   TBranch        *b_trig_L2_met_MEyComponent;   //!
   TBranch        *b_trig_L2_met_MEzComponent;   //!
   TBranch        *b_trig_L2_met_sumEtComponent;   //!
   TBranch        *b_trig_L2_met_sumEComponent;   //!
   TBranch        *b_trig_L2_met_componentCalib0;   //!
   TBranch        *b_trig_L2_met_componentCalib1;   //!
   TBranch        *b_trig_L2_met_sumOfSigns;   //!
   TBranch        *b_trig_L2_met_usedChannels;   //!
   TBranch        *b_trig_L2_met_status;   //!
   TBranch        *b_trig_EF_met_MEx;   //!
   TBranch        *b_trig_EF_met_MEy;   //!
   TBranch        *b_trig_EF_met_MEz;   //!
   TBranch        *b_trig_EF_met_sumEt;   //!
   TBranch        *b_trig_EF_met_sumE;   //!
   TBranch        *b_trig_EF_met_flag;   //!
   TBranch        *b_trig_EF_met_nameOfComponent;   //!
   TBranch        *b_trig_EF_met_MExComponent;   //!
   TBranch        *b_trig_EF_met_MEyComponent;   //!
   TBranch        *b_trig_EF_met_MEzComponent;   //!
   TBranch        *b_trig_EF_met_sumEtComponent;   //!
   TBranch        *b_trig_EF_met_sumEComponent;   //!
   TBranch        *b_trig_EF_met_componentCalib0;   //!
   TBranch        *b_trig_EF_met_componentCalib1;   //!
   TBranch        *b_trig_EF_met_sumOfSigns;   //!
   TBranch        *b_trig_EF_met_usedChannels;   //!
   TBranch        *b_trig_EF_met_status;   //!
   TBranch        *b_trig_L2_jet_n;   //!
   TBranch        *b_trig_L2_jet_E;   //!
   TBranch        *b_trig_L2_jet_eta;   //!
   TBranch        *b_trig_L2_jet_phi;   //!
   TBranch        *b_trig_L2_jet_RoIWord;   //!
   TBranch        *b_trig_EF_jet_n;   //!
   TBranch        *b_trig_EF_jet_E;   //!
   TBranch        *b_trig_EF_jet_pt;   //!
   TBranch        *b_trig_EF_jet_m;   //!
   TBranch        *b_trig_EF_jet_eta;   //!
   TBranch        *b_trig_EF_jet_phi;   //!
   TBranch        *b_trig_EF_jet_emscale_E;   //!
   TBranch        *b_trig_EF_jet_emscale_pt;   //!
   TBranch        *b_trig_EF_jet_emscale_m;   //!
   TBranch        *b_trig_EF_jet_emscale_eta;   //!
   TBranch        *b_trig_EF_jet_emscale_phi;   //!
   TBranch        *b_trig_EF_jet_RoIword;   //!
   TBranch        *b_trig_EF_jet_el_dr;   //!
   TBranch        *b_trig_EF_jet_el_matched;   //!
   TBranch        *b_trig_EF_jet_mu_dr;   //!
   TBranch        *b_trig_EF_jet_mu_matched;   //!
   TBranch        *b_trig_EF_jet_L1_dr;   //!
   TBranch        *b_trig_EF_jet_L1_matched;   //!
   TBranch        *b_trig_EF_jet_L2_dr;   //!
   TBranch        *b_trig_EF_jet_L2_matched;   //!
   TBranch        *b_trig_EF_jet_EF_dr;   //!
   TBranch        *b_trig_EF_jet_EF_matched;   //!
   TBranch        *b_trig_EF_jet_elAssoc_index;   //!
   TBranch        *b_trig_EF_jet_tauAssoc_index;   //!
   TBranch        *b_trig_EF_jet_truthAssoc_index;   //!
   TBranch        *b_trig_Nav_n;   //!
   TBranch        *b_trig_Nav_chain_ChainId;   //!
   TBranch        *b_trig_Nav_chain_RoIType;   //!
   TBranch        *b_trig_Nav_chain_RoIIndex;   //!
   TBranch        *b_trig_RoI_L2_j_n;   //!
   TBranch        *b_trig_RoI_EF_j_n;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_trig_EF_trigmuonef_n;   //!
   TBranch        *b_trig_EF_trigmuonef_track_n;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MuonType;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_hasMS;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_hasSA;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_matchChi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_hasCB;   //!
   TBranch        *b_trig_L2_el_n;   //!
   TBranch        *b_trig_L2_el_E;   //!
   TBranch        *b_trig_L2_el_Et;   //!
   TBranch        *b_trig_L2_el_pt;   //!
   TBranch        *b_trig_L2_el_eta;   //!
   TBranch        *b_trig_L2_el_phi;   //!
   TBranch        *b_trig_L2_el_RoIWord;   //!
   TBranch        *b_trig_L2_el_zvertex;   //!
   TBranch        *b_trig_L2_el_charge;   //!
   TBranch        *b_trig_EF_el_n;   //!
   TBranch        *b_trig_EF_el_E;   //!
   TBranch        *b_trig_EF_el_Et;   //!
   TBranch        *b_trig_EF_el_pt;   //!
   TBranch        *b_trig_EF_el_m;   //!
   TBranch        *b_trig_EF_el_eta;   //!
   TBranch        *b_trig_EF_el_phi;   //!
   TBranch        *b_trig_EF_el_px;   //!
   TBranch        *b_trig_EF_el_py;   //!
   TBranch        *b_trig_EF_el_pz;   //!
   TBranch        *b_trig_EF_el_charge;   //!
   TBranch        *b_trig_EF_el_author;   //!
   TBranch        *b_trig_EF_el_isEM;   //!
   TBranch        *b_trig_EF_el_loose;   //!
   TBranch        *b_trig_EF_el_medium;   //!
   TBranch        *b_trig_EF_el_mediumIso;   //!
   TBranch        *b_trig_EF_el_tight;   //!
   TBranch        *b_trig_EF_el_tightIso;   //!
   TBranch        *b_trig_EF_el_EF_2e10_loose;   //!
   TBranch        *b_trig_EF_el_EF_2e10_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e15_loose;   //!
   TBranch        *b_trig_EF_el_EF_2e3_loose;   //!
   TBranch        *b_trig_EF_el_EF_2e3_loose_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_2e3_loose_TRT;   //!
   TBranch        *b_trig_EF_el_EF_2e3_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e3_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_2e3_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_2e3_tight;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_2e5_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_2e5_tight;   //!
   TBranch        *b_trig_EF_el_EF_e10_NoCut;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose_mu10;   //!
   TBranch        *b_trig_EF_el_EF_e10_loose_mu6;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e10_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e10_tight;   //!
   TBranch        *b_trig_EF_el_EF_e10_tight_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e15_loose;   //!
   TBranch        *b_trig_EF_el_EF_e15_loose_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e15_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e15_tight;   //!
   TBranch        *b_trig_EF_el_EF_e15_tight_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e18_medium;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_IDTrkNoCut;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_passEF;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_passL2;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe20;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe20_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe30;   //!
   TBranch        *b_trig_EF_el_EF_e20_loose_xe30_noMu;   //!
   TBranch        *b_trig_EF_el_EF_e20_medium;   //!
   TBranch        *b_trig_EF_el_EF_e25_loose;   //!
   TBranch        *b_trig_EF_el_EF_e25_medium;   //!
   TBranch        *b_trig_EF_el_EF_e30_loose;   //!
   TBranch        *b_trig_EF_el_EF_e3_loose;   //!
   TBranch        *b_trig_EF_el_EF_e3_loose_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e3_loose_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e3_medium;   //!
   TBranch        *b_trig_EF_el_EF_e3_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e3_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_L2SW;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_Ringer;   //!
   TBranch        *b_trig_EF_el_EF_e5_NoCut_firstempty;   //!
   TBranch        *b_trig_EF_el_EF_e5_loose_mu4;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_MV;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e5_medium_mu4;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_SiTrk;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_TRT;   //!
   TBranch        *b_trig_EF_el_EF_e5_tight_e5_NoCut;   //!
   TBranch        *b_trig_EF_el_EF_em105_passHLT;   //!
   TBranch        *b_trig_EF_el_hastrack;   //!
   TBranch        *b_trig_RoI_EF_mu_n;   //!
   TBranch        *b_trig_RoI_EF_mu_type;   //!
   TBranch        *b_trig_RoI_EF_mu_lastStep;   //!
   TBranch        *b_trig_RoI_EF_mu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_EF_mu_Muon_ROIStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID;   //!
   TBranch        *b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;   //!
   TBranch        *b_trig_RoI_EF_e_n;   //!
   TBranch        *b_trig_RoI_EF_e_type;   //!
   TBranch        *b_trig_RoI_EF_e_lastStep;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROIStatus;   //!
   //   TBranch        *b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID;   //!
   //   TBranch        *b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Electrons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Photons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;   //!
   TBranch        *b_trig_L1_emtau_n;   //!
   TBranch        *b_trig_L1_emtau_eta;   //!
   TBranch        *b_trig_L1_emtau_phi;   //!
   TBranch        *b_trig_L1_emtau_thrNames;   //!
   TBranch        *b_trig_L1_emtau_thrValues;   //!
   TBranch        *b_trig_L1_emtau_core;   //!
   TBranch        *b_trig_L1_emtau_EMClus;   //!
   TBranch        *b_trig_L1_emtau_tauClus;   //!
   TBranch        *b_trig_L1_emtau_EMIsol;   //!
   TBranch        *b_trig_L1_emtau_hadIsol;   //!
   TBranch        *b_trig_L1_emtau_hadCore;   //!
   TBranch        *b_trig_L1_emtau_thrPattern;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM14;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM2;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_2EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM10I;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14I;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14_XE10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM14_XE15;   //!
   TBranch        *b_trig_L1_emtau_L1_EM2;   //!
   TBranch        *b_trig_L1_emtau_L1_EM2_UNPAIRED_ISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM2_UNPAIRED_NONISO;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_EMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_FIRSTEMPTY;   //!
   TBranch        *b_trig_L1_emtau_L1_EM3_MV;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_MU10;   //!
   TBranch        *b_trig_L1_emtau_L1_EM5_MU6;   //!
   TBranch        *b_trig_L1_emtau_L1_EM85;   //!
   TBranch        *b_trig_L1_emtau_RoIWord;   //!
   TBranch        *b_trig_EF_tau_n;   //!
   TBranch        *b_trig_EF_tau_Et;   //!
   TBranch        *b_trig_EF_tau_pt;   //!
   TBranch        *b_trig_EF_tau_m;   //!
   TBranch        *b_trig_EF_tau_eta;   //!
   TBranch        *b_trig_EF_tau_phi;   //!
   TBranch        *b_trig_EF_tau_px;   //!
   TBranch        *b_trig_EF_tau_py;   //!
   TBranch        *b_trig_EF_tau_pz;   //!
   TBranch        *b_trig_EF_tau_RoIword;   //!
   TBranch        *b_trig_EF_tau_author;   //!
   TBranch        *b_trig_EF_tau_ROIword;   //!
   TBranch        *b_trig_EF_tau_nProng;   //!
   TBranch        *b_trig_EF_tau_numTrack;   //!
   TBranch        *b_trig_EF_tau_seedCalo_numTrack;   //!
   TBranch        *b_trig_EF_tau_calcVars_sumTrkPt;   //!
   TBranch        *b_trig_EF_tau_nLooseTrk;   //!
   TBranch        *b_trig_EF_tau_leadLooseTrkPt;   //!
   TBranch        *b_trig_EF_tau_leadLooseTrkEta;   //!
   TBranch        *b_trig_EF_tau_leadLooseTrkPhi;   //!
   TBranch        *b_trig_EF_tau_seedCalo_EMRadius;   //!
   TBranch        *b_trig_EF_tau_seedCalo_hadRadius;   //!
   TBranch        *b_trig_EF_tau_seedCalo_etEMAtEMScale;   //!
   TBranch        *b_trig_EF_tau_seedCalo_etHadAtEMScale;   //!
   TBranch        *b_trig_EF_tau_seedCalo_isolFrac;   //!
   TBranch        *b_trig_EF_tau_seedCalo_centFrac;   //!
   TBranch        *b_trig_EF_tau_seedCalo_etEMCalib;   //!
   TBranch        *b_trig_EF_tau_seedCalo_etHadCalib;   //!
   TBranch        *b_trig_EF_tau_seedCalo_eta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_phi;   //!
   TBranch        *b_trig_EF_tau_invMassOfTrks;   //!
   TBranch        *b_trig_EF_tau_looseTrkWidth;   //!
   TBranch        *b_trig_EF_tau_looseTrkRadius;   //!
   TBranch        *b_trig_EF_tau_etOverPtLeadTrk;   //!
   TBranch        *b_trig_EF_tau_ipZ0SinThetaSigLeadTrk;   //!
   TBranch        *b_trig_EF_tau_leadTrkPt;   //!
   TBranch        *b_trig_EF_tau_ipSigLeadTrk;   //!
   TBranch        *b_trig_EF_tau_ipSigLeadLooseTrk;   //!
   TBranch        *b_trig_EF_tau_trFlightPathSig;   //!
   TBranch        *b_trig_EF_tau_seedCalo_stripWidth2;   //!
   TBranch        *b_trig_EF_tau_seedCalo_nStrip;   //!
   TBranch        *b_trig_EF_tau_seedCalo_trkAvgDist;   //!
   TBranch        *b_trig_EF_tau_seedCalo_trkRmsDist;   //!
   TBranch        *b_trig_EF_tau_numTopoClusters;   //!
   TBranch        *b_trig_EF_tau_numEffTopoClusters;   //!
   TBranch        *b_trig_EF_tau_topoInvMass;   //!
   TBranch        *b_trig_EF_tau_effTopoInvMass;   //!
   TBranch        *b_trig_EF_tau_topoMeanDeltaR;   //!
   TBranch        *b_trig_EF_tau_effTopoMeanDeltaR;   //!
   TBranch        *b_trig_EF_tau_numCells;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_sumTrkPt;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_mass;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_drMax;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_drMin;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_emFracCalib;   //!
   TBranch        *b_trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk;   //!
   TBranch        *b_trig_EF_tau_calcVars_calRadius;   //!
   TBranch        *b_trig_EF_tau_calcVars_EMFractionAtEMScale;   //!
   TBranch        *b_trig_EF_tau_track_n;   //!
   TBranch        *b_trig_EF_tau_track_d0;   //!
   TBranch        *b_trig_EF_tau_track_z0;   //!
   TBranch        *b_trig_EF_tau_track_phi;   //!
   TBranch        *b_trig_EF_tau_track_theta;   //!
   TBranch        *b_trig_EF_tau_track_qoverp;   //!
   TBranch        *b_trig_EF_tau_track_pt;   //!
   TBranch        *b_trig_EF_tau_track_eta;   //!
   TBranch        *b_trig_EF_tau_track_atPV_d0;   //!
   TBranch        *b_trig_EF_tau_track_atPV_z0;   //!
   TBranch        *b_trig_EF_tau_track_atPV_phi;   //!
   TBranch        *b_trig_EF_tau_track_atPV_theta;   //!
   TBranch        *b_trig_EF_tau_track_atPV_qoverp;   //!
   TBranch        *b_trig_EF_tau_track_atPV_pt;   //!
   TBranch        *b_trig_EF_tau_track_atPV_eta;   //!
   TBranch        *b_trig_EF_tau_track_nBLHits;   //!
   TBranch        *b_trig_EF_tau_track_nPixHits;   //!
   TBranch        *b_trig_EF_tau_track_nSCTHits;   //!
   TBranch        *b_trig_EF_tau_track_nTRTHits;   //!
   TBranch        *b_trig_EF_tau_track_nPixHoles;   //!
   TBranch        *b_trig_EF_tau_track_nSCTHoles;   //!
   TBranch        *b_trig_EF_tau_track_nBLSharedHits;   //!
   TBranch        *b_trig_EF_tau_track_nPixSharedHits;   //!
   TBranch        *b_trig_EF_tau_track_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_tau_track_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_tau_track_nTRTOutliers;   //!
   TBranch        *b_trig_EF_tau_track_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_tau_track_nHits;   //!
   TBranch        *b_trig_EF_tau_track_pixeldEdx;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_n;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_d0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_z0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_phi;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_theta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_qoverp;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_pt;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_eta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_d0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_z0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_phi;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_theta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_qoverp;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_pt;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_atPV_eta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nBLHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nPixHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nSCTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nTRTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nPixHoles;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nSCTHoles;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nBLSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nPixSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nTRTOutliers;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_nHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_track_pixeldEdx;   //!
   TBranch        *b_trig_EF_tau_loosetrack_n;   //!
   TBranch        *b_trig_EF_tau_loosetrack_d0;   //!
   TBranch        *b_trig_EF_tau_loosetrack_z0;   //!
   TBranch        *b_trig_EF_tau_loosetrack_phi;   //!
   TBranch        *b_trig_EF_tau_loosetrack_theta;   //!
   TBranch        *b_trig_EF_tau_loosetrack_qoverp;   //!
   TBranch        *b_trig_EF_tau_loosetrack_pt;   //!
   TBranch        *b_trig_EF_tau_loosetrack_eta;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_d0;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_z0;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_phi;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_theta;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_qoverp;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_pt;   //!
   TBranch        *b_trig_EF_tau_loosetrack_atPV_eta;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nBLHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nPixHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nSCTHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nTRTHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nPixHoles;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nSCTHoles;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nBLSharedHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nPixSharedHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nTRTOutliers;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_tau_loosetrack_nHits;   //!
   TBranch        *b_trig_EF_tau_loosetrack_pixeldEdx;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_n;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_d0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_z0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_phi;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_theta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_qoverp;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_pt;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_eta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_d0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_z0;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_phi;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_theta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_qoverp;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_pt;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_atPV_eta;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nBLHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nPixHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nSCTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nTRTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nPixHoles;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nSCTHoles;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nBLSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nPixSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nTRTOutliers;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_nHits;   //!
   TBranch        *b_trig_EF_tau_seedCalo_widetrack_pixeldEdx;   //!
   TBranch        *b_trig_EF_tau_othertrack_n;   //!
   TBranch        *b_trig_EF_tau_othertrack_d0;   //!
   TBranch        *b_trig_EF_tau_othertrack_z0;   //!
   TBranch        *b_trig_EF_tau_othertrack_phi;   //!
   TBranch        *b_trig_EF_tau_othertrack_theta;   //!
   TBranch        *b_trig_EF_tau_othertrack_qoverp;   //!
   TBranch        *b_trig_EF_tau_othertrack_pt;   //!
   TBranch        *b_trig_EF_tau_othertrack_eta;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_d0;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_z0;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_phi;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_theta;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_qoverp;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_pt;   //!
   TBranch        *b_trig_EF_tau_othertrack_atPV_eta;   //!
   TBranch        *b_trig_EF_tau_othertrack_nBLHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nPixHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nSCTHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nTRTHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nPixHoles;   //!
   TBranch        *b_trig_EF_tau_othertrack_nSCTHoles;   //!
   TBranch        *b_trig_EF_tau_othertrack_nBLSharedHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nPixSharedHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nSCTSharedHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nTRTHighTHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_nTRTOutliers;   //!
   TBranch        *b_trig_EF_tau_othertrack_nTRTHighTOutliers;   //!
   TBranch        *b_trig_EF_tau_othertrack_nHits;   //!
   TBranch        *b_trig_EF_tau_othertrack_pixeldEdx;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_n;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_algorithmId;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_trackStatus;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_hitPattern;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nStraw;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_nStrawTime;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_a0;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_z0;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_phi0;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_eta;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_pt;   //!
   TBranch        *b_trig_L2_trk_idscan_tau_covariance;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_n;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_algorithmId;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_trackStatus;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_hitPattern;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nStraw;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_nStrawTime;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_a0;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_z0;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_phi0;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_eta;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_pt;   //!
   TBranch        *b_trig_L2_trk_sitrack_tau_covariance;   //!
   TBranch        *b_trig_L2_tau_n;   //!
   TBranch        *b_trig_L2_tau_pt;   //!
   TBranch        *b_trig_L2_tau_eta;   //!
   TBranch        *b_trig_L2_tau_phi;   //!
   TBranch        *b_trig_L2_tau_px;   //!
   TBranch        *b_trig_L2_tau_py;   //!
   TBranch        *b_trig_L2_tau_pz;   //!
   TBranch        *b_trig_L2_tau_RoIword;   //!
   TBranch        *b_trig_L2_tau_simpleEtFlow;   //!
   TBranch        *b_trig_L2_tau_nMatchedTracks;   //!
   TBranch        *b_trig_L2_tau_cluster_quality;   //!
   TBranch        *b_trig_L2_tau_cluster_EMenergy;   //!
   TBranch        *b_trig_L2_tau_cluster_HADenergy;   //!
   TBranch        *b_trig_L2_tau_cluster_eta;   //!
   TBranch        *b_trig_L2_tau_cluster_phi;   //!
   TBranch        *b_trig_L2_tau_cluster_EMRadius2;   //!
   TBranch        *b_trig_L2_tau_cluster_CaloRadius;   //!
   TBranch        *b_trig_L2_tau_cluster_IsoFrac;   //!
   TBranch        *b_trig_L2_tau_cluster_numTotCells;   //!
   TBranch        *b_trig_L2_tau_cluster_stripWidth;   //!
   TBranch        *b_trig_L2_tau_cluster_stripWidthOffline;   //!
   TBranch        *b_trig_L2_tau_cluster_EMenergyNor;   //!
   TBranch        *b_trig_L2_tau_cluster_EMenergyNar;   //!
   TBranch        *b_trig_L2_tau_cluster_HADenergyNor;   //!
   TBranch        *b_trig_L2_tau_cluster_HADenergyNar;   //!
   TBranch        *b_trig_L2_tau_cluster_etNar;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_nCoreTracks;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_nSlowTracks;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_nIsoTracks;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_charge;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_leadingTrackPt;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_scalarPtSumCore;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_scalarPtSumIso;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_3fastest_pt;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_3fastest_eta;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_3fastest_phi;   //!
   TBranch        *b_trig_L2_tau_tracksinfo_3fastest_m;   //!
   TBranch        *b_trig_L2_tau_tracks_algorithmId;   //!
   TBranch        *b_trig_L2_tau_idscan_trk_n;   //!
   TBranch        *b_trig_L2_tau_idscan_trk_index;   //!
   TBranch        *b_trig_L2_tau_sitrack_trk_n;   //!
   TBranch        *b_trig_L2_tau_sitrack_trk_index;   //!
   TBranch        *b_trig_RoI_L2_tau_n;   //!
   TBranch        *b_trig_RoI_L2_tau_type;   //!
   TBranch        *b_trig_RoI_L2_tau_lastStep;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigRoiDescriptor;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigRoiDescriptorStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauCluster;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauClusterStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauClusterDetails;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauClusterDetailsStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauTracksInfo;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauTracksInfoStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTau;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigTauStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_L2_tau_EmTau_ROIStatus;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigInDetTrackCollection;   //!
   TBranch        *b_trig_RoI_L2_tau_TrigInDetTrackCollectionStatus;   //!
   TBranch        *b_trig_RoI_EF_tau_n;   //!
   TBranch        *b_trig_RoI_EF_tau_type;   //!
   TBranch        *b_trig_RoI_EF_tau_lastStep;   //!
   TBranch        *b_trig_RoI_EF_tau_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_EF_tau_EmTau_ROIStatus;   //!
   //   TBranch        *b_trig_RoI_EF_tau_Analysis__TauJetContainer;   //!
   //   TBranch        *b_trig_RoI_EF_tau_Analysis__TauJetContainerStatus;   //!

   //EventTree(TTree *tree=0);
   //constructor
   EventTree();
   //Destructor
   virtual ~EventTree();

   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   //virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   virtual int GetNentries();

};

#endif
/*
#ifdef EventTree_cxx
EventTree::EventTree(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f) {
         f = new TFile("Memory Directory");
         f->cd("Rint:/");
      }
      tree = (TTree*)gDirectory->Get("tauPerf");

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("tauPerf","");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00001.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00002.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00003.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00004.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00005.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00006.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00007.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00008.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00009.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00010.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00011.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00012.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00013.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00014.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00015.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00016.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00017.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00018.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00019.root/tauPerf");
      chain->Add("/work/czyczula/TauD3PDs/MC_BASIC/user.ZofiaCzyczula.mc10_7TeV.107054.PythiaWtaunu_incl.merge.AOD.e574_s934_s946_r1660_r2040_REPRO_02.110820115108/user.ZofiaCzyczula.000813.StreamD3PD_TauMEDIUM._00020.root/tauPerf");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

EventTree::~EventTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t EventTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EventTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void EventTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   tau_Et = 0;
   tau_pt = 0;
   tau_m = 0;
   tau_eta = 0;
   tau_phi = 0;
   tau_charge = 0;
   tau_BDTEleScore = 0;
   tau_BDTJetScore = 0;
   tau_discCut = 0;
   tau_discCutTMVA = 0;
   tau_discLL = 0;
   tau_discNN = 0;
   tau_efficLL = 0;
   tau_efficNN = 0;
   tau_likelihood = 0;
   tau_tauJetNeuralNetwork = 0;
   tau_tauENeuralNetwork = 0;
   tau_tauElTauLikelihood = 0;
   tau_SafeLikelihood = 0;
   tau_electronVetoLoose = 0;
   tau_electronVetoMedium = 0;
   tau_electronVetoTight = 0;
   tau_muonVeto = 0;
   tau_tauCutLoose = 0;
   tau_tauCutMedium = 0;
   tau_tauCutTight = 0;
   tau_tauCutSafeLoose = 0;
   tau_tauCutSafeMedium = 0;
   tau_tauCutSafeTight = 0;
   tau_tauCutSafeCaloLoose = 0;
   tau_tauCutSafeCaloMedium = 0;
   tau_tauCutSafeCaloTight = 0;
   tau_tauLlhLoose = 0;
   tau_tauLlhMedium = 0;
   tau_tauLlhTight = 0;
   tau_JetBDTLoose = 0;
   tau_JetBDTMedium = 0;
   tau_JetBDTTight = 0;
   tau_EleBDTLoose = 0;
   tau_EleBDTMedium = 0;
   tau_EleBDTTight = 0;
   tau_SafeLlhLoose = 0;
   tau_SafeLlhMedium = 0;
   tau_SafeLlhTight = 0;
   tau_author = 0;
   tau_ROIword = 0;
   tau_nProng = 0;
   tau_numTrack = 0;
   tau_seedCalo_numTrack = 0;
   tau_etOverPtLeadTrk = 0;
   tau_ipZ0SinThetaSigLeadTrk = 0;
   tau_leadTrkPt = 0;
   tau_nLooseTrk = 0;
   tau_nLooseConvTrk = 0;
   tau_nProngLoose = 0;
   tau_ipSigLeadTrk = 0;
   tau_ipSigLeadLooseTrk = 0;
   tau_etOverPtLeadLooseTrk = 0;
   tau_leadLooseTrkPt = 0;
   tau_chrgLooseTrk = 0;
   tau_massTrkSys = 0;
   tau_trkWidth2 = 0;
   tau_trFlightPathSig = 0;
   tau_etEflow = 0;
   tau_mEflow = 0;
   tau_nPi0 = 0;
   tau_ele_E237E277 = 0;
   tau_ele_PresamplerFraction = 0;
   tau_ele_ECALFirstFraction = 0;
   tau_seedCalo_EMRadius = 0;
   tau_seedCalo_hadRadius = 0;
   tau_seedCalo_etEMAtEMScale = 0;
   tau_seedCalo_etHadAtEMScale = 0;
   tau_seedCalo_isolFrac = 0;
   tau_seedCalo_centFrac = 0;
   tau_seedCalo_stripWidth2 = 0;
   tau_seedCalo_nStrip = 0;
   tau_seedCalo_etEMCalib = 0;
   tau_seedCalo_etHadCalib = 0;
   tau_seedCalo_eta = 0;
   tau_seedCalo_phi = 0;
   tau_seedCalo_nIsolLooseTrk = 0;
   tau_seedCalo_trkAvgDist = 0;
   tau_seedCalo_trkRmsDist = 0;
   tau_numTopoClusters = 0;
   tau_numEffTopoClusters = 0;
   tau_topoInvMass = 0;
   tau_effTopoInvMass = 0;
   tau_topoMeanDeltaR = 0;
   tau_effTopoMeanDeltaR = 0;
   tau_numCells = 0;
   tau_seedTrk_EMRadius = 0;
   tau_seedTrk_isolFrac = 0;
   tau_seedTrk_etChrgHadOverSumTrkPt = 0;
   tau_seedTrk_isolFracWide = 0;
   tau_seedTrk_etHadAtEMScale = 0;
   tau_seedTrk_etEMAtEMScale = 0;
   tau_seedTrk_etEMCL = 0;
   tau_seedTrk_etChrgEM = 0;
   tau_seedTrk_etNeuEM = 0;
   tau_seedTrk_etResNeuEM = 0;
   tau_seedTrk_hadLeakEt = 0;
   tau_seedTrk_sumEMCellEtOverLeadTrkPt = 0;
   tau_seedTrk_secMaxStripEt = 0;
   tau_seedTrk_stripWidth2 = 0;
   tau_seedTrk_nStrip = 0;
   tau_seedTrk_etChrgHad = 0;
   tau_seedTrk_nOtherCoreTrk = 0;
   tau_seedTrk_nIsolTrk = 0;
   tau_seedTrk_etIsolEM = 0;
   tau_seedTrk_etIsolHad = 0;
   tau_calcVars_sumTrkPt = 0;
   tau_calcVars_etHadSumPtTracks = 0;
   tau_calcVars_etEMSumPtTracks = 0;
   tau_calcVars_etHad_EMScale_Pt3Trks = 0;
   tau_calcVars_etEM_EMScale_Pt3Trks = 0;
   tau_calcVars_mass = 0;
   tau_calcVars_ipSigLeadLooseTrk = 0;
   tau_calcVars_drMax = 0;
   tau_calcVars_drMin = 0;
   tau_calcVars_emFracCalib = 0;
   tau_calcVars_TRTHTOverLT_LeadTrk = 0;
   tau_calcVars_calRadius = 0;
   tau_calcVars_EMFractionAtEMScale = 0;
   tau_calcVars_BDTLooseBkg = 0;
   tau_calcVars_BDTMediumBkg = 0;
   tau_calcVars_BDTTightBkg = 0;
   tau_cluster_E = 0;
   tau_cluster_eta = 0;
   tau_cluster_phi = 0;
   tau_cluster_n = 0;
   tau_Pi0Cluster_pt = 0;
   tau_Pi0Cluster_eta = 0;
   tau_Pi0Cluster_phi = 0;
   tau_secvtx_x = 0;
   tau_secvtx_y = 0;
   tau_secvtx_z = 0;
   tau_secvtx_chiSquared = 0;
   tau_secvtx_numberDoF = 0;
   tau_cell_E = 0;
   tau_cell_eta = 0;
   tau_cell_phi = 0;
   tau_cell_n = 0;
   tau_cell_nEffCells = 0;
   tau_cell_samplingID = 0;
   tau_jet_Et = 0;
   tau_jet_pt = 0;
   tau_jet_m = 0;
   tau_jet_eta = 0;
   tau_jet_phi = 0;
   tau_jet_WIDTH = 0;
   tau_jet_n90 = 0;
   tau_jet_n90constituents = 0;
   tau_jet_BCH_CORR_CELL = 0;
   tau_jet_BCH_CORR_JET = 0;
   tau_jet_BCH_CORR_JET_FORCELL = 0;
   tau_jet_ENG_BAD_CELLS = 0;
   tau_jet_N_BAD_CELLS = 0;
   tau_jet_N_BAD_CELLS_CORR = 0;
   tau_jet_BAD_CELLS_CORR_E = 0;
   tau_jet_Timing = 0;
   tau_jet_LArQuality = 0;
   tau_jet_SamplingMax = 0;
   tau_jet_fracSamplingMax = 0;
   tau_jet_hecf = 0;
   tau_jet_tgap3f = 0;
   tau_jet_isUgly = 0;
   tau_jet_isBadLoose = 0;
   tau_jet_isBadTight = 0;
   tau_jet_emfrac = 0;
   tau_jet_GCWJES = 0;
   tau_jet_EMJES = 0;
   tau_jet_emscale_E = 0;
   tau_jet_emscale_pt = 0;
   tau_jet_emscale_m = 0;
   tau_jet_emscale_eta = 0;
   tau_jet_emscale_phi = 0;
   tau_jet_jvtxf = 0;
   tau_jet_jvtx_x = 0;
   tau_jet_jvtx_y = 0;
   tau_jet_jvtx_z = 0;
   tau_jet_flavor_weight = 0;
   tau_jet_flavor_weight_TrackCounting2D = 0;
   tau_jet_flavor_weight_JetProb = 0;
   tau_jet_flavor_weight_IP1D = 0;
   tau_jet_flavor_weight_IP2D = 0;
   tau_jet_flavor_weight_IP3D = 0;
   tau_jet_flavor_weight_SV0 = 0;
   tau_jet_flavor_weight_SV1 = 0;
   tau_jet_flavor_weight_SV2 = 0;
   tau_jet_flavor_weight_JetFitterTag = 0;
   tau_jet_flavor_weight_JetFitterCOMB = 0;
   tau_jet_flavor_weight_JetFitterTagNN = 0;
   tau_jet_flavor_weight_JetFitterCOMBNN = 0;
   tau_jet_flavor_weight_SoftMuonTag = 0;
   tau_jet_flavor_weight_SoftElectronTag = 0;
   tau_jet_flavor_weight_IP3DSV1 = 0;
   tau_jet_e_PreSamplerB = 0;
   tau_jet_e_EMB1 = 0;
   tau_jet_e_EMB2 = 0;
   tau_jet_e_EMB3 = 0;
   tau_jet_e_PreSamplerE = 0;
   tau_jet_e_EME1 = 0;
   tau_jet_e_EME2 = 0;
   tau_jet_e_EME3 = 0;
   tau_jet_e_HEC0 = 0;
   tau_jet_e_HEC1 = 0;
   tau_jet_e_HEC2 = 0;
   tau_jet_e_HEC3 = 0;
   tau_jet_e_TileBar0 = 0;
   tau_jet_e_TileBar1 = 0;
   tau_jet_e_TileBar2 = 0;
   tau_jet_e_TileGap1 = 0;
   tau_jet_e_TileGap2 = 0;
   tau_jet_e_TileGap3 = 0;
   tau_jet_e_TileExt0 = 0;
   tau_jet_e_TileExt1 = 0;
   tau_jet_e_TileExt2 = 0;
   tau_jet_e_FCAL0 = 0;
   tau_jet_e_FCAL1 = 0;
   tau_jet_e_FCAL2 = 0;
   tau_jet_shapeBins = 0;
   tau_seedCalo_track_n = 0;
   tau_seedCalo_track_d0 = 0;
   tau_seedCalo_track_z0 = 0;
   tau_seedCalo_track_phi = 0;
   tau_seedCalo_track_theta = 0;
   tau_seedCalo_track_qoverp = 0;
   tau_seedCalo_track_pt = 0;
   tau_seedCalo_track_eta = 0;
   tau_seedCalo_track_atPV_d0 = 0;
   tau_seedCalo_track_atPV_z0 = 0;
   tau_seedCalo_track_atPV_phi = 0;
   tau_seedCalo_track_atPV_theta = 0;
   tau_seedCalo_track_atPV_qoverp = 0;
   tau_seedCalo_track_atPV_pt = 0;
   tau_seedCalo_track_atPV_eta = 0;
   tau_seedCalo_track_nBLHits = 0;
   tau_seedCalo_track_nPixHits = 0;
   tau_seedCalo_track_nSCTHits = 0;
   tau_seedCalo_track_nTRTHits = 0;
   tau_seedCalo_track_nPixHoles = 0;
   tau_seedCalo_track_nSCTHoles = 0;
   tau_seedCalo_track_nBLSharedHits = 0;
   tau_seedCalo_track_nPixSharedHits = 0;
   tau_seedCalo_track_nSCTSharedHits = 0;
   tau_seedCalo_track_nTRTHighTHits = 0;
   tau_seedCalo_track_nTRTOutliers = 0;
   tau_seedCalo_track_nTRTHighTOutliers = 0;
   tau_seedCalo_track_nHits = 0;
   tau_seedCalo_track_pixeldEdx = 0;
   tau_seedCalo_wideTrk_n = 0;
   tau_seedCalo_wideTrk_d0 = 0;
   tau_seedCalo_wideTrk_z0 = 0;
   tau_seedCalo_wideTrk_phi = 0;
   tau_seedCalo_wideTrk_theta = 0;
   tau_seedCalo_wideTrk_qoverp = 0;
   tau_seedCalo_wideTrk_pt = 0;
   tau_seedCalo_wideTrk_eta = 0;
   tau_seedCalo_wideTrk_atPV_d0 = 0;
   tau_seedCalo_wideTrk_atPV_z0 = 0;
   tau_seedCalo_wideTrk_atPV_phi = 0;
   tau_seedCalo_wideTrk_atPV_theta = 0;
   tau_seedCalo_wideTrk_atPV_qoverp = 0;
   tau_seedCalo_wideTrk_atPV_pt = 0;
   tau_seedCalo_wideTrk_atPV_eta = 0;
   tau_seedCalo_wideTrk_nBLHits = 0;
   tau_seedCalo_wideTrk_nPixHits = 0;
   tau_seedCalo_wideTrk_nSCTHits = 0;
   tau_seedCalo_wideTrk_nTRTHits = 0;
   tau_seedCalo_wideTrk_nPixHoles = 0;
   tau_seedCalo_wideTrk_nSCTHoles = 0;
   tau_seedCalo_wideTrk_nBLSharedHits = 0;
   tau_seedCalo_wideTrk_nPixSharedHits = 0;
   tau_seedCalo_wideTrk_nSCTSharedHits = 0;
   tau_seedCalo_wideTrk_nTRTHighTHits = 0;
   tau_seedCalo_wideTrk_nTRTOutliers = 0;
   tau_seedCalo_wideTrk_nTRTHighTOutliers = 0;
   tau_seedCalo_wideTrk_nHits = 0;
   tau_seedCalo_wideTrk_pixeldEdx = 0;
   tau_otherTrk_n = 0;
   tau_otherTrk_d0 = 0;
   tau_otherTrk_z0 = 0;
   tau_otherTrk_phi = 0;
   tau_otherTrk_theta = 0;
   tau_otherTrk_qoverp = 0;
   tau_otherTrk_pt = 0;
   tau_otherTrk_eta = 0;
   tau_otherTrk_atPV_d0 = 0;
   tau_otherTrk_atPV_z0 = 0;
   tau_otherTrk_atPV_phi = 0;
   tau_otherTrk_atPV_theta = 0;
   tau_otherTrk_atPV_qoverp = 0;
   tau_otherTrk_atPV_pt = 0;
   tau_otherTrk_atPV_eta = 0;
   tau_otherTrk_nBLHits = 0;
   tau_otherTrk_nPixHits = 0;
   tau_otherTrk_nSCTHits = 0;
   tau_otherTrk_nTRTHits = 0;
   tau_otherTrk_nPixHoles = 0;
   tau_otherTrk_nSCTHoles = 0;
   tau_otherTrk_nBLSharedHits = 0;
   tau_otherTrk_nPixSharedHits = 0;
   tau_otherTrk_nSCTSharedHits = 0;
   tau_otherTrk_nTRTHighTHits = 0;
   tau_otherTrk_nTRTOutliers = 0;
   tau_otherTrk_nTRTHighTOutliers = 0;
   tau_otherTrk_nHits = 0;
   tau_otherTrk_pixeldEdx = 0;
   tau_EF_dr = 0;
   tau_EF_E = 0;
   tau_EF_Et = 0;
   tau_EF_pt = 0;
   tau_EF_eta = 0;
   tau_EF_phi = 0;
   tau_EF_matched = 0;
   tau_L2_dr = 0;
   tau_L2_E = 0;
   tau_L2_Et = 0;
   tau_L2_pt = 0;
   tau_L2_eta = 0;
   tau_L2_phi = 0;
   tau_L2_matched = 0;
   tau_L1_dr = 0;
   tau_L1_Et = 0;
   tau_L1_pt = 0;
   tau_L1_eta = 0;
   tau_L1_phi = 0;
   tau_L1_matched = 0;
   tau_elAssoc_index = 0;
   tau_jetAssoc_index = 0;
   tau_trueTauAssoc_dr = 0;
   tau_trueTauAssoc_index = 0;
   tau_trueTauAssoc_matched = 0;
   tau_truthAssoc_index = 0;
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_OQ = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_OQRecalc = 0;
   el_type = 0;
   el_origin = 0;
   el_typebkg = 0;
   el_originbkg = 0;
   el_truth_E = 0;
   el_truth_pt = 0;
   el_truth_eta = 0;
   el_truth_phi = 0;
   el_truth_type = 0;
   el_truth_status = 0;
   el_truth_barcode = 0;
   el_truth_mothertype = 0;
   el_truth_motherbarcode = 0;
   el_truth_hasHardBrem = 0;
   el_truth_index = 0;
   el_truth_matched = 0;
   el_loose = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_goodOQ = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone15 = 0;
   el_Etcone20 = 0;
   el_Etcone25 = 0;
   el_Etcone30 = 0;
   el_Etcone35 = 0;
   el_Etcone40 = 0;
   el_ptcone20 = 0;
   el_ptcone30 = 0;
   el_ptcone40 = 0;
   el_nucone20 = 0;
   el_nucone30 = 0;
   el_nucone40 = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_hasconv = 0;
   el_convvtxx = 0;
   el_convvtxy = 0;
   el_convvtxz = 0;
   el_Rconv = 0;
   el_zconv = 0;
   el_convvtxchi2 = 0;
   el_pt1conv = 0;
   el_convtrk1nBLHits = 0;
   el_convtrk1nPixHits = 0;
   el_convtrk1nSCTHits = 0;
   el_convtrk1nTRTHits = 0;
   el_pt2conv = 0;
   el_convtrk2nBLHits = 0;
   el_convtrk2nPixHits = 0;
   el_convtrk2nSCTHits = 0;
   el_convtrk2nTRTHits = 0;
   el_ptconv = 0;
   el_pzconv = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_reta = 0;
   el_rphi = 0;
   el_refittedTrack_n = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_rawcl_E = 0;
   el_rawcl_pt = 0;
   el_rawcl_eta = 0;
   el_rawcl_phi = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nTRTHighTHits = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_TRTHighTHitsRatioOutliers = 0;
   el_pixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_trackd0beam = 0;
   el_tracksigd0beam = 0;
   el_trackd0pv = 0;
   el_tracksigd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigz0pv = 0;
   el_trackd0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_EF_dr = 0;
   el_EF_index = 0;
   el_L2_dr = 0;
   el_L2_index = 0;
   el_L1_dr = 0;
   el_L1_index = 0;
   ph_E = 0;
   ph_Et = 0;
   ph_pt = 0;
   ph_m = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_px = 0;
   ph_py = 0;
   ph_pz = 0;
   ph_author = 0;
   ph_isRecovered = 0;
   ph_isEM = 0;
   ph_OQ = 0;
   ph_OQRecalc = 0;
   ph_convFlag = 0;
   ph_isConv = 0;
   ph_nConv = 0;
   ph_nSingleTrackConv = 0;
   ph_nDoubleTrackConv = 0;
   ph_truth_deltaRRecPhoton = 0;
   ph_truth_E = 0;
   ph_truth_pt = 0;
   ph_truth_eta = 0;
   ph_truth_phi = 0;
   ph_truth_type = 0;
   ph_truth_status = 0;
   ph_truth_barcode = 0;
   ph_truth_mothertype = 0;
   ph_truth_motherbarcode = 0;
   ph_truth_index = 0;
   ph_truth_matched = 0;
   ph_loose = 0;
   ph_tight = 0;
   ph_tightIso = 0;
   ph_goodOQ = 0;
   ph_Ethad = 0;
   ph_Ethad1 = 0;
   ph_f1 = 0;
   ph_f1core = 0;
   ph_Emins1 = 0;
   ph_fside = 0;
   ph_Emax2 = 0;
   ph_ws3 = 0;
   ph_wstot = 0;
   ph_E132 = 0;
   ph_E1152 = 0;
   ph_emaxs1 = 0;
   ph_E233 = 0;
   ph_E237 = 0;
   ph_E277 = 0;
   ph_weta2 = 0;
   ph_rphiallcalo = 0;
   ph_Etcone45 = 0;
   ph_Etcone15 = 0;
   ph_Etcone20 = 0;
   ph_Etcone25 = 0;
   ph_Etcone30 = 0;
   ph_Etcone35 = 0;
   ph_Etcone40 = 0;
   ph_ptcone20 = 0;
   ph_ptcone30 = 0;
   ph_ptcone40 = 0;
   ph_nucone20 = 0;
   ph_nucone30 = 0;
   ph_nucone40 = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
   ph_Es0 = 0;
   ph_etas0 = 0;
   ph_phis0 = 0;
   ph_Es1 = 0;
   ph_etas1 = 0;
   ph_phis1 = 0;
   ph_Es2 = 0;
   ph_etas2 = 0;
   ph_phis2 = 0;
   ph_Es3 = 0;
   ph_etas3 = 0;
   ph_phis3 = 0;
   ph_truth_isConv = 0;
   ph_truth_isBrem = 0;
   ph_truth_isFromHardProc = 0;
   ph_truth_isPhotonFromHardProc = 0;
   cl_pt = 0;
   cl_eta = 0;
   cl_phi = 0;
   jet_E = 0;
   jet_pt = 0;
   jet_m = 0;
   jet_eta = 0;
   jet_phi = 0;
   jet_EtaOrigin = 0;
   jet_PhiOrigin = 0;
   jet_MOrigin = 0;
   jet_EtaOriginEM = 0;
   jet_PhiOriginEM = 0;
   jet_MOriginEM = 0;
   jet_WIDTH = 0;
   jet_n90 = 0;
   jet_Timing = 0;
   jet_LArQuality = 0;
   jet_nTrk = 0;
   jet_sumPtTrk = 0;
   jet_OriginIndex = 0;
   jet_HECQuality = 0;
   jet_NegativeE = 0;
   jet_BCH_CORR_CELL = 0;
   jet_BCH_CORR_DOTX = 0;
   jet_BCH_CORR_JET = 0;
   jet_BCH_CORR_JET_FORCELL = 0;
   jet_ENG_BAD_CELLS = 0;
   jet_N_BAD_CELLS = 0;
   jet_N_BAD_CELLS_CORR = 0;
   jet_BAD_CELLS_CORR_E = 0;
   jet_SamplingMax = 0;
   jet_fracSamplingMax = 0;
   jet_hecf = 0;
   jet_tgap3f = 0;
   jet_isUgly = 0;
   jet_isBadLoose = 0;
   jet_isBadTight = 0;
   jet_emfrac = 0;
   jet_Offset = 0;
   jet_EMJES = 0;
   jet_EMJES_EtaCorr = 0;
   jet_EMJESnooffset = 0;
   jet_GCWJES = 0;
   jet_GCWJES_EtaCorr = 0;
   jet_CB = 0;
   jet_emscale_E = 0;
   jet_emscale_pt = 0;
   jet_emscale_m = 0;
   jet_emscale_eta = 0;
   jet_emscale_phi = 0;
   jet_flavor_weight_TrackCounting2D = 0;
   jet_flavor_weight_JetProb = 0;
   jet_flavor_weight_IP1D = 0;
   jet_flavor_weight_IP2D = 0;
   jet_flavor_weight_IP3D = 0;
   jet_flavor_weight_SV0 = 0;
   jet_flavor_weight_SV1 = 0;
   jet_flavor_weight_SV2 = 0;
   jet_flavor_weight_JetFitterTag = 0;
   jet_flavor_weight_JetFitterCOMB = 0;
   jet_flavor_weight_JetFitterTagNN = 0;
   jet_flavor_weight_JetFitterCOMBNN = 0;
   jet_flavor_weight_SoftMuonTag = 0;
   jet_flavor_weight_SoftElectronTag = 0;
   jet_flavor_weight_IP3DSV1 = 0;
   jet_el_dr = 0;
   jet_el_matched = 0;
   jet_mu_dr = 0;
   jet_mu_matched = 0;
   jet_L1_dr = 0;
   jet_L1_matched = 0;
   jet_L2_dr = 0;
   jet_L2_matched = 0;
   jet_EF_dr = 0;
   jet_EF_matched = 0;
   jet_elAssoc_index = 0;
   jet_tauAssoc_index = 0;
   jet_truthAssoc_index = 0;
   jet_AntiKt4TopoEM_E = 0;
   jet_AntiKt4TopoEM_pt = 0;
   jet_AntiKt4TopoEM_m = 0;
   jet_AntiKt4TopoEM_eta = 0;
   jet_AntiKt4TopoEM_phi = 0;
   jet_AntiKt4TopoEM_EtaOrigin = 0;
   jet_AntiKt4TopoEM_PhiOrigin = 0;
   jet_AntiKt4TopoEM_MOrigin = 0;
   jet_AntiKt4TopoEM_EtaOriginEM = 0;
   jet_AntiKt4TopoEM_PhiOriginEM = 0;
   jet_AntiKt4TopoEM_MOriginEM = 0;
   jet_AntiKt4TopoEM_WIDTH = 0;
   jet_AntiKt4TopoEM_n90 = 0;
   jet_AntiKt4TopoEM_Timing = 0;
   jet_AntiKt4TopoEM_LArQuality = 0;
   jet_AntiKt4TopoEM_nTrk = 0;
   jet_AntiKt4TopoEM_sumPtTrk = 0;
   jet_AntiKt4TopoEM_OriginIndex = 0;
   jet_AntiKt4TopoEM_HECQuality = 0;
   jet_AntiKt4TopoEM_NegativeE = 0;
   jet_AntiKt4TopoEM_BCH_CORR_CELL = 0;
   jet_AntiKt4TopoEM_BCH_CORR_DOTX = 0;
   jet_AntiKt4TopoEM_BCH_CORR_JET = 0;
   jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4TopoEM_ENG_BAD_CELLS = 0;
   jet_AntiKt4TopoEM_N_BAD_CELLS = 0;
   jet_AntiKt4TopoEM_N_BAD_CELLS_CORR = 0;
   jet_AntiKt4TopoEM_BAD_CELLS_CORR_E = 0;
   jet_AntiKt4TopoEM_SamplingMax = 0;
   jet_AntiKt4TopoEM_fracSamplingMax = 0;
   jet_AntiKt4TopoEM_hecf = 0;
   jet_AntiKt4TopoEM_tgap3f = 0;
   jet_AntiKt4TopoEM_isUgly = 0;
   jet_AntiKt4TopoEM_isBadLoose = 0;
   jet_AntiKt4TopoEM_isBadTight = 0;
   jet_AntiKt4TopoEM_emfrac = 0;
   jet_AntiKt4TopoEM_Offset = 0;
   jet_AntiKt4TopoEM_EMJES = 0;
   jet_AntiKt4TopoEM_EMJES_EtaCorr = 0;
   jet_AntiKt4TopoEM_EMJESnooffset = 0;
   jet_AntiKt4TopoEM_GCWJES = 0;
   jet_AntiKt4TopoEM_GCWJES_EtaCorr = 0;
   jet_AntiKt4TopoEM_CB = 0;
   jet_AntiKt4TopoEM_emscale_E = 0;
   jet_AntiKt4TopoEM_emscale_pt = 0;
   jet_AntiKt4TopoEM_emscale_m = 0;
   jet_AntiKt4TopoEM_emscale_eta = 0;
   jet_AntiKt4TopoEM_emscale_phi = 0;
   jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D = 0;
   jet_AntiKt4TopoEM_flavor_weight_JetProb = 0;
   jet_AntiKt4TopoEM_flavor_weight_IP1D = 0;
   jet_AntiKt4TopoEM_flavor_weight_IP2D = 0;
   jet_AntiKt4TopoEM_flavor_weight_IP3D = 0;
   jet_AntiKt4TopoEM_flavor_weight_SV0 = 0;
   jet_AntiKt4TopoEM_flavor_weight_SV1 = 0;
   jet_AntiKt4TopoEM_flavor_weight_SV2 = 0;
   jet_AntiKt4TopoEM_flavor_weight_JetFitterTag = 0;
   jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB = 0;
   jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag = 0;
   jet_AntiKt4TopoEM_flavor_weight_IP3DSV1 = 0;
   jet_AntiKt4TopoEM_el_dr = 0;
   jet_AntiKt4TopoEM_el_matched = 0;
   jet_AntiKt4TopoEM_mu_dr = 0;
   jet_AntiKt4TopoEM_mu_matched = 0;
   jet_AntiKt4TopoEM_L1_dr = 0;
   jet_AntiKt4TopoEM_L1_matched = 0;
   jet_AntiKt4TopoEM_L2_dr = 0;
   jet_AntiKt4TopoEM_L2_matched = 0;
   jet_AntiKt4TopoEM_EF_dr = 0;
   jet_AntiKt4TopoEM_EF_matched = 0;
   jet_AntiKt4TopoEM_elAssoc_index = 0;
   jet_AntiKt4TopoEM_tauAssoc_index = 0;
   jet_AntiKt4TopoEM_truthAssoc_index = 0;
   mu_muid_E = 0;
   mu_muid_pt = 0;
   mu_muid_m = 0;
   mu_muid_eta = 0;
   mu_muid_phi = 0;
   mu_muid_px = 0;
   mu_muid_py = 0;
   mu_muid_pz = 0;
   mu_muid_charge = 0;
   mu_muid_allauthor = 0;
   mu_muid_author = 0;
   mu_muid_beta = 0;
   mu_muid_isMuonLikelihood = 0;
   mu_muid_matchchi2 = 0;
   mu_muid_matchndof = 0;
   mu_muid_etcone20 = 0;
   mu_muid_etcone30 = 0;
   mu_muid_etcone40 = 0;
   mu_muid_nucone20 = 0;
   mu_muid_nucone30 = 0;
   mu_muid_nucone40 = 0;
   mu_muid_ptcone20 = 0;
   mu_muid_ptcone30 = 0;
   mu_muid_ptcone40 = 0;
   mu_muid_energyLossPar = 0;
   mu_muid_energyLossErr = 0;
   mu_muid_etCore = 0;
   mu_muid_energyLossType = 0;
   mu_muid_caloMuonIdTag = 0;
   mu_muid_caloLRLikelihood = 0;
   mu_muid_bestMatch = 0;
   mu_muid_isStandAloneMuon = 0;
   mu_muid_isCombinedMuon = 0;
   mu_muid_isLowPtReconstructedMuon = 0;
   mu_muid_loose = 0;
   mu_muid_medium = 0;
   mu_muid_tight = 0;
   mu_muid_d0_exPV = 0;
   mu_muid_z0_exPV = 0;
   mu_muid_phi_exPV = 0;
   mu_muid_theta_exPV = 0;
   mu_muid_qoverp_exPV = 0;
   mu_muid_cb_d0_exPV = 0;
   mu_muid_cb_z0_exPV = 0;
   mu_muid_cb_phi_exPV = 0;
   mu_muid_cb_theta_exPV = 0;
   mu_muid_cb_qoverp_exPV = 0;
   mu_muid_id_d0_exPV = 0;
   mu_muid_id_z0_exPV = 0;
   mu_muid_id_phi_exPV = 0;
   mu_muid_id_theta_exPV = 0;
   mu_muid_id_qoverp_exPV = 0;
   mu_muid_me_d0_exPV = 0;
   mu_muid_me_z0_exPV = 0;
   mu_muid_me_phi_exPV = 0;
   mu_muid_me_theta_exPV = 0;
   mu_muid_me_qoverp_exPV = 0;
   mu_muid_ie_d0_exPV = 0;
   mu_muid_ie_z0_exPV = 0;
   mu_muid_ie_phi_exPV = 0;
   mu_muid_ie_theta_exPV = 0;
   mu_muid_ie_qoverp_exPV = 0;
   mu_muid_SpaceTime_detID = 0;
   mu_muid_SpaceTime_t = 0;
   mu_muid_SpaceTime_tError = 0;
   mu_muid_SpaceTime_weight = 0;
   mu_muid_SpaceTime_x = 0;
   mu_muid_SpaceTime_y = 0;
   mu_muid_SpaceTime_z = 0;
   mu_muid_SpaceTime_t_Tile = 0;
   mu_muid_SpaceTime_tError_Tile = 0;
   mu_muid_SpaceTime_weight_Tile = 0;
   mu_muid_SpaceTime_x_Tile = 0;
   mu_muid_SpaceTime_y_Tile = 0;
   mu_muid_SpaceTime_z_Tile = 0;
   mu_muid_SpaceTime_t_TRT = 0;
   mu_muid_SpaceTime_tError_TRT = 0;
   mu_muid_SpaceTime_weight_TRT = 0;
   mu_muid_SpaceTime_x_TRT = 0;
   mu_muid_SpaceTime_y_TRT = 0;
   mu_muid_SpaceTime_z_TRT = 0;
   mu_muid_SpaceTime_t_MDT = 0;
   mu_muid_SpaceTime_tError_MDT = 0;
   mu_muid_SpaceTime_weight_MDT = 0;
   mu_muid_SpaceTime_x_MDT = 0;
   mu_muid_SpaceTime_y_MDT = 0;
   mu_muid_SpaceTime_z_MDT = 0;
   mu_muid_TileCellEnergyLayer1 = 0;
   mu_muid_TileTimeLayer1 = 0;
   mu_muid_TileCellRmsNoiseLayer1 = 0;
   mu_muid_TileCellSignLayer1 = 0;
   mu_muid_TileCellEnergyLayer2 = 0;
   mu_muid_TileTimeLayer2 = 0;
   mu_muid_TileCellRmsNoiseLayer2 = 0;
   mu_muid_TileCellSignLayer2 = 0;
   mu_muid_TileCellEnergyLayer3 = 0;
   mu_muid_TileTimeLayer3 = 0;
   mu_muid_TileCellRmsNoiseLayer3 = 0;
   mu_muid_TileCellSignLayer3 = 0;
   mu_muid_MSTrkT0_1 = 0;
   mu_muid_MSTrkT0_2 = 0;
   mu_muid_MSTrkT0_3 = 0;
   mu_muid_cov_d0_exPV = 0;
   mu_muid_cov_z0_exPV = 0;
   mu_muid_cov_phi_exPV = 0;
   mu_muid_cov_theta_exPV = 0;
   mu_muid_cov_qoverp_exPV = 0;
   mu_muid_cov_d0_z0_exPV = 0;
   mu_muid_cov_d0_phi_exPV = 0;
   mu_muid_cov_d0_theta_exPV = 0;
   mu_muid_cov_d0_qoverp_exPV = 0;
   mu_muid_cov_z0_phi_exPV = 0;
   mu_muid_cov_z0_theta_exPV = 0;
   mu_muid_cov_z0_qoverp_exPV = 0;
   mu_muid_cov_phi_theta_exPV = 0;
   mu_muid_cov_phi_qoverp_exPV = 0;
   mu_muid_cov_theta_qoverp_exPV = 0;
   mu_muid_ms_d0 = 0;
   mu_muid_ms_z0 = 0;
   mu_muid_ms_phi = 0;
   mu_muid_ms_theta = 0;
   mu_muid_ms_qoverp = 0;
   mu_muid_id_d0 = 0;
   mu_muid_id_z0 = 0;
   mu_muid_id_phi = 0;
   mu_muid_id_theta = 0;
   mu_muid_id_qoverp = 0;
   mu_muid_me_d0 = 0;
   mu_muid_me_z0 = 0;
   mu_muid_me_phi = 0;
   mu_muid_me_theta = 0;
   mu_muid_me_qoverp = 0;
   mu_muid_ie_d0 = 0;
   mu_muid_ie_z0 = 0;
   mu_muid_ie_phi = 0;
   mu_muid_ie_theta = 0;
   mu_muid_ie_qoverp = 0;
   mu_muid_nOutliersOnTrack = 0;
   mu_muid_nBLHits = 0;
   mu_muid_nPixHits = 0;
   mu_muid_nSCTHits = 0;
   mu_muid_nTRTHits = 0;
   mu_muid_nTRTHighTHits = 0;
   mu_muid_nBLSharedHits = 0;
   mu_muid_nPixSharedHits = 0;
   mu_muid_nPixHoles = 0;
   mu_muid_nSCTSharedHits = 0;
   mu_muid_nSCTHoles = 0;
   mu_muid_nTRTOutliers = 0;
   mu_muid_nTRTHighTOutliers = 0;
   mu_muid_nGangedPixels = 0;
   mu_muid_nPixelDeadSensors = 0;
   mu_muid_nSCTDeadSensors = 0;
   mu_muid_nTRTDeadStraws = 0;
   mu_muid_expectBLayerHit = 0;
   mu_muid_nMDTHits = 0;
   mu_muid_nMDTHoles = 0;
   mu_muid_nCSCEtaHits = 0;
   mu_muid_nCSCEtaHoles = 0;
   mu_muid_nCSCPhiHits = 0;
   mu_muid_nCSCPhiHoles = 0;
   mu_muid_nRPCEtaHits = 0;
   mu_muid_nRPCEtaHoles = 0;
   mu_muid_nRPCPhiHits = 0;
   mu_muid_nRPCPhiHoles = 0;
   mu_muid_nTGCEtaHits = 0;
   mu_muid_nTGCEtaHoles = 0;
   mu_muid_nTGCPhiHits = 0;
   mu_muid_nTGCPhiHoles = 0;
   mu_muid_trackd0 = 0;
   mu_muid_trackz0 = 0;
   mu_muid_trackphi = 0;
   mu_muid_tracktheta = 0;
   mu_muid_trackqoverp = 0;
   mu_muid_trackcov_d0 = 0;
   mu_muid_trackcov_z0 = 0;
   mu_muid_trackcov_phi = 0;
   mu_muid_trackcov_theta = 0;
   mu_muid_trackcov_qoverp = 0;
   mu_muid_trackfitchi2 = 0;
   mu_muid_trackfitndof = 0;
   mu_muid_hastrack = 0;
   mu_muid_truth_dr = 0;
   mu_muid_truth_E = 0;
   mu_muid_truth_pt = 0;
   mu_muid_truth_eta = 0;
   mu_muid_truth_phi = 0;
   mu_muid_truth_type = 0;
   mu_muid_truth_status = 0;
   mu_muid_truth_barcode = 0;
   mu_muid_truth_mothertype = 0;
   mu_muid_truth_motherbarcode = 0;
   mu_muid_truth_matched = 0;
   mu_muid_EFCB_dr = 0;
   mu_muid_EFCB_n = 0;
   mu_muid_EFCB_MuonType = 0;
   mu_muid_EFCB_pt = 0;
   mu_muid_EFCB_eta = 0;
   mu_muid_EFCB_phi = 0;
   mu_muid_EFCB_hasCB = 0;
   mu_muid_EFCB_matched = 0;
   mu_muid_EFMG_dr = 0;
   mu_muid_EFMG_n = 0;
   mu_muid_EFMG_MuonType = 0;
   mu_muid_EFMG_pt = 0;
   mu_muid_EFMG_eta = 0;
   mu_muid_EFMG_phi = 0;
   mu_muid_EFMG_hasMG = 0;
   mu_muid_EFMG_matched = 0;
   mu_muid_EFME_dr = 0;
   mu_muid_EFME_n = 0;
   mu_muid_EFME_MuonType = 0;
   mu_muid_EFME_pt = 0;
   mu_muid_EFME_eta = 0;
   mu_muid_EFME_phi = 0;
   mu_muid_EFME_hasME = 0;
   mu_muid_EFME_matched = 0;
   mu_muid_L2CB_dr = 0;
   mu_muid_L2CB_pt = 0;
   mu_muid_L2CB_eta = 0;
   mu_muid_L2CB_phi = 0;
   mu_muid_L2CB_id_pt = 0;
   mu_muid_L2CB_ms_pt = 0;
   mu_muid_L2CB_matched = 0;
   mu_muid_L1_dr = 0;
   mu_muid_L1_pt = 0;
   mu_muid_L1_eta = 0;
   mu_muid_L1_phi = 0;
   mu_muid_L1_matched = 0;
   mu_muid_truthAssoc_index = 0;
   mu_staco_E = 0;
   mu_staco_pt = 0;
   mu_staco_m = 0;
   mu_staco_eta = 0;
   mu_staco_phi = 0;
   mu_staco_px = 0;
   mu_staco_py = 0;
   mu_staco_pz = 0;
   mu_staco_charge = 0;
   mu_staco_allauthor = 0;
   mu_staco_author = 0;
   mu_staco_beta = 0;
   mu_staco_isMuonLikelihood = 0;
   mu_staco_matchchi2 = 0;
   mu_staco_matchndof = 0;
   mu_staco_etcone20 = 0;
   mu_staco_etcone30 = 0;
   mu_staco_etcone40 = 0;
   mu_staco_nucone20 = 0;
   mu_staco_nucone30 = 0;
   mu_staco_nucone40 = 0;
   mu_staco_ptcone20 = 0;
   mu_staco_ptcone30 = 0;
   mu_staco_ptcone40 = 0;
   mu_staco_energyLossPar = 0;
   mu_staco_energyLossErr = 0;
   mu_staco_etCore = 0;
   mu_staco_energyLossType = 0;
   mu_staco_caloMuonIdTag = 0;
   mu_staco_caloLRLikelihood = 0;
   mu_staco_bestMatch = 0;
   mu_staco_isStandAloneMuon = 0;
   mu_staco_isCombinedMuon = 0;
   mu_staco_isLowPtReconstructedMuon = 0;
   mu_staco_loose = 0;
   mu_staco_medium = 0;
   mu_staco_tight = 0;
   mu_staco_d0_exPV = 0;
   mu_staco_z0_exPV = 0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_cb_d0_exPV = 0;
   mu_staco_cb_z0_exPV = 0;
   mu_staco_cb_phi_exPV = 0;
   mu_staco_cb_theta_exPV = 0;
   mu_staco_cb_qoverp_exPV = 0;
   mu_staco_id_d0_exPV = 0;
   mu_staco_id_z0_exPV = 0;
   mu_staco_id_phi_exPV = 0;
   mu_staco_id_theta_exPV = 0;
   mu_staco_id_qoverp_exPV = 0;
   mu_staco_me_d0_exPV = 0;
   mu_staco_me_z0_exPV = 0;
   mu_staco_me_phi_exPV = 0;
   mu_staco_me_theta_exPV = 0;
   mu_staco_me_qoverp_exPV = 0;
   mu_staco_ie_d0_exPV = 0;
   mu_staco_ie_z0_exPV = 0;
   mu_staco_ie_phi_exPV = 0;
   mu_staco_ie_theta_exPV = 0;
   mu_staco_ie_qoverp_exPV = 0;
   mu_staco_SpaceTime_detID = 0;
   mu_staco_SpaceTime_t = 0;
   mu_staco_SpaceTime_tError = 0;
   mu_staco_SpaceTime_weight = 0;
   mu_staco_SpaceTime_x = 0;
   mu_staco_SpaceTime_y = 0;
   mu_staco_SpaceTime_z = 0;
   mu_staco_SpaceTime_t_Tile = 0;
   mu_staco_SpaceTime_tError_Tile = 0;
   mu_staco_SpaceTime_weight_Tile = 0;
   mu_staco_SpaceTime_x_Tile = 0;
   mu_staco_SpaceTime_y_Tile = 0;
   mu_staco_SpaceTime_z_Tile = 0;
   mu_staco_SpaceTime_t_TRT = 0;
   mu_staco_SpaceTime_tError_TRT = 0;
   mu_staco_SpaceTime_weight_TRT = 0;
   mu_staco_SpaceTime_x_TRT = 0;
   mu_staco_SpaceTime_y_TRT = 0;
   mu_staco_SpaceTime_z_TRT = 0;
   mu_staco_SpaceTime_t_MDT = 0;
   mu_staco_SpaceTime_tError_MDT = 0;
   mu_staco_SpaceTime_weight_MDT = 0;
   mu_staco_SpaceTime_x_MDT = 0;
   mu_staco_SpaceTime_y_MDT = 0;
   mu_staco_SpaceTime_z_MDT = 0;
   mu_staco_TileCellEnergyLayer1 = 0;
   mu_staco_TileTimeLayer1 = 0;
   mu_staco_TileCellRmsNoiseLayer1 = 0;
   mu_staco_TileCellSignLayer1 = 0;
   mu_staco_TileCellEnergyLayer2 = 0;
   mu_staco_TileTimeLayer2 = 0;
   mu_staco_TileCellRmsNoiseLayer2 = 0;
   mu_staco_TileCellSignLayer2 = 0;
   mu_staco_TileCellEnergyLayer3 = 0;
   mu_staco_TileTimeLayer3 = 0;
   mu_staco_TileCellRmsNoiseLayer3 = 0;
   mu_staco_TileCellSignLayer3 = 0;
   mu_staco_MSTrkT0_1 = 0;
   mu_staco_MSTrkT0_2 = 0;
   mu_staco_MSTrkT0_3 = 0;
   mu_staco_cov_d0_exPV = 0;
   mu_staco_cov_z0_exPV = 0;
   mu_staco_cov_phi_exPV = 0;
   mu_staco_cov_theta_exPV = 0;
   mu_staco_cov_qoverp_exPV = 0;
   mu_staco_cov_d0_z0_exPV = 0;
   mu_staco_cov_d0_phi_exPV = 0;
   mu_staco_cov_d0_theta_exPV = 0;
   mu_staco_cov_d0_qoverp_exPV = 0;
   mu_staco_cov_z0_phi_exPV = 0;
   mu_staco_cov_z0_theta_exPV = 0;
   mu_staco_cov_z0_qoverp_exPV = 0;
   mu_staco_cov_phi_theta_exPV = 0;
   mu_staco_cov_phi_qoverp_exPV = 0;
   mu_staco_cov_theta_qoverp_exPV = 0;
   mu_staco_ms_d0 = 0;
   mu_staco_ms_z0 = 0;
   mu_staco_ms_phi = 0;
   mu_staco_ms_theta = 0;
   mu_staco_ms_qoverp = 0;
   mu_staco_id_d0 = 0;
   mu_staco_id_z0 = 0;
   mu_staco_id_phi = 0;
   mu_staco_id_theta = 0;
   mu_staco_id_qoverp = 0;
   mu_staco_me_d0 = 0;
   mu_staco_me_z0 = 0;
   mu_staco_me_phi = 0;
   mu_staco_me_theta = 0;
   mu_staco_me_qoverp = 0;
   mu_staco_ie_d0 = 0;
   mu_staco_ie_z0 = 0;
   mu_staco_ie_phi = 0;
   mu_staco_ie_theta = 0;
   mu_staco_ie_qoverp = 0;
   mu_staco_nOutliersOnTrack = 0;
   mu_staco_nBLHits = 0;
   mu_staco_nPixHits = 0;
   mu_staco_nSCTHits = 0;
   mu_staco_nTRTHits = 0;
   mu_staco_nTRTHighTHits = 0;
   mu_staco_nBLSharedHits = 0;
   mu_staco_nPixSharedHits = 0;
   mu_staco_nPixHoles = 0;
   mu_staco_nSCTSharedHits = 0;
   mu_staco_nSCTHoles = 0;
   mu_staco_nTRTOutliers = 0;
   mu_staco_nTRTHighTOutliers = 0;
   mu_staco_nGangedPixels = 0;
   mu_staco_nPixelDeadSensors = 0;
   mu_staco_nSCTDeadSensors = 0;
   mu_staco_nTRTDeadStraws = 0;
   mu_staco_expectBLayerHit = 0;
   mu_staco_nMDTHits = 0;
   mu_staco_nMDTHoles = 0;
   mu_staco_nCSCEtaHits = 0;
   mu_staco_nCSCEtaHoles = 0;
   mu_staco_nCSCPhiHits = 0;
   mu_staco_nCSCPhiHoles = 0;
   mu_staco_nRPCEtaHits = 0;
   mu_staco_nRPCEtaHoles = 0;
   mu_staco_nRPCPhiHits = 0;
   mu_staco_nRPCPhiHoles = 0;
   mu_staco_nTGCEtaHits = 0;
   mu_staco_nTGCEtaHoles = 0;
   mu_staco_nTGCPhiHits = 0;
   mu_staco_nTGCPhiHoles = 0;
   mu_staco_trackd0 = 0;
   mu_staco_trackz0 = 0;
   mu_staco_trackphi = 0;
   mu_staco_tracktheta = 0;
   mu_staco_trackqoverp = 0;
   mu_staco_trackcov_d0 = 0;
   mu_staco_trackcov_z0 = 0;
   mu_staco_trackcov_phi = 0;
   mu_staco_trackcov_theta = 0;
   mu_staco_trackcov_qoverp = 0;
   mu_staco_trackfitchi2 = 0;
   mu_staco_trackfitndof = 0;
   mu_staco_hastrack = 0;
   mu_staco_truth_dr = 0;
   mu_staco_truth_E = 0;
   mu_staco_truth_pt = 0;
   mu_staco_truth_eta = 0;
   mu_staco_truth_phi = 0;
   mu_staco_truth_type = 0;
   mu_staco_truth_status = 0;
   mu_staco_truth_barcode = 0;
   mu_staco_truth_mothertype = 0;
   mu_staco_truth_motherbarcode = 0;
   mu_staco_truth_matched = 0;
   mu_staco_EFCB_dr = 0;
   mu_staco_EFCB_n = 0;
   mu_staco_EFCB_MuonType = 0;
   mu_staco_EFCB_pt = 0;
   mu_staco_EFCB_eta = 0;
   mu_staco_EFCB_phi = 0;
   mu_staco_EFCB_hasCB = 0;
   mu_staco_EFCB_matched = 0;
   mu_staco_EFMG_dr = 0;
   mu_staco_EFMG_n = 0;
   mu_staco_EFMG_MuonType = 0;
   mu_staco_EFMG_pt = 0;
   mu_staco_EFMG_eta = 0;
   mu_staco_EFMG_phi = 0;
   mu_staco_EFMG_hasMG = 0;
   mu_staco_EFMG_matched = 0;
   mu_staco_EFME_dr = 0;
   mu_staco_EFME_n = 0;
   mu_staco_EFME_MuonType = 0;
   mu_staco_EFME_pt = 0;
   mu_staco_EFME_eta = 0;
   mu_staco_EFME_phi = 0;
   mu_staco_EFME_hasME = 0;
   mu_staco_EFME_matched = 0;
   mu_staco_L2CB_dr = 0;
   mu_staco_L2CB_pt = 0;
   mu_staco_L2CB_eta = 0;
   mu_staco_L2CB_phi = 0;
   mu_staco_L2CB_id_pt = 0;
   mu_staco_L2CB_ms_pt = 0;
   mu_staco_L2CB_matched = 0;
   mu_staco_L1_dr = 0;
   mu_staco_L1_pt = 0;
   mu_staco_L1_eta = 0;
   mu_staco_L1_phi = 0;
   mu_staco_L1_matched = 0;
   mu_staco_truthAssoc_index = 0;
   trk_d0 = 0;
   trk_z0 = 0;
   trk_phi = 0;
   trk_theta = 0;
   trk_qoverp = 0;
   trk_pt = 0;
   trk_eta = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trk_phi_wrtPV = 0;
   trk_theta_wrtPV = 0;
   trk_qoverp_wrtPV = 0;
   trk_err_d0_wrtPV = 0;
   trk_err_z0_wrtPV = 0;
   trk_err_phi_wrtPV = 0;
   trk_err_theta_wrtPV = 0;
   trk_err_qoverp_wrtPV = 0;
   trk_chi2 = 0;
   trk_ndof = 0;
   trk_nBLHits = 0;
   trk_nPixHits = 0;
   trk_nSCTHits = 0;
   trk_nTRTHits = 0;
   trk_nPixHoles = 0;
   trk_nSCTHoles = 0;
   trk_nMDTHits = 0;
   trk_nCSCEtaHits = 0;
   trk_nCSCPhiHits = 0;
   trk_nRPCEtaHits = 0;
   trk_nRPCPhiHits = 0;
   trk_nTGCEtaHits = 0;
   trk_nTGCPhiHits = 0;
   trk_nHits = 0;
   trk_nHoles = 0;
   trk_hitPattern = 0;
   trk_TRTHighTHitsRatio = 0;
   trk_TRTHighTHitsRatioOutliers = 0;
   trk_pixeldEdx = 0;
   trk_fitter = 0;
   trk_patternReco1 = 0;
   trk_patternReco2 = 0;
   trk_seedFinder = 0;
   trk_mc_probability = 0;
   trk_mc_barcode = 0;
   vxp_x = 0;
   vxp_y = 0;
   vxp_z = 0;
   vxp_chi2 = 0;
   vxp_ndof = 0;
   vxp_px = 0;
   vxp_py = 0;
   vxp_pz = 0;
   vxp_E = 0;
   vxp_m = 0;
   vxp_nTracks = 0;
   vxp_sumPt = 0;
   vxp_type = 0;
   vxp_sumWeightInliers = 0;
   vxp_sumWeightOutliers = 0;
   vxp_sumWeightPileup = 0;
   vxp_sumWeightFakes = 0;
   vxp_nInliers = 0;
   vxp_nOutliers = 0;
   vxp_nPileUp = 0;
   vxp_nFakes = 0;
   vxp_purity = 0;
   vxp_trk_n = 0;
   vxp_trk_index = 0;
   mcevt_signal_process_id = 0;
   mcevt_event_number = 0;
   mcevt_event_scale = 0;
   mcevt_alphaQCD = 0;
   mcevt_alphaQED = 0;
   mcevt_pdf_id1 = 0;
   mcevt_pdf_id2 = 0;
   mcevt_pdf_x1 = 0;
   mcevt_pdf_x2 = 0;
   mcevt_pdf_scale = 0;
   mcevt_pdf1 = 0;
   mcevt_pdf2 = 0;
   mcevt_weight = 0;
   mc_pt = 0;
   mc_m = 0;
   mc_eta = 0;
   mc_phi = 0;
   mc_status = 0;
   mc_barcode = 0;
   mc_parents = 0;
   mc_children = 0;
   mc_pdgId = 0;
   mc_charge = 0;
   mc_vx_x = 0;
   mc_vx_y = 0;
   mc_vx_z = 0;
   mc_child_index = 0;
   mc_parent_index = 0;
   trueTau_pt = 0;
   trueTau_m = 0;
   trueTau_eta = 0;
   trueTau_phi = 0;
   trueTau_vis_m = 0;
   trueTau_vis_Et = 0;
   trueTau_vis_eta = 0;
   trueTau_vis_phi = 0;
   trueTau_nProng = 0;
   trueTau_nPi0 = 0;
   trueTau_charge = 0;
   trueTau_tauAssoc_dr = 0;
   trueTau_tauAssoc_index = 0;
   trueTau_tauAssoc_matched = 0;
   trueTau_truthAssoc_index = 0;
   muonTruth_pt = 0;
   muonTruth_m = 0;
   muonTruth_eta = 0;
   muonTruth_phi = 0;
   muonTruth_charge = 0;
   muonTruth_PDGID = 0;
   muonTruth_barcode = 0;
   muonTruth_type = 0;
   muonTruth_origin = 0;
   jet_antikt4truth_E = 0;
   jet_antikt4truth_pt = 0;
   jet_antikt4truth_m = 0;
   jet_antikt4truth_eta = 0;
   jet_antikt4truth_phi = 0;
   jet_antikt4truth_EtaOrigin = 0;
   jet_antikt4truth_PhiOrigin = 0;
   jet_antikt4truth_MOrigin = 0;
   jet_antikt4truth_EtaOriginEM = 0;
   jet_antikt4truth_PhiOriginEM = 0;
   jet_antikt4truth_MOriginEM = 0;
   jet_antikt4truth_WIDTH = 0;
   jet_antikt4truth_n90 = 0;
   jet_antikt4truth_Timing = 0;
   jet_antikt4truth_LArQuality = 0;
   jet_antikt4truth_nTrk = 0;
   jet_antikt4truth_sumPtTrk = 0;
   jet_antikt4truth_OriginIndex = 0;
   jet_antikt4truth_HECQuality = 0;
   jet_antikt4truth_NegativeE = 0;
   jet_antikt4truth_BCH_CORR_CELL = 0;
   jet_antikt4truth_BCH_CORR_DOTX = 0;
   jet_antikt4truth_BCH_CORR_JET = 0;
   jet_antikt4truth_BCH_CORR_JET_FORCELL = 0;
   jet_antikt4truth_ENG_BAD_CELLS = 0;
   jet_antikt4truth_N_BAD_CELLS = 0;
   jet_antikt4truth_N_BAD_CELLS_CORR = 0;
   jet_antikt4truth_BAD_CELLS_CORR_E = 0;
   jet_antikt4truth_SamplingMax = 0;
   jet_antikt4truth_fracSamplingMax = 0;
   jet_antikt4truth_hecf = 0;
   jet_antikt4truth_tgap3f = 0;
   jet_antikt4truth_isUgly = 0;
   jet_antikt4truth_isBadLoose = 0;
   jet_antikt4truth_isBadTight = 0;
   jet_antikt4truth_emfrac = 0;
   jet_antikt4truth_Offset = 0;
   jet_antikt4truth_EMJES = 0;
   jet_antikt4truth_EMJES_EtaCorr = 0;
   jet_antikt4truth_EMJESnooffset = 0;
   jet_antikt4truth_GCWJES = 0;
   jet_antikt4truth_GCWJES_EtaCorr = 0;
   jet_antikt4truth_CB = 0;
   jet_antikt4truth_emscale_E = 0;
   jet_antikt4truth_emscale_pt = 0;
   jet_antikt4truth_emscale_m = 0;
   jet_antikt4truth_emscale_eta = 0;
   jet_antikt4truth_emscale_phi = 0;
   jet_antikt4truth_jvtxf = 0;
   jet_antikt4truth_jvtx_x = 0;
   jet_antikt4truth_jvtx_y = 0;
   jet_antikt4truth_jvtx_z = 0;
   jet_antikt4truth_GSCFactorF = 0;
   jet_antikt4truth_WidthFraction = 0;
   jet_antikt4truth_el_dr = 0;
   jet_antikt4truth_el_matched = 0;
   jet_antikt4truth_mu_dr = 0;
   jet_antikt4truth_mu_matched = 0;
   jet_antikt4truth_L1_dr = 0;
   jet_antikt4truth_L1_matched = 0;
   jet_antikt4truth_L2_dr = 0;
   jet_antikt4truth_L2_matched = 0;
   jet_antikt4truth_EF_dr = 0;
   jet_antikt4truth_EF_matched = 0;
   jet_antikt4truth_elAssoc_index = 0;
   jet_antikt4truth_tauAssoc_index = 0;
   jet_antikt4truth_truthAssoc_index = 0;
   trig_L1_jet_eta = 0;
   trig_L1_jet_phi = 0;
   trig_L1_jet_thrNames = 0;
   trig_L1_jet_thrValues = 0;
   trig_L1_jet_thrPattern = 0;
   trig_L1_jet_myKin_pt = 0;
   trig_L1_jet_myKin_eta = 0;
   trig_L1_jet_myKin_phi = 0;
   trig_L1_TAV = 0;
   trig_L2_passedPhysics = 0;
   trig_EF_passedPhysics = 0;
   trig_L1_TBP = 0;
   trig_L1_TAP = 0;
   trig_L2_passedRaw = 0;
   trig_EF_passedRaw = 0;
   trig_L2_resurrected = 0;
   trig_EF_resurrected = 0;
   trig_L2_passedThrough = 0;
   trig_EF_passedThrough = 0;
   trig_L1_esum_thrNames = 0;
   trig_L2_met_nameOfComponent = 0;
   trig_L2_met_MExComponent = 0;
   trig_L2_met_MEyComponent = 0;
   trig_L2_met_MEzComponent = 0;
   trig_L2_met_sumEtComponent = 0;
   trig_L2_met_sumEComponent = 0;
   trig_L2_met_componentCalib0 = 0;
   trig_L2_met_componentCalib1 = 0;
   trig_L2_met_sumOfSigns = 0;
   trig_L2_met_usedChannels = 0;
   trig_L2_met_status = 0;
   trig_EF_met_nameOfComponent = 0;
   trig_EF_met_MExComponent = 0;
   trig_EF_met_MEyComponent = 0;
   trig_EF_met_MEzComponent = 0;
   trig_EF_met_sumEtComponent = 0;
   trig_EF_met_sumEComponent = 0;
   trig_EF_met_componentCalib0 = 0;
   trig_EF_met_componentCalib1 = 0;
   trig_EF_met_sumOfSigns = 0;
   trig_EF_met_usedChannels = 0;
   trig_EF_met_status = 0;
   trig_L2_jet_E = 0;
   trig_L2_jet_eta = 0;
   trig_L2_jet_phi = 0;
   trig_L2_jet_RoIWord = 0;
   trig_EF_jet_E = 0;
   trig_EF_jet_pt = 0;
   trig_EF_jet_m = 0;
   trig_EF_jet_eta = 0;
   trig_EF_jet_phi = 0;
   trig_EF_jet_emscale_E = 0;
   trig_EF_jet_emscale_pt = 0;
   trig_EF_jet_emscale_m = 0;
   trig_EF_jet_emscale_eta = 0;
   trig_EF_jet_emscale_phi = 0;
   trig_EF_jet_RoIword = 0;
   trig_EF_jet_el_dr = 0;
   trig_EF_jet_el_matched = 0;
   trig_EF_jet_mu_dr = 0;
   trig_EF_jet_mu_matched = 0;
   trig_EF_jet_L1_dr = 0;
   trig_EF_jet_L1_matched = 0;
   trig_EF_jet_L2_dr = 0;
   trig_EF_jet_L2_matched = 0;
   trig_EF_jet_EF_dr = 0;
   trig_EF_jet_EF_matched = 0;
   trig_EF_jet_elAssoc_index = 0;
   trig_EF_jet_tauAssoc_index = 0;
   trig_EF_jet_truthAssoc_index = 0;
   trig_Nav_chain_ChainId = 0;
   trig_Nav_chain_RoIType = 0;
   trig_Nav_chain_RoIIndex = 0;
   trig_EF_trigmuonef_track_n = 0;
   trig_EF_trigmuonef_track_MuonType = 0;
   trig_EF_trigmuonef_track_MS_pt = 0;
   trig_EF_trigmuonef_track_MS_eta = 0;
   trig_EF_trigmuonef_track_MS_phi = 0;
   trig_EF_trigmuonef_track_MS_charge = 0;
   trig_EF_trigmuonef_track_MS_d0 = 0;
   trig_EF_trigmuonef_track_MS_z0 = 0;
   trig_EF_trigmuonef_track_MS_chi2 = 0;
   trig_EF_trigmuonef_track_MS_chi2prob = 0;
   trig_EF_trigmuonef_track_MS_posX = 0;
   trig_EF_trigmuonef_track_MS_posY = 0;
   trig_EF_trigmuonef_track_MS_posZ = 0;
   trig_EF_trigmuonef_track_MS_hasMS = 0;
   trig_EF_trigmuonef_track_SA_pt = 0;
   trig_EF_trigmuonef_track_SA_eta = 0;
   trig_EF_trigmuonef_track_SA_phi = 0;
   trig_EF_trigmuonef_track_SA_charge = 0;
   trig_EF_trigmuonef_track_SA_d0 = 0;
   trig_EF_trigmuonef_track_SA_z0 = 0;
   trig_EF_trigmuonef_track_SA_chi2 = 0;
   trig_EF_trigmuonef_track_SA_chi2prob = 0;
   trig_EF_trigmuonef_track_SA_posX = 0;
   trig_EF_trigmuonef_track_SA_posY = 0;
   trig_EF_trigmuonef_track_SA_posZ = 0;
   trig_EF_trigmuonef_track_SA_hasSA = 0;
   trig_EF_trigmuonef_track_CB_pt = 0;
   trig_EF_trigmuonef_track_CB_eta = 0;
   trig_EF_trigmuonef_track_CB_phi = 0;
   trig_EF_trigmuonef_track_CB_charge = 0;
   trig_EF_trigmuonef_track_CB_d0 = 0;
   trig_EF_trigmuonef_track_CB_z0 = 0;
   trig_EF_trigmuonef_track_CB_chi2 = 0;
   trig_EF_trigmuonef_track_CB_chi2prob = 0;
   trig_EF_trigmuonef_track_CB_posX = 0;
   trig_EF_trigmuonef_track_CB_posY = 0;
   trig_EF_trigmuonef_track_CB_posZ = 0;
   trig_EF_trigmuonef_track_CB_matchChi2 = 0;
   trig_EF_trigmuonef_track_CB_hasCB = 0;
   trig_L2_el_E = 0;
   trig_L2_el_Et = 0;
   trig_L2_el_pt = 0;
   trig_L2_el_eta = 0;
   trig_L2_el_phi = 0;
   trig_L2_el_RoIWord = 0;
   trig_L2_el_zvertex = 0;
   trig_L2_el_charge = 0;
   trig_EF_el_E = 0;
   trig_EF_el_Et = 0;
   trig_EF_el_pt = 0;
   trig_EF_el_m = 0;
   trig_EF_el_eta = 0;
   trig_EF_el_phi = 0;
   trig_EF_el_px = 0;
   trig_EF_el_py = 0;
   trig_EF_el_pz = 0;
   trig_EF_el_charge = 0;
   trig_EF_el_author = 0;
   trig_EF_el_isEM = 0;
   trig_EF_el_loose = 0;
   trig_EF_el_medium = 0;
   trig_EF_el_mediumIso = 0;
   trig_EF_el_tight = 0;
   trig_EF_el_tightIso = 0;
   trig_EF_el_EF_2e10_loose = 0;
   trig_EF_el_EF_2e10_medium = 0;
   trig_EF_el_EF_2e15_loose = 0;
   trig_EF_el_EF_2e3_loose = 0;
   trig_EF_el_EF_2e3_loose_SiTrk = 0;
   trig_EF_el_EF_2e3_loose_TRT = 0;
   trig_EF_el_EF_2e3_medium = 0;
   trig_EF_el_EF_2e3_medium_SiTrk = 0;
   trig_EF_el_EF_2e3_medium_TRT = 0;
   trig_EF_el_EF_2e3_tight = 0;
   trig_EF_el_EF_2e5_medium = 0;
   trig_EF_el_EF_2e5_medium_SiTrk = 0;
   trig_EF_el_EF_2e5_medium_TRT = 0;
   trig_EF_el_EF_2e5_tight = 0;
   trig_EF_el_EF_e10_NoCut = 0;
   trig_EF_el_EF_e10_loose = 0;
   trig_EF_el_EF_e10_loose_mu10 = 0;
   trig_EF_el_EF_e10_loose_mu6 = 0;
   trig_EF_el_EF_e10_medium = 0;
   trig_EF_el_EF_e10_medium_IDTrkNoCut = 0;
   trig_EF_el_EF_e10_medium_SiTrk = 0;
   trig_EF_el_EF_e10_medium_TRT = 0;
   trig_EF_el_EF_e10_tight = 0;
   trig_EF_el_EF_e10_tight_TRT = 0;
   trig_EF_el_EF_e15_loose = 0;
   trig_EF_el_EF_e15_loose_IDTrkNoCut = 0;
   trig_EF_el_EF_e15_medium = 0;
   trig_EF_el_EF_e15_medium_SiTrk = 0;
   trig_EF_el_EF_e15_medium_TRT = 0;
   trig_EF_el_EF_e15_tight = 0;
   trig_EF_el_EF_e15_tight_TRT = 0;
   trig_EF_el_EF_e18_medium = 0;
   trig_EF_el_EF_e20_loose = 0;
   trig_EF_el_EF_e20_loose_IDTrkNoCut = 0;
   trig_EF_el_EF_e20_loose_TRT = 0;
   trig_EF_el_EF_e20_loose_passEF = 0;
   trig_EF_el_EF_e20_loose_passL2 = 0;
   trig_EF_el_EF_e20_loose_xe20 = 0;
   trig_EF_el_EF_e20_loose_xe20_noMu = 0;
   trig_EF_el_EF_e20_loose_xe30 = 0;
   trig_EF_el_EF_e20_loose_xe30_noMu = 0;
   trig_EF_el_EF_e20_medium = 0;
   trig_EF_el_EF_e25_loose = 0;
   trig_EF_el_EF_e25_medium = 0;
   trig_EF_el_EF_e30_loose = 0;
   trig_EF_el_EF_e3_loose = 0;
   trig_EF_el_EF_e3_loose_SiTrk = 0;
   trig_EF_el_EF_e3_loose_TRT = 0;
   trig_EF_el_EF_e3_medium = 0;
   trig_EF_el_EF_e3_medium_SiTrk = 0;
   trig_EF_el_EF_e3_medium_TRT = 0;
   trig_EF_el_EF_e5_NoCut_L2SW = 0;
   trig_EF_el_EF_e5_NoCut_Ringer = 0;
   trig_EF_el_EF_e5_NoCut_firstempty = 0;
   trig_EF_el_EF_e5_loose_mu4 = 0;
   trig_EF_el_EF_e5_medium = 0;
   trig_EF_el_EF_e5_medium_MV = 0;
   trig_EF_el_EF_e5_medium_SiTrk = 0;
   trig_EF_el_EF_e5_medium_TRT = 0;
   trig_EF_el_EF_e5_medium_mu4 = 0;
   trig_EF_el_EF_e5_tight = 0;
   trig_EF_el_EF_e5_tight_SiTrk = 0;
   trig_EF_el_EF_e5_tight_TRT = 0;
   trig_EF_el_EF_e5_tight_e5_NoCut = 0;
   trig_EF_el_EF_em105_passHLT = 0;
   trig_EF_el_hastrack = 0;
   trig_RoI_EF_mu_type = 0;
   trig_RoI_EF_mu_lastStep = 0;
   trig_RoI_EF_mu_Muon_ROI = 0;
   trig_RoI_EF_mu_Muon_ROIStatus = 0;
   trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID = 0;
   trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus = 0;
   trig_RoI_EF_e_type = 0;
   trig_RoI_EF_e_lastStep = 0;
   trig_RoI_EF_e_EmTau_ROI = 0;
   trig_RoI_EF_e_EmTau_ROIStatus = 0;
   //   trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID = 0;
   //   trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Electrons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Photons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus = 0;
   trig_L1_emtau_eta = 0;
   trig_L1_emtau_phi = 0;
   trig_L1_emtau_thrNames = 0;
   trig_L1_emtau_thrValues = 0;
   trig_L1_emtau_core = 0;
   trig_L1_emtau_EMClus = 0;
   trig_L1_emtau_tauClus = 0;
   trig_L1_emtau_EMIsol = 0;
   trig_L1_emtau_hadIsol = 0;
   trig_L1_emtau_hadCore = 0;
   trig_L1_emtau_thrPattern = 0;
   trig_L1_emtau_L1_2EM10 = 0;
   trig_L1_emtau_L1_2EM14 = 0;
   trig_L1_emtau_L1_2EM2 = 0;
   trig_L1_emtau_L1_2EM3 = 0;
   trig_L1_emtau_L1_2EM5 = 0;
   trig_L1_emtau_L1_EM10 = 0;
   trig_L1_emtau_L1_EM10I = 0;
   trig_L1_emtau_L1_EM14 = 0;
   trig_L1_emtau_L1_EM14I = 0;
   trig_L1_emtau_L1_EM14_XE10 = 0;
   trig_L1_emtau_L1_EM14_XE15 = 0;
   trig_L1_emtau_L1_EM2 = 0;
   trig_L1_emtau_L1_EM2_UNPAIRED_ISO = 0;
   trig_L1_emtau_L1_EM2_UNPAIRED_NONISO = 0;
   trig_L1_emtau_L1_EM3 = 0;
   trig_L1_emtau_L1_EM3_EMPTY = 0;
   trig_L1_emtau_L1_EM3_FIRSTEMPTY = 0;
   trig_L1_emtau_L1_EM3_MV = 0;
   trig_L1_emtau_L1_EM5 = 0;
   trig_L1_emtau_L1_EM5_MU10 = 0;
   trig_L1_emtau_L1_EM5_MU6 = 0;
   trig_L1_emtau_L1_EM85 = 0;
   trig_L1_emtau_RoIWord = 0;
   trig_EF_tau_Et = 0;
   trig_EF_tau_pt = 0;
   trig_EF_tau_m = 0;
   trig_EF_tau_eta = 0;
   trig_EF_tau_phi = 0;
   trig_EF_tau_px = 0;
   trig_EF_tau_py = 0;
   trig_EF_tau_pz = 0;
   trig_EF_tau_RoIword = 0;
   trig_EF_tau_author = 0;
   trig_EF_tau_ROIword = 0;
   trig_EF_tau_nProng = 0;
   trig_EF_tau_numTrack = 0;
   trig_EF_tau_seedCalo_numTrack = 0;
   trig_EF_tau_calcVars_sumTrkPt = 0;
   trig_EF_tau_nLooseTrk = 0;
   trig_EF_tau_leadLooseTrkPt = 0;
   trig_EF_tau_leadLooseTrkEta = 0;
   trig_EF_tau_leadLooseTrkPhi = 0;
   trig_EF_tau_seedCalo_EMRadius = 0;
   trig_EF_tau_seedCalo_hadRadius = 0;
   trig_EF_tau_seedCalo_etEMAtEMScale = 0;
   trig_EF_tau_seedCalo_etHadAtEMScale = 0;
   trig_EF_tau_seedCalo_isolFrac = 0;
   trig_EF_tau_seedCalo_centFrac = 0;
   trig_EF_tau_seedCalo_etEMCalib = 0;
   trig_EF_tau_seedCalo_etHadCalib = 0;
   trig_EF_tau_seedCalo_eta = 0;
   trig_EF_tau_seedCalo_phi = 0;
   trig_EF_tau_invMassOfTrks = 0;
   trig_EF_tau_looseTrkWidth = 0;
   trig_EF_tau_looseTrkRadius = 0;
   trig_EF_tau_etOverPtLeadTrk = 0;
   trig_EF_tau_ipZ0SinThetaSigLeadTrk = 0;
   trig_EF_tau_leadTrkPt = 0;
   trig_EF_tau_ipSigLeadTrk = 0;
   trig_EF_tau_ipSigLeadLooseTrk = 0;
   trig_EF_tau_trFlightPathSig = 0;
   trig_EF_tau_seedCalo_stripWidth2 = 0;
   trig_EF_tau_seedCalo_nStrip = 0;
   trig_EF_tau_seedCalo_trkAvgDist = 0;
   trig_EF_tau_seedCalo_trkRmsDist = 0;
   trig_EF_tau_numTopoClusters = 0;
   trig_EF_tau_numEffTopoClusters = 0;
   trig_EF_tau_topoInvMass = 0;
   trig_EF_tau_effTopoInvMass = 0;
   trig_EF_tau_topoMeanDeltaR = 0;
   trig_EF_tau_effTopoMeanDeltaR = 0;
   trig_EF_tau_numCells = 0;
   trig_EF_tau_calcVars_EF_tau_sumTrkPt = 0;
   trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks = 0;
   trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks = 0;
   trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks = 0;
   trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks = 0;
   trig_EF_tau_calcVars_EF_tau_mass = 0;
   trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk = 0;
   trig_EF_tau_calcVars_EF_tau_drMax = 0;
   trig_EF_tau_calcVars_EF_tau_drMin = 0;
   trig_EF_tau_calcVars_EF_tau_emFracCalib = 0;
   trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk = 0;
   trig_EF_tau_calcVars_calRadius = 0;
   trig_EF_tau_calcVars_EMFractionAtEMScale = 0;
   trig_EF_tau_track_n = 0;
   trig_EF_tau_track_d0 = 0;
   trig_EF_tau_track_z0 = 0;
   trig_EF_tau_track_phi = 0;
   trig_EF_tau_track_theta = 0;
   trig_EF_tau_track_qoverp = 0;
   trig_EF_tau_track_pt = 0;
   trig_EF_tau_track_eta = 0;
   trig_EF_tau_track_atPV_d0 = 0;
   trig_EF_tau_track_atPV_z0 = 0;
   trig_EF_tau_track_atPV_phi = 0;
   trig_EF_tau_track_atPV_theta = 0;
   trig_EF_tau_track_atPV_qoverp = 0;
   trig_EF_tau_track_atPV_pt = 0;
   trig_EF_tau_track_atPV_eta = 0;
   trig_EF_tau_track_nBLHits = 0;
   trig_EF_tau_track_nPixHits = 0;
   trig_EF_tau_track_nSCTHits = 0;
   trig_EF_tau_track_nTRTHits = 0;
   trig_EF_tau_track_nPixHoles = 0;
   trig_EF_tau_track_nSCTHoles = 0;
   trig_EF_tau_track_nBLSharedHits = 0;
   trig_EF_tau_track_nPixSharedHits = 0;
   trig_EF_tau_track_nSCTSharedHits = 0;
   trig_EF_tau_track_nTRTHighTHits = 0;
   trig_EF_tau_track_nTRTOutliers = 0;
   trig_EF_tau_track_nTRTHighTOutliers = 0;
   trig_EF_tau_track_nHits = 0;
   trig_EF_tau_track_pixeldEdx = 0;
   trig_EF_tau_seedCalo_track_n = 0;
   trig_EF_tau_seedCalo_track_d0 = 0;
   trig_EF_tau_seedCalo_track_z0 = 0;
   trig_EF_tau_seedCalo_track_phi = 0;
   trig_EF_tau_seedCalo_track_theta = 0;
   trig_EF_tau_seedCalo_track_qoverp = 0;
   trig_EF_tau_seedCalo_track_pt = 0;
   trig_EF_tau_seedCalo_track_eta = 0;
   trig_EF_tau_seedCalo_track_atPV_d0 = 0;
   trig_EF_tau_seedCalo_track_atPV_z0 = 0;
   trig_EF_tau_seedCalo_track_atPV_phi = 0;
   trig_EF_tau_seedCalo_track_atPV_theta = 0;
   trig_EF_tau_seedCalo_track_atPV_qoverp = 0;
   trig_EF_tau_seedCalo_track_atPV_pt = 0;
   trig_EF_tau_seedCalo_track_atPV_eta = 0;
   trig_EF_tau_seedCalo_track_nBLHits = 0;
   trig_EF_tau_seedCalo_track_nPixHits = 0;
   trig_EF_tau_seedCalo_track_nSCTHits = 0;
   trig_EF_tau_seedCalo_track_nTRTHits = 0;
   trig_EF_tau_seedCalo_track_nPixHoles = 0;
   trig_EF_tau_seedCalo_track_nSCTHoles = 0;
   trig_EF_tau_seedCalo_track_nBLSharedHits = 0;
   trig_EF_tau_seedCalo_track_nPixSharedHits = 0;
   trig_EF_tau_seedCalo_track_nSCTSharedHits = 0;
   trig_EF_tau_seedCalo_track_nTRTHighTHits = 0;
   trig_EF_tau_seedCalo_track_nTRTOutliers = 0;
   trig_EF_tau_seedCalo_track_nTRTHighTOutliers = 0;
   trig_EF_tau_seedCalo_track_nHits = 0;
   trig_EF_tau_seedCalo_track_pixeldEdx = 0;
   trig_EF_tau_loosetrack_n = 0;
   trig_EF_tau_loosetrack_d0 = 0;
   trig_EF_tau_loosetrack_z0 = 0;
   trig_EF_tau_loosetrack_phi = 0;
   trig_EF_tau_loosetrack_theta = 0;
   trig_EF_tau_loosetrack_qoverp = 0;
   trig_EF_tau_loosetrack_pt = 0;
   trig_EF_tau_loosetrack_eta = 0;
   trig_EF_tau_loosetrack_atPV_d0 = 0;
   trig_EF_tau_loosetrack_atPV_z0 = 0;
   trig_EF_tau_loosetrack_atPV_phi = 0;
   trig_EF_tau_loosetrack_atPV_theta = 0;
   trig_EF_tau_loosetrack_atPV_qoverp = 0;
   trig_EF_tau_loosetrack_atPV_pt = 0;
   trig_EF_tau_loosetrack_atPV_eta = 0;
   trig_EF_tau_loosetrack_nBLHits = 0;
   trig_EF_tau_loosetrack_nPixHits = 0;
   trig_EF_tau_loosetrack_nSCTHits = 0;
   trig_EF_tau_loosetrack_nTRTHits = 0;
   trig_EF_tau_loosetrack_nPixHoles = 0;
   trig_EF_tau_loosetrack_nSCTHoles = 0;
   trig_EF_tau_loosetrack_nBLSharedHits = 0;
   trig_EF_tau_loosetrack_nPixSharedHits = 0;
   trig_EF_tau_loosetrack_nSCTSharedHits = 0;
   trig_EF_tau_loosetrack_nTRTHighTHits = 0;
   trig_EF_tau_loosetrack_nTRTOutliers = 0;
   trig_EF_tau_loosetrack_nTRTHighTOutliers = 0;
   trig_EF_tau_loosetrack_nHits = 0;
   trig_EF_tau_loosetrack_pixeldEdx = 0;
   trig_EF_tau_seedCalo_widetrack_n = 0;
   trig_EF_tau_seedCalo_widetrack_d0 = 0;
   trig_EF_tau_seedCalo_widetrack_z0 = 0;
   trig_EF_tau_seedCalo_widetrack_phi = 0;
   trig_EF_tau_seedCalo_widetrack_theta = 0;
   trig_EF_tau_seedCalo_widetrack_qoverp = 0;
   trig_EF_tau_seedCalo_widetrack_pt = 0;
   trig_EF_tau_seedCalo_widetrack_eta = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_d0 = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_z0 = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_phi = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_theta = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_qoverp = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_pt = 0;
   trig_EF_tau_seedCalo_widetrack_atPV_eta = 0;
   trig_EF_tau_seedCalo_widetrack_nBLHits = 0;
   trig_EF_tau_seedCalo_widetrack_nPixHits = 0;
   trig_EF_tau_seedCalo_widetrack_nSCTHits = 0;
   trig_EF_tau_seedCalo_widetrack_nTRTHits = 0;
   trig_EF_tau_seedCalo_widetrack_nPixHoles = 0;
   trig_EF_tau_seedCalo_widetrack_nSCTHoles = 0;
   trig_EF_tau_seedCalo_widetrack_nBLSharedHits = 0;
   trig_EF_tau_seedCalo_widetrack_nPixSharedHits = 0;
   trig_EF_tau_seedCalo_widetrack_nSCTSharedHits = 0;
   trig_EF_tau_seedCalo_widetrack_nTRTHighTHits = 0;
   trig_EF_tau_seedCalo_widetrack_nTRTOutliers = 0;
   trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers = 0;
   trig_EF_tau_seedCalo_widetrack_nHits = 0;
   trig_EF_tau_seedCalo_widetrack_pixeldEdx = 0;
   trig_EF_tau_othertrack_n = 0;
   trig_EF_tau_othertrack_d0 = 0;
   trig_EF_tau_othertrack_z0 = 0;
   trig_EF_tau_othertrack_phi = 0;
   trig_EF_tau_othertrack_theta = 0;
   trig_EF_tau_othertrack_qoverp = 0;
   trig_EF_tau_othertrack_pt = 0;
   trig_EF_tau_othertrack_eta = 0;
   trig_EF_tau_othertrack_atPV_d0 = 0;
   trig_EF_tau_othertrack_atPV_z0 = 0;
   trig_EF_tau_othertrack_atPV_phi = 0;
   trig_EF_tau_othertrack_atPV_theta = 0;
   trig_EF_tau_othertrack_atPV_qoverp = 0;
   trig_EF_tau_othertrack_atPV_pt = 0;
   trig_EF_tau_othertrack_atPV_eta = 0;
   trig_EF_tau_othertrack_nBLHits = 0;
   trig_EF_tau_othertrack_nPixHits = 0;
   trig_EF_tau_othertrack_nSCTHits = 0;
   trig_EF_tau_othertrack_nTRTHits = 0;
   trig_EF_tau_othertrack_nPixHoles = 0;
   trig_EF_tau_othertrack_nSCTHoles = 0;
   trig_EF_tau_othertrack_nBLSharedHits = 0;
   trig_EF_tau_othertrack_nPixSharedHits = 0;
   trig_EF_tau_othertrack_nSCTSharedHits = 0;
   trig_EF_tau_othertrack_nTRTHighTHits = 0;
   trig_EF_tau_othertrack_nTRTOutliers = 0;
   trig_EF_tau_othertrack_nTRTHighTOutliers = 0;
   trig_EF_tau_othertrack_nHits = 0;
   trig_EF_tau_othertrack_pixeldEdx = 0;
   trig_L2_trk_idscan_tau_algorithmId = 0;
   trig_L2_trk_idscan_tau_trackStatus = 0;
   trig_L2_trk_idscan_tau_chi2Ndof = 0;
   trig_L2_trk_idscan_tau_nStrawHits = 0;
   trig_L2_trk_idscan_tau_nHighThrHits = 0;
   trig_L2_trk_idscan_tau_nPixelSpacePoints = 0;
   trig_L2_trk_idscan_tau_nSCT_SpacePoints = 0;
   trig_L2_trk_idscan_tau_hitPattern = 0;
   trig_L2_trk_idscan_tau_nStraw = 0;
   trig_L2_trk_idscan_tau_nStrawTime = 0;
   trig_L2_trk_idscan_tau_a0 = 0;
   trig_L2_trk_idscan_tau_z0 = 0;
   trig_L2_trk_idscan_tau_phi0 = 0;
   trig_L2_trk_idscan_tau_eta = 0;
   trig_L2_trk_idscan_tau_pt = 0;
   trig_L2_trk_idscan_tau_covariance = 0;
   trig_L2_trk_sitrack_tau_algorithmId = 0;
   trig_L2_trk_sitrack_tau_trackStatus = 0;
   trig_L2_trk_sitrack_tau_chi2Ndof = 0;
   trig_L2_trk_sitrack_tau_nStrawHits = 0;
   trig_L2_trk_sitrack_tau_nHighThrHits = 0;
   trig_L2_trk_sitrack_tau_nPixelSpacePoints = 0;
   trig_L2_trk_sitrack_tau_nSCT_SpacePoints = 0;
   trig_L2_trk_sitrack_tau_hitPattern = 0;
   trig_L2_trk_sitrack_tau_nStraw = 0;
   trig_L2_trk_sitrack_tau_nStrawTime = 0;
   trig_L2_trk_sitrack_tau_a0 = 0;
   trig_L2_trk_sitrack_tau_z0 = 0;
   trig_L2_trk_sitrack_tau_phi0 = 0;
   trig_L2_trk_sitrack_tau_eta = 0;
   trig_L2_trk_sitrack_tau_pt = 0;
   trig_L2_trk_sitrack_tau_covariance = 0;
   trig_L2_tau_pt = 0;
   trig_L2_tau_eta = 0;
   trig_L2_tau_phi = 0;
   trig_L2_tau_px = 0;
   trig_L2_tau_py = 0;
   trig_L2_tau_pz = 0;
   trig_L2_tau_RoIword = 0;
   trig_L2_tau_simpleEtFlow = 0;
   trig_L2_tau_nMatchedTracks = 0;
   trig_L2_tau_cluster_quality = 0;
   trig_L2_tau_cluster_EMenergy = 0;
   trig_L2_tau_cluster_HADenergy = 0;
   trig_L2_tau_cluster_eta = 0;
   trig_L2_tau_cluster_phi = 0;
   trig_L2_tau_cluster_EMRadius2 = 0;
   trig_L2_tau_cluster_CaloRadius = 0;
   trig_L2_tau_cluster_IsoFrac = 0;
   trig_L2_tau_cluster_numTotCells = 0;
   trig_L2_tau_cluster_stripWidth = 0;
   trig_L2_tau_cluster_stripWidthOffline = 0;
   trig_L2_tau_cluster_EMenergyNor = 0;
   trig_L2_tau_cluster_EMenergyNar = 0;
   trig_L2_tau_cluster_HADenergyNor = 0;
   trig_L2_tau_cluster_HADenergyNar = 0;
   trig_L2_tau_cluster_etNar = 0;
   trig_L2_tau_tracksinfo_nCoreTracks = 0;
   trig_L2_tau_tracksinfo_nSlowTracks = 0;
   trig_L2_tau_tracksinfo_nIsoTracks = 0;
   trig_L2_tau_tracksinfo_charge = 0;
   trig_L2_tau_tracksinfo_leadingTrackPt = 0;
   trig_L2_tau_tracksinfo_scalarPtSumCore = 0;
   trig_L2_tau_tracksinfo_scalarPtSumIso = 0;
   trig_L2_tau_tracksinfo_3fastest_pt = 0;
   trig_L2_tau_tracksinfo_3fastest_eta = 0;
   trig_L2_tau_tracksinfo_3fastest_phi = 0;
   trig_L2_tau_tracksinfo_3fastest_m = 0;
   trig_L2_tau_tracks_algorithmId = 0;
   trig_L2_tau_idscan_trk_n = 0;
   trig_L2_tau_idscan_trk_index = 0;
   trig_L2_tau_sitrack_trk_n = 0;
   trig_L2_tau_sitrack_trk_index = 0;
   trig_RoI_L2_tau_type = 0;
   trig_RoI_L2_tau_lastStep = 0;
   trig_RoI_L2_tau_TrigRoiDescriptor = 0;
   trig_RoI_L2_tau_TrigRoiDescriptorStatus = 0;
   trig_RoI_L2_tau_TrigTauCluster = 0;
   trig_RoI_L2_tau_TrigTauClusterStatus = 0;
   trig_RoI_L2_tau_TrigTauClusterDetails = 0;
   trig_RoI_L2_tau_TrigTauClusterDetailsStatus = 0;
   trig_RoI_L2_tau_TrigTauTracksInfo = 0;
   trig_RoI_L2_tau_TrigTauTracksInfoStatus = 0;
   trig_RoI_L2_tau_TrigTau = 0;
   trig_RoI_L2_tau_TrigTauStatus = 0;
   trig_RoI_L2_tau_EmTau_ROI = 0;
   trig_RoI_L2_tau_EmTau_ROIStatus = 0;
   trig_RoI_L2_tau_TrigInDetTrackCollection = 0;
   trig_RoI_L2_tau_TrigInDetTrackCollectionStatus = 0;
   trig_RoI_EF_tau_type = 0;
   trig_RoI_EF_tau_lastStep = 0;
   trig_RoI_EF_tau_EmTau_ROI = 0;
   trig_RoI_EF_tau_EmTau_ROIStatus = 0;
   //   trig_RoI_EF_tau_Analysis__TauJetContainer = 0;
   //   trig_RoI_EF_tau_Analysis__TauJetContainerStatus = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("tau_n", &tau_n, &b_tau_n);
   fChain->SetBranchAddress("tau_Et", &tau_Et, &b_tau_Et);
   fChain->SetBranchAddress("tau_pt", &tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_m", &tau_m, &b_tau_m);
   fChain->SetBranchAddress("tau_eta", &tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", &tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("tau_charge", &tau_charge, &b_tau_charge);
   fChain->SetBranchAddress("tau_BDTEleScore", &tau_BDTEleScore, &b_tau_BDTEleScore);
   fChain->SetBranchAddress("tau_BDTJetScore", &tau_BDTJetScore, &b_tau_BDTJetScore);
   fChain->SetBranchAddress("tau_discCut", &tau_discCut, &b_tau_discCut);
   fChain->SetBranchAddress("tau_discCutTMVA", &tau_discCutTMVA, &b_tau_discCutTMVA);
   fChain->SetBranchAddress("tau_discLL", &tau_discLL, &b_tau_discLL);
   fChain->SetBranchAddress("tau_discNN", &tau_discNN, &b_tau_discNN);
   fChain->SetBranchAddress("tau_efficLL", &tau_efficLL, &b_tau_efficLL);
   fChain->SetBranchAddress("tau_efficNN", &tau_efficNN, &b_tau_efficNN);
   fChain->SetBranchAddress("tau_likelihood", &tau_likelihood, &b_tau_likelihood);
   fChain->SetBranchAddress("tau_tauJetNeuralNetwork", &tau_tauJetNeuralNetwork, &b_tau_tauJetNeuralNetwork);
   fChain->SetBranchAddress("tau_tauENeuralNetwork", &tau_tauENeuralNetwork, &b_tau_tauENeuralNetwork);
   fChain->SetBranchAddress("tau_tauElTauLikelihood", &tau_tauElTauLikelihood, &b_tau_tauElTauLikelihood);
   fChain->SetBranchAddress("tau_SafeLikelihood", &tau_SafeLikelihood, &b_tau_SafeLikelihood);
   fChain->SetBranchAddress("tau_electronVetoLoose", &tau_electronVetoLoose, &b_tau_electronVetoLoose);
   fChain->SetBranchAddress("tau_electronVetoMedium", &tau_electronVetoMedium, &b_tau_electronVetoMedium);
   fChain->SetBranchAddress("tau_electronVetoTight", &tau_electronVetoTight, &b_tau_electronVetoTight);
   fChain->SetBranchAddress("tau_muonVeto", &tau_muonVeto, &b_tau_muonVeto);
   fChain->SetBranchAddress("tau_tauCutLoose", &tau_tauCutLoose, &b_tau_tauCutLoose);
   fChain->SetBranchAddress("tau_tauCutMedium", &tau_tauCutMedium, &b_tau_tauCutMedium);
   fChain->SetBranchAddress("tau_tauCutTight", &tau_tauCutTight, &b_tau_tauCutTight);
   fChain->SetBranchAddress("tau_tauCutSafeLoose", &tau_tauCutSafeLoose, &b_tau_tauCutSafeLoose);
   fChain->SetBranchAddress("tau_tauCutSafeMedium", &tau_tauCutSafeMedium, &b_tau_tauCutSafeMedium);
   fChain->SetBranchAddress("tau_tauCutSafeTight", &tau_tauCutSafeTight, &b_tau_tauCutSafeTight);
   fChain->SetBranchAddress("tau_tauCutSafeCaloLoose", &tau_tauCutSafeCaloLoose, &b_tau_tauCutSafeCaloLoose);
   fChain->SetBranchAddress("tau_tauCutSafeCaloMedium", &tau_tauCutSafeCaloMedium, &b_tau_tauCutSafeCaloMedium);
   fChain->SetBranchAddress("tau_tauCutSafeCaloTight", &tau_tauCutSafeCaloTight, &b_tau_tauCutSafeCaloTight);
   fChain->SetBranchAddress("tau_tauLlhLoose", &tau_tauLlhLoose, &b_tau_tauLlhLoose);
   fChain->SetBranchAddress("tau_tauLlhMedium", &tau_tauLlhMedium, &b_tau_tauLlhMedium);
   fChain->SetBranchAddress("tau_tauLlhTight", &tau_tauLlhTight, &b_tau_tauLlhTight);
   fChain->SetBranchAddress("tau_JetBDTLoose", &tau_JetBDTLoose, &b_tau_JetBDTLoose);
   fChain->SetBranchAddress("tau_JetBDTMedium", &tau_JetBDTMedium, &b_tau_JetBDTMedium);
   fChain->SetBranchAddress("tau_JetBDTTight", &tau_JetBDTTight, &b_tau_JetBDTTight);
   fChain->SetBranchAddress("tau_EleBDTLoose", &tau_EleBDTLoose, &b_tau_EleBDTLoose);
   fChain->SetBranchAddress("tau_EleBDTMedium", &tau_EleBDTMedium, &b_tau_EleBDTMedium);
   fChain->SetBranchAddress("tau_EleBDTTight", &tau_EleBDTTight, &b_tau_EleBDTTight);
   fChain->SetBranchAddress("tau_SafeLlhLoose", &tau_SafeLlhLoose, &b_tau_SafeLlhLoose);
   fChain->SetBranchAddress("tau_SafeLlhMedium", &tau_SafeLlhMedium, &b_tau_SafeLlhMedium);
   fChain->SetBranchAddress("tau_SafeLlhTight", &tau_SafeLlhTight, &b_tau_SafeLlhTight);
   fChain->SetBranchAddress("tau_author", &tau_author, &b_tau_author);
   fChain->SetBranchAddress("tau_ROIword", &tau_ROIword, &b_tau_ROIword);
   fChain->SetBranchAddress("tau_nProng", &tau_nProng, &b_tau_nProng);
   fChain->SetBranchAddress("tau_numTrack", &tau_numTrack, &b_tau_numTrack);
   fChain->SetBranchAddress("tau_seedCalo_numTrack", &tau_seedCalo_numTrack, &b_tau_seedCalo_numTrack);
   fChain->SetBranchAddress("tau_etOverPtLeadTrk", &tau_etOverPtLeadTrk, &b_tau_etOverPtLeadTrk);
   fChain->SetBranchAddress("tau_ipZ0SinThetaSigLeadTrk", &tau_ipZ0SinThetaSigLeadTrk, &b_tau_ipZ0SinThetaSigLeadTrk);
   fChain->SetBranchAddress("tau_leadTrkPt", &tau_leadTrkPt, &b_tau_leadTrkPt);
   fChain->SetBranchAddress("tau_nLooseTrk", &tau_nLooseTrk, &b_tau_nLooseTrk);
   fChain->SetBranchAddress("tau_nLooseConvTrk", &tau_nLooseConvTrk, &b_tau_nLooseConvTrk);
   fChain->SetBranchAddress("tau_nProngLoose", &tau_nProngLoose, &b_tau_nProngLoose);
   fChain->SetBranchAddress("tau_ipSigLeadTrk", &tau_ipSigLeadTrk, &b_tau_ipSigLeadTrk);
   fChain->SetBranchAddress("tau_ipSigLeadLooseTrk", &tau_ipSigLeadLooseTrk, &b_tau_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("tau_etOverPtLeadLooseTrk", &tau_etOverPtLeadLooseTrk, &b_tau_etOverPtLeadLooseTrk);
   fChain->SetBranchAddress("tau_leadLooseTrkPt", &tau_leadLooseTrkPt, &b_tau_leadLooseTrkPt);
   fChain->SetBranchAddress("tau_chrgLooseTrk", &tau_chrgLooseTrk, &b_tau_chrgLooseTrk);
   fChain->SetBranchAddress("tau_massTrkSys", &tau_massTrkSys, &b_tau_massTrkSys);
   fChain->SetBranchAddress("tau_trkWidth2", &tau_trkWidth2, &b_tau_trkWidth2);
   fChain->SetBranchAddress("tau_trFlightPathSig", &tau_trFlightPathSig, &b_tau_trFlightPathSig);
   fChain->SetBranchAddress("tau_etEflow", &tau_etEflow, &b_tau_etEflow);
   fChain->SetBranchAddress("tau_mEflow", &tau_mEflow, &b_tau_mEflow);
   fChain->SetBranchAddress("tau_nPi0", &tau_nPi0, &b_tau_nPi0);
   fChain->SetBranchAddress("tau_ele_E237E277", &tau_ele_E237E277, &b_tau_ele_E237E277);
   fChain->SetBranchAddress("tau_ele_PresamplerFraction", &tau_ele_PresamplerFraction, &b_tau_ele_PresamplerFraction);
   fChain->SetBranchAddress("tau_ele_ECALFirstFraction", &tau_ele_ECALFirstFraction, &b_tau_ele_ECALFirstFraction);
   fChain->SetBranchAddress("tau_seedCalo_EMRadius", &tau_seedCalo_EMRadius, &b_tau_seedCalo_EMRadius);
   fChain->SetBranchAddress("tau_seedCalo_hadRadius", &tau_seedCalo_hadRadius, &b_tau_seedCalo_hadRadius);
   fChain->SetBranchAddress("tau_seedCalo_etEMAtEMScale", &tau_seedCalo_etEMAtEMScale, &b_tau_seedCalo_etEMAtEMScale);
   fChain->SetBranchAddress("tau_seedCalo_etHadAtEMScale", &tau_seedCalo_etHadAtEMScale, &b_tau_seedCalo_etHadAtEMScale);
   fChain->SetBranchAddress("tau_seedCalo_isolFrac", &tau_seedCalo_isolFrac, &b_tau_seedCalo_isolFrac);
   fChain->SetBranchAddress("tau_seedCalo_centFrac", &tau_seedCalo_centFrac, &b_tau_seedCalo_centFrac);
   fChain->SetBranchAddress("tau_seedCalo_stripWidth2", &tau_seedCalo_stripWidth2, &b_tau_seedCalo_stripWidth2);
   fChain->SetBranchAddress("tau_seedCalo_nStrip", &tau_seedCalo_nStrip, &b_tau_seedCalo_nStrip);
   fChain->SetBranchAddress("tau_seedCalo_etEMCalib", &tau_seedCalo_etEMCalib, &b_tau_seedCalo_etEMCalib);
   fChain->SetBranchAddress("tau_seedCalo_etHadCalib", &tau_seedCalo_etHadCalib, &b_tau_seedCalo_etHadCalib);
   fChain->SetBranchAddress("tau_seedCalo_eta", &tau_seedCalo_eta, &b_tau_seedCalo_eta);
   fChain->SetBranchAddress("tau_seedCalo_phi", &tau_seedCalo_phi, &b_tau_seedCalo_phi);
   fChain->SetBranchAddress("tau_seedCalo_nIsolLooseTrk", &tau_seedCalo_nIsolLooseTrk, &b_tau_seedCalo_nIsolLooseTrk);
   fChain->SetBranchAddress("tau_seedCalo_trkAvgDist", &tau_seedCalo_trkAvgDist, &b_tau_seedCalo_trkAvgDist);
   fChain->SetBranchAddress("tau_seedCalo_trkRmsDist", &tau_seedCalo_trkRmsDist, &b_tau_seedCalo_trkRmsDist);
   fChain->SetBranchAddress("tau_numTopoClusters", &tau_numTopoClusters, &b_tau_numTopoClusters);
   fChain->SetBranchAddress("tau_numEffTopoClusters", &tau_numEffTopoClusters, &b_tau_numEffTopoClusters);
   fChain->SetBranchAddress("tau_topoInvMass", &tau_topoInvMass, &b_tau_topoInvMass);
   fChain->SetBranchAddress("tau_effTopoInvMass", &tau_effTopoInvMass, &b_tau_effTopoInvMass);
   fChain->SetBranchAddress("tau_topoMeanDeltaR", &tau_topoMeanDeltaR, &b_tau_topoMeanDeltaR);
   fChain->SetBranchAddress("tau_effTopoMeanDeltaR", &tau_effTopoMeanDeltaR, &b_tau_effTopoMeanDeltaR);
   fChain->SetBranchAddress("tau_numCells", &tau_numCells, &b_tau_numCells);
   fChain->SetBranchAddress("tau_seedTrk_EMRadius", &tau_seedTrk_EMRadius, &b_tau_seedTrk_EMRadius);
   fChain->SetBranchAddress("tau_seedTrk_isolFrac", &tau_seedTrk_isolFrac, &b_tau_seedTrk_isolFrac);
   fChain->SetBranchAddress("tau_seedTrk_etChrgHadOverSumTrkPt", &tau_seedTrk_etChrgHadOverSumTrkPt, &b_tau_seedTrk_etChrgHadOverSumTrkPt);
   fChain->SetBranchAddress("tau_seedTrk_isolFracWide", &tau_seedTrk_isolFracWide, &b_tau_seedTrk_isolFracWide);
   fChain->SetBranchAddress("tau_seedTrk_etHadAtEMScale", &tau_seedTrk_etHadAtEMScale, &b_tau_seedTrk_etHadAtEMScale);
   fChain->SetBranchAddress("tau_seedTrk_etEMAtEMScale", &tau_seedTrk_etEMAtEMScale, &b_tau_seedTrk_etEMAtEMScale);
   fChain->SetBranchAddress("tau_seedTrk_etEMCL", &tau_seedTrk_etEMCL, &b_tau_seedTrk_etEMCL);
   fChain->SetBranchAddress("tau_seedTrk_etChrgEM", &tau_seedTrk_etChrgEM, &b_tau_seedTrk_etChrgEM);
   fChain->SetBranchAddress("tau_seedTrk_etNeuEM", &tau_seedTrk_etNeuEM, &b_tau_seedTrk_etNeuEM);
   fChain->SetBranchAddress("tau_seedTrk_etResNeuEM", &tau_seedTrk_etResNeuEM, &b_tau_seedTrk_etResNeuEM);
   fChain->SetBranchAddress("tau_seedTrk_hadLeakEt", &tau_seedTrk_hadLeakEt, &b_tau_seedTrk_hadLeakEt);
   fChain->SetBranchAddress("tau_seedTrk_sumEMCellEtOverLeadTrkPt", &tau_seedTrk_sumEMCellEtOverLeadTrkPt, &b_tau_seedTrk_sumEMCellEtOverLeadTrkPt);
   fChain->SetBranchAddress("tau_seedTrk_secMaxStripEt", &tau_seedTrk_secMaxStripEt, &b_tau_seedTrk_secMaxStripEt);
   fChain->SetBranchAddress("tau_seedTrk_stripWidth2", &tau_seedTrk_stripWidth2, &b_tau_seedTrk_stripWidth2);
   fChain->SetBranchAddress("tau_seedTrk_nStrip", &tau_seedTrk_nStrip, &b_tau_seedTrk_nStrip);
   fChain->SetBranchAddress("tau_seedTrk_etChrgHad", &tau_seedTrk_etChrgHad, &b_tau_seedTrk_etChrgHad);
   fChain->SetBranchAddress("tau_seedTrk_nOtherCoreTrk", &tau_seedTrk_nOtherCoreTrk, &b_tau_seedTrk_nOtherCoreTrk);
   fChain->SetBranchAddress("tau_seedTrk_nIsolTrk", &tau_seedTrk_nIsolTrk, &b_tau_seedTrk_nIsolTrk);
   fChain->SetBranchAddress("tau_seedTrk_etIsolEM", &tau_seedTrk_etIsolEM, &b_tau_seedTrk_etIsolEM);
   fChain->SetBranchAddress("tau_seedTrk_etIsolHad", &tau_seedTrk_etIsolHad, &b_tau_seedTrk_etIsolHad);
   fChain->SetBranchAddress("tau_calcVars_sumTrkPt", &tau_calcVars_sumTrkPt, &b_tau_calcVars_sumTrkPt);
   fChain->SetBranchAddress("tau_calcVars_etHadSumPtTracks", &tau_calcVars_etHadSumPtTracks, &b_tau_calcVars_etHadSumPtTracks);
   fChain->SetBranchAddress("tau_calcVars_etEMSumPtTracks", &tau_calcVars_etEMSumPtTracks, &b_tau_calcVars_etEMSumPtTracks);
   fChain->SetBranchAddress("tau_calcVars_etHad_EMScale_Pt3Trks", &tau_calcVars_etHad_EMScale_Pt3Trks, &b_tau_calcVars_etHad_EMScale_Pt3Trks);
   fChain->SetBranchAddress("tau_calcVars_etEM_EMScale_Pt3Trks", &tau_calcVars_etEM_EMScale_Pt3Trks, &b_tau_calcVars_etEM_EMScale_Pt3Trks);
   fChain->SetBranchAddress("tau_calcVars_mass", &tau_calcVars_mass, &b_tau_calcVars_mass);
   fChain->SetBranchAddress("tau_calcVars_ipSigLeadLooseTrk", &tau_calcVars_ipSigLeadLooseTrk, &b_tau_calcVars_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("tau_calcVars_drMax", &tau_calcVars_drMax, &b_tau_calcVars_drMax);
   fChain->SetBranchAddress("tau_calcVars_drMin", &tau_calcVars_drMin, &b_tau_calcVars_drMin);
   fChain->SetBranchAddress("tau_calcVars_emFracCalib", &tau_calcVars_emFracCalib, &b_tau_calcVars_emFracCalib);
   fChain->SetBranchAddress("tau_calcVars_TRTHTOverLT_LeadTrk", &tau_calcVars_TRTHTOverLT_LeadTrk, &b_tau_calcVars_TRTHTOverLT_LeadTrk);
   fChain->SetBranchAddress("tau_calcVars_calRadius", &tau_calcVars_calRadius, &b_tau_calcVars_calRadius);
   fChain->SetBranchAddress("tau_calcVars_EMFractionAtEMScale", &tau_calcVars_EMFractionAtEMScale, &b_tau_calcVars_EMFractionAtEMScale);
   fChain->SetBranchAddress("tau_calcVars_BDTLooseBkg", &tau_calcVars_BDTLooseBkg, &b_tau_calcVars_BDTLooseBkg);
   fChain->SetBranchAddress("tau_calcVars_BDTMediumBkg", &tau_calcVars_BDTMediumBkg, &b_tau_calcVars_BDTMediumBkg);
   fChain->SetBranchAddress("tau_calcVars_BDTTightBkg", &tau_calcVars_BDTTightBkg, &b_tau_calcVars_BDTTightBkg);
   fChain->SetBranchAddress("tau_cluster_E", &tau_cluster_E, &b_tau_cluster_E);
   fChain->SetBranchAddress("tau_cluster_eta", &tau_cluster_eta, &b_tau_cluster_eta);
   fChain->SetBranchAddress("tau_cluster_phi", &tau_cluster_phi, &b_tau_cluster_phi);
   fChain->SetBranchAddress("tau_cluster_n", &tau_cluster_n, &b_tau_cluster_n);
   fChain->SetBranchAddress("tau_Pi0Cluster_pt", &tau_Pi0Cluster_pt, &b_tau_Pi0Cluster_pt);
   fChain->SetBranchAddress("tau_Pi0Cluster_eta", &tau_Pi0Cluster_eta, &b_tau_Pi0Cluster_eta);
   fChain->SetBranchAddress("tau_Pi0Cluster_phi", &tau_Pi0Cluster_phi, &b_tau_Pi0Cluster_phi);
   fChain->SetBranchAddress("tau_secvtx_x", &tau_secvtx_x, &b_tau_secvtx_x);
   fChain->SetBranchAddress("tau_secvtx_y", &tau_secvtx_y, &b_tau_secvtx_y);
   fChain->SetBranchAddress("tau_secvtx_z", &tau_secvtx_z, &b_tau_secvtx_z);
   fChain->SetBranchAddress("tau_secvtx_chiSquared", &tau_secvtx_chiSquared, &b_tau_secvtx_chiSquared);
   fChain->SetBranchAddress("tau_secvtx_numberDoF", &tau_secvtx_numberDoF, &b_tau_secvtx_numberDoF);
   fChain->SetBranchAddress("tau_cell_E", &tau_cell_E, &b_tau_cell_E);
   fChain->SetBranchAddress("tau_cell_eta", &tau_cell_eta, &b_tau_cell_eta);
   fChain->SetBranchAddress("tau_cell_phi", &tau_cell_phi, &b_tau_cell_phi);
   fChain->SetBranchAddress("tau_cell_n", &tau_cell_n, &b_tau_cell_n);
   fChain->SetBranchAddress("tau_cell_nEffCells", &tau_cell_nEffCells, &b_tau_cell_nEffCells);
   fChain->SetBranchAddress("tau_cell_samplingID", &tau_cell_samplingID, &b_tau_cell_samplingID);
   fChain->SetBranchAddress("tau_jet_Et", &tau_jet_Et, &b_tau_jet_Et);
   fChain->SetBranchAddress("tau_jet_pt", &tau_jet_pt, &b_tau_jet_pt);
   fChain->SetBranchAddress("tau_jet_m", &tau_jet_m, &b_tau_jet_m);
   fChain->SetBranchAddress("tau_jet_eta", &tau_jet_eta, &b_tau_jet_eta);
   fChain->SetBranchAddress("tau_jet_phi", &tau_jet_phi, &b_tau_jet_phi);
   fChain->SetBranchAddress("tau_jet_WIDTH", &tau_jet_WIDTH, &b_tau_jet_WIDTH);
   fChain->SetBranchAddress("tau_jet_n90", &tau_jet_n90, &b_tau_jet_n90);
   fChain->SetBranchAddress("tau_jet_n90constituents", &tau_jet_n90constituents, &b_tau_jet_n90constituents);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_CELL", &tau_jet_BCH_CORR_CELL, &b_tau_jet_BCH_CORR_CELL);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_JET", &tau_jet_BCH_CORR_JET, &b_tau_jet_BCH_CORR_JET);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_JET_FORCELL", &tau_jet_BCH_CORR_JET_FORCELL, &b_tau_jet_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("tau_jet_ENG_BAD_CELLS", &tau_jet_ENG_BAD_CELLS, &b_tau_jet_ENG_BAD_CELLS);
   fChain->SetBranchAddress("tau_jet_N_BAD_CELLS", &tau_jet_N_BAD_CELLS, &b_tau_jet_N_BAD_CELLS);
   fChain->SetBranchAddress("tau_jet_N_BAD_CELLS_CORR", &tau_jet_N_BAD_CELLS_CORR, &b_tau_jet_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("tau_jet_BAD_CELLS_CORR_E", &tau_jet_BAD_CELLS_CORR_E, &b_tau_jet_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("tau_jet_Timing", &tau_jet_Timing, &b_tau_jet_Timing);
   fChain->SetBranchAddress("tau_jet_LArQuality", &tau_jet_LArQuality, &b_tau_jet_LArQuality);
   fChain->SetBranchAddress("tau_jet_SamplingMax", &tau_jet_SamplingMax, &b_tau_jet_SamplingMax);
   fChain->SetBranchAddress("tau_jet_fracSamplingMax", &tau_jet_fracSamplingMax, &b_tau_jet_fracSamplingMax);
   fChain->SetBranchAddress("tau_jet_hecf", &tau_jet_hecf, &b_tau_jet_hecf);
   fChain->SetBranchAddress("tau_jet_tgap3f", &tau_jet_tgap3f, &b_tau_jet_tgap3f);
   fChain->SetBranchAddress("tau_jet_isUgly", &tau_jet_isUgly, &b_tau_jet_isUgly);
   fChain->SetBranchAddress("tau_jet_isBadLoose", &tau_jet_isBadLoose, &b_tau_jet_isBadLoose);
   fChain->SetBranchAddress("tau_jet_isBadTight", &tau_jet_isBadTight, &b_tau_jet_isBadTight);
   fChain->SetBranchAddress("tau_jet_emfrac", &tau_jet_emfrac, &b_tau_jet_emfrac);
   fChain->SetBranchAddress("tau_jet_GCWJES", &tau_jet_GCWJES, &b_tau_jet_GCWJES);
   fChain->SetBranchAddress("tau_jet_EMJES", &tau_jet_EMJES, &b_tau_jet_EMJES);
   fChain->SetBranchAddress("tau_jet_emscale_E", &tau_jet_emscale_E, &b_tau_jet_emscale_E);
   fChain->SetBranchAddress("tau_jet_emscale_pt", &tau_jet_emscale_pt, &b_tau_jet_emscale_pt);
   fChain->SetBranchAddress("tau_jet_emscale_m", &tau_jet_emscale_m, &b_tau_jet_emscale_m);
   fChain->SetBranchAddress("tau_jet_emscale_eta", &tau_jet_emscale_eta, &b_tau_jet_emscale_eta);
   fChain->SetBranchAddress("tau_jet_emscale_phi", &tau_jet_emscale_phi, &b_tau_jet_emscale_phi);
   fChain->SetBranchAddress("tau_jet_jvtxf", &tau_jet_jvtxf, &b_tau_jet_jvtxf);
   fChain->SetBranchAddress("tau_jet_jvtx_x", &tau_jet_jvtx_x, &b_tau_jet_jvtx_x);
   fChain->SetBranchAddress("tau_jet_jvtx_y", &tau_jet_jvtx_y, &b_tau_jet_jvtx_y);
   fChain->SetBranchAddress("tau_jet_jvtx_z", &tau_jet_jvtx_z, &b_tau_jet_jvtx_z);
   fChain->SetBranchAddress("tau_jet_flavor_weight", &tau_jet_flavor_weight, &b_tau_jet_flavor_weight);
   fChain->SetBranchAddress("tau_jet_flavor_weight_TrackCounting2D", &tau_jet_flavor_weight_TrackCounting2D, &b_tau_jet_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetProb", &tau_jet_flavor_weight_JetProb, &b_tau_jet_flavor_weight_JetProb);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP1D", &tau_jet_flavor_weight_IP1D, &b_tau_jet_flavor_weight_IP1D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP2D", &tau_jet_flavor_weight_IP2D, &b_tau_jet_flavor_weight_IP2D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP3D", &tau_jet_flavor_weight_IP3D, &b_tau_jet_flavor_weight_IP3D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV0", &tau_jet_flavor_weight_SV0, &b_tau_jet_flavor_weight_SV0);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV1", &tau_jet_flavor_weight_SV1, &b_tau_jet_flavor_weight_SV1);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV2", &tau_jet_flavor_weight_SV2, &b_tau_jet_flavor_weight_SV2);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterTag", &tau_jet_flavor_weight_JetFitterTag, &b_tau_jet_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterCOMB", &tau_jet_flavor_weight_JetFitterCOMB, &b_tau_jet_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterTagNN", &tau_jet_flavor_weight_JetFitterTagNN, &b_tau_jet_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterCOMBNN", &tau_jet_flavor_weight_JetFitterCOMBNN, &b_tau_jet_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SoftMuonTag", &tau_jet_flavor_weight_SoftMuonTag, &b_tau_jet_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SoftElectronTag", &tau_jet_flavor_weight_SoftElectronTag, &b_tau_jet_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP3DSV1", &tau_jet_flavor_weight_IP3DSV1, &b_tau_jet_flavor_weight_IP3DSV1);
   fChain->SetBranchAddress("tau_jet_e_PreSamplerB", &tau_jet_e_PreSamplerB, &b_tau_jet_e_PreSamplerB);
   fChain->SetBranchAddress("tau_jet_e_EMB1", &tau_jet_e_EMB1, &b_tau_jet_e_EMB1);
   fChain->SetBranchAddress("tau_jet_e_EMB2", &tau_jet_e_EMB2, &b_tau_jet_e_EMB2);
   fChain->SetBranchAddress("tau_jet_e_EMB3", &tau_jet_e_EMB3, &b_tau_jet_e_EMB3);
   fChain->SetBranchAddress("tau_jet_e_PreSamplerE", &tau_jet_e_PreSamplerE, &b_tau_jet_e_PreSamplerE);
   fChain->SetBranchAddress("tau_jet_e_EME1", &tau_jet_e_EME1, &b_tau_jet_e_EME1);
   fChain->SetBranchAddress("tau_jet_e_EME2", &tau_jet_e_EME2, &b_tau_jet_e_EME2);
   fChain->SetBranchAddress("tau_jet_e_EME3", &tau_jet_e_EME3, &b_tau_jet_e_EME3);
   fChain->SetBranchAddress("tau_jet_e_HEC0", &tau_jet_e_HEC0, &b_tau_jet_e_HEC0);
   fChain->SetBranchAddress("tau_jet_e_HEC1", &tau_jet_e_HEC1, &b_tau_jet_e_HEC1);
   fChain->SetBranchAddress("tau_jet_e_HEC2", &tau_jet_e_HEC2, &b_tau_jet_e_HEC2);
   fChain->SetBranchAddress("tau_jet_e_HEC3", &tau_jet_e_HEC3, &b_tau_jet_e_HEC3);
   fChain->SetBranchAddress("tau_jet_e_TileBar0", &tau_jet_e_TileBar0, &b_tau_jet_e_TileBar0);
   fChain->SetBranchAddress("tau_jet_e_TileBar1", &tau_jet_e_TileBar1, &b_tau_jet_e_TileBar1);
   fChain->SetBranchAddress("tau_jet_e_TileBar2", &tau_jet_e_TileBar2, &b_tau_jet_e_TileBar2);
   fChain->SetBranchAddress("tau_jet_e_TileGap1", &tau_jet_e_TileGap1, &b_tau_jet_e_TileGap1);
   fChain->SetBranchAddress("tau_jet_e_TileGap2", &tau_jet_e_TileGap2, &b_tau_jet_e_TileGap2);
   fChain->SetBranchAddress("tau_jet_e_TileGap3", &tau_jet_e_TileGap3, &b_tau_jet_e_TileGap3);
   fChain->SetBranchAddress("tau_jet_e_TileExt0", &tau_jet_e_TileExt0, &b_tau_jet_e_TileExt0);
   fChain->SetBranchAddress("tau_jet_e_TileExt1", &tau_jet_e_TileExt1, &b_tau_jet_e_TileExt1);
   fChain->SetBranchAddress("tau_jet_e_TileExt2", &tau_jet_e_TileExt2, &b_tau_jet_e_TileExt2);
   fChain->SetBranchAddress("tau_jet_e_FCAL0", &tau_jet_e_FCAL0, &b_tau_jet_e_FCAL0);
   fChain->SetBranchAddress("tau_jet_e_FCAL1", &tau_jet_e_FCAL1, &b_tau_jet_e_FCAL1);
   fChain->SetBranchAddress("tau_jet_e_FCAL2", &tau_jet_e_FCAL2, &b_tau_jet_e_FCAL2);
   fChain->SetBranchAddress("tau_jet_shapeBins", &tau_jet_shapeBins, &b_tau_jet_shapeBins);
   fChain->SetBranchAddress("tau_seedCalo_track_n", &tau_seedCalo_track_n, &b_tau_seedCalo_track_n);
   fChain->SetBranchAddress("tau_seedCalo_track_d0", &tau_seedCalo_track_d0, &b_tau_seedCalo_track_d0);
   fChain->SetBranchAddress("tau_seedCalo_track_z0", &tau_seedCalo_track_z0, &b_tau_seedCalo_track_z0);
   fChain->SetBranchAddress("tau_seedCalo_track_phi", &tau_seedCalo_track_phi, &b_tau_seedCalo_track_phi);
   fChain->SetBranchAddress("tau_seedCalo_track_theta", &tau_seedCalo_track_theta, &b_tau_seedCalo_track_theta);
   fChain->SetBranchAddress("tau_seedCalo_track_qoverp", &tau_seedCalo_track_qoverp, &b_tau_seedCalo_track_qoverp);
   fChain->SetBranchAddress("tau_seedCalo_track_pt", &tau_seedCalo_track_pt, &b_tau_seedCalo_track_pt);
   fChain->SetBranchAddress("tau_seedCalo_track_eta", &tau_seedCalo_track_eta, &b_tau_seedCalo_track_eta);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_d0", &tau_seedCalo_track_atPV_d0, &b_tau_seedCalo_track_atPV_d0);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_z0", &tau_seedCalo_track_atPV_z0, &b_tau_seedCalo_track_atPV_z0);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_phi", &tau_seedCalo_track_atPV_phi, &b_tau_seedCalo_track_atPV_phi);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_theta", &tau_seedCalo_track_atPV_theta, &b_tau_seedCalo_track_atPV_theta);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_qoverp", &tau_seedCalo_track_atPV_qoverp, &b_tau_seedCalo_track_atPV_qoverp);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_pt", &tau_seedCalo_track_atPV_pt, &b_tau_seedCalo_track_atPV_pt);
   fChain->SetBranchAddress("tau_seedCalo_track_atPV_eta", &tau_seedCalo_track_atPV_eta, &b_tau_seedCalo_track_atPV_eta);
   fChain->SetBranchAddress("tau_seedCalo_track_nBLHits", &tau_seedCalo_track_nBLHits, &b_tau_seedCalo_track_nBLHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nPixHits", &tau_seedCalo_track_nPixHits, &b_tau_seedCalo_track_nPixHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nSCTHits", &tau_seedCalo_track_nSCTHits, &b_tau_seedCalo_track_nSCTHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nTRTHits", &tau_seedCalo_track_nTRTHits, &b_tau_seedCalo_track_nTRTHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nPixHoles", &tau_seedCalo_track_nPixHoles, &b_tau_seedCalo_track_nPixHoles);
   fChain->SetBranchAddress("tau_seedCalo_track_nSCTHoles", &tau_seedCalo_track_nSCTHoles, &b_tau_seedCalo_track_nSCTHoles);
   fChain->SetBranchAddress("tau_seedCalo_track_nBLSharedHits", &tau_seedCalo_track_nBLSharedHits, &b_tau_seedCalo_track_nBLSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nPixSharedHits", &tau_seedCalo_track_nPixSharedHits, &b_tau_seedCalo_track_nPixSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nSCTSharedHits", &tau_seedCalo_track_nSCTSharedHits, &b_tau_seedCalo_track_nSCTSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nTRTHighTHits", &tau_seedCalo_track_nTRTHighTHits, &b_tau_seedCalo_track_nTRTHighTHits);
   fChain->SetBranchAddress("tau_seedCalo_track_nTRTOutliers", &tau_seedCalo_track_nTRTOutliers, &b_tau_seedCalo_track_nTRTOutliers);
   fChain->SetBranchAddress("tau_seedCalo_track_nTRTHighTOutliers", &tau_seedCalo_track_nTRTHighTOutliers, &b_tau_seedCalo_track_nTRTHighTOutliers);
   fChain->SetBranchAddress("tau_seedCalo_track_nHits", &tau_seedCalo_track_nHits, &b_tau_seedCalo_track_nHits);
   fChain->SetBranchAddress("tau_seedCalo_track_pixeldEdx", &tau_seedCalo_track_pixeldEdx, &b_tau_seedCalo_track_pixeldEdx);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_n", &tau_seedCalo_wideTrk_n, &b_tau_seedCalo_wideTrk_n);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_d0", &tau_seedCalo_wideTrk_d0, &b_tau_seedCalo_wideTrk_d0);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_z0", &tau_seedCalo_wideTrk_z0, &b_tau_seedCalo_wideTrk_z0);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_phi", &tau_seedCalo_wideTrk_phi, &b_tau_seedCalo_wideTrk_phi);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_theta", &tau_seedCalo_wideTrk_theta, &b_tau_seedCalo_wideTrk_theta);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_qoverp", &tau_seedCalo_wideTrk_qoverp, &b_tau_seedCalo_wideTrk_qoverp);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_pt", &tau_seedCalo_wideTrk_pt, &b_tau_seedCalo_wideTrk_pt);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_eta", &tau_seedCalo_wideTrk_eta, &b_tau_seedCalo_wideTrk_eta);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_d0", &tau_seedCalo_wideTrk_atPV_d0, &b_tau_seedCalo_wideTrk_atPV_d0);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_z0", &tau_seedCalo_wideTrk_atPV_z0, &b_tau_seedCalo_wideTrk_atPV_z0);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_phi", &tau_seedCalo_wideTrk_atPV_phi, &b_tau_seedCalo_wideTrk_atPV_phi);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_theta", &tau_seedCalo_wideTrk_atPV_theta, &b_tau_seedCalo_wideTrk_atPV_theta);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_qoverp", &tau_seedCalo_wideTrk_atPV_qoverp, &b_tau_seedCalo_wideTrk_atPV_qoverp);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_pt", &tau_seedCalo_wideTrk_atPV_pt, &b_tau_seedCalo_wideTrk_atPV_pt);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_atPV_eta", &tau_seedCalo_wideTrk_atPV_eta, &b_tau_seedCalo_wideTrk_atPV_eta);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nBLHits", &tau_seedCalo_wideTrk_nBLHits, &b_tau_seedCalo_wideTrk_nBLHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nPixHits", &tau_seedCalo_wideTrk_nPixHits, &b_tau_seedCalo_wideTrk_nPixHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nSCTHits", &tau_seedCalo_wideTrk_nSCTHits, &b_tau_seedCalo_wideTrk_nSCTHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nTRTHits", &tau_seedCalo_wideTrk_nTRTHits, &b_tau_seedCalo_wideTrk_nTRTHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nPixHoles", &tau_seedCalo_wideTrk_nPixHoles, &b_tau_seedCalo_wideTrk_nPixHoles);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nSCTHoles", &tau_seedCalo_wideTrk_nSCTHoles, &b_tau_seedCalo_wideTrk_nSCTHoles);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nBLSharedHits", &tau_seedCalo_wideTrk_nBLSharedHits, &b_tau_seedCalo_wideTrk_nBLSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nPixSharedHits", &tau_seedCalo_wideTrk_nPixSharedHits, &b_tau_seedCalo_wideTrk_nPixSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nSCTSharedHits", &tau_seedCalo_wideTrk_nSCTSharedHits, &b_tau_seedCalo_wideTrk_nSCTSharedHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nTRTHighTHits", &tau_seedCalo_wideTrk_nTRTHighTHits, &b_tau_seedCalo_wideTrk_nTRTHighTHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nTRTOutliers", &tau_seedCalo_wideTrk_nTRTOutliers, &b_tau_seedCalo_wideTrk_nTRTOutliers);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nTRTHighTOutliers", &tau_seedCalo_wideTrk_nTRTHighTOutliers, &b_tau_seedCalo_wideTrk_nTRTHighTOutliers);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_nHits", &tau_seedCalo_wideTrk_nHits, &b_tau_seedCalo_wideTrk_nHits);
   fChain->SetBranchAddress("tau_seedCalo_wideTrk_pixeldEdx", &tau_seedCalo_wideTrk_pixeldEdx, &b_tau_seedCalo_wideTrk_pixeldEdx);
   fChain->SetBranchAddress("tau_otherTrk_n", &tau_otherTrk_n, &b_tau_otherTrk_n);
   fChain->SetBranchAddress("tau_otherTrk_d0", &tau_otherTrk_d0, &b_tau_otherTrk_d0);
   fChain->SetBranchAddress("tau_otherTrk_z0", &tau_otherTrk_z0, &b_tau_otherTrk_z0);
   fChain->SetBranchAddress("tau_otherTrk_phi", &tau_otherTrk_phi, &b_tau_otherTrk_phi);
   fChain->SetBranchAddress("tau_otherTrk_theta", &tau_otherTrk_theta, &b_tau_otherTrk_theta);
   fChain->SetBranchAddress("tau_otherTrk_qoverp", &tau_otherTrk_qoverp, &b_tau_otherTrk_qoverp);
   fChain->SetBranchAddress("tau_otherTrk_pt", &tau_otherTrk_pt, &b_tau_otherTrk_pt);
   fChain->SetBranchAddress("tau_otherTrk_eta", &tau_otherTrk_eta, &b_tau_otherTrk_eta);
   fChain->SetBranchAddress("tau_otherTrk_atPV_d0", &tau_otherTrk_atPV_d0, &b_tau_otherTrk_atPV_d0);
   fChain->SetBranchAddress("tau_otherTrk_atPV_z0", &tau_otherTrk_atPV_z0, &b_tau_otherTrk_atPV_z0);
   fChain->SetBranchAddress("tau_otherTrk_atPV_phi", &tau_otherTrk_atPV_phi, &b_tau_otherTrk_atPV_phi);
   fChain->SetBranchAddress("tau_otherTrk_atPV_theta", &tau_otherTrk_atPV_theta, &b_tau_otherTrk_atPV_theta);
   fChain->SetBranchAddress("tau_otherTrk_atPV_qoverp", &tau_otherTrk_atPV_qoverp, &b_tau_otherTrk_atPV_qoverp);
   fChain->SetBranchAddress("tau_otherTrk_atPV_pt", &tau_otherTrk_atPV_pt, &b_tau_otherTrk_atPV_pt);
   fChain->SetBranchAddress("tau_otherTrk_atPV_eta", &tau_otherTrk_atPV_eta, &b_tau_otherTrk_atPV_eta);
   fChain->SetBranchAddress("tau_otherTrk_nBLHits", &tau_otherTrk_nBLHits, &b_tau_otherTrk_nBLHits);
   fChain->SetBranchAddress("tau_otherTrk_nPixHits", &tau_otherTrk_nPixHits, &b_tau_otherTrk_nPixHits);
   fChain->SetBranchAddress("tau_otherTrk_nSCTHits", &tau_otherTrk_nSCTHits, &b_tau_otherTrk_nSCTHits);
   fChain->SetBranchAddress("tau_otherTrk_nTRTHits", &tau_otherTrk_nTRTHits, &b_tau_otherTrk_nTRTHits);
   fChain->SetBranchAddress("tau_otherTrk_nPixHoles", &tau_otherTrk_nPixHoles, &b_tau_otherTrk_nPixHoles);
   fChain->SetBranchAddress("tau_otherTrk_nSCTHoles", &tau_otherTrk_nSCTHoles, &b_tau_otherTrk_nSCTHoles);
   fChain->SetBranchAddress("tau_otherTrk_nBLSharedHits", &tau_otherTrk_nBLSharedHits, &b_tau_otherTrk_nBLSharedHits);
   fChain->SetBranchAddress("tau_otherTrk_nPixSharedHits", &tau_otherTrk_nPixSharedHits, &b_tau_otherTrk_nPixSharedHits);
   fChain->SetBranchAddress("tau_otherTrk_nSCTSharedHits", &tau_otherTrk_nSCTSharedHits, &b_tau_otherTrk_nSCTSharedHits);
   fChain->SetBranchAddress("tau_otherTrk_nTRTHighTHits", &tau_otherTrk_nTRTHighTHits, &b_tau_otherTrk_nTRTHighTHits);
   fChain->SetBranchAddress("tau_otherTrk_nTRTOutliers", &tau_otherTrk_nTRTOutliers, &b_tau_otherTrk_nTRTOutliers);
   fChain->SetBranchAddress("tau_otherTrk_nTRTHighTOutliers", &tau_otherTrk_nTRTHighTOutliers, &b_tau_otherTrk_nTRTHighTOutliers);
   fChain->SetBranchAddress("tau_otherTrk_nHits", &tau_otherTrk_nHits, &b_tau_otherTrk_nHits);
   fChain->SetBranchAddress("tau_otherTrk_pixeldEdx", &tau_otherTrk_pixeldEdx, &b_tau_otherTrk_pixeldEdx);
   fChain->SetBranchAddress("tau_EF_dr", &tau_EF_dr, &b_tau_EF_dr);
   fChain->SetBranchAddress("tau_EF_E", &tau_EF_E, &b_tau_EF_E);
   fChain->SetBranchAddress("tau_EF_Et", &tau_EF_Et, &b_tau_EF_Et);
   fChain->SetBranchAddress("tau_EF_pt", &tau_EF_pt, &b_tau_EF_pt);
   fChain->SetBranchAddress("tau_EF_eta", &tau_EF_eta, &b_tau_EF_eta);
   fChain->SetBranchAddress("tau_EF_phi", &tau_EF_phi, &b_tau_EF_phi);
   fChain->SetBranchAddress("tau_EF_matched", &tau_EF_matched, &b_tau_EF_matched);
   fChain->SetBranchAddress("tau_L2_dr", &tau_L2_dr, &b_tau_L2_dr);
   fChain->SetBranchAddress("tau_L2_E", &tau_L2_E, &b_tau_L2_E);
   fChain->SetBranchAddress("tau_L2_Et", &tau_L2_Et, &b_tau_L2_Et);
   fChain->SetBranchAddress("tau_L2_pt", &tau_L2_pt, &b_tau_L2_pt);
   fChain->SetBranchAddress("tau_L2_eta", &tau_L2_eta, &b_tau_L2_eta);
   fChain->SetBranchAddress("tau_L2_phi", &tau_L2_phi, &b_tau_L2_phi);
   fChain->SetBranchAddress("tau_L2_matched", &tau_L2_matched, &b_tau_L2_matched);
   fChain->SetBranchAddress("tau_L1_dr", &tau_L1_dr, &b_tau_L1_dr);
   fChain->SetBranchAddress("tau_L1_Et", &tau_L1_Et, &b_tau_L1_Et);
   fChain->SetBranchAddress("tau_L1_pt", &tau_L1_pt, &b_tau_L1_pt);
   fChain->SetBranchAddress("tau_L1_eta", &tau_L1_eta, &b_tau_L1_eta);
   fChain->SetBranchAddress("tau_L1_phi", &tau_L1_phi, &b_tau_L1_phi);
   fChain->SetBranchAddress("tau_L1_matched", &tau_L1_matched, &b_tau_L1_matched);
   fChain->SetBranchAddress("tau_elAssoc_index", &tau_elAssoc_index, &b_tau_elAssoc_index);
   fChain->SetBranchAddress("tau_jetAssoc_index", &tau_jetAssoc_index, &b_tau_jetAssoc_index);
   fChain->SetBranchAddress("tau_trueTauAssoc_dr", &tau_trueTauAssoc_dr, &b_tau_trueTauAssoc_dr);
   fChain->SetBranchAddress("tau_trueTauAssoc_index", &tau_trueTauAssoc_index, &b_tau_trueTauAssoc_index);
   fChain->SetBranchAddress("tau_trueTauAssoc_matched", &tau_trueTauAssoc_matched, &b_tau_trueTauAssoc_matched);
   fChain->SetBranchAddress("tau_truthAssoc_index", &tau_truthAssoc_index, &b_tau_truthAssoc_index);
   fChain->SetBranchAddress("EF_2e10_loose", &EF_2e10_loose, &b_EF_2e10_loose);
   fChain->SetBranchAddress("EF_2e10_medium", &EF_2e10_medium, &b_EF_2e10_medium);
   fChain->SetBranchAddress("EF_2e15_loose", &EF_2e15_loose, &b_EF_2e15_loose);
   fChain->SetBranchAddress("EF_2e3_loose", &EF_2e3_loose, &b_EF_2e3_loose);
   fChain->SetBranchAddress("EF_2e3_loose_SiTrk", &EF_2e3_loose_SiTrk, &b_EF_2e3_loose_SiTrk);
   fChain->SetBranchAddress("EF_2e3_loose_TRT", &EF_2e3_loose_TRT, &b_EF_2e3_loose_TRT);
   fChain->SetBranchAddress("EF_2e3_medium", &EF_2e3_medium, &b_EF_2e3_medium);
   fChain->SetBranchAddress("EF_2e3_medium_SiTrk", &EF_2e3_medium_SiTrk, &b_EF_2e3_medium_SiTrk);
   fChain->SetBranchAddress("EF_2e3_medium_TRT", &EF_2e3_medium_TRT, &b_EF_2e3_medium_TRT);
   fChain->SetBranchAddress("EF_2e3_tight", &EF_2e3_tight, &b_EF_2e3_tight);
   fChain->SetBranchAddress("EF_2e5_medium", &EF_2e5_medium, &b_EF_2e5_medium);
   fChain->SetBranchAddress("EF_2e5_medium_SiTrk", &EF_2e5_medium_SiTrk, &b_EF_2e5_medium_SiTrk);
   fChain->SetBranchAddress("EF_2e5_medium_TRT", &EF_2e5_medium_TRT, &b_EF_2e5_medium_TRT);
   fChain->SetBranchAddress("EF_2e5_tight", &EF_2e5_tight, &b_EF_2e5_tight);
   fChain->SetBranchAddress("EF_2j35_jetNoEF_xe20_noMu", &EF_2j35_jetNoEF_xe20_noMu, &b_EF_2j35_jetNoEF_xe20_noMu);
   fChain->SetBranchAddress("EF_2j35_jetNoEF_xe30_noMu", &EF_2j35_jetNoEF_xe30_noMu, &b_EF_2j35_jetNoEF_xe30_noMu);
   fChain->SetBranchAddress("EF_2j35_jetNoEF_xe40_noMu", &EF_2j35_jetNoEF_xe40_noMu, &b_EF_2j35_jetNoEF_xe40_noMu);
   fChain->SetBranchAddress("EF_2j35_xe20_noMu", &EF_2j35_xe20_noMu, &b_EF_2j35_xe20_noMu);
   fChain->SetBranchAddress("EF_2j35_xe30_noMu", &EF_2j35_xe30_noMu, &b_EF_2j35_xe30_noMu);
   fChain->SetBranchAddress("EF_2j35_xe40_noMu", &EF_2j35_xe40_noMu, &b_EF_2j35_xe40_noMu);
   fChain->SetBranchAddress("EF_2mu0_NoAlg", &EF_2mu0_NoAlg, &b_EF_2mu0_NoAlg);
   fChain->SetBranchAddress("EF_2mu10", &EF_2mu10, &b_EF_2mu10);
   fChain->SetBranchAddress("EF_2mu10_NoAlg", &EF_2mu10_NoAlg, &b_EF_2mu10_NoAlg);
   fChain->SetBranchAddress("EF_2mu4", &EF_2mu4, &b_EF_2mu4);
   fChain->SetBranchAddress("EF_2mu4_Bmumu", &EF_2mu4_Bmumu, &b_EF_2mu4_Bmumu);
   fChain->SetBranchAddress("EF_2mu4_Bmumux", &EF_2mu4_Bmumux, &b_EF_2mu4_Bmumux);
   fChain->SetBranchAddress("EF_2mu4_DiMu", &EF_2mu4_DiMu, &b_EF_2mu4_DiMu);
   fChain->SetBranchAddress("EF_2mu4_DiMu_SiTrk", &EF_2mu4_DiMu_SiTrk, &b_EF_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noVtx", &EF_2mu4_DiMu_noVtx, &b_EF_2mu4_DiMu_noVtx);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noVtx_noOS", &EF_2mu4_DiMu_noVtx_noOS, &b_EF_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_2mu4_Jpsimumu", &EF_2mu4_Jpsimumu, &b_EF_2mu4_Jpsimumu);
   fChain->SetBranchAddress("EF_2mu4_Jpsimumu_IDTrkNoCut", &EF_2mu4_Jpsimumu_IDTrkNoCut, &b_EF_2mu4_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("EF_2mu4_Upsimumu", &EF_2mu4_Upsimumu, &b_EF_2mu4_Upsimumu);
   fChain->SetBranchAddress("EF_2mu6", &EF_2mu6, &b_EF_2mu6);
   fChain->SetBranchAddress("EF_2mu6_Bmumu", &EF_2mu6_Bmumu, &b_EF_2mu6_Bmumu);
   fChain->SetBranchAddress("EF_2mu6_Bmumux", &EF_2mu6_Bmumux, &b_EF_2mu6_Bmumux);
   fChain->SetBranchAddress("EF_2mu6_DiMu", &EF_2mu6_DiMu, &b_EF_2mu6_DiMu);
   fChain->SetBranchAddress("EF_2mu6_Jpsimumu", &EF_2mu6_Jpsimumu, &b_EF_2mu6_Jpsimumu);
   fChain->SetBranchAddress("EF_2mu6_MG", &EF_2mu6_MG, &b_EF_2mu6_MG);
   fChain->SetBranchAddress("EF_2mu6_NoAlg", &EF_2mu6_NoAlg, &b_EF_2mu6_NoAlg);
   fChain->SetBranchAddress("EF_2mu6_Upsimumu", &EF_2mu6_Upsimumu, &b_EF_2mu6_Upsimumu);
   fChain->SetBranchAddress("EF_2mu6_g10_loose", &EF_2mu6_g10_loose, &b_EF_2mu6_g10_loose);
   fChain->SetBranchAddress("EF_2tau12_loose", &EF_2tau12_loose, &b_EF_2tau12_loose);
   fChain->SetBranchAddress("EF_2tau16_loose", &EF_2tau16_loose, &b_EF_2tau16_loose);
   fChain->SetBranchAddress("EF_2tau20_loose", &EF_2tau20_loose, &b_EF_2tau20_loose);
   fChain->SetBranchAddress("EF_2tau29_loose", &EF_2tau29_loose, &b_EF_2tau29_loose);
   fChain->SetBranchAddress("EF_2tau29_loose1", &EF_2tau29_loose1, &b_EF_2tau29_loose1);
   fChain->SetBranchAddress("EF_2tau38_loose", &EF_2tau38_loose, &b_EF_2tau38_loose);
   fChain->SetBranchAddress("EF_e10_NoCut", &EF_e10_NoCut, &b_EF_e10_NoCut);
   fChain->SetBranchAddress("EF_e10_loose", &EF_e10_loose, &b_EF_e10_loose);
   fChain->SetBranchAddress("EF_e10_loose_mu10", &EF_e10_loose_mu10, &b_EF_e10_loose_mu10);
   fChain->SetBranchAddress("EF_e10_loose_mu6", &EF_e10_loose_mu6, &b_EF_e10_loose_mu6);
   fChain->SetBranchAddress("EF_e10_medium", &EF_e10_medium, &b_EF_e10_medium);
   fChain->SetBranchAddress("EF_e10_medium_IDTrkNoCut", &EF_e10_medium_IDTrkNoCut, &b_EF_e10_medium_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e10_medium_SiTrk", &EF_e10_medium_SiTrk, &b_EF_e10_medium_SiTrk);
   fChain->SetBranchAddress("EF_e10_medium_TRT", &EF_e10_medium_TRT, &b_EF_e10_medium_TRT);
   fChain->SetBranchAddress("EF_e10_tight", &EF_e10_tight, &b_EF_e10_tight);
   fChain->SetBranchAddress("EF_e10_tight_TRT", &EF_e10_tight_TRT, &b_EF_e10_tight_TRT);
   fChain->SetBranchAddress("EF_e15_loose", &EF_e15_loose, &b_EF_e15_loose);
   fChain->SetBranchAddress("EF_e15_loose_IDTrkNoCut", &EF_e15_loose_IDTrkNoCut, &b_EF_e15_loose_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e15_medium", &EF_e15_medium, &b_EF_e15_medium);
   fChain->SetBranchAddress("EF_e15_medium_SiTrk", &EF_e15_medium_SiTrk, &b_EF_e15_medium_SiTrk);
   fChain->SetBranchAddress("EF_e15_medium_TRT", &EF_e15_medium_TRT, &b_EF_e15_medium_TRT);
   fChain->SetBranchAddress("EF_e15_tight", &EF_e15_tight, &b_EF_e15_tight);
   fChain->SetBranchAddress("EF_e15_tight_TRT", &EF_e15_tight_TRT, &b_EF_e15_tight_TRT);
   fChain->SetBranchAddress("EF_e18_medium", &EF_e18_medium, &b_EF_e18_medium);
   fChain->SetBranchAddress("EF_e20_loose", &EF_e20_loose, &b_EF_e20_loose);
   fChain->SetBranchAddress("EF_e20_loose_IDTrkNoCut", &EF_e20_loose_IDTrkNoCut, &b_EF_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("EF_e20_loose_TRT", &EF_e20_loose_TRT, &b_EF_e20_loose_TRT);
   fChain->SetBranchAddress("EF_e20_loose_passEF", &EF_e20_loose_passEF, &b_EF_e20_loose_passEF);
   fChain->SetBranchAddress("EF_e20_loose_passL2", &EF_e20_loose_passL2, &b_EF_e20_loose_passL2);
   fChain->SetBranchAddress("EF_e20_loose_xe20", &EF_e20_loose_xe20, &b_EF_e20_loose_xe20);
   fChain->SetBranchAddress("EF_e20_loose_xe20_noMu", &EF_e20_loose_xe20_noMu, &b_EF_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_e20_loose_xe30", &EF_e20_loose_xe30, &b_EF_e20_loose_xe30);
   fChain->SetBranchAddress("EF_e20_loose_xe30_noMu", &EF_e20_loose_xe30_noMu, &b_EF_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_e20_medium", &EF_e20_medium, &b_EF_e20_medium);
   fChain->SetBranchAddress("EF_e25_loose", &EF_e25_loose, &b_EF_e25_loose);
   fChain->SetBranchAddress("EF_e25_medium", &EF_e25_medium, &b_EF_e25_medium);
   fChain->SetBranchAddress("EF_e30_loose", &EF_e30_loose, &b_EF_e30_loose);
   fChain->SetBranchAddress("EF_e3_loose", &EF_e3_loose, &b_EF_e3_loose);
   fChain->SetBranchAddress("EF_e3_loose_SiTrk", &EF_e3_loose_SiTrk, &b_EF_e3_loose_SiTrk);
   fChain->SetBranchAddress("EF_e3_loose_TRT", &EF_e3_loose_TRT, &b_EF_e3_loose_TRT);
   fChain->SetBranchAddress("EF_e3_medium", &EF_e3_medium, &b_EF_e3_medium);
   fChain->SetBranchAddress("EF_e3_medium_SiTrk", &EF_e3_medium_SiTrk, &b_EF_e3_medium_SiTrk);
   fChain->SetBranchAddress("EF_e3_medium_TRT", &EF_e3_medium_TRT, &b_EF_e3_medium_TRT);
   fChain->SetBranchAddress("EF_e5_NoCut_L2SW", &EF_e5_NoCut_L2SW, &b_EF_e5_NoCut_L2SW);
   fChain->SetBranchAddress("EF_e5_NoCut_Ringer", &EF_e5_NoCut_Ringer, &b_EF_e5_NoCut_Ringer);
   fChain->SetBranchAddress("EF_e5_NoCut_firstempty", &EF_e5_NoCut_firstempty, &b_EF_e5_NoCut_firstempty);
   fChain->SetBranchAddress("EF_e5_loose_mu4", &EF_e5_loose_mu4, &b_EF_e5_loose_mu4);
   fChain->SetBranchAddress("EF_e5_medium", &EF_e5_medium, &b_EF_e5_medium);
   fChain->SetBranchAddress("EF_e5_medium_MV", &EF_e5_medium_MV, &b_EF_e5_medium_MV);
   fChain->SetBranchAddress("EF_e5_medium_SiTrk", &EF_e5_medium_SiTrk, &b_EF_e5_medium_SiTrk);
   fChain->SetBranchAddress("EF_e5_medium_TRT", &EF_e5_medium_TRT, &b_EF_e5_medium_TRT);
   fChain->SetBranchAddress("EF_e5_medium_mu4", &EF_e5_medium_mu4, &b_EF_e5_medium_mu4);
   fChain->SetBranchAddress("EF_e5_tight", &EF_e5_tight, &b_EF_e5_tight);
   fChain->SetBranchAddress("EF_e5_tight_SiTrk", &EF_e5_tight_SiTrk, &b_EF_e5_tight_SiTrk);
   fChain->SetBranchAddress("EF_e5_tight_TRT", &EF_e5_tight_TRT, &b_EF_e5_tight_TRT);
   fChain->SetBranchAddress("EF_e5_tight_e5_NoCut", &EF_e5_tight_e5_NoCut, &b_EF_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("EF_em105_passHLT", &EF_em105_passHLT, &b_EF_em105_passHLT);
   fChain->SetBranchAddress("EF_g10_loose", &EF_g10_loose, &b_EF_g10_loose);
   fChain->SetBranchAddress("EF_g10_loose_larcalib", &EF_g10_loose_larcalib, &b_EF_g10_loose_larcalib);
   fChain->SetBranchAddress("EF_g11_etcut", &EF_g11_etcut, &b_EF_g11_etcut);
   fChain->SetBranchAddress("EF_g15_loose", &EF_g15_loose, &b_EF_g15_loose);
   fChain->SetBranchAddress("EF_g17_etcut", &EF_g17_etcut, &b_EF_g17_etcut);
   fChain->SetBranchAddress("EF_g17_etcut_EFxe20_noMu", &EF_g17_etcut_EFxe20_noMu, &b_EF_g17_etcut_EFxe20_noMu);
   fChain->SetBranchAddress("EF_g17_etcut_EFxe30_noMu", &EF_g17_etcut_EFxe30_noMu, &b_EF_g17_etcut_EFxe30_noMu);
   fChain->SetBranchAddress("EF_g20_loose", &EF_g20_loose, &b_EF_g20_loose);
   fChain->SetBranchAddress("EF_g20_loose_cnv", &EF_g20_loose_cnv, &b_EF_g20_loose_cnv);
   fChain->SetBranchAddress("EF_g20_loose_larcalib", &EF_g20_loose_larcalib, &b_EF_g20_loose_larcalib);
   fChain->SetBranchAddress("EF_g20_loose_xe20_noMu", &EF_g20_loose_xe20_noMu, &b_EF_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_g20_loose_xe30_noMu", &EF_g20_loose_xe30_noMu, &b_EF_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_g20_tight", &EF_g20_tight, &b_EF_g20_tight);
   fChain->SetBranchAddress("EF_g25_loose_xe30_noMu", &EF_g25_loose_xe30_noMu, &b_EF_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_g30_loose", &EF_g30_loose, &b_EF_g30_loose);
   fChain->SetBranchAddress("EF_g30_tight", &EF_g30_tight, &b_EF_g30_tight);
   fChain->SetBranchAddress("EF_g3_NoCut_unpaired_iso", &EF_g3_NoCut_unpaired_iso, &b_EF_g3_NoCut_unpaired_iso);
   fChain->SetBranchAddress("EF_g3_NoCut_unpaired_noniso", &EF_g3_NoCut_unpaired_noniso, &b_EF_g3_NoCut_unpaired_noniso);
   fChain->SetBranchAddress("EF_g40_loose", &EF_g40_loose, &b_EF_g40_loose);
   fChain->SetBranchAddress("EF_g40_loose_larcalib", &EF_g40_loose_larcalib, &b_EF_g40_loose_larcalib);
   fChain->SetBranchAddress("EF_g40_tight", &EF_g40_tight, &b_EF_g40_tight);
   fChain->SetBranchAddress("EF_g50_loose", &EF_g50_loose, &b_EF_g50_loose);
   fChain->SetBranchAddress("EF_g50_loose_larcalib", &EF_g50_loose_larcalib, &b_EF_g50_loose_larcalib);
   fChain->SetBranchAddress("EF_g5_NoCut_cosmic", &EF_g5_NoCut_cosmic, &b_EF_g5_NoCut_cosmic);
   fChain->SetBranchAddress("EF_g5_loose", &EF_g5_loose, &b_EF_g5_loose);
   fChain->SetBranchAddress("EF_g5_loose_cnv", &EF_g5_loose_cnv, &b_EF_g5_loose_cnv);
   fChain->SetBranchAddress("EF_g5_loose_larcalib", &EF_g5_loose_larcalib, &b_EF_g5_loose_larcalib);
   fChain->SetBranchAddress("EF_g7_loose", &EF_g7_loose, &b_EF_g7_loose);
   fChain->SetBranchAddress("EF_j115_jetNoCut_larcalib", &EF_j115_jetNoCut_larcalib, &b_EF_j115_jetNoCut_larcalib);
   fChain->SetBranchAddress("EF_j20", &EF_j20, &b_EF_j20);
   fChain->SetBranchAddress("EF_j20_jetNoEF", &EF_j20_jetNoEF, &b_EF_j20_jetNoEF);
   fChain->SetBranchAddress("EF_j20_jetNoEF_larcalib", &EF_j20_jetNoEF_larcalib, &b_EF_j20_jetNoEF_larcalib);
   fChain->SetBranchAddress("EF_j20a4", &EF_j20a4, &b_EF_j20a4);
   fChain->SetBranchAddress("EF_j20a4fs", &EF_j20a4fs, &b_EF_j20a4fs);
   fChain->SetBranchAddress("EF_j20a6", &EF_j20a6, &b_EF_j20a6);
   fChain->SetBranchAddress("EF_j20a6fs", &EF_j20a6fs, &b_EF_j20a6fs);
   fChain->SetBranchAddress("EF_j30", &EF_j30, &b_EF_j30);
   fChain->SetBranchAddress("EF_j30_cosmic", &EF_j30_cosmic, &b_EF_j30_cosmic);
   fChain->SetBranchAddress("EF_j30_firstempty", &EF_j30_firstempty, &b_EF_j30_firstempty);
   fChain->SetBranchAddress("EF_j30_fj30_jetNoEF", &EF_j30_fj30_jetNoEF, &b_EF_j30_fj30_jetNoEF);
   fChain->SetBranchAddress("EF_j30_jetNoCut_cosmic", &EF_j30_jetNoCut_cosmic, &b_EF_j30_jetNoCut_cosmic);
   fChain->SetBranchAddress("EF_j30_jetNoCut_firstempty", &EF_j30_jetNoCut_firstempty, &b_EF_j30_jetNoCut_firstempty);
   fChain->SetBranchAddress("EF_j30_jetNoCut_unpaired", &EF_j30_jetNoCut_unpaired, &b_EF_j30_jetNoCut_unpaired);
   fChain->SetBranchAddress("EF_j30_jetNoEF", &EF_j30_jetNoEF, &b_EF_j30_jetNoEF);
   fChain->SetBranchAddress("EF_j30_jetNoEF_cosmic", &EF_j30_jetNoEF_cosmic, &b_EF_j30_jetNoEF_cosmic);
   fChain->SetBranchAddress("EF_j30_jetNoEF_firstempty", &EF_j30_jetNoEF_firstempty, &b_EF_j30_jetNoEF_firstempty);
   fChain->SetBranchAddress("EF_j30_jetNoEF_unpaired", &EF_j30_jetNoEF_unpaired, &b_EF_j30_jetNoEF_unpaired);
   fChain->SetBranchAddress("EF_j30_unpaired", &EF_j30_unpaired, &b_EF_j30_unpaired);
   fChain->SetBranchAddress("EF_j35", &EF_j35, &b_EF_j35);
   fChain->SetBranchAddress("EF_j35_L1TAU_HV", &EF_j35_L1TAU_HV, &b_EF_j35_L1TAU_HV);
   fChain->SetBranchAddress("EF_j35_L1TAU_HV_jetNoEF", &EF_j35_L1TAU_HV_jetNoEF, &b_EF_j35_L1TAU_HV_jetNoEF);
   fChain->SetBranchAddress("EF_j35_jetNoCut_xe30_e15_medium", &EF_j35_jetNoCut_xe30_e15_medium, &b_EF_j35_jetNoCut_xe30_e15_medium);
   fChain->SetBranchAddress("EF_j35_jetNoCut_xe30_mu15", &EF_j35_jetNoCut_xe30_mu15, &b_EF_j35_jetNoCut_xe30_mu15);
   fChain->SetBranchAddress("EF_j35_jetNoEF", &EF_j35_jetNoEF, &b_EF_j35_jetNoEF);
   fChain->SetBranchAddress("EF_j35_xe30_e15_medium", &EF_j35_xe30_e15_medium, &b_EF_j35_xe30_e15_medium);
   fChain->SetBranchAddress("EF_j35_xe30_mu15", &EF_j35_xe30_mu15, &b_EF_j35_xe30_mu15);
   fChain->SetBranchAddress("EF_j50", &EF_j50, &b_EF_j50);
   fChain->SetBranchAddress("EF_j50_cosmic", &EF_j50_cosmic, &b_EF_j50_cosmic);
   fChain->SetBranchAddress("EF_j50_firstempty", &EF_j50_firstempty, &b_EF_j50_firstempty);
   fChain->SetBranchAddress("EF_j50_jetNoCut_cosmic", &EF_j50_jetNoCut_cosmic, &b_EF_j50_jetNoCut_cosmic);
   fChain->SetBranchAddress("EF_j50_jetNoCut_firstempty", &EF_j50_jetNoCut_firstempty, &b_EF_j50_jetNoCut_firstempty);
   fChain->SetBranchAddress("EF_j50_jetNoCut_unpaired", &EF_j50_jetNoCut_unpaired, &b_EF_j50_jetNoCut_unpaired);
   fChain->SetBranchAddress("EF_j50_jetNoEF", &EF_j50_jetNoEF, &b_EF_j50_jetNoEF);
   fChain->SetBranchAddress("EF_j50_jetNoEF_cosmic", &EF_j50_jetNoEF_cosmic, &b_EF_j50_jetNoEF_cosmic);
   fChain->SetBranchAddress("EF_j50_jetNoEF_firstempty", &EF_j50_jetNoEF_firstempty, &b_EF_j50_jetNoEF_firstempty);
   fChain->SetBranchAddress("EF_j50_jetNoEF_larcalib", &EF_j50_jetNoEF_larcalib, &b_EF_j50_jetNoEF_larcalib);
   fChain->SetBranchAddress("EF_j50_jetNoEF_unpaired", &EF_j50_jetNoEF_unpaired, &b_EF_j50_jetNoEF_unpaired);
   fChain->SetBranchAddress("EF_j50_jetNoEF_xe20_noMu", &EF_j50_jetNoEF_xe20_noMu, &b_EF_j50_jetNoEF_xe20_noMu);
   fChain->SetBranchAddress("EF_j50_jetNoEF_xe30_noMu", &EF_j50_jetNoEF_xe30_noMu, &b_EF_j50_jetNoEF_xe30_noMu);
   fChain->SetBranchAddress("EF_j50_jetNoEF_xe40_noMu", &EF_j50_jetNoEF_xe40_noMu, &b_EF_j50_jetNoEF_xe40_noMu);
   fChain->SetBranchAddress("EF_j50_unpaired", &EF_j50_unpaired, &b_EF_j50_unpaired);
   fChain->SetBranchAddress("EF_j50_xe20_noMu", &EF_j50_xe20_noMu, &b_EF_j50_xe20_noMu);
   fChain->SetBranchAddress("EF_j50_xe30_noMu", &EF_j50_xe30_noMu, &b_EF_j50_xe30_noMu);
   fChain->SetBranchAddress("EF_j50_xe40_noMu", &EF_j50_xe40_noMu, &b_EF_j50_xe40_noMu);
   fChain->SetBranchAddress("EF_j5_empty_NoAlg", &EF_j5_empty_NoAlg, &b_EF_j5_empty_NoAlg);
   fChain->SetBranchAddress("EF_j5_unpaired_iso_NoAlg", &EF_j5_unpaired_iso_NoAlg, &b_EF_j5_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("EF_j5_unpaired_noniso_NoAlg", &EF_j5_unpaired_noniso_NoAlg, &b_EF_j5_unpaired_noniso_NoAlg);
   fChain->SetBranchAddress("EF_j75", &EF_j75, &b_EF_j75);
   fChain->SetBranchAddress("EF_j75_jetNoEF", &EF_j75_jetNoEF, &b_EF_j75_jetNoEF);
   fChain->SetBranchAddress("EF_j75_jetNoEF_EFxe20_noMu", &EF_j75_jetNoEF_EFxe20_noMu, &b_EF_j75_jetNoEF_EFxe20_noMu);
   fChain->SetBranchAddress("EF_j75_jetNoEF_EFxe25_noMu", &EF_j75_jetNoEF_EFxe25_noMu, &b_EF_j75_jetNoEF_EFxe25_noMu);
   fChain->SetBranchAddress("EF_j75_jetNoEF_EFxe30_noMu", &EF_j75_jetNoEF_EFxe30_noMu, &b_EF_j75_jetNoEF_EFxe30_noMu);
   fChain->SetBranchAddress("EF_j75_jetNoEF_EFxe35_noMu", &EF_j75_jetNoEF_EFxe35_noMu, &b_EF_j75_jetNoEF_EFxe35_noMu);
   fChain->SetBranchAddress("EF_j75_jetNoEF_EFxe40_noMu", &EF_j75_jetNoEF_EFxe40_noMu, &b_EF_j75_jetNoEF_EFxe40_noMu);
   fChain->SetBranchAddress("EF_j95", &EF_j95, &b_EF_j95);
   fChain->SetBranchAddress("EF_j95_jetNoEF", &EF_j95_jetNoEF, &b_EF_j95_jetNoEF);
   fChain->SetBranchAddress("EF_j95_jetNoEF_larcalib", &EF_j95_jetNoEF_larcalib, &b_EF_j95_jetNoEF_larcalib);
   fChain->SetBranchAddress("EF_je135_NoEF", &EF_je135_NoEF, &b_EF_je135_NoEF);
   fChain->SetBranchAddress("EF_je195_NoEF", &EF_je195_NoEF, &b_EF_je195_NoEF);
   fChain->SetBranchAddress("EF_je255_NoEF", &EF_je255_NoEF, &b_EF_je255_NoEF);
   fChain->SetBranchAddress("EF_je300_NoEF", &EF_je300_NoEF, &b_EF_je300_NoEF);
   fChain->SetBranchAddress("EF_je350_NoEF", &EF_je350_NoEF, &b_EF_je350_NoEF);
   fChain->SetBranchAddress("EF_mu0_NoAlg", &EF_mu0_NoAlg, &b_EF_mu0_NoAlg);
   fChain->SetBranchAddress("EF_mu0_comm_NoAlg", &EF_mu0_comm_NoAlg, &b_EF_mu0_comm_NoAlg);
   fChain->SetBranchAddress("EF_mu0_comm_empty_NoAlg", &EF_mu0_comm_empty_NoAlg, &b_EF_mu0_comm_empty_NoAlg);
   fChain->SetBranchAddress("EF_mu0_comm_firstempty_NoAlg", &EF_mu0_comm_firstempty_NoAlg, &b_EF_mu0_comm_firstempty_NoAlg);
   fChain->SetBranchAddress("EF_mu0_comm_unpaired_iso_NoAlg", &EF_mu0_comm_unpaired_iso_NoAlg, &b_EF_mu0_comm_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("EF_mu0_comm_unpaired_noniso_NoAlg", &EF_mu0_comm_unpaired_noniso_NoAlg, &b_EF_mu0_comm_unpaired_noniso_NoAlg);
   fChain->SetBranchAddress("EF_mu0_empty_NoAlg", &EF_mu0_empty_NoAlg, &b_EF_mu0_empty_NoAlg);
   fChain->SetBranchAddress("EF_mu0_firstempty_NoAlg", &EF_mu0_firstempty_NoAlg, &b_EF_mu0_firstempty_NoAlg);
   fChain->SetBranchAddress("EF_mu0_missingRoi", &EF_mu0_missingRoi, &b_EF_mu0_missingRoi);
   fChain->SetBranchAddress("EF_mu0_outOfTime1", &EF_mu0_outOfTime1, &b_EF_mu0_outOfTime1);
   fChain->SetBranchAddress("EF_mu0_outOfTime2", &EF_mu0_outOfTime2, &b_EF_mu0_outOfTime2);
   fChain->SetBranchAddress("EF_mu0_rpcOnly", &EF_mu0_rpcOnly, &b_EF_mu0_rpcOnly);
   fChain->SetBranchAddress("EF_mu0_unpaired_iso_NoAlg", &EF_mu0_unpaired_iso_NoAlg, &b_EF_mu0_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("EF_mu0_unpaired_noniso_NoAlg", &EF_mu0_unpaired_noniso_NoAlg, &b_EF_mu0_unpaired_noniso_NoAlg);
   fChain->SetBranchAddress("EF_mu10", &EF_mu10, &b_EF_mu10);
   fChain->SetBranchAddress("EF_mu10_Ecut12", &EF_mu10_Ecut12, &b_EF_mu10_Ecut12);
   fChain->SetBranchAddress("EF_mu10_Ecut123", &EF_mu10_Ecut123, &b_EF_mu10_Ecut123);
   fChain->SetBranchAddress("EF_mu10_Ecut13", &EF_mu10_Ecut13, &b_EF_mu10_Ecut13);
   fChain->SetBranchAddress("EF_mu10_IDTrkNoCut", &EF_mu10_IDTrkNoCut, &b_EF_mu10_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu10_MG", &EF_mu10_MG, &b_EF_mu10_MG);
   fChain->SetBranchAddress("EF_mu10_MSonly", &EF_mu10_MSonly, &b_EF_mu10_MSonly);
   fChain->SetBranchAddress("EF_mu10_MSonly_Ecut12", &EF_mu10_MSonly_Ecut12, &b_EF_mu10_MSonly_Ecut12);
   fChain->SetBranchAddress("EF_mu10_MSonly_Ecut123", &EF_mu10_MSonly_Ecut123, &b_EF_mu10_MSonly_Ecut123);
   fChain->SetBranchAddress("EF_mu10_MSonly_Ecut13", &EF_mu10_MSonly_Ecut13, &b_EF_mu10_MSonly_Ecut13);
   fChain->SetBranchAddress("EF_mu10_MSonly_tight", &EF_mu10_MSonly_tight, &b_EF_mu10_MSonly_tight);
   fChain->SetBranchAddress("EF_mu10_NoAlg", &EF_mu10_NoAlg, &b_EF_mu10_NoAlg);
   fChain->SetBranchAddress("EF_mu10_SiTrk", &EF_mu10_SiTrk, &b_EF_mu10_SiTrk);
   fChain->SetBranchAddress("EF_mu10_j30", &EF_mu10_j30, &b_EF_mu10_j30);
   fChain->SetBranchAddress("EF_mu10_tight", &EF_mu10_tight, &b_EF_mu10_tight);
   fChain->SetBranchAddress("EF_mu10i_loose", &EF_mu10i_loose, &b_EF_mu10i_loose);
   fChain->SetBranchAddress("EF_mu13", &EF_mu13, &b_EF_mu13);
   fChain->SetBranchAddress("EF_mu13_MG", &EF_mu13_MG, &b_EF_mu13_MG);
   fChain->SetBranchAddress("EF_mu13_MG_tight", &EF_mu13_MG_tight, &b_EF_mu13_MG_tight);
   fChain->SetBranchAddress("EF_mu13_tight", &EF_mu13_tight, &b_EF_mu13_tight);
   fChain->SetBranchAddress("EF_mu15", &EF_mu15, &b_EF_mu15);
   fChain->SetBranchAddress("EF_mu15_MG", &EF_mu15_MG, &b_EF_mu15_MG);
   fChain->SetBranchAddress("EF_mu15_NoAlg", &EF_mu15_NoAlg, &b_EF_mu15_NoAlg);
   fChain->SetBranchAddress("EF_mu20", &EF_mu20, &b_EF_mu20);
   fChain->SetBranchAddress("EF_mu20_MSonly", &EF_mu20_MSonly, &b_EF_mu20_MSonly);
   fChain->SetBranchAddress("EF_mu20_NoAlg", &EF_mu20_NoAlg, &b_EF_mu20_NoAlg);
   fChain->SetBranchAddress("EF_mu20_passHLT", &EF_mu20_passHLT, &b_EF_mu20_passHLT);
   fChain->SetBranchAddress("EF_mu20_slow", &EF_mu20_slow, &b_EF_mu20_slow);
   fChain->SetBranchAddress("EF_mu30_MSonly", &EF_mu30_MSonly, &b_EF_mu30_MSonly);
   fChain->SetBranchAddress("EF_mu4", &EF_mu4, &b_EF_mu4);
   fChain->SetBranchAddress("EF_mu40_MSonly", &EF_mu40_MSonly, &b_EF_mu40_MSonly);
   fChain->SetBranchAddress("EF_mu4_Bmumu", &EF_mu4_Bmumu, &b_EF_mu4_Bmumu);
   fChain->SetBranchAddress("EF_mu4_BmumuX", &EF_mu4_BmumuX, &b_EF_mu4_BmumuX);
   fChain->SetBranchAddress("EF_mu4_DiMu", &EF_mu4_DiMu, &b_EF_mu4_DiMu);
   fChain->SetBranchAddress("EF_mu4_DiMu_FS", &EF_mu4_DiMu_FS, &b_EF_mu4_DiMu_FS);
   fChain->SetBranchAddress("EF_mu4_DiMu_FS_noOS", &EF_mu4_DiMu_FS_noOS, &b_EF_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("EF_mu4_DiMu_MG", &EF_mu4_DiMu_MG, &b_EF_mu4_DiMu_MG);
   fChain->SetBranchAddress("EF_mu4_DiMu_MG_FS", &EF_mu4_DiMu_MG_FS, &b_EF_mu4_DiMu_MG_FS);
   fChain->SetBranchAddress("EF_mu4_DiMu_SiTrk", &EF_mu4_DiMu_SiTrk, &b_EF_mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("EF_mu4_DiMu_SiTrk_FS", &EF_mu4_DiMu_SiTrk_FS, &b_EF_mu4_DiMu_SiTrk_FS);
   fChain->SetBranchAddress("EF_mu4_DiMu_noOS", &EF_mu4_DiMu_noOS, &b_EF_mu4_DiMu_noOS);
   fChain->SetBranchAddress("EF_mu4_IDTrkNoCut", &EF_mu4_IDTrkNoCut, &b_EF_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu4_Jpsie5e3", &EF_mu4_Jpsie5e3, &b_EF_mu4_Jpsie5e3);
   fChain->SetBranchAddress("EF_mu4_Jpsie5e3_FS", &EF_mu4_Jpsie5e3_FS, &b_EF_mu4_Jpsie5e3_FS);
   fChain->SetBranchAddress("EF_mu4_Jpsie5e3_SiTrk", &EF_mu4_Jpsie5e3_SiTrk, &b_EF_mu4_Jpsie5e3_SiTrk);
   fChain->SetBranchAddress("EF_mu4_Jpsie5e3_SiTrk_FS", &EF_mu4_Jpsie5e3_SiTrk_FS, &b_EF_mu4_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("EF_mu4_Jpsimumu", &EF_mu4_Jpsimumu, &b_EF_mu4_Jpsimumu);
   fChain->SetBranchAddress("EF_mu4_Jpsimumu_FS", &EF_mu4_Jpsimumu_FS, &b_EF_mu4_Jpsimumu_FS);
   fChain->SetBranchAddress("EF_mu4_Jpsimumu_SiTrk_FS", &EF_mu4_Jpsimumu_SiTrk_FS, &b_EF_mu4_Jpsimumu_SiTrk_FS);
   fChain->SetBranchAddress("EF_mu4_L1J10_matched", &EF_mu4_L1J10_matched, &b_EF_mu4_L1J10_matched);
   fChain->SetBranchAddress("EF_mu4_L1J15_matched", &EF_mu4_L1J15_matched, &b_EF_mu4_L1J15_matched);
   fChain->SetBranchAddress("EF_mu4_L1J30_matched", &EF_mu4_L1J30_matched, &b_EF_mu4_L1J30_matched);
   fChain->SetBranchAddress("EF_mu4_L1J55_matched", &EF_mu4_L1J55_matched, &b_EF_mu4_L1J55_matched);
   fChain->SetBranchAddress("EF_mu4_L1J5_matched", &EF_mu4_L1J5_matched, &b_EF_mu4_L1J5_matched);
   fChain->SetBranchAddress("EF_mu4_L2MSonly_EFFS_passL2", &EF_mu4_L2MSonly_EFFS_passL2, &b_EF_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("EF_mu4_MG", &EF_mu4_MG, &b_EF_mu4_MG);
   fChain->SetBranchAddress("EF_mu4_MSonly", &EF_mu4_MSonly, &b_EF_mu4_MSonly);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_passL2", &EF_mu4_MSonly_EFFS_passL2, &b_EF_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("EF_mu4_MSonly_MB2_noL2_EFFS", &EF_mu4_MSonly_MB2_noL2_EFFS, &b_EF_mu4_MSonly_MB2_noL2_EFFS);
   fChain->SetBranchAddress("EF_mu4_MSonly_cosmic", &EF_mu4_MSonly_cosmic, &b_EF_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("EF_mu4_MSonly_outOfTime", &EF_mu4_MSonly_outOfTime, &b_EF_mu4_MSonly_outOfTime);
   fChain->SetBranchAddress("EF_mu4_MV", &EF_mu4_MV, &b_EF_mu4_MV);
   fChain->SetBranchAddress("EF_mu4_SiTrk", &EF_mu4_SiTrk, &b_EF_mu4_SiTrk);
   fChain->SetBranchAddress("EF_mu4_Trk_Jpsi", &EF_mu4_Trk_Jpsi, &b_EF_mu4_Trk_Jpsi);
   fChain->SetBranchAddress("EF_mu4_Trk_Jpsi_FS", &EF_mu4_Trk_Jpsi_FS, &b_EF_mu4_Trk_Jpsi_FS);
   fChain->SetBranchAddress("EF_mu4_Trk_Jpsi_loose", &EF_mu4_Trk_Jpsi_loose, &b_EF_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_mu4_Trk_Upsi_FS", &EF_mu4_Trk_Upsi_FS, &b_EF_mu4_Trk_Upsi_FS);
   fChain->SetBranchAddress("EF_mu4_Trk_Upsi_loose_FS", &EF_mu4_Trk_Upsi_loose_FS, &b_EF_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_mu4_Upsimumu_FS", &EF_mu4_Upsimumu_FS, &b_EF_mu4_Upsimumu_FS);
   fChain->SetBranchAddress("EF_mu4_Upsimumu_SiTrk_FS", &EF_mu4_Upsimumu_SiTrk_FS, &b_EF_mu4_Upsimumu_SiTrk_FS);
   fChain->SetBranchAddress("EF_mu4_comm_MSonly_cosmic", &EF_mu4_comm_MSonly_cosmic, &b_EF_mu4_comm_MSonly_cosmic);
   fChain->SetBranchAddress("EF_mu4_comm_cosmic", &EF_mu4_comm_cosmic, &b_EF_mu4_comm_cosmic);
   fChain->SetBranchAddress("EF_mu4_comm_firstempty", &EF_mu4_comm_firstempty, &b_EF_mu4_comm_firstempty);
   fChain->SetBranchAddress("EF_mu4_comm_unpaired_iso", &EF_mu4_comm_unpaired_iso, &b_EF_mu4_comm_unpaired_iso);
   fChain->SetBranchAddress("EF_mu4_cosmic", &EF_mu4_cosmic, &b_EF_mu4_cosmic);
   fChain->SetBranchAddress("EF_mu4_firstempty", &EF_mu4_firstempty, &b_EF_mu4_firstempty);
   fChain->SetBranchAddress("EF_mu4_j20", &EF_mu4_j20, &b_EF_mu4_j20);
   fChain->SetBranchAddress("EF_mu4_j20_jetNoEF", &EF_mu4_j20_jetNoEF, &b_EF_mu4_j20_jetNoEF);
   fChain->SetBranchAddress("EF_mu4_j30", &EF_mu4_j30, &b_EF_mu4_j30);
   fChain->SetBranchAddress("EF_mu4_j30_jetNoEF", &EF_mu4_j30_jetNoEF, &b_EF_mu4_j30_jetNoEF);
   fChain->SetBranchAddress("EF_mu4_mu6", &EF_mu4_mu6, &b_EF_mu4_mu6);
   fChain->SetBranchAddress("EF_mu4_muCombTag", &EF_mu4_muCombTag, &b_EF_mu4_muCombTag);
   fChain->SetBranchAddress("EF_mu4_tile", &EF_mu4_tile, &b_EF_mu4_tile);
   fChain->SetBranchAddress("EF_mu4_tile_cosmic", &EF_mu4_tile_cosmic, &b_EF_mu4_tile_cosmic);
   fChain->SetBranchAddress("EF_mu4_unpaired_iso", &EF_mu4_unpaired_iso, &b_EF_mu4_unpaired_iso);
   fChain->SetBranchAddress("EF_mu4mu6_Bmumu", &EF_mu4mu6_Bmumu, &b_EF_mu4mu6_Bmumu);
   fChain->SetBranchAddress("EF_mu4mu6_BmumuX", &EF_mu4mu6_BmumuX, &b_EF_mu4mu6_BmumuX);
   fChain->SetBranchAddress("EF_mu4mu6_DiMu", &EF_mu4mu6_DiMu, &b_EF_mu4mu6_DiMu);
   fChain->SetBranchAddress("EF_mu4mu6_Jpsimumu", &EF_mu4mu6_Jpsimumu, &b_EF_mu4mu6_Jpsimumu);
   fChain->SetBranchAddress("EF_mu4mu6_Jpsimumu_IDTrkNoCut", &EF_mu4mu6_Jpsimumu_IDTrkNoCut, &b_EF_mu4mu6_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu4mu6_Upsimumu", &EF_mu4mu6_Upsimumu, &b_EF_mu4mu6_Upsimumu);
   fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
   fChain->SetBranchAddress("EF_mu6_Bmumu", &EF_mu6_Bmumu, &b_EF_mu6_Bmumu);
   fChain->SetBranchAddress("EF_mu6_BmumuX", &EF_mu6_BmumuX, &b_EF_mu6_BmumuX);
   fChain->SetBranchAddress("EF_mu6_DiMu", &EF_mu6_DiMu, &b_EF_mu6_DiMu);
   fChain->SetBranchAddress("EF_mu6_Ecut12", &EF_mu6_Ecut12, &b_EF_mu6_Ecut12);
   fChain->SetBranchAddress("EF_mu6_Ecut123", &EF_mu6_Ecut123, &b_EF_mu6_Ecut123);
   fChain->SetBranchAddress("EF_mu6_Ecut13", &EF_mu6_Ecut13, &b_EF_mu6_Ecut13);
   fChain->SetBranchAddress("EF_mu6_Ecut2", &EF_mu6_Ecut2, &b_EF_mu6_Ecut2);
   fChain->SetBranchAddress("EF_mu6_Ecut3", &EF_mu6_Ecut3, &b_EF_mu6_Ecut3);
   fChain->SetBranchAddress("EF_mu6_IDTrkNoCut", &EF_mu6_IDTrkNoCut, &b_EF_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("EF_mu6_Jpsie5e3", &EF_mu6_Jpsie5e3, &b_EF_mu6_Jpsie5e3);
   fChain->SetBranchAddress("EF_mu6_Jpsie5e3_FS", &EF_mu6_Jpsie5e3_FS, &b_EF_mu6_Jpsie5e3_FS);
   fChain->SetBranchAddress("EF_mu6_Jpsie5e3_SiTrk", &EF_mu6_Jpsie5e3_SiTrk, &b_EF_mu6_Jpsie5e3_SiTrk);
   fChain->SetBranchAddress("EF_mu6_Jpsie5e3_SiTrk_FS", &EF_mu6_Jpsie5e3_SiTrk_FS, &b_EF_mu6_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("EF_mu6_Jpsimumu", &EF_mu6_Jpsimumu, &b_EF_mu6_Jpsimumu);
   fChain->SetBranchAddress("EF_mu6_MG", &EF_mu6_MG, &b_EF_mu6_MG);
   fChain->SetBranchAddress("EF_mu6_MSonly", &EF_mu6_MSonly, &b_EF_mu6_MSonly);
   fChain->SetBranchAddress("EF_mu6_MSonly_Ecut12", &EF_mu6_MSonly_Ecut12, &b_EF_mu6_MSonly_Ecut12);
   fChain->SetBranchAddress("EF_mu6_MSonly_Ecut123", &EF_mu6_MSonly_Ecut123, &b_EF_mu6_MSonly_Ecut123);
   fChain->SetBranchAddress("EF_mu6_MSonly_Ecut13", &EF_mu6_MSonly_Ecut13, &b_EF_mu6_MSonly_Ecut13);
   fChain->SetBranchAddress("EF_mu6_MSonly_Ecut2", &EF_mu6_MSonly_Ecut2, &b_EF_mu6_MSonly_Ecut2);
   fChain->SetBranchAddress("EF_mu6_MSonly_Ecut3", &EF_mu6_MSonly_Ecut3, &b_EF_mu6_MSonly_Ecut3);
   fChain->SetBranchAddress("EF_mu6_MSonly_outOfTime", &EF_mu6_MSonly_outOfTime, &b_EF_mu6_MSonly_outOfTime);
   fChain->SetBranchAddress("EF_mu6_NoAlg", &EF_mu6_NoAlg, &b_EF_mu6_NoAlg);
   fChain->SetBranchAddress("EF_mu6_SiTrk", &EF_mu6_SiTrk, &b_EF_mu6_SiTrk);
   fChain->SetBranchAddress("EF_mu6_Trk_Jpsi", &EF_mu6_Trk_Jpsi, &b_EF_mu6_Trk_Jpsi);
   fChain->SetBranchAddress("EF_mu6_Upsimumu_FS", &EF_mu6_Upsimumu_FS, &b_EF_mu6_Upsimumu_FS);
   fChain->SetBranchAddress("EF_mu6_muCombTag", &EF_mu6_muCombTag, &b_EF_mu6_muCombTag);
   fChain->SetBranchAddress("EF_tau125_loose", &EF_tau125_loose, &b_EF_tau125_loose);
   fChain->SetBranchAddress("EF_tau125_medium", &EF_tau125_medium, &b_EF_tau125_medium);
   fChain->SetBranchAddress("EF_tau12_IDTrkNoCut", &EF_tau12_IDTrkNoCut, &b_EF_tau12_IDTrkNoCut);
   fChain->SetBranchAddress("EF_tau12_loose", &EF_tau12_loose, &b_EF_tau12_loose);
   fChain->SetBranchAddress("EF_tau12_loose_2b15", &EF_tau12_loose_2b15, &b_EF_tau12_loose_2b15);
   fChain->SetBranchAddress("EF_tau12_loose_3j35", &EF_tau12_loose_3j35, &b_EF_tau12_loose_3j35);
   fChain->SetBranchAddress("EF_tau12_loose_3j35_jetNoEF", &EF_tau12_loose_3j35_jetNoEF, &b_EF_tau12_loose_3j35_jetNoEF);
   fChain->SetBranchAddress("EF_tau12_loose_EFxe12_noMu", &EF_tau12_loose_EFxe12_noMu, &b_EF_tau12_loose_EFxe12_noMu);
   fChain->SetBranchAddress("EF_tau12_loose_IdScan_EFxe12_noMu", &EF_tau12_loose_IdScan_EFxe12_noMu, &b_EF_tau12_loose_IdScan_EFxe12_noMu);
   fChain->SetBranchAddress("EF_tau12_loose_IdScan_xe15_noMu", &EF_tau12_loose_IdScan_xe15_noMu, &b_EF_tau12_loose_IdScan_xe15_noMu);
   fChain->SetBranchAddress("EF_tau12_loose_e10_loose", &EF_tau12_loose_e10_loose, &b_EF_tau12_loose_e10_loose);
   fChain->SetBranchAddress("EF_tau12_loose_e10_medium", &EF_tau12_loose_e10_medium, &b_EF_tau12_loose_e10_medium);
   fChain->SetBranchAddress("EF_tau12_loose_e10_tight", &EF_tau12_loose_e10_tight, &b_EF_tau12_loose_e10_tight);
   fChain->SetBranchAddress("EF_tau12_loose_mu10", &EF_tau12_loose_mu10, &b_EF_tau12_loose_mu10);
   fChain->SetBranchAddress("EF_tau12_loose_xe15_noMu", &EF_tau12_loose_xe15_noMu, &b_EF_tau12_loose_xe15_noMu);
   fChain->SetBranchAddress("EF_tau12_loose_xe20_noMu", &EF_tau12_loose_xe20_noMu, &b_EF_tau12_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_tau16_loose", &EF_tau16_loose, &b_EF_tau16_loose);
   fChain->SetBranchAddress("EF_tau16_loose_2b15", &EF_tau16_loose_2b15, &b_EF_tau16_loose_2b15);
   fChain->SetBranchAddress("EF_tau16_loose_3j35", &EF_tau16_loose_3j35, &b_EF_tau16_loose_3j35);
   fChain->SetBranchAddress("EF_tau16_loose_3j35_jetNoEF", &EF_tau16_loose_3j35_jetNoEF, &b_EF_tau16_loose_3j35_jetNoEF);
   fChain->SetBranchAddress("EF_tau16_loose_e10_loose", &EF_tau16_loose_e10_loose, &b_EF_tau16_loose_e10_loose);
   fChain->SetBranchAddress("EF_tau16_loose_e15_loose", &EF_tau16_loose_e15_loose, &b_EF_tau16_loose_e15_loose);
   fChain->SetBranchAddress("EF_tau16_loose_mu10", &EF_tau16_loose_mu10, &b_EF_tau16_loose_mu10);
   fChain->SetBranchAddress("EF_tau16_loose_mu15", &EF_tau16_loose_mu15, &b_EF_tau16_loose_mu15);
   fChain->SetBranchAddress("EF_tau16_loose_xe20_noMu", &EF_tau16_loose_xe20_noMu, &b_EF_tau16_loose_xe20_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe25_noMu", &EF_tau16_loose_xe25_noMu, &b_EF_tau16_loose_xe25_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe25_tight_noMu", &EF_tau16_loose_xe25_tight_noMu, &b_EF_tau16_loose_xe25_tight_noMu);
   fChain->SetBranchAddress("EF_tau16_loose_xe30_noMu", &EF_tau16_loose_xe30_noMu, &b_EF_tau16_loose_xe30_noMu);
   fChain->SetBranchAddress("EF_tau16_medium", &EF_tau16_medium, &b_EF_tau16_medium);
   fChain->SetBranchAddress("EF_tau16_medium_xe22_noMu", &EF_tau16_medium_xe22_noMu, &b_EF_tau16_medium_xe22_noMu);
   fChain->SetBranchAddress("EF_tau16_medium_xe25_noMu", &EF_tau16_medium_xe25_noMu, &b_EF_tau16_medium_xe25_noMu);
   fChain->SetBranchAddress("EF_tau16_medium_xe25_tight_noMu", &EF_tau16_medium_xe25_tight_noMu, &b_EF_tau16_medium_xe25_tight_noMu);
   fChain->SetBranchAddress("EF_tau20_loose", &EF_tau20_loose, &b_EF_tau20_loose);
   fChain->SetBranchAddress("EF_tau20_loose_xe25_noMu", &EF_tau20_loose_xe25_noMu, &b_EF_tau20_loose_xe25_noMu);
   fChain->SetBranchAddress("EF_tau29_loose", &EF_tau29_loose, &b_EF_tau29_loose);
   fChain->SetBranchAddress("EF_tau29_loose1", &EF_tau29_loose1, &b_EF_tau29_loose1);
   fChain->SetBranchAddress("EF_tau38_loose", &EF_tau38_loose, &b_EF_tau38_loose);
   fChain->SetBranchAddress("EF_tau38_medium", &EF_tau38_medium, &b_EF_tau38_medium);
   fChain->SetBranchAddress("EF_tau50_IDTrkNoCut", &EF_tau50_IDTrkNoCut, &b_EF_tau50_IDTrkNoCut);
   fChain->SetBranchAddress("EF_tau50_loose", &EF_tau50_loose, &b_EF_tau50_loose);
   fChain->SetBranchAddress("EF_tau50_loose_IdScan", &EF_tau50_loose_IdScan, &b_EF_tau50_loose_IdScan);
   fChain->SetBranchAddress("EF_tau50_medium", &EF_tau50_medium, &b_EF_tau50_medium);
   fChain->SetBranchAddress("EF_tau84_loose", &EF_tau84_loose, &b_EF_tau84_loose);
   fChain->SetBranchAddress("EF_tau84_medium", &EF_tau84_medium, &b_EF_tau84_medium);
   fChain->SetBranchAddress("EF_tauNoCut", &EF_tauNoCut, &b_EF_tauNoCut);
   fChain->SetBranchAddress("EF_tauNoCut_IdScan", &EF_tauNoCut_IdScan, &b_EF_tauNoCut_IdScan);
   fChain->SetBranchAddress("EF_tauNoCut_cosmic", &EF_tauNoCut_cosmic, &b_EF_tauNoCut_cosmic);
   fChain->SetBranchAddress("EF_tauNoCut_firstempty", &EF_tauNoCut_firstempty, &b_EF_tauNoCut_firstempty);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk6_EFxe15_noMu", &EF_tauNoCut_hasTrk6_EFxe15_noMu, &b_EF_tauNoCut_hasTrk6_EFxe15_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk6_IdScan_EFxe15_noMu", &EF_tauNoCut_hasTrk6_IdScan_EFxe15_noMu, &b_EF_tauNoCut_hasTrk6_IdScan_EFxe15_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk6_IdScan_xe20_noMu", &EF_tauNoCut_hasTrk6_IdScan_xe20_noMu, &b_EF_tauNoCut_hasTrk6_IdScan_xe20_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk6_xe20_noMu", &EF_tauNoCut_hasTrk6_xe20_noMu, &b_EF_tauNoCut_hasTrk6_xe20_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk9_xe20_noMu", &EF_tauNoCut_hasTrk9_xe20_noMu, &b_EF_tauNoCut_hasTrk9_xe20_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk_MV", &EF_tauNoCut_hasTrk_MV, &b_EF_tauNoCut_hasTrk_MV);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk_e10_tight", &EF_tauNoCut_hasTrk_e10_tight, &b_EF_tauNoCut_hasTrk_e10_tight);
   fChain->SetBranchAddress("EF_tauNoCut_hasTrk_xe20_noMu", &EF_tauNoCut_hasTrk_xe20_noMu, &b_EF_tauNoCut_hasTrk_xe20_noMu);
   fChain->SetBranchAddress("EF_tauNoCut_unpaired_iso", &EF_tauNoCut_unpaired_iso, &b_EF_tauNoCut_unpaired_iso);
   fChain->SetBranchAddress("EF_tauNoCut_unpaired_noniso", &EF_tauNoCut_unpaired_noniso, &b_EF_tauNoCut_unpaired_noniso);
   fChain->SetBranchAddress("EF_xe15", &EF_xe15, &b_EF_xe15);
   fChain->SetBranchAddress("EF_xe15_noMu", &EF_xe15_noMu, &b_EF_xe15_noMu);
   fChain->SetBranchAddress("EF_xe15_unbiased_noMu", &EF_xe15_unbiased_noMu, &b_EF_xe15_unbiased_noMu);
   fChain->SetBranchAddress("EF_xe20", &EF_xe20, &b_EF_xe20);
   fChain->SetBranchAddress("EF_xe20_noMu", &EF_xe20_noMu, &b_EF_xe20_noMu);
   fChain->SetBranchAddress("EF_xe20_tight_noMu", &EF_xe20_tight_noMu, &b_EF_xe20_tight_noMu);
   fChain->SetBranchAddress("EF_xe20_tight_vfj_noMu", &EF_xe20_tight_vfj_noMu, &b_EF_xe20_tight_vfj_noMu);
   fChain->SetBranchAddress("EF_xe25", &EF_xe25, &b_EF_xe25);
   fChain->SetBranchAddress("EF_xe25_medium", &EF_xe25_medium, &b_EF_xe25_medium);
   fChain->SetBranchAddress("EF_xe25_medium_noMu", &EF_xe25_medium_noMu, &b_EF_xe25_medium_noMu);
   fChain->SetBranchAddress("EF_xe25_noMu", &EF_xe25_noMu, &b_EF_xe25_noMu);
   fChain->SetBranchAddress("EF_xe25_tight_noMu", &EF_xe25_tight_noMu, &b_EF_xe25_tight_noMu);
   fChain->SetBranchAddress("EF_xe25_tight_vfj_noMu", &EF_xe25_tight_vfj_noMu, &b_EF_xe25_tight_vfj_noMu);
   fChain->SetBranchAddress("EF_xe25_vfj_noMu", &EF_xe25_vfj_noMu, &b_EF_xe25_vfj_noMu);
   fChain->SetBranchAddress("EF_xe30", &EF_xe30, &b_EF_xe30);
   fChain->SetBranchAddress("EF_xe30_allL1", &EF_xe30_allL1, &b_EF_xe30_allL1);
   fChain->SetBranchAddress("EF_xe30_allL1_FEB", &EF_xe30_allL1_FEB, &b_EF_xe30_allL1_FEB);
   fChain->SetBranchAddress("EF_xe30_allL1_allCells", &EF_xe30_allL1_allCells, &b_EF_xe30_allL1_allCells);
   fChain->SetBranchAddress("EF_xe30_allL1_noMu", &EF_xe30_allL1_noMu, &b_EF_xe30_allL1_noMu);
   fChain->SetBranchAddress("EF_xe30_loose", &EF_xe30_loose, &b_EF_xe30_loose);
   fChain->SetBranchAddress("EF_xe30_loose_noMu", &EF_xe30_loose_noMu, &b_EF_xe30_loose_noMu);
   fChain->SetBranchAddress("EF_xe30_medium", &EF_xe30_medium, &b_EF_xe30_medium);
   fChain->SetBranchAddress("EF_xe30_medium_noMu", &EF_xe30_medium_noMu, &b_EF_xe30_medium_noMu);
   fChain->SetBranchAddress("EF_xe30_medium_vfj_noMu", &EF_xe30_medium_vfj_noMu, &b_EF_xe30_medium_vfj_noMu);
   fChain->SetBranchAddress("EF_xe30_noMu", &EF_xe30_noMu, &b_EF_xe30_noMu);
   fChain->SetBranchAddress("EF_xe30_tight_noMu", &EF_xe30_tight_noMu, &b_EF_xe30_tight_noMu);
   fChain->SetBranchAddress("EF_xe30_tight_vfj_noMu", &EF_xe30_tight_vfj_noMu, &b_EF_xe30_tight_vfj_noMu);
   fChain->SetBranchAddress("EF_xe30_vfj_noMu", &EF_xe30_vfj_noMu, &b_EF_xe30_vfj_noMu);
   fChain->SetBranchAddress("EF_xe35", &EF_xe35, &b_EF_xe35);
   fChain->SetBranchAddress("EF_xe35_loose_noMu", &EF_xe35_loose_noMu, &b_EF_xe35_loose_noMu);
   fChain->SetBranchAddress("EF_xe35_noMu", &EF_xe35_noMu, &b_EF_xe35_noMu);
   fChain->SetBranchAddress("EF_xe35_tight_noMu", &EF_xe35_tight_noMu, &b_EF_xe35_tight_noMu);
   fChain->SetBranchAddress("EF_xe40", &EF_xe40, &b_EF_xe40);
   fChain->SetBranchAddress("EF_xe40_noMu", &EF_xe40_noMu, &b_EF_xe40_noMu);
   fChain->SetBranchAddress("EF_xe40_tight_noMu", &EF_xe40_tight_noMu, &b_EF_xe40_tight_noMu);
   fChain->SetBranchAddress("EF_xe45", &EF_xe45, &b_EF_xe45);
   fChain->SetBranchAddress("EF_xe45_noMu", &EF_xe45_noMu, &b_EF_xe45_noMu);
   fChain->SetBranchAddress("EF_xe55", &EF_xe55, &b_EF_xe55);
   fChain->SetBranchAddress("EF_xe55_noMu", &EF_xe55_noMu, &b_EF_xe55_noMu);
   fChain->SetBranchAddress("EF_xe60_medium", &EF_xe60_medium, &b_EF_xe60_medium);
   fChain->SetBranchAddress("EF_xe60_medium_noMu", &EF_xe60_medium_noMu, &b_EF_xe60_medium_noMu);
   fChain->SetBranchAddress("EF_xe80_medium", &EF_xe80_medium, &b_EF_xe80_medium);
   fChain->SetBranchAddress("EF_xe80_medium_noMu", &EF_xe80_medium_noMu, &b_EF_xe80_medium_noMu);
   fChain->SetBranchAddress("L1_2EM10", &L1_2EM10, &b_L1_2EM10);
   fChain->SetBranchAddress("L1_2EM14", &L1_2EM14, &b_L1_2EM14);
   fChain->SetBranchAddress("L1_2EM2", &L1_2EM2, &b_L1_2EM2);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM5", &L1_2EM5, &b_L1_2EM5);
   fChain->SetBranchAddress("L1_2J10", &L1_2J10, &b_L1_2J10);
   fChain->SetBranchAddress("L1_2J10_J30", &L1_2J10_J30, &b_L1_2J10_J30);
   fChain->SetBranchAddress("L1_2J10_J55", &L1_2J10_J55, &b_L1_2J10_J55);
   fChain->SetBranchAddress("L1_2J15", &L1_2J15, &b_L1_2J15);
   fChain->SetBranchAddress("L1_2J15_J75", &L1_2J15_J75, &b_L1_2J15_J75);
   fChain->SetBranchAddress("L1_2J15_XE10", &L1_2J15_XE10, &b_L1_2J15_XE10);
   fChain->SetBranchAddress("L1_2J15_XE15", &L1_2J15_XE15, &b_L1_2J15_XE15);
   fChain->SetBranchAddress("L1_2J15_XE25", &L1_2J15_XE25, &b_L1_2J15_XE25);
   fChain->SetBranchAddress("L1_2J30", &L1_2J30, &b_L1_2J30);
   fChain->SetBranchAddress("L1_2J5", &L1_2J5, &b_L1_2J5);
   fChain->SetBranchAddress("L1_2J55", &L1_2J55, &b_L1_2J55);
   fChain->SetBranchAddress("L1_2J95", &L1_2J95, &b_L1_2J95);
   fChain->SetBranchAddress("L1_2MU0", &L1_2MU0, &b_L1_2MU0);
   fChain->SetBranchAddress("L1_2MU0_FIRSTEMPTY", &L1_2MU0_FIRSTEMPTY, &b_L1_2MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_2MU0_MU6", &L1_2MU0_MU6, &b_L1_2MU0_MU6);
   fChain->SetBranchAddress("L1_2MU10", &L1_2MU10, &b_L1_2MU10);
   fChain->SetBranchAddress("L1_2MU20", &L1_2MU20, &b_L1_2MU20);
   fChain->SetBranchAddress("L1_2MU6", &L1_2MU6, &b_L1_2MU6);
   fChain->SetBranchAddress("L1_2MU6_EM5", &L1_2MU6_EM5, &b_L1_2MU6_EM5);
   fChain->SetBranchAddress("L1_2TAU11", &L1_2TAU11, &b_L1_2TAU11);
   fChain->SetBranchAddress("L1_2TAU5", &L1_2TAU5, &b_L1_2TAU5);
   fChain->SetBranchAddress("L1_2TAU5_EM5", &L1_2TAU5_EM5, &b_L1_2TAU5_EM5);
   fChain->SetBranchAddress("L1_2TAU6", &L1_2TAU6, &b_L1_2TAU6);
   fChain->SetBranchAddress("L1_2TAU6_EM10", &L1_2TAU6_EM10, &b_L1_2TAU6_EM10);
   fChain->SetBranchAddress("L1_2TAU6_EM5", &L1_2TAU6_EM5, &b_L1_2TAU6_EM5);
   fChain->SetBranchAddress("L1_3J10", &L1_3J10, &b_L1_3J10);
   fChain->SetBranchAddress("L1_3J10_2J30", &L1_3J10_2J30, &b_L1_3J10_2J30);
   fChain->SetBranchAddress("L1_3J15", &L1_3J15, &b_L1_3J15);
   fChain->SetBranchAddress("L1_3J30", &L1_3J30, &b_L1_3J30);
   fChain->SetBranchAddress("L1_3J5_J30", &L1_3J5_J30, &b_L1_3J5_J30);
   fChain->SetBranchAddress("L1_4J10", &L1_4J10, &b_L1_4J10);
   fChain->SetBranchAddress("L1_4J10_3J15", &L1_4J10_3J15, &b_L1_4J10_3J15);
   fChain->SetBranchAddress("L1_4J10_EM10", &L1_4J10_EM10, &b_L1_4J10_EM10);
   fChain->SetBranchAddress("L1_4J10_MU15", &L1_4J10_MU15, &b_L1_4J10_MU15);
   fChain->SetBranchAddress("L1_4J15", &L1_4J15, &b_L1_4J15);
   fChain->SetBranchAddress("L1_4J30", &L1_4J30, &b_L1_4J30);
   fChain->SetBranchAddress("L1_4J5", &L1_4J5, &b_L1_4J5);
   fChain->SetBranchAddress("L1_4J5_J15", &L1_4J5_J15, &b_L1_4J5_J15);
   fChain->SetBranchAddress("L1_4J5_J30", &L1_4J5_J30, &b_L1_4J5_J30);
   fChain->SetBranchAddress("L1_EM10", &L1_EM10, &b_L1_EM10);
   fChain->SetBranchAddress("L1_EM10I", &L1_EM10I, &b_L1_EM10I);
   fChain->SetBranchAddress("L1_EM14", &L1_EM14, &b_L1_EM14);
   fChain->SetBranchAddress("L1_EM14I", &L1_EM14I, &b_L1_EM14I);
   fChain->SetBranchAddress("L1_EM14_XE10", &L1_EM14_XE10, &b_L1_EM14_XE10);
   fChain->SetBranchAddress("L1_EM14_XE15", &L1_EM14_XE15, &b_L1_EM14_XE15);
   fChain->SetBranchAddress("L1_EM2", &L1_EM2, &b_L1_EM2);
   fChain->SetBranchAddress("L1_EM2_UNPAIRED_ISO", &L1_EM2_UNPAIRED_ISO, &b_L1_EM2_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_EM2_UNPAIRED_NONISO", &L1_EM2_UNPAIRED_NONISO, &b_L1_EM2_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_EM3", &L1_EM3, &b_L1_EM3);
   fChain->SetBranchAddress("L1_EM3_EMPTY", &L1_EM3_EMPTY, &b_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L1_EM3_FIRSTEMPTY", &L1_EM3_FIRSTEMPTY, &b_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_EM3_MV", &L1_EM3_MV, &b_L1_EM3_MV);
   fChain->SetBranchAddress("L1_EM5", &L1_EM5, &b_L1_EM5);
   fChain->SetBranchAddress("L1_EM5_MU10", &L1_EM5_MU10, &b_L1_EM5_MU10);
   fChain->SetBranchAddress("L1_EM5_MU6", &L1_EM5_MU6, &b_L1_EM5_MU6);
   fChain->SetBranchAddress("L1_EM85", &L1_EM85, &b_L1_EM85);
   fChain->SetBranchAddress("L1_J10", &L1_J10, &b_L1_J10);
   fChain->SetBranchAddress("L1_J10_EMPTY", &L1_J10_EMPTY, &b_L1_J10_EMPTY);
   fChain->SetBranchAddress("L1_J10_FIRSTEMPTY", &L1_J10_FIRSTEMPTY, &b_L1_J10_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_J10_FJ10", &L1_J10_FJ10, &b_L1_J10_FJ10);
   fChain->SetBranchAddress("L1_J10_MV", &L1_J10_MV, &b_L1_J10_MV);
   fChain->SetBranchAddress("L1_J10_UNPAIRED", &L1_J10_UNPAIRED, &b_L1_J10_UNPAIRED);
   fChain->SetBranchAddress("L1_J115", &L1_J115, &b_L1_J115);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J15_MV", &L1_J15_MV, &b_L1_J15_MV);
   fChain->SetBranchAddress("L1_J15_XE15_EM10", &L1_J15_XE15_EM10, &b_L1_J15_XE15_EM10);
   fChain->SetBranchAddress("L1_J15_XE15_MU15", &L1_J15_XE15_MU15, &b_L1_J15_XE15_MU15);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J30_EMPTY", &L1_J30_EMPTY, &b_L1_J30_EMPTY);
   fChain->SetBranchAddress("L1_J30_FIRSTEMPTY", &L1_J30_FIRSTEMPTY, &b_L1_J30_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_J30_UNPAIRED", &L1_J30_UNPAIRED, &b_L1_J30_UNPAIRED);
   fChain->SetBranchAddress("L1_J30_XE10", &L1_J30_XE10, &b_L1_J30_XE10);
   fChain->SetBranchAddress("L1_J30_XE15", &L1_J30_XE15, &b_L1_J30_XE15);
   fChain->SetBranchAddress("L1_J30_XE25", &L1_J30_XE25, &b_L1_J30_XE25);
   fChain->SetBranchAddress("L1_J5", &L1_J5, &b_L1_J5);
   fChain->SetBranchAddress("L1_J55", &L1_J55, &b_L1_J55);
   fChain->SetBranchAddress("L1_J5_EMPTY", &L1_J5_EMPTY, &b_L1_J5_EMPTY);
   fChain->SetBranchAddress("L1_J5_FIRSTEMPTY", &L1_J5_FIRSTEMPTY, &b_L1_J5_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_J5_UNPAIRED_ISO", &L1_J5_UNPAIRED_ISO, &b_L1_J5_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_J5_UNPAIRED_NONISO", &L1_J5_UNPAIRED_NONISO, &b_L1_J5_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("L1_J95", &L1_J95, &b_L1_J95);
   fChain->SetBranchAddress("L1_JE100", &L1_JE100, &b_L1_JE100);
   fChain->SetBranchAddress("L1_JE140", &L1_JE140, &b_L1_JE140);
   fChain->SetBranchAddress("L1_JE200", &L1_JE200, &b_L1_JE200);
   fChain->SetBranchAddress("L1_JE60", &L1_JE60, &b_L1_JE60);
   fChain->SetBranchAddress("L1_MU0", &L1_MU0, &b_L1_MU0);
   fChain->SetBranchAddress("L1_MU0_COMM", &L1_MU0_COMM, &b_L1_MU0_COMM);
   fChain->SetBranchAddress("L1_MU0_COMM_EMPTY", &L1_MU0_COMM_EMPTY, &b_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("L1_MU0_COMM_FIRSTEMPTY", &L1_MU0_COMM_FIRSTEMPTY, &b_L1_MU0_COMM_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU0_COMM_UNPAIRED_ISO", &L1_MU0_COMM_UNPAIRED_ISO, &b_L1_MU0_COMM_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU0_COMM_UNPAIRED_NONISO", &L1_MU0_COMM_UNPAIRED_NONISO, &b_L1_MU0_COMM_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_MU0_EM3", &L1_MU0_EM3, &b_L1_MU0_EM3);
   fChain->SetBranchAddress("L1_MU0_EMPTY", &L1_MU0_EMPTY, &b_L1_MU0_EMPTY);
   fChain->SetBranchAddress("L1_MU0_FIRSTEMPTY", &L1_MU0_FIRSTEMPTY, &b_L1_MU0_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU0_J10", &L1_MU0_J10, &b_L1_MU0_J10);
   fChain->SetBranchAddress("L1_MU0_J15", &L1_MU0_J15, &b_L1_MU0_J15);
   fChain->SetBranchAddress("L1_MU0_J30", &L1_MU0_J30, &b_L1_MU0_J30);
   fChain->SetBranchAddress("L1_MU0_J5", &L1_MU0_J5, &b_L1_MU0_J5);
   fChain->SetBranchAddress("L1_MU0_J55", &L1_MU0_J55, &b_L1_MU0_J55);
   fChain->SetBranchAddress("L1_MU0_MV", &L1_MU0_MV, &b_L1_MU0_MV);
   fChain->SetBranchAddress("L1_MU0_UNPAIRED_ISO", &L1_MU0_UNPAIRED_ISO, &b_L1_MU0_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_MU0_UNPAIRED_NONISO", &L1_MU0_UNPAIRED_NONISO, &b_L1_MU0_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
   fChain->SetBranchAddress("L1_MU10_FIRSTEMPTY", &L1_MU10_FIRSTEMPTY, &b_L1_MU10_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU10_J10", &L1_MU10_J10, &b_L1_MU10_J10);
   fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_MU6_EM3", &L1_MU6_EM3, &b_L1_MU6_EM3);
   fChain->SetBranchAddress("L1_MU6_FIRSTEMPTY", &L1_MU6_FIRSTEMPTY, &b_L1_MU6_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_MU6_J5", &L1_MU6_J5, &b_L1_MU6_J5);
   fChain->SetBranchAddress("L1_TAU11", &L1_TAU11, &b_L1_TAU11);
   fChain->SetBranchAddress("L1_TAU11I", &L1_TAU11I, &b_L1_TAU11I);
   fChain->SetBranchAddress("L1_TAU20", &L1_TAU20, &b_L1_TAU20);
   fChain->SetBranchAddress("L1_TAU30", &L1_TAU30, &b_L1_TAU30);
   fChain->SetBranchAddress("L1_TAU5", &L1_TAU5, &b_L1_TAU5);
   fChain->SetBranchAddress("L1_TAU50", &L1_TAU50, &b_L1_TAU50);
   fChain->SetBranchAddress("L1_TAU5_3J5_2J15", &L1_TAU5_3J5_2J15, &b_L1_TAU5_3J5_2J15);
   fChain->SetBranchAddress("L1_TAU5_4J5_3J15", &L1_TAU5_4J5_3J15, &b_L1_TAU5_4J5_3J15);
   fChain->SetBranchAddress("L1_TAU5_EMPTY", &L1_TAU5_EMPTY, &b_L1_TAU5_EMPTY);
   fChain->SetBranchAddress("L1_TAU5_FIRSTEMPTY", &L1_TAU5_FIRSTEMPTY, &b_L1_TAU5_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_TAU5_MU6", &L1_TAU5_MU6, &b_L1_TAU5_MU6);
   fChain->SetBranchAddress("L1_TAU5_MV", &L1_TAU5_MV, &b_L1_TAU5_MV);
   fChain->SetBranchAddress("L1_TAU5_UNPAIRED_ISO", &L1_TAU5_UNPAIRED_ISO, &b_L1_TAU5_UNPAIRED_ISO);
   fChain->SetBranchAddress("L1_TAU5_UNPAIRED_NONISO", &L1_TAU5_UNPAIRED_NONISO, &b_L1_TAU5_UNPAIRED_NONISO);
   fChain->SetBranchAddress("L1_TAU5_XE10", &L1_TAU5_XE10, &b_L1_TAU5_XE10);
   fChain->SetBranchAddress("L1_TAU6", &L1_TAU6, &b_L1_TAU6);
   fChain->SetBranchAddress("L1_TAU6I", &L1_TAU6I, &b_L1_TAU6I);
   fChain->SetBranchAddress("L1_TAU6_3J5_2J15", &L1_TAU6_3J5_2J15, &b_L1_TAU6_3J5_2J15);
   fChain->SetBranchAddress("L1_TAU6_4J5_3J15", &L1_TAU6_4J5_3J15, &b_L1_TAU6_4J5_3J15);
   fChain->SetBranchAddress("L1_TAU6_MU10", &L1_TAU6_MU10, &b_L1_TAU6_MU10);
   fChain->SetBranchAddress("L1_TAU6_MU15", &L1_TAU6_MU15, &b_L1_TAU6_MU15);
   fChain->SetBranchAddress("L1_TAU6_XE10", &L1_TAU6_XE10, &b_L1_TAU6_XE10);
   fChain->SetBranchAddress("L1_XE10", &L1_XE10, &b_L1_XE10);
   fChain->SetBranchAddress("L1_XE15", &L1_XE15, &b_L1_XE15);
   fChain->SetBranchAddress("L1_XE20", &L1_XE20, &b_L1_XE20);
   fChain->SetBranchAddress("L1_XE25", &L1_XE25, &b_L1_XE25);
   fChain->SetBranchAddress("L1_XE30", &L1_XE30, &b_L1_XE30);
   fChain->SetBranchAddress("L1_XE35", &L1_XE35, &b_L1_XE35);
   fChain->SetBranchAddress("L1_XE40", &L1_XE40, &b_L1_XE40);
   fChain->SetBranchAddress("L1_XE50", &L1_XE50, &b_L1_XE50);
   fChain->SetBranchAddress("L2_2e10_loose", &L2_2e10_loose, &b_L2_2e10_loose);
   fChain->SetBranchAddress("L2_2e10_medium", &L2_2e10_medium, &b_L2_2e10_medium);
   fChain->SetBranchAddress("L2_2e15_loose", &L2_2e15_loose, &b_L2_2e15_loose);
   fChain->SetBranchAddress("L2_2e3_loose", &L2_2e3_loose, &b_L2_2e3_loose);
   fChain->SetBranchAddress("L2_2e3_loose_SiTrk", &L2_2e3_loose_SiTrk, &b_L2_2e3_loose_SiTrk);
   fChain->SetBranchAddress("L2_2e3_loose_TRT", &L2_2e3_loose_TRT, &b_L2_2e3_loose_TRT);
   fChain->SetBranchAddress("L2_2e3_medium", &L2_2e3_medium, &b_L2_2e3_medium);
   fChain->SetBranchAddress("L2_2e3_medium_SiTrk", &L2_2e3_medium_SiTrk, &b_L2_2e3_medium_SiTrk);
   fChain->SetBranchAddress("L2_2e3_medium_TRT", &L2_2e3_medium_TRT, &b_L2_2e3_medium_TRT);
   fChain->SetBranchAddress("L2_2e3_tight", &L2_2e3_tight, &b_L2_2e3_tight);
   fChain->SetBranchAddress("L2_2e5_medium", &L2_2e5_medium, &b_L2_2e5_medium);
   fChain->SetBranchAddress("L2_2e5_medium_SiTrk", &L2_2e5_medium_SiTrk, &b_L2_2e5_medium_SiTrk);
   fChain->SetBranchAddress("L2_2e5_medium_TRT", &L2_2e5_medium_TRT, &b_L2_2e5_medium_TRT);
   fChain->SetBranchAddress("L2_2e5_tight", &L2_2e5_tight, &b_L2_2e5_tight);
   fChain->SetBranchAddress("L2_2j30_xe12_noMu", &L2_2j30_xe12_noMu, &b_L2_2j30_xe12_noMu);
   fChain->SetBranchAddress("L2_2j30_xe20_noMu", &L2_2j30_xe20_noMu, &b_L2_2j30_xe20_noMu);
   fChain->SetBranchAddress("L2_2j30_xe30_noMu", &L2_2j30_xe30_noMu, &b_L2_2j30_xe30_noMu);
   fChain->SetBranchAddress("L2_2j35_jetNoEF_xe20_noMu", &L2_2j35_jetNoEF_xe20_noMu, &b_L2_2j35_jetNoEF_xe20_noMu);
   fChain->SetBranchAddress("L2_2j35_jetNoEF_xe30_noMu", &L2_2j35_jetNoEF_xe30_noMu, &b_L2_2j35_jetNoEF_xe30_noMu);
   fChain->SetBranchAddress("L2_2j35_jetNoEF_xe40_noMu", &L2_2j35_jetNoEF_xe40_noMu, &b_L2_2j35_jetNoEF_xe40_noMu);
   fChain->SetBranchAddress("L2_2mu0_NoAlg", &L2_2mu0_NoAlg, &b_L2_2mu0_NoAlg);
   fChain->SetBranchAddress("L2_2mu10", &L2_2mu10, &b_L2_2mu10);
   fChain->SetBranchAddress("L2_2mu10_NoAlg", &L2_2mu10_NoAlg, &b_L2_2mu10_NoAlg);
   fChain->SetBranchAddress("L2_2mu4", &L2_2mu4, &b_L2_2mu4);
   fChain->SetBranchAddress("L2_2mu4_Bmumu", &L2_2mu4_Bmumu, &b_L2_2mu4_Bmumu);
   fChain->SetBranchAddress("L2_2mu4_Bmumux", &L2_2mu4_Bmumux, &b_L2_2mu4_Bmumux);
   fChain->SetBranchAddress("L2_2mu4_DiMu", &L2_2mu4_DiMu, &b_L2_2mu4_DiMu);
   fChain->SetBranchAddress("L2_2mu4_DiMu_SiTrk", &L2_2mu4_DiMu_SiTrk, &b_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noVtx", &L2_2mu4_DiMu_noVtx, &b_L2_2mu4_DiMu_noVtx);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noVtx_noOS", &L2_2mu4_DiMu_noVtx_noOS, &b_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_2mu4_Jpsimumu", &L2_2mu4_Jpsimumu, &b_L2_2mu4_Jpsimumu);
   fChain->SetBranchAddress("L2_2mu4_Jpsimumu_IDTrkNoCut", &L2_2mu4_Jpsimumu_IDTrkNoCut, &b_L2_2mu4_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("L2_2mu4_Upsimumu", &L2_2mu4_Upsimumu, &b_L2_2mu4_Upsimumu);
   fChain->SetBranchAddress("L2_2mu6", &L2_2mu6, &b_L2_2mu6);
   fChain->SetBranchAddress("L2_2mu6_Bmumu", &L2_2mu6_Bmumu, &b_L2_2mu6_Bmumu);
   fChain->SetBranchAddress("L2_2mu6_Bmumux", &L2_2mu6_Bmumux, &b_L2_2mu6_Bmumux);
   fChain->SetBranchAddress("L2_2mu6_DiMu", &L2_2mu6_DiMu, &b_L2_2mu6_DiMu);
   fChain->SetBranchAddress("L2_2mu6_Jpsimumu", &L2_2mu6_Jpsimumu, &b_L2_2mu6_Jpsimumu);
   fChain->SetBranchAddress("L2_2mu6_MG", &L2_2mu6_MG, &b_L2_2mu6_MG);
   fChain->SetBranchAddress("L2_2mu6_NoAlg", &L2_2mu6_NoAlg, &b_L2_2mu6_NoAlg);
   fChain->SetBranchAddress("L2_2mu6_Upsimumu", &L2_2mu6_Upsimumu, &b_L2_2mu6_Upsimumu);
   fChain->SetBranchAddress("L2_2mu6_g10_loose", &L2_2mu6_g10_loose, &b_L2_2mu6_g10_loose);
   fChain->SetBranchAddress("L2_2tau12_loose", &L2_2tau12_loose, &b_L2_2tau12_loose);
   fChain->SetBranchAddress("L2_2tau16_loose", &L2_2tau16_loose, &b_L2_2tau16_loose);
   fChain->SetBranchAddress("L2_2tau20_loose", &L2_2tau20_loose, &b_L2_2tau20_loose);
   fChain->SetBranchAddress("L2_2tau29_loose", &L2_2tau29_loose, &b_L2_2tau29_loose);
   fChain->SetBranchAddress("L2_2tau29_loose1", &L2_2tau29_loose1, &b_L2_2tau29_loose1);
   fChain->SetBranchAddress("L2_2tau38_loose", &L2_2tau38_loose, &b_L2_2tau38_loose);
   fChain->SetBranchAddress("L2_e10_NoCut", &L2_e10_NoCut, &b_L2_e10_NoCut);
   fChain->SetBranchAddress("L2_e10_loose", &L2_e10_loose, &b_L2_e10_loose);
   fChain->SetBranchAddress("L2_e10_loose_mu10", &L2_e10_loose_mu10, &b_L2_e10_loose_mu10);
   fChain->SetBranchAddress("L2_e10_loose_mu6", &L2_e10_loose_mu6, &b_L2_e10_loose_mu6);
   fChain->SetBranchAddress("L2_e10_medium", &L2_e10_medium, &b_L2_e10_medium);
   fChain->SetBranchAddress("L2_e10_medium_IDTrkNoCut", &L2_e10_medium_IDTrkNoCut, &b_L2_e10_medium_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e10_medium_SiTrk", &L2_e10_medium_SiTrk, &b_L2_e10_medium_SiTrk);
   fChain->SetBranchAddress("L2_e10_medium_TRT", &L2_e10_medium_TRT, &b_L2_e10_medium_TRT);
   fChain->SetBranchAddress("L2_e10_tight", &L2_e10_tight, &b_L2_e10_tight);
   fChain->SetBranchAddress("L2_e10_tight_TRT", &L2_e10_tight_TRT, &b_L2_e10_tight_TRT);
   fChain->SetBranchAddress("L2_e15_loose", &L2_e15_loose, &b_L2_e15_loose);
   fChain->SetBranchAddress("L2_e15_loose_IDTrkNoCut", &L2_e15_loose_IDTrkNoCut, &b_L2_e15_loose_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e15_medium", &L2_e15_medium, &b_L2_e15_medium);
   fChain->SetBranchAddress("L2_e15_medium_SiTrk", &L2_e15_medium_SiTrk, &b_L2_e15_medium_SiTrk);
   fChain->SetBranchAddress("L2_e15_medium_TRT", &L2_e15_medium_TRT, &b_L2_e15_medium_TRT);
   fChain->SetBranchAddress("L2_e15_tight", &L2_e15_tight, &b_L2_e15_tight);
   fChain->SetBranchAddress("L2_e15_tight_TRT", &L2_e15_tight_TRT, &b_L2_e15_tight_TRT);
   fChain->SetBranchAddress("L2_e18_medium", &L2_e18_medium, &b_L2_e18_medium);
   fChain->SetBranchAddress("L2_e20_loose", &L2_e20_loose, &b_L2_e20_loose);
   fChain->SetBranchAddress("L2_e20_loose_IDTrkNoCut", &L2_e20_loose_IDTrkNoCut, &b_L2_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("L2_e20_loose_TRT", &L2_e20_loose_TRT, &b_L2_e20_loose_TRT);
   fChain->SetBranchAddress("L2_e20_loose_passEF", &L2_e20_loose_passEF, &b_L2_e20_loose_passEF);
   fChain->SetBranchAddress("L2_e20_loose_passL2", &L2_e20_loose_passL2, &b_L2_e20_loose_passL2);
   fChain->SetBranchAddress("L2_e20_loose_xe20", &L2_e20_loose_xe20, &b_L2_e20_loose_xe20);
   fChain->SetBranchAddress("L2_e20_loose_xe20_noMu", &L2_e20_loose_xe20_noMu, &b_L2_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_e20_loose_xe30", &L2_e20_loose_xe30, &b_L2_e20_loose_xe30);
   fChain->SetBranchAddress("L2_e20_loose_xe30_noMu", &L2_e20_loose_xe30_noMu, &b_L2_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_e20_medium", &L2_e20_medium, &b_L2_e20_medium);
   fChain->SetBranchAddress("L2_e25_loose", &L2_e25_loose, &b_L2_e25_loose);
   fChain->SetBranchAddress("L2_e25_medium", &L2_e25_medium, &b_L2_e25_medium);
   fChain->SetBranchAddress("L2_e30_loose", &L2_e30_loose, &b_L2_e30_loose);
   fChain->SetBranchAddress("L2_e3_loose", &L2_e3_loose, &b_L2_e3_loose);
   fChain->SetBranchAddress("L2_e3_loose_SiTrk", &L2_e3_loose_SiTrk, &b_L2_e3_loose_SiTrk);
   fChain->SetBranchAddress("L2_e3_loose_TRT", &L2_e3_loose_TRT, &b_L2_e3_loose_TRT);
   fChain->SetBranchAddress("L2_e3_medium", &L2_e3_medium, &b_L2_e3_medium);
   fChain->SetBranchAddress("L2_e3_medium_SiTrk", &L2_e3_medium_SiTrk, &b_L2_e3_medium_SiTrk);
   fChain->SetBranchAddress("L2_e3_medium_TRT", &L2_e3_medium_TRT, &b_L2_e3_medium_TRT);
   fChain->SetBranchAddress("L2_e5_NoCut_L2SW", &L2_e5_NoCut_L2SW, &b_L2_e5_NoCut_L2SW);
   fChain->SetBranchAddress("L2_e5_NoCut_Ringer", &L2_e5_NoCut_Ringer, &b_L2_e5_NoCut_Ringer);
   fChain->SetBranchAddress("L2_e5_NoCut_firstempty", &L2_e5_NoCut_firstempty, &b_L2_e5_NoCut_firstempty);
   fChain->SetBranchAddress("L2_e5_loose_mu4", &L2_e5_loose_mu4, &b_L2_e5_loose_mu4);
   fChain->SetBranchAddress("L2_e5_medium", &L2_e5_medium, &b_L2_e5_medium);
   fChain->SetBranchAddress("L2_e5_medium_MV", &L2_e5_medium_MV, &b_L2_e5_medium_MV);
   fChain->SetBranchAddress("L2_e5_medium_SiTrk", &L2_e5_medium_SiTrk, &b_L2_e5_medium_SiTrk);
   fChain->SetBranchAddress("L2_e5_medium_TRT", &L2_e5_medium_TRT, &b_L2_e5_medium_TRT);
   fChain->SetBranchAddress("L2_e5_medium_mu4", &L2_e5_medium_mu4, &b_L2_e5_medium_mu4);
   fChain->SetBranchAddress("L2_e5_tight", &L2_e5_tight, &b_L2_e5_tight);
   fChain->SetBranchAddress("L2_e5_tight_SiTrk", &L2_e5_tight_SiTrk, &b_L2_e5_tight_SiTrk);
   fChain->SetBranchAddress("L2_e5_tight_TRT", &L2_e5_tight_TRT, &b_L2_e5_tight_TRT);
   fChain->SetBranchAddress("L2_e5_tight_e5_NoCut", &L2_e5_tight_e5_NoCut, &b_L2_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("L2_em105_passHLT", &L2_em105_passHLT, &b_L2_em105_passHLT);
   fChain->SetBranchAddress("L2_em3_empty_larcalib", &L2_em3_empty_larcalib, &b_L2_em3_empty_larcalib);
   fChain->SetBranchAddress("L2_g20_loose_xe20_noMu", &L2_g20_loose_xe20_noMu, &b_L2_g20_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_g20_loose_xe30_noMu", &L2_g20_loose_xe30_noMu, &b_L2_g20_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_g25_loose_xe30_noMu", &L2_g25_loose_xe30_noMu, &b_L2_g25_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_j30_jetNoCut_xe20_e15_medium", &L2_j30_jetNoCut_xe20_e15_medium, &b_L2_j30_jetNoCut_xe20_e15_medium);
   fChain->SetBranchAddress("L2_j30_xe20_e15_medium", &L2_j30_xe20_e15_medium, &b_L2_j30_xe20_e15_medium);
   fChain->SetBranchAddress("L2_j35_jetNoCut_xe30_mu15", &L2_j35_jetNoCut_xe30_mu15, &b_L2_j35_jetNoCut_xe30_mu15);
   fChain->SetBranchAddress("L2_j35_xe30_mu15", &L2_j35_xe30_mu15, &b_L2_j35_xe30_mu15);
   fChain->SetBranchAddress("L2_j45_xe12_noMu", &L2_j45_xe12_noMu, &b_L2_j45_xe12_noMu);
   fChain->SetBranchAddress("L2_j45_xe20_noMu", &L2_j45_xe20_noMu, &b_L2_j45_xe20_noMu);
   fChain->SetBranchAddress("L2_j45_xe30_noMu", &L2_j45_xe30_noMu, &b_L2_j45_xe30_noMu);
   fChain->SetBranchAddress("L2_mu0_NoAlg", &L2_mu0_NoAlg, &b_L2_mu0_NoAlg);
   fChain->SetBranchAddress("L2_mu0_comm_NoAlg", &L2_mu0_comm_NoAlg, &b_L2_mu0_comm_NoAlg);
   fChain->SetBranchAddress("L2_mu0_comm_empty_NoAlg", &L2_mu0_comm_empty_NoAlg, &b_L2_mu0_comm_empty_NoAlg);
   fChain->SetBranchAddress("L2_mu0_comm_firstempty_NoAlg", &L2_mu0_comm_firstempty_NoAlg, &b_L2_mu0_comm_firstempty_NoAlg);
   fChain->SetBranchAddress("L2_mu0_comm_unpaired_iso_NoAlg", &L2_mu0_comm_unpaired_iso_NoAlg, &b_L2_mu0_comm_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("L2_mu0_comm_unpaired_noniso_NoAlg", &L2_mu0_comm_unpaired_noniso_NoAlg, &b_L2_mu0_comm_unpaired_noniso_NoAlg);
   fChain->SetBranchAddress("L2_mu0_empty_NoAlg", &L2_mu0_empty_NoAlg, &b_L2_mu0_empty_NoAlg);
   fChain->SetBranchAddress("L2_mu0_firstempty_NoAlg", &L2_mu0_firstempty_NoAlg, &b_L2_mu0_firstempty_NoAlg);
   fChain->SetBranchAddress("L2_mu0_missingRoi", &L2_mu0_missingRoi, &b_L2_mu0_missingRoi);
   fChain->SetBranchAddress("L2_mu0_outOfTime1", &L2_mu0_outOfTime1, &b_L2_mu0_outOfTime1);
   fChain->SetBranchAddress("L2_mu0_outOfTime2", &L2_mu0_outOfTime2, &b_L2_mu0_outOfTime2);
   fChain->SetBranchAddress("L2_mu0_rpcOnly", &L2_mu0_rpcOnly, &b_L2_mu0_rpcOnly);
   fChain->SetBranchAddress("L2_mu0_unpaired_iso_NoAlg", &L2_mu0_unpaired_iso_NoAlg, &b_L2_mu0_unpaired_iso_NoAlg);
   fChain->SetBranchAddress("L2_mu0_unpaired_noniso_NoAlg", &L2_mu0_unpaired_noniso_NoAlg, &b_L2_mu0_unpaired_noniso_NoAlg);
   fChain->SetBranchAddress("L2_mu10", &L2_mu10, &b_L2_mu10);
   fChain->SetBranchAddress("L2_mu10_Ecut12", &L2_mu10_Ecut12, &b_L2_mu10_Ecut12);
   fChain->SetBranchAddress("L2_mu10_Ecut123", &L2_mu10_Ecut123, &b_L2_mu10_Ecut123);
   fChain->SetBranchAddress("L2_mu10_Ecut13", &L2_mu10_Ecut13, &b_L2_mu10_Ecut13);
   fChain->SetBranchAddress("L2_mu10_IDTrkNoCut", &L2_mu10_IDTrkNoCut, &b_L2_mu10_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu10_MG", &L2_mu10_MG, &b_L2_mu10_MG);
   fChain->SetBranchAddress("L2_mu10_MSonly", &L2_mu10_MSonly, &b_L2_mu10_MSonly);
   fChain->SetBranchAddress("L2_mu10_MSonly_Ecut12", &L2_mu10_MSonly_Ecut12, &b_L2_mu10_MSonly_Ecut12);
   fChain->SetBranchAddress("L2_mu10_MSonly_Ecut123", &L2_mu10_MSonly_Ecut123, &b_L2_mu10_MSonly_Ecut123);
   fChain->SetBranchAddress("L2_mu10_MSonly_Ecut13", &L2_mu10_MSonly_Ecut13, &b_L2_mu10_MSonly_Ecut13);
   fChain->SetBranchAddress("L2_mu10_MSonly_tight", &L2_mu10_MSonly_tight, &b_L2_mu10_MSonly_tight);
   fChain->SetBranchAddress("L2_mu10_NoAlg", &L2_mu10_NoAlg, &b_L2_mu10_NoAlg);
   fChain->SetBranchAddress("L2_mu10_SiTrk", &L2_mu10_SiTrk, &b_L2_mu10_SiTrk);
   fChain->SetBranchAddress("L2_mu10_j30", &L2_mu10_j30, &b_L2_mu10_j30);
   fChain->SetBranchAddress("L2_mu10_tight", &L2_mu10_tight, &b_L2_mu10_tight);
   fChain->SetBranchAddress("L2_mu10i_loose", &L2_mu10i_loose, &b_L2_mu10i_loose);
   fChain->SetBranchAddress("L2_mu13", &L2_mu13, &b_L2_mu13);
   fChain->SetBranchAddress("L2_mu13_MG", &L2_mu13_MG, &b_L2_mu13_MG);
   fChain->SetBranchAddress("L2_mu13_MG_tight", &L2_mu13_MG_tight, &b_L2_mu13_MG_tight);
   fChain->SetBranchAddress("L2_mu13_tight", &L2_mu13_tight, &b_L2_mu13_tight);
   fChain->SetBranchAddress("L2_mu15", &L2_mu15, &b_L2_mu15);
   fChain->SetBranchAddress("L2_mu15_MG", &L2_mu15_MG, &b_L2_mu15_MG);
   fChain->SetBranchAddress("L2_mu15_NoAlg", &L2_mu15_NoAlg, &b_L2_mu15_NoAlg);
   fChain->SetBranchAddress("L2_mu20", &L2_mu20, &b_L2_mu20);
   fChain->SetBranchAddress("L2_mu20_MSonly", &L2_mu20_MSonly, &b_L2_mu20_MSonly);
   fChain->SetBranchAddress("L2_mu20_NoAlg", &L2_mu20_NoAlg, &b_L2_mu20_NoAlg);
   fChain->SetBranchAddress("L2_mu20_passHLT", &L2_mu20_passHLT, &b_L2_mu20_passHLT);
   fChain->SetBranchAddress("L2_mu20_slow", &L2_mu20_slow, &b_L2_mu20_slow);
   fChain->SetBranchAddress("L2_mu30_MSonly", &L2_mu30_MSonly, &b_L2_mu30_MSonly);
   fChain->SetBranchAddress("L2_mu4", &L2_mu4, &b_L2_mu4);
   fChain->SetBranchAddress("L2_mu40_MSonly", &L2_mu40_MSonly, &b_L2_mu40_MSonly);
   fChain->SetBranchAddress("L2_mu4_Bmumu", &L2_mu4_Bmumu, &b_L2_mu4_Bmumu);
   fChain->SetBranchAddress("L2_mu4_BmumuX", &L2_mu4_BmumuX, &b_L2_mu4_BmumuX);
   fChain->SetBranchAddress("L2_mu4_DiMu", &L2_mu4_DiMu, &b_L2_mu4_DiMu);
   fChain->SetBranchAddress("L2_mu4_DiMu_FS", &L2_mu4_DiMu_FS, &b_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("L2_mu4_DiMu_FS_noOS", &L2_mu4_DiMu_FS_noOS, &b_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("L2_mu4_DiMu_MG", &L2_mu4_DiMu_MG, &b_L2_mu4_DiMu_MG);
   fChain->SetBranchAddress("L2_mu4_DiMu_MG_FS", &L2_mu4_DiMu_MG_FS, &b_L2_mu4_DiMu_MG_FS);
   fChain->SetBranchAddress("L2_mu4_DiMu_SiTrk", &L2_mu4_DiMu_SiTrk, &b_L2_mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("L2_mu4_DiMu_SiTrk_FS", &L2_mu4_DiMu_SiTrk_FS, &b_L2_mu4_DiMu_SiTrk_FS);
   fChain->SetBranchAddress("L2_mu4_DiMu_noOS", &L2_mu4_DiMu_noOS, &b_L2_mu4_DiMu_noOS);
   fChain->SetBranchAddress("L2_mu4_IDTrkNoCut", &L2_mu4_IDTrkNoCut, &b_L2_mu4_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4_Jpsie5e3", &L2_mu4_Jpsie5e3, &b_L2_mu4_Jpsie5e3);
   fChain->SetBranchAddress("L2_mu4_Jpsie5e3_FS", &L2_mu4_Jpsie5e3_FS, &b_L2_mu4_Jpsie5e3_FS);
   fChain->SetBranchAddress("L2_mu4_Jpsie5e3_SiTrk", &L2_mu4_Jpsie5e3_SiTrk, &b_L2_mu4_Jpsie5e3_SiTrk);
   fChain->SetBranchAddress("L2_mu4_Jpsie5e3_SiTrk_FS", &L2_mu4_Jpsie5e3_SiTrk_FS, &b_L2_mu4_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("L2_mu4_Jpsimumu", &L2_mu4_Jpsimumu, &b_L2_mu4_Jpsimumu);
   fChain->SetBranchAddress("L2_mu4_Jpsimumu_FS", &L2_mu4_Jpsimumu_FS, &b_L2_mu4_Jpsimumu_FS);
   fChain->SetBranchAddress("L2_mu4_Jpsimumu_SiTrk_FS", &L2_mu4_Jpsimumu_SiTrk_FS, &b_L2_mu4_Jpsimumu_SiTrk_FS);
   fChain->SetBranchAddress("L2_mu4_L1J10_matched", &L2_mu4_L1J10_matched, &b_L2_mu4_L1J10_matched);
   fChain->SetBranchAddress("L2_mu4_L1J15_matched", &L2_mu4_L1J15_matched, &b_L2_mu4_L1J15_matched);
   fChain->SetBranchAddress("L2_mu4_L1J30_matched", &L2_mu4_L1J30_matched, &b_L2_mu4_L1J30_matched);
   fChain->SetBranchAddress("L2_mu4_L1J55_matched", &L2_mu4_L1J55_matched, &b_L2_mu4_L1J55_matched);
   fChain->SetBranchAddress("L2_mu4_L1J5_matched", &L2_mu4_L1J5_matched, &b_L2_mu4_L1J5_matched);
   fChain->SetBranchAddress("L2_mu4_L2MSonly_EFFS_passL2", &L2_mu4_L2MSonly_EFFS_passL2, &b_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("L2_mu4_MG", &L2_mu4_MG, &b_L2_mu4_MG);
   fChain->SetBranchAddress("L2_mu4_MSonly", &L2_mu4_MSonly, &b_L2_mu4_MSonly);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_passL2", &L2_mu4_MSonly_EFFS_passL2, &b_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("L2_mu4_MSonly_MB2_noL2_EFFS", &L2_mu4_MSonly_MB2_noL2_EFFS, &b_L2_mu4_MSonly_MB2_noL2_EFFS);
   fChain->SetBranchAddress("L2_mu4_MSonly_cosmic", &L2_mu4_MSonly_cosmic, &b_L2_mu4_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4_MSonly_outOfTime", &L2_mu4_MSonly_outOfTime, &b_L2_mu4_MSonly_outOfTime);
   fChain->SetBranchAddress("L2_mu4_MV", &L2_mu4_MV, &b_L2_mu4_MV);
   fChain->SetBranchAddress("L2_mu4_SiTrk", &L2_mu4_SiTrk, &b_L2_mu4_SiTrk);
   fChain->SetBranchAddress("L2_mu4_Trk_Jpsi", &L2_mu4_Trk_Jpsi, &b_L2_mu4_Trk_Jpsi);
   fChain->SetBranchAddress("L2_mu4_Trk_Jpsi_FS", &L2_mu4_Trk_Jpsi_FS, &b_L2_mu4_Trk_Jpsi_FS);
   fChain->SetBranchAddress("L2_mu4_Trk_Jpsi_loose", &L2_mu4_Trk_Jpsi_loose, &b_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_mu4_Trk_Upsi_FS", &L2_mu4_Trk_Upsi_FS, &b_L2_mu4_Trk_Upsi_FS);
   fChain->SetBranchAddress("L2_mu4_Trk_Upsi_loose_FS", &L2_mu4_Trk_Upsi_loose_FS, &b_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_mu4_Upsimumu_FS", &L2_mu4_Upsimumu_FS, &b_L2_mu4_Upsimumu_FS);
   fChain->SetBranchAddress("L2_mu4_Upsimumu_SiTrk_FS", &L2_mu4_Upsimumu_SiTrk_FS, &b_L2_mu4_Upsimumu_SiTrk_FS);
   fChain->SetBranchAddress("L2_mu4_comm_MSonly_cosmic", &L2_mu4_comm_MSonly_cosmic, &b_L2_mu4_comm_MSonly_cosmic);
   fChain->SetBranchAddress("L2_mu4_comm_cosmic", &L2_mu4_comm_cosmic, &b_L2_mu4_comm_cosmic);
   fChain->SetBranchAddress("L2_mu4_comm_firstempty", &L2_mu4_comm_firstempty, &b_L2_mu4_comm_firstempty);
   fChain->SetBranchAddress("L2_mu4_comm_unpaired_iso", &L2_mu4_comm_unpaired_iso, &b_L2_mu4_comm_unpaired_iso);
   fChain->SetBranchAddress("L2_mu4_cosmic", &L2_mu4_cosmic, &b_L2_mu4_cosmic);
   fChain->SetBranchAddress("L2_mu4_firstempty", &L2_mu4_firstempty, &b_L2_mu4_firstempty);
   fChain->SetBranchAddress("L2_mu4_j20", &L2_mu4_j20, &b_L2_mu4_j20);
   fChain->SetBranchAddress("L2_mu4_j20_jetNoEF", &L2_mu4_j20_jetNoEF, &b_L2_mu4_j20_jetNoEF);
   fChain->SetBranchAddress("L2_mu4_j25", &L2_mu4_j25, &b_L2_mu4_j25);
   fChain->SetBranchAddress("L2_mu4_mu6", &L2_mu4_mu6, &b_L2_mu4_mu6);
   fChain->SetBranchAddress("L2_mu4_muCombTag", &L2_mu4_muCombTag, &b_L2_mu4_muCombTag);
   fChain->SetBranchAddress("L2_mu4_tile", &L2_mu4_tile, &b_L2_mu4_tile);
   fChain->SetBranchAddress("L2_mu4_tile_cosmic", &L2_mu4_tile_cosmic, &b_L2_mu4_tile_cosmic);
   fChain->SetBranchAddress("L2_mu4_unpaired_iso", &L2_mu4_unpaired_iso, &b_L2_mu4_unpaired_iso);
   fChain->SetBranchAddress("L2_mu4mu6_Bmumu", &L2_mu4mu6_Bmumu, &b_L2_mu4mu6_Bmumu);
   fChain->SetBranchAddress("L2_mu4mu6_BmumuX", &L2_mu4mu6_BmumuX, &b_L2_mu4mu6_BmumuX);
   fChain->SetBranchAddress("L2_mu4mu6_DiMu", &L2_mu4mu6_DiMu, &b_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("L2_mu4mu6_Jpsimumu", &L2_mu4mu6_Jpsimumu, &b_L2_mu4mu6_Jpsimumu);
   fChain->SetBranchAddress("L2_mu4mu6_Jpsimumu_IDTrkNoCut", &L2_mu4mu6_Jpsimumu_IDTrkNoCut, &b_L2_mu4mu6_Jpsimumu_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu4mu6_Upsimumu", &L2_mu4mu6_Upsimumu, &b_L2_mu4mu6_Upsimumu);
   fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
   fChain->SetBranchAddress("L2_mu6_Bmumu", &L2_mu6_Bmumu, &b_L2_mu6_Bmumu);
   fChain->SetBranchAddress("L2_mu6_BmumuX", &L2_mu6_BmumuX, &b_L2_mu6_BmumuX);
   fChain->SetBranchAddress("L2_mu6_DiMu", &L2_mu6_DiMu, &b_L2_mu6_DiMu);
   fChain->SetBranchAddress("L2_mu6_Ecut12", &L2_mu6_Ecut12, &b_L2_mu6_Ecut12);
   fChain->SetBranchAddress("L2_mu6_Ecut123", &L2_mu6_Ecut123, &b_L2_mu6_Ecut123);
   fChain->SetBranchAddress("L2_mu6_Ecut13", &L2_mu6_Ecut13, &b_L2_mu6_Ecut13);
   fChain->SetBranchAddress("L2_mu6_Ecut2", &L2_mu6_Ecut2, &b_L2_mu6_Ecut2);
   fChain->SetBranchAddress("L2_mu6_Ecut3", &L2_mu6_Ecut3, &b_L2_mu6_Ecut3);
   fChain->SetBranchAddress("L2_mu6_IDTrkNoCut", &L2_mu6_IDTrkNoCut, &b_L2_mu6_IDTrkNoCut);
   fChain->SetBranchAddress("L2_mu6_Jpsie5e3", &L2_mu6_Jpsie5e3, &b_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("L2_mu6_Jpsie5e3_FS", &L2_mu6_Jpsie5e3_FS, &b_L2_mu6_Jpsie5e3_FS);
   fChain->SetBranchAddress("L2_mu6_Jpsie5e3_SiTrk", &L2_mu6_Jpsie5e3_SiTrk, &b_L2_mu6_Jpsie5e3_SiTrk);
   fChain->SetBranchAddress("L2_mu6_Jpsie5e3_SiTrk_FS", &L2_mu6_Jpsie5e3_SiTrk_FS, &b_L2_mu6_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("L2_mu6_Jpsimumu", &L2_mu6_Jpsimumu, &b_L2_mu6_Jpsimumu);
   fChain->SetBranchAddress("L2_mu6_MG", &L2_mu6_MG, &b_L2_mu6_MG);
   fChain->SetBranchAddress("L2_mu6_MSonly", &L2_mu6_MSonly, &b_L2_mu6_MSonly);
   fChain->SetBranchAddress("L2_mu6_MSonly_Ecut12", &L2_mu6_MSonly_Ecut12, &b_L2_mu6_MSonly_Ecut12);
   fChain->SetBranchAddress("L2_mu6_MSonly_Ecut123", &L2_mu6_MSonly_Ecut123, &b_L2_mu6_MSonly_Ecut123);
   fChain->SetBranchAddress("L2_mu6_MSonly_Ecut13", &L2_mu6_MSonly_Ecut13, &b_L2_mu6_MSonly_Ecut13);
   fChain->SetBranchAddress("L2_mu6_MSonly_Ecut2", &L2_mu6_MSonly_Ecut2, &b_L2_mu6_MSonly_Ecut2);
   fChain->SetBranchAddress("L2_mu6_MSonly_Ecut3", &L2_mu6_MSonly_Ecut3, &b_L2_mu6_MSonly_Ecut3);
   fChain->SetBranchAddress("L2_mu6_MSonly_outOfTime", &L2_mu6_MSonly_outOfTime, &b_L2_mu6_MSonly_outOfTime);
   fChain->SetBranchAddress("L2_mu6_NoAlg", &L2_mu6_NoAlg, &b_L2_mu6_NoAlg);
   fChain->SetBranchAddress("L2_mu6_SiTrk", &L2_mu6_SiTrk, &b_L2_mu6_SiTrk);
   fChain->SetBranchAddress("L2_mu6_Trk_Jpsi", &L2_mu6_Trk_Jpsi, &b_L2_mu6_Trk_Jpsi);
   fChain->SetBranchAddress("L2_mu6_Upsimumu_FS", &L2_mu6_Upsimumu_FS, &b_L2_mu6_Upsimumu_FS);
   fChain->SetBranchAddress("L2_mu6_muCombTag", &L2_mu6_muCombTag, &b_L2_mu6_muCombTag);
   fChain->SetBranchAddress("L2_tau125_loose", &L2_tau125_loose, &b_L2_tau125_loose);
   fChain->SetBranchAddress("L2_tau125_medium", &L2_tau125_medium, &b_L2_tau125_medium);
   fChain->SetBranchAddress("L2_tau12_IDTrkNoCut", &L2_tau12_IDTrkNoCut, &b_L2_tau12_IDTrkNoCut);
   fChain->SetBranchAddress("L2_tau12_loose", &L2_tau12_loose, &b_L2_tau12_loose);
   fChain->SetBranchAddress("L2_tau12_loose_2b15", &L2_tau12_loose_2b15, &b_L2_tau12_loose_2b15);
   fChain->SetBranchAddress("L2_tau12_loose_3j30", &L2_tau12_loose_3j30, &b_L2_tau12_loose_3j30);
   fChain->SetBranchAddress("L2_tau12_loose_EFxe12_noMu", &L2_tau12_loose_EFxe12_noMu, &b_L2_tau12_loose_EFxe12_noMu);
   fChain->SetBranchAddress("L2_tau12_loose_IdScan_EFxe12_noMu", &L2_tau12_loose_IdScan_EFxe12_noMu, &b_L2_tau12_loose_IdScan_EFxe12_noMu);
   fChain->SetBranchAddress("L2_tau12_loose_IdScan_xe15_noMu", &L2_tau12_loose_IdScan_xe15_noMu, &b_L2_tau12_loose_IdScan_xe15_noMu);
   fChain->SetBranchAddress("L2_tau12_loose_e10_loose", &L2_tau12_loose_e10_loose, &b_L2_tau12_loose_e10_loose);
   fChain->SetBranchAddress("L2_tau12_loose_e10_medium", &L2_tau12_loose_e10_medium, &b_L2_tau12_loose_e10_medium);
   fChain->SetBranchAddress("L2_tau12_loose_e10_tight", &L2_tau12_loose_e10_tight, &b_L2_tau12_loose_e10_tight);
   fChain->SetBranchAddress("L2_tau12_loose_mu10", &L2_tau12_loose_mu10, &b_L2_tau12_loose_mu10);
   fChain->SetBranchAddress("L2_tau12_loose_xe15_noMu", &L2_tau12_loose_xe15_noMu, &b_L2_tau12_loose_xe15_noMu);
   fChain->SetBranchAddress("L2_tau12_loose_xe20_noMu", &L2_tau12_loose_xe20_noMu, &b_L2_tau12_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_tau16_loose", &L2_tau16_loose, &b_L2_tau16_loose);
   fChain->SetBranchAddress("L2_tau16_loose_2b15", &L2_tau16_loose_2b15, &b_L2_tau16_loose_2b15);
   fChain->SetBranchAddress("L2_tau16_loose_3j30", &L2_tau16_loose_3j30, &b_L2_tau16_loose_3j30);
   fChain->SetBranchAddress("L2_tau16_loose_e10_loose", &L2_tau16_loose_e10_loose, &b_L2_tau16_loose_e10_loose);
   fChain->SetBranchAddress("L2_tau16_loose_e15_loose", &L2_tau16_loose_e15_loose, &b_L2_tau16_loose_e15_loose);
   fChain->SetBranchAddress("L2_tau16_loose_mu10", &L2_tau16_loose_mu10, &b_L2_tau16_loose_mu10);
   fChain->SetBranchAddress("L2_tau16_loose_mu15", &L2_tau16_loose_mu15, &b_L2_tau16_loose_mu15);
   fChain->SetBranchAddress("L2_tau16_loose_xe20_noMu", &L2_tau16_loose_xe20_noMu, &b_L2_tau16_loose_xe20_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe25_noMu", &L2_tau16_loose_xe25_noMu, &b_L2_tau16_loose_xe25_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe25_tight_noMu", &L2_tau16_loose_xe25_tight_noMu, &b_L2_tau16_loose_xe25_tight_noMu);
   fChain->SetBranchAddress("L2_tau16_loose_xe30_noMu", &L2_tau16_loose_xe30_noMu, &b_L2_tau16_loose_xe30_noMu);
   fChain->SetBranchAddress("L2_tau16_medium", &L2_tau16_medium, &b_L2_tau16_medium);
   fChain->SetBranchAddress("L2_tau16_medium_xe22_noMu", &L2_tau16_medium_xe22_noMu, &b_L2_tau16_medium_xe22_noMu);
   fChain->SetBranchAddress("L2_tau16_medium_xe25_noMu", &L2_tau16_medium_xe25_noMu, &b_L2_tau16_medium_xe25_noMu);
   fChain->SetBranchAddress("L2_tau16_medium_xe25_tight_noMu", &L2_tau16_medium_xe25_tight_noMu, &b_L2_tau16_medium_xe25_tight_noMu);
   fChain->SetBranchAddress("L2_tau20_loose", &L2_tau20_loose, &b_L2_tau20_loose);
   fChain->SetBranchAddress("L2_tau20_loose_xe25_noMu", &L2_tau20_loose_xe25_noMu, &b_L2_tau20_loose_xe25_noMu);
   fChain->SetBranchAddress("L2_tau29_loose", &L2_tau29_loose, &b_L2_tau29_loose);
   fChain->SetBranchAddress("L2_tau29_loose1", &L2_tau29_loose1, &b_L2_tau29_loose1);
   fChain->SetBranchAddress("L2_tau38_loose", &L2_tau38_loose, &b_L2_tau38_loose);
   fChain->SetBranchAddress("L2_tau38_medium", &L2_tau38_medium, &b_L2_tau38_medium);
   fChain->SetBranchAddress("L2_tau50_IDTrkNoCut", &L2_tau50_IDTrkNoCut, &b_L2_tau50_IDTrkNoCut);
   fChain->SetBranchAddress("L2_tau50_loose", &L2_tau50_loose, &b_L2_tau50_loose);
   fChain->SetBranchAddress("L2_tau50_loose_IdScan", &L2_tau50_loose_IdScan, &b_L2_tau50_loose_IdScan);
   fChain->SetBranchAddress("L2_tau50_medium", &L2_tau50_medium, &b_L2_tau50_medium);
   fChain->SetBranchAddress("L2_tau5_empty_larcalib", &L2_tau5_empty_larcalib, &b_L2_tau5_empty_larcalib);
   fChain->SetBranchAddress("L2_tau84_loose", &L2_tau84_loose, &b_L2_tau84_loose);
   fChain->SetBranchAddress("L2_tau84_medium", &L2_tau84_medium, &b_L2_tau84_medium);
   fChain->SetBranchAddress("L2_tauNoCut", &L2_tauNoCut, &b_L2_tauNoCut);
   fChain->SetBranchAddress("L2_tauNoCut_IdScan", &L2_tauNoCut_IdScan, &b_L2_tauNoCut_IdScan);
   fChain->SetBranchAddress("L2_tauNoCut_cosmic", &L2_tauNoCut_cosmic, &b_L2_tauNoCut_cosmic);
   fChain->SetBranchAddress("L2_tauNoCut_firstempty", &L2_tauNoCut_firstempty, &b_L2_tauNoCut_firstempty);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk6_EFxe15_noMu", &L2_tauNoCut_hasTrk6_EFxe15_noMu, &b_L2_tauNoCut_hasTrk6_EFxe15_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk6_IdScan_EFxe15_noMu", &L2_tauNoCut_hasTrk6_IdScan_EFxe15_noMu, &b_L2_tauNoCut_hasTrk6_IdScan_EFxe15_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk6_IdScan_xe20_noMu", &L2_tauNoCut_hasTrk6_IdScan_xe20_noMu, &b_L2_tauNoCut_hasTrk6_IdScan_xe20_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk6_xe20_noMu", &L2_tauNoCut_hasTrk6_xe20_noMu, &b_L2_tauNoCut_hasTrk6_xe20_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk9_xe20_noMu", &L2_tauNoCut_hasTrk9_xe20_noMu, &b_L2_tauNoCut_hasTrk9_xe20_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk_MV", &L2_tauNoCut_hasTrk_MV, &b_L2_tauNoCut_hasTrk_MV);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk_e10_tight", &L2_tauNoCut_hasTrk_e10_tight, &b_L2_tauNoCut_hasTrk_e10_tight);
   fChain->SetBranchAddress("L2_tauNoCut_hasTrk_xe20_noMu", &L2_tauNoCut_hasTrk_xe20_noMu, &b_L2_tauNoCut_hasTrk_xe20_noMu);
   fChain->SetBranchAddress("L2_tauNoCut_unpaired_iso", &L2_tauNoCut_unpaired_iso, &b_L2_tauNoCut_unpaired_iso);
   fChain->SetBranchAddress("L2_tauNoCut_unpaired_noniso", &L2_tauNoCut_unpaired_noniso, &b_L2_tauNoCut_unpaired_noniso);
   fChain->SetBranchAddress("L2_xe12", &L2_xe12, &b_L2_xe12);
   fChain->SetBranchAddress("L2_xe12_loose", &L2_xe12_loose, &b_L2_xe12_loose);
   fChain->SetBranchAddress("L2_xe12_loose_noMu", &L2_xe12_loose_noMu, &b_L2_xe12_loose_noMu);
   fChain->SetBranchAddress("L2_xe12_medium", &L2_xe12_medium, &b_L2_xe12_medium);
   fChain->SetBranchAddress("L2_xe12_medium_noMu", &L2_xe12_medium_noMu, &b_L2_xe12_medium_noMu);
   fChain->SetBranchAddress("L2_xe12_noMu", &L2_xe12_noMu, &b_L2_xe12_noMu);
   fChain->SetBranchAddress("L2_xe15", &L2_xe15, &b_L2_xe15);
   fChain->SetBranchAddress("L2_xe15_medium", &L2_xe15_medium, &b_L2_xe15_medium);
   fChain->SetBranchAddress("L2_xe15_medium_noMu", &L2_xe15_medium_noMu, &b_L2_xe15_medium_noMu);
   fChain->SetBranchAddress("L2_xe15_medium_vfj_noMu", &L2_xe15_medium_vfj_noMu, &b_L2_xe15_medium_vfj_noMu);
   fChain->SetBranchAddress("L2_xe15_noMu", &L2_xe15_noMu, &b_L2_xe15_noMu);
   fChain->SetBranchAddress("L2_xe15_tight_noMu", &L2_xe15_tight_noMu, &b_L2_xe15_tight_noMu);
   fChain->SetBranchAddress("L2_xe15_tight_vfj_noMu", &L2_xe15_tight_vfj_noMu, &b_L2_xe15_tight_vfj_noMu);
   fChain->SetBranchAddress("L2_xe15_unbiased_noMu", &L2_xe15_unbiased_noMu, &b_L2_xe15_unbiased_noMu);
   fChain->SetBranchAddress("L2_xe15_vfj_noMu", &L2_xe15_vfj_noMu, &b_L2_xe15_vfj_noMu);
   fChain->SetBranchAddress("L2_xe17_tight_noMu", &L2_xe17_tight_noMu, &b_L2_xe17_tight_noMu);
   fChain->SetBranchAddress("L2_xe17_tight_vfj_noMu", &L2_xe17_tight_vfj_noMu, &b_L2_xe17_tight_vfj_noMu);
   fChain->SetBranchAddress("L2_xe20", &L2_xe20, &b_L2_xe20);
   fChain->SetBranchAddress("L2_xe20_noMu", &L2_xe20_noMu, &b_L2_xe20_noMu);
   fChain->SetBranchAddress("L2_xe20_vfj_noMu", &L2_xe20_vfj_noMu, &b_L2_xe20_vfj_noMu);
   fChain->SetBranchAddress("L2_xe22_loose_noMu", &L2_xe22_loose_noMu, &b_L2_xe22_loose_noMu);
   fChain->SetBranchAddress("L2_xe22_tight_noMu", &L2_xe22_tight_noMu, &b_L2_xe22_tight_noMu);
   fChain->SetBranchAddress("L2_xe22_tight_vfj_noMu", &L2_xe22_tight_vfj_noMu, &b_L2_xe22_tight_vfj_noMu);
   fChain->SetBranchAddress("L2_xe25", &L2_xe25, &b_L2_xe25);
   fChain->SetBranchAddress("L2_xe25_noMu", &L2_xe25_noMu, &b_L2_xe25_noMu);
   fChain->SetBranchAddress("L2_xe27_tight_noMu", &L2_xe27_tight_noMu, &b_L2_xe27_tight_noMu);
   fChain->SetBranchAddress("L2_xe30", &L2_xe30, &b_L2_xe30);
   fChain->SetBranchAddress("L2_xe30_allL1", &L2_xe30_allL1, &b_L2_xe30_allL1);
   fChain->SetBranchAddress("L2_xe30_allL1_FEB", &L2_xe30_allL1_FEB, &b_L2_xe30_allL1_FEB);
   fChain->SetBranchAddress("L2_xe30_allL1_allCells", &L2_xe30_allL1_allCells, &b_L2_xe30_allL1_allCells);
   fChain->SetBranchAddress("L2_xe30_allL1_noMu", &L2_xe30_allL1_noMu, &b_L2_xe30_allL1_noMu);
   fChain->SetBranchAddress("L2_xe30_noMu", &L2_xe30_noMu, &b_L2_xe30_noMu);
   fChain->SetBranchAddress("L2_xe32_tight_noMu", &L2_xe32_tight_noMu, &b_L2_xe32_tight_noMu);
   fChain->SetBranchAddress("L2_xe35", &L2_xe35, &b_L2_xe35);
   fChain->SetBranchAddress("L2_xe35_noMu", &L2_xe35_noMu, &b_L2_xe35_noMu);
   fChain->SetBranchAddress("L2_xe40_medium", &L2_xe40_medium, &b_L2_xe40_medium);
   fChain->SetBranchAddress("L2_xe40_medium_noMu", &L2_xe40_medium_noMu, &b_L2_xe40_medium_noMu);
   fChain->SetBranchAddress("L2_xe45", &L2_xe45, &b_L2_xe45);
   fChain->SetBranchAddress("L2_xe45_noMu", &L2_xe45_noMu, &b_L2_xe45_noMu);
   fChain->SetBranchAddress("L2_xe60_medium", &L2_xe60_medium, &b_L2_xe60_medium);
   fChain->SetBranchAddress("L2_xe60_medium_noMu", &L2_xe60_medium_noMu, &b_L2_xe60_medium_noMu);
   fChain->SetBranchAddress("evt_calcVars_numGoodVertices", &evt_calcVars_numGoodVertices, &b_evt_calcVars_numGoodVertices);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_OQ", &el_OQ, &b_el_OQ);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_OQRecalc", &el_OQRecalc, &b_el_OQRecalc);
   fChain->SetBranchAddress("el_type", &el_type, &b_el_type);
   fChain->SetBranchAddress("el_origin", &el_origin, &b_el_origin);
   fChain->SetBranchAddress("el_typebkg", &el_typebkg, &b_el_typebkg);
   fChain->SetBranchAddress("el_originbkg", &el_originbkg, &b_el_originbkg);
   fChain->SetBranchAddress("el_truth_E", &el_truth_E, &b_el_truth_E);
   fChain->SetBranchAddress("el_truth_pt", &el_truth_pt, &b_el_truth_pt);
   fChain->SetBranchAddress("el_truth_eta", &el_truth_eta, &b_el_truth_eta);
   fChain->SetBranchAddress("el_truth_phi", &el_truth_phi, &b_el_truth_phi);
   fChain->SetBranchAddress("el_truth_type", &el_truth_type, &b_el_truth_type);
   fChain->SetBranchAddress("el_truth_status", &el_truth_status, &b_el_truth_status);
   fChain->SetBranchAddress("el_truth_barcode", &el_truth_barcode, &b_el_truth_barcode);
   fChain->SetBranchAddress("el_truth_mothertype", &el_truth_mothertype, &b_el_truth_mothertype);
   fChain->SetBranchAddress("el_truth_motherbarcode", &el_truth_motherbarcode, &b_el_truth_motherbarcode);
   fChain->SetBranchAddress("el_truth_hasHardBrem", &el_truth_hasHardBrem, &b_el_truth_hasHardBrem);
   fChain->SetBranchAddress("el_truth_index", &el_truth_index, &b_el_truth_index);
   fChain->SetBranchAddress("el_truth_matched", &el_truth_matched, &b_el_truth_matched);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_goodOQ", &el_goodOQ, &b_el_goodOQ);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone15", &el_Etcone15, &b_el_Etcone15);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone25", &el_Etcone25, &b_el_Etcone25);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone35", &el_Etcone35, &b_el_Etcone35);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone20", &el_ptcone20, &b_el_ptcone20);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_ptcone40", &el_ptcone40, &b_el_ptcone40);
   fChain->SetBranchAddress("el_nucone20", &el_nucone20, &b_el_nucone20);
   fChain->SetBranchAddress("el_nucone30", &el_nucone30, &b_el_nucone30);
   fChain->SetBranchAddress("el_nucone40", &el_nucone40, &b_el_nucone40);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_hasconv", &el_hasconv, &b_el_hasconv);
   fChain->SetBranchAddress("el_convvtxx", &el_convvtxx, &b_el_convvtxx);
   fChain->SetBranchAddress("el_convvtxy", &el_convvtxy, &b_el_convvtxy);
   fChain->SetBranchAddress("el_convvtxz", &el_convvtxz, &b_el_convvtxz);
   fChain->SetBranchAddress("el_Rconv", &el_Rconv, &b_el_Rconv);
   fChain->SetBranchAddress("el_zconv", &el_zconv, &b_el_zconv);
   fChain->SetBranchAddress("el_convvtxchi2", &el_convvtxchi2, &b_el_convvtxchi2);
   fChain->SetBranchAddress("el_pt1conv", &el_pt1conv, &b_el_pt1conv);
   fChain->SetBranchAddress("el_convtrk1nBLHits", &el_convtrk1nBLHits, &b_el_convtrk1nBLHits);
   fChain->SetBranchAddress("el_convtrk1nPixHits", &el_convtrk1nPixHits, &b_el_convtrk1nPixHits);
   fChain->SetBranchAddress("el_convtrk1nSCTHits", &el_convtrk1nSCTHits, &b_el_convtrk1nSCTHits);
   fChain->SetBranchAddress("el_convtrk1nTRTHits", &el_convtrk1nTRTHits, &b_el_convtrk1nTRTHits);
   fChain->SetBranchAddress("el_pt2conv", &el_pt2conv, &b_el_pt2conv);
   fChain->SetBranchAddress("el_convtrk2nBLHits", &el_convtrk2nBLHits, &b_el_convtrk2nBLHits);
   fChain->SetBranchAddress("el_convtrk2nPixHits", &el_convtrk2nPixHits, &b_el_convtrk2nPixHits);
   fChain->SetBranchAddress("el_convtrk2nSCTHits", &el_convtrk2nSCTHits, &b_el_convtrk2nSCTHits);
   fChain->SetBranchAddress("el_convtrk2nTRTHits", &el_convtrk2nTRTHits, &b_el_convtrk2nTRTHits);
   fChain->SetBranchAddress("el_ptconv", &el_ptconv, &b_el_ptconv);
   fChain->SetBranchAddress("el_pzconv", &el_pzconv, &b_el_pzconv);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_rawcl_E", &el_rawcl_E, &b_el_rawcl_E);
   fChain->SetBranchAddress("el_rawcl_pt", &el_rawcl_pt, &b_el_rawcl_pt);
   fChain->SetBranchAddress("el_rawcl_eta", &el_rawcl_eta, &b_el_rawcl_eta);
   fChain->SetBranchAddress("el_rawcl_phi", &el_rawcl_phi, &b_el_rawcl_phi);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_TRTHighTHitsRatioOutliers", &el_TRTHighTHitsRatioOutliers, &b_el_TRTHighTHitsRatioOutliers);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_EF_index", &el_EF_index, &b_el_EF_index);
   fChain->SetBranchAddress("el_L2_dr", &el_L2_dr, &b_el_L2_dr);
   fChain->SetBranchAddress("el_L2_index", &el_L2_index, &b_el_L2_index);
   fChain->SetBranchAddress("el_L1_dr", &el_L1_dr, &b_el_L1_dr);
   fChain->SetBranchAddress("el_L1_index", &el_L1_index, &b_el_L1_index);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_E", &ph_E, &b_ph_E);
   fChain->SetBranchAddress("ph_Et", &ph_Et, &b_ph_Et);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_m", &ph_m, &b_ph_m);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_px", &ph_px, &b_ph_px);
   fChain->SetBranchAddress("ph_py", &ph_py, &b_ph_py);
   fChain->SetBranchAddress("ph_pz", &ph_pz, &b_ph_pz);
   fChain->SetBranchAddress("ph_author", &ph_author, &b_ph_author);
   fChain->SetBranchAddress("ph_isRecovered", &ph_isRecovered, &b_ph_isRecovered);
   fChain->SetBranchAddress("ph_isEM", &ph_isEM, &b_ph_isEM);
   fChain->SetBranchAddress("ph_OQ", &ph_OQ, &b_ph_OQ);
   fChain->SetBranchAddress("ph_OQRecalc", &ph_OQRecalc, &b_ph_OQRecalc);
   fChain->SetBranchAddress("ph_convFlag", &ph_convFlag, &b_ph_convFlag);
   fChain->SetBranchAddress("ph_isConv", &ph_isConv, &b_ph_isConv);
   fChain->SetBranchAddress("ph_nConv", &ph_nConv, &b_ph_nConv);
   fChain->SetBranchAddress("ph_nSingleTrackConv", &ph_nSingleTrackConv, &b_ph_nSingleTrackConv);
   fChain->SetBranchAddress("ph_nDoubleTrackConv", &ph_nDoubleTrackConv, &b_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("ph_truth_deltaRRecPhoton", &ph_truth_deltaRRecPhoton, &b_ph_truth_deltaRRecPhoton);
   fChain->SetBranchAddress("ph_truth_E", &ph_truth_E, &b_ph_truth_E);
   fChain->SetBranchAddress("ph_truth_pt", &ph_truth_pt, &b_ph_truth_pt);
   fChain->SetBranchAddress("ph_truth_eta", &ph_truth_eta, &b_ph_truth_eta);
   fChain->SetBranchAddress("ph_truth_phi", &ph_truth_phi, &b_ph_truth_phi);
   fChain->SetBranchAddress("ph_truth_type", &ph_truth_type, &b_ph_truth_type);
   fChain->SetBranchAddress("ph_truth_status", &ph_truth_status, &b_ph_truth_status);
   fChain->SetBranchAddress("ph_truth_barcode", &ph_truth_barcode, &b_ph_truth_barcode);
   fChain->SetBranchAddress("ph_truth_mothertype", &ph_truth_mothertype, &b_ph_truth_mothertype);
   fChain->SetBranchAddress("ph_truth_motherbarcode", &ph_truth_motherbarcode, &b_ph_truth_motherbarcode);
   fChain->SetBranchAddress("ph_truth_index", &ph_truth_index, &b_ph_truth_index);
   fChain->SetBranchAddress("ph_truth_matched", &ph_truth_matched, &b_ph_truth_matched);
   fChain->SetBranchAddress("ph_loose", &ph_loose, &b_ph_loose);
   fChain->SetBranchAddress("ph_tight", &ph_tight, &b_ph_tight);
   fChain->SetBranchAddress("ph_tightIso", &ph_tightIso, &b_ph_tightIso);
   fChain->SetBranchAddress("ph_goodOQ", &ph_goodOQ, &b_ph_goodOQ);
   fChain->SetBranchAddress("ph_Ethad", &ph_Ethad, &b_ph_Ethad);
   fChain->SetBranchAddress("ph_Ethad1", &ph_Ethad1, &b_ph_Ethad1);
   fChain->SetBranchAddress("ph_f1", &ph_f1, &b_ph_f1);
   fChain->SetBranchAddress("ph_f1core", &ph_f1core, &b_ph_f1core);
   fChain->SetBranchAddress("ph_Emins1", &ph_Emins1, &b_ph_Emins1);
   fChain->SetBranchAddress("ph_fside", &ph_fside, &b_ph_fside);
   fChain->SetBranchAddress("ph_Emax2", &ph_Emax2, &b_ph_Emax2);
   fChain->SetBranchAddress("ph_ws3", &ph_ws3, &b_ph_ws3);
   fChain->SetBranchAddress("ph_wstot", &ph_wstot, &b_ph_wstot);
   fChain->SetBranchAddress("ph_E132", &ph_E132, &b_ph_E132);
   fChain->SetBranchAddress("ph_E1152", &ph_E1152, &b_ph_E1152);
   fChain->SetBranchAddress("ph_emaxs1", &ph_emaxs1, &b_ph_emaxs1);
   fChain->SetBranchAddress("ph_E233", &ph_E233, &b_ph_E233);
   fChain->SetBranchAddress("ph_E237", &ph_E237, &b_ph_E237);
   fChain->SetBranchAddress("ph_E277", &ph_E277, &b_ph_E277);
   fChain->SetBranchAddress("ph_weta2", &ph_weta2, &b_ph_weta2);
   fChain->SetBranchAddress("ph_rphiallcalo", &ph_rphiallcalo, &b_ph_rphiallcalo);
   fChain->SetBranchAddress("ph_Etcone45", &ph_Etcone45, &b_ph_Etcone45);
   fChain->SetBranchAddress("ph_Etcone15", &ph_Etcone15, &b_ph_Etcone15);
   fChain->SetBranchAddress("ph_Etcone20", &ph_Etcone20, &b_ph_Etcone20);
   fChain->SetBranchAddress("ph_Etcone25", &ph_Etcone25, &b_ph_Etcone25);
   fChain->SetBranchAddress("ph_Etcone30", &ph_Etcone30, &b_ph_Etcone30);
   fChain->SetBranchAddress("ph_Etcone35", &ph_Etcone35, &b_ph_Etcone35);
   fChain->SetBranchAddress("ph_Etcone40", &ph_Etcone40, &b_ph_Etcone40);
   fChain->SetBranchAddress("ph_ptcone20", &ph_ptcone20, &b_ph_ptcone20);
   fChain->SetBranchAddress("ph_ptcone30", &ph_ptcone30, &b_ph_ptcone30);
   fChain->SetBranchAddress("ph_ptcone40", &ph_ptcone40, &b_ph_ptcone40);
   fChain->SetBranchAddress("ph_nucone20", &ph_nucone20, &b_ph_nucone20);
   fChain->SetBranchAddress("ph_nucone30", &ph_nucone30, &b_ph_nucone30);
   fChain->SetBranchAddress("ph_nucone40", &ph_nucone40, &b_ph_nucone40);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
   fChain->SetBranchAddress("ph_Es0", &ph_Es0, &b_ph_Es0);
   fChain->SetBranchAddress("ph_etas0", &ph_etas0, &b_ph_etas0);
   fChain->SetBranchAddress("ph_phis0", &ph_phis0, &b_ph_phis0);
   fChain->SetBranchAddress("ph_Es1", &ph_Es1, &b_ph_Es1);
   fChain->SetBranchAddress("ph_etas1", &ph_etas1, &b_ph_etas1);
   fChain->SetBranchAddress("ph_phis1", &ph_phis1, &b_ph_phis1);
   fChain->SetBranchAddress("ph_Es2", &ph_Es2, &b_ph_Es2);
   fChain->SetBranchAddress("ph_etas2", &ph_etas2, &b_ph_etas2);
   fChain->SetBranchAddress("ph_phis2", &ph_phis2, &b_ph_phis2);
   fChain->SetBranchAddress("ph_Es3", &ph_Es3, &b_ph_Es3);
   fChain->SetBranchAddress("ph_etas3", &ph_etas3, &b_ph_etas3);
   fChain->SetBranchAddress("ph_phis3", &ph_phis3, &b_ph_phis3);
   fChain->SetBranchAddress("ph_truth_isConv", &ph_truth_isConv, &b_ph_truth_isConv);
   fChain->SetBranchAddress("ph_truth_isBrem", &ph_truth_isBrem, &b_ph_truth_isBrem);
   fChain->SetBranchAddress("ph_truth_isFromHardProc", &ph_truth_isFromHardProc, &b_ph_truth_isFromHardProc);
   fChain->SetBranchAddress("ph_truth_isPhotonFromHardProc", &ph_truth_isPhotonFromHardProc, &b_ph_truth_isPhotonFromHardProc);
   fChain->SetBranchAddress("cl_n", &cl_n, &b_cl_n);
   fChain->SetBranchAddress("cl_pt", &cl_pt, &b_cl_pt);
   fChain->SetBranchAddress("cl_eta", &cl_eta, &b_cl_eta);
   fChain->SetBranchAddress("cl_phi", &cl_phi, &b_cl_phi);
   fChain->SetBranchAddress("jet_n", &jet_n, &b_jet_n);
   fChain->SetBranchAddress("jet_E", &jet_E, &b_jet_E);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_m", &jet_m, &b_jet_m);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_EtaOrigin", &jet_EtaOrigin, &b_jet_EtaOrigin);
   fChain->SetBranchAddress("jet_PhiOrigin", &jet_PhiOrigin, &b_jet_PhiOrigin);
   fChain->SetBranchAddress("jet_MOrigin", &jet_MOrigin, &b_jet_MOrigin);
   fChain->SetBranchAddress("jet_EtaOriginEM", &jet_EtaOriginEM, &b_jet_EtaOriginEM);
   fChain->SetBranchAddress("jet_PhiOriginEM", &jet_PhiOriginEM, &b_jet_PhiOriginEM);
   fChain->SetBranchAddress("jet_MOriginEM", &jet_MOriginEM, &b_jet_MOriginEM);
   fChain->SetBranchAddress("jet_WIDTH", &jet_WIDTH, &b_jet_WIDTH);
   fChain->SetBranchAddress("jet_n90", &jet_n90, &b_jet_n90);
   fChain->SetBranchAddress("jet_Timing", &jet_Timing, &b_jet_Timing);
   fChain->SetBranchAddress("jet_LArQuality", &jet_LArQuality, &b_jet_LArQuality);
   fChain->SetBranchAddress("jet_nTrk", &jet_nTrk, &b_jet_nTrk);
   fChain->SetBranchAddress("jet_sumPtTrk", &jet_sumPtTrk, &b_jet_sumPtTrk);
   fChain->SetBranchAddress("jet_OriginIndex", &jet_OriginIndex, &b_jet_OriginIndex);
   fChain->SetBranchAddress("jet_HECQuality", &jet_HECQuality, &b_jet_HECQuality);
   fChain->SetBranchAddress("jet_NegativeE", &jet_NegativeE, &b_jet_NegativeE);
   fChain->SetBranchAddress("jet_BCH_CORR_CELL", &jet_BCH_CORR_CELL, &b_jet_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_BCH_CORR_DOTX", &jet_BCH_CORR_DOTX, &b_jet_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_BCH_CORR_JET", &jet_BCH_CORR_JET, &b_jet_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_BCH_CORR_JET_FORCELL", &jet_BCH_CORR_JET_FORCELL, &b_jet_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_ENG_BAD_CELLS", &jet_ENG_BAD_CELLS, &b_jet_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_N_BAD_CELLS", &jet_N_BAD_CELLS, &b_jet_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_N_BAD_CELLS_CORR", &jet_N_BAD_CELLS_CORR, &b_jet_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_BAD_CELLS_CORR_E", &jet_BAD_CELLS_CORR_E, &b_jet_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_SamplingMax", &jet_SamplingMax, &b_jet_SamplingMax);
   fChain->SetBranchAddress("jet_fracSamplingMax", &jet_fracSamplingMax, &b_jet_fracSamplingMax);
   fChain->SetBranchAddress("jet_hecf", &jet_hecf, &b_jet_hecf);
   fChain->SetBranchAddress("jet_tgap3f", &jet_tgap3f, &b_jet_tgap3f);
   fChain->SetBranchAddress("jet_isUgly", &jet_isUgly, &b_jet_isUgly);
   fChain->SetBranchAddress("jet_isBadLoose", &jet_isBadLoose, &b_jet_isBadLoose);
   fChain->SetBranchAddress("jet_isBadTight", &jet_isBadTight, &b_jet_isBadTight);
   fChain->SetBranchAddress("jet_emfrac", &jet_emfrac, &b_jet_emfrac);
   fChain->SetBranchAddress("jet_Offset", &jet_Offset, &b_jet_Offset);
   fChain->SetBranchAddress("jet_EMJES", &jet_EMJES, &b_jet_EMJES);
   fChain->SetBranchAddress("jet_EMJES_EtaCorr", &jet_EMJES_EtaCorr, &b_jet_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_EMJESnooffset", &jet_EMJESnooffset, &b_jet_EMJESnooffset);
   fChain->SetBranchAddress("jet_GCWJES", &jet_GCWJES, &b_jet_GCWJES);
   fChain->SetBranchAddress("jet_GCWJES_EtaCorr", &jet_GCWJES_EtaCorr, &b_jet_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_CB", &jet_CB, &b_jet_CB);
   fChain->SetBranchAddress("jet_emscale_E", &jet_emscale_E, &b_jet_emscale_E);
   fChain->SetBranchAddress("jet_emscale_pt", &jet_emscale_pt, &b_jet_emscale_pt);
   fChain->SetBranchAddress("jet_emscale_m", &jet_emscale_m, &b_jet_emscale_m);
   fChain->SetBranchAddress("jet_emscale_eta", &jet_emscale_eta, &b_jet_emscale_eta);
   fChain->SetBranchAddress("jet_emscale_phi", &jet_emscale_phi, &b_jet_emscale_phi);
   fChain->SetBranchAddress("jet_flavor_weight_TrackCounting2D", &jet_flavor_weight_TrackCounting2D, &b_jet_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("jet_flavor_weight_JetProb", &jet_flavor_weight_JetProb, &b_jet_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_flavor_weight_IP1D", &jet_flavor_weight_IP1D, &b_jet_flavor_weight_IP1D);
   fChain->SetBranchAddress("jet_flavor_weight_IP2D", &jet_flavor_weight_IP2D, &b_jet_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_flavor_weight_IP3D", &jet_flavor_weight_IP3D, &b_jet_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_flavor_weight_SV0", &jet_flavor_weight_SV0, &b_jet_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_flavor_weight_SV1", &jet_flavor_weight_SV1, &b_jet_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_flavor_weight_SV2", &jet_flavor_weight_SV2, &b_jet_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_flavor_weight_JetFitterTag", &jet_flavor_weight_JetFitterTag, &b_jet_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("jet_flavor_weight_JetFitterCOMB", &jet_flavor_weight_JetFitterCOMB, &b_jet_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("jet_flavor_weight_JetFitterTagNN", &jet_flavor_weight_JetFitterTagNN, &b_jet_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_flavor_weight_JetFitterCOMBNN", &jet_flavor_weight_JetFitterCOMBNN, &b_jet_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_flavor_weight_SoftMuonTag", &jet_flavor_weight_SoftMuonTag, &b_jet_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_flavor_weight_SoftElectronTag", &jet_flavor_weight_SoftElectronTag, &b_jet_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("jet_flavor_weight_IP3DSV1", &jet_flavor_weight_IP3DSV1, &b_jet_flavor_weight_IP3DSV1);
   fChain->SetBranchAddress("jet_el_dr", &jet_el_dr, &b_jet_el_dr);
   fChain->SetBranchAddress("jet_el_matched", &jet_el_matched, &b_jet_el_matched);
   fChain->SetBranchAddress("jet_mu_dr", &jet_mu_dr, &b_jet_mu_dr);
   fChain->SetBranchAddress("jet_mu_matched", &jet_mu_matched, &b_jet_mu_matched);
   fChain->SetBranchAddress("jet_L1_dr", &jet_L1_dr, &b_jet_L1_dr);
   fChain->SetBranchAddress("jet_L1_matched", &jet_L1_matched, &b_jet_L1_matched);
   fChain->SetBranchAddress("jet_L2_dr", &jet_L2_dr, &b_jet_L2_dr);
   fChain->SetBranchAddress("jet_L2_matched", &jet_L2_matched, &b_jet_L2_matched);
   fChain->SetBranchAddress("jet_EF_dr", &jet_EF_dr, &b_jet_EF_dr);
   fChain->SetBranchAddress("jet_EF_matched", &jet_EF_matched, &b_jet_EF_matched);
   fChain->SetBranchAddress("jet_elAssoc_index", &jet_elAssoc_index, &b_jet_elAssoc_index);
   fChain->SetBranchAddress("jet_tauAssoc_index", &jet_tauAssoc_index, &b_jet_tauAssoc_index);
   fChain->SetBranchAddress("jet_truthAssoc_index", &jet_truthAssoc_index, &b_jet_truthAssoc_index);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_n", &jet_AntiKt4TopoEM_n, &b_jet_AntiKt4TopoEM_n);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_E", &jet_AntiKt4TopoEM_E, &b_jet_AntiKt4TopoEM_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_pt", &jet_AntiKt4TopoEM_pt, &b_jet_AntiKt4TopoEM_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_m", &jet_AntiKt4TopoEM_m, &b_jet_AntiKt4TopoEM_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_eta", &jet_AntiKt4TopoEM_eta, &b_jet_AntiKt4TopoEM_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_phi", &jet_AntiKt4TopoEM_phi, &b_jet_AntiKt4TopoEM_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EtaOrigin", &jet_AntiKt4TopoEM_EtaOrigin, &b_jet_AntiKt4TopoEM_EtaOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_PhiOrigin", &jet_AntiKt4TopoEM_PhiOrigin, &b_jet_AntiKt4TopoEM_PhiOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MOrigin", &jet_AntiKt4TopoEM_MOrigin, &b_jet_AntiKt4TopoEM_MOrigin);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EtaOriginEM", &jet_AntiKt4TopoEM_EtaOriginEM, &b_jet_AntiKt4TopoEM_EtaOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_PhiOriginEM", &jet_AntiKt4TopoEM_PhiOriginEM, &b_jet_AntiKt4TopoEM_PhiOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MOriginEM", &jet_AntiKt4TopoEM_MOriginEM, &b_jet_AntiKt4TopoEM_MOriginEM);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_WIDTH", &jet_AntiKt4TopoEM_WIDTH, &b_jet_AntiKt4TopoEM_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_n90", &jet_AntiKt4TopoEM_n90, &b_jet_AntiKt4TopoEM_n90);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_Timing", &jet_AntiKt4TopoEM_Timing, &b_jet_AntiKt4TopoEM_Timing);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_LArQuality", &jet_AntiKt4TopoEM_LArQuality, &b_jet_AntiKt4TopoEM_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_nTrk", &jet_AntiKt4TopoEM_nTrk, &b_jet_AntiKt4TopoEM_nTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_sumPtTrk", &jet_AntiKt4TopoEM_sumPtTrk, &b_jet_AntiKt4TopoEM_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_OriginIndex", &jet_AntiKt4TopoEM_OriginIndex, &b_jet_AntiKt4TopoEM_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_HECQuality", &jet_AntiKt4TopoEM_HECQuality, &b_jet_AntiKt4TopoEM_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_NegativeE", &jet_AntiKt4TopoEM_NegativeE, &b_jet_AntiKt4TopoEM_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_BCH_CORR_CELL", &jet_AntiKt4TopoEM_BCH_CORR_CELL, &b_jet_AntiKt4TopoEM_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_BCH_CORR_DOTX", &jet_AntiKt4TopoEM_BCH_CORR_DOTX, &b_jet_AntiKt4TopoEM_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_BCH_CORR_JET", &jet_AntiKt4TopoEM_BCH_CORR_JET, &b_jet_AntiKt4TopoEM_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL", &jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_ENG_BAD_CELLS", &jet_AntiKt4TopoEM_ENG_BAD_CELLS, &b_jet_AntiKt4TopoEM_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_N_BAD_CELLS", &jet_AntiKt4TopoEM_N_BAD_CELLS, &b_jet_AntiKt4TopoEM_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_N_BAD_CELLS_CORR", &jet_AntiKt4TopoEM_N_BAD_CELLS_CORR, &b_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_BAD_CELLS_CORR_E", &jet_AntiKt4TopoEM_BAD_CELLS_CORR_E, &b_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_SamplingMax", &jet_AntiKt4TopoEM_SamplingMax, &b_jet_AntiKt4TopoEM_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_fracSamplingMax", &jet_AntiKt4TopoEM_fracSamplingMax, &b_jet_AntiKt4TopoEM_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_hecf", &jet_AntiKt4TopoEM_hecf, &b_jet_AntiKt4TopoEM_hecf);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_tgap3f", &jet_AntiKt4TopoEM_tgap3f, &b_jet_AntiKt4TopoEM_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_isUgly", &jet_AntiKt4TopoEM_isUgly, &b_jet_AntiKt4TopoEM_isUgly);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_isBadLoose", &jet_AntiKt4TopoEM_isBadLoose, &b_jet_AntiKt4TopoEM_isBadLoose);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_isBadTight", &jet_AntiKt4TopoEM_isBadTight, &b_jet_AntiKt4TopoEM_isBadTight);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emfrac", &jet_AntiKt4TopoEM_emfrac, &b_jet_AntiKt4TopoEM_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_Offset", &jet_AntiKt4TopoEM_Offset, &b_jet_AntiKt4TopoEM_Offset);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EMJES", &jet_AntiKt4TopoEM_EMJES, &b_jet_AntiKt4TopoEM_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EMJES_EtaCorr", &jet_AntiKt4TopoEM_EMJES_EtaCorr, &b_jet_AntiKt4TopoEM_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EMJESnooffset", &jet_AntiKt4TopoEM_EMJESnooffset, &b_jet_AntiKt4TopoEM_EMJESnooffset);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_GCWJES", &jet_AntiKt4TopoEM_GCWJES, &b_jet_AntiKt4TopoEM_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_GCWJES_EtaCorr", &jet_AntiKt4TopoEM_GCWJES_EtaCorr, &b_jet_AntiKt4TopoEM_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_CB", &jet_AntiKt4TopoEM_CB, &b_jet_AntiKt4TopoEM_CB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emscale_E", &jet_AntiKt4TopoEM_emscale_E, &b_jet_AntiKt4TopoEM_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emscale_pt", &jet_AntiKt4TopoEM_emscale_pt, &b_jet_AntiKt4TopoEM_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emscale_m", &jet_AntiKt4TopoEM_emscale_m, &b_jet_AntiKt4TopoEM_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emscale_eta", &jet_AntiKt4TopoEM_emscale_eta, &b_jet_AntiKt4TopoEM_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_emscale_phi", &jet_AntiKt4TopoEM_emscale_phi, &b_jet_AntiKt4TopoEM_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D", &jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D, &b_jet_AntiKt4TopoEM_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_JetProb", &jet_AntiKt4TopoEM_flavor_weight_JetProb, &b_jet_AntiKt4TopoEM_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_IP1D", &jet_AntiKt4TopoEM_flavor_weight_IP1D, &b_jet_AntiKt4TopoEM_flavor_weight_IP1D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_IP2D", &jet_AntiKt4TopoEM_flavor_weight_IP2D, &b_jet_AntiKt4TopoEM_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_IP3D", &jet_AntiKt4TopoEM_flavor_weight_IP3D, &b_jet_AntiKt4TopoEM_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_SV0", &jet_AntiKt4TopoEM_flavor_weight_SV0, &b_jet_AntiKt4TopoEM_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_SV1", &jet_AntiKt4TopoEM_flavor_weight_SV1, &b_jet_AntiKt4TopoEM_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_SV2", &jet_AntiKt4TopoEM_flavor_weight_SV2, &b_jet_AntiKt4TopoEM_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_JetFitterTag", &jet_AntiKt4TopoEM_flavor_weight_JetFitterTag, &b_jet_AntiKt4TopoEM_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB", &jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB, &b_jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN", &jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN, &b_jet_AntiKt4TopoEM_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN", &jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt4TopoEM_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag", &jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag, &b_jet_AntiKt4TopoEM_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag", &jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag, &b_jet_AntiKt4TopoEM_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_flavor_weight_IP3DSV1", &jet_AntiKt4TopoEM_flavor_weight_IP3DSV1, &b_jet_AntiKt4TopoEM_flavor_weight_IP3DSV1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_el_dr", &jet_AntiKt4TopoEM_el_dr, &b_jet_AntiKt4TopoEM_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_el_matched", &jet_AntiKt4TopoEM_el_matched, &b_jet_AntiKt4TopoEM_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_mu_dr", &jet_AntiKt4TopoEM_mu_dr, &b_jet_AntiKt4TopoEM_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_mu_matched", &jet_AntiKt4TopoEM_mu_matched, &b_jet_AntiKt4TopoEM_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_L1_dr", &jet_AntiKt4TopoEM_L1_dr, &b_jet_AntiKt4TopoEM_L1_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_L1_matched", &jet_AntiKt4TopoEM_L1_matched, &b_jet_AntiKt4TopoEM_L1_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_L2_dr", &jet_AntiKt4TopoEM_L2_dr, &b_jet_AntiKt4TopoEM_L2_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_L2_matched", &jet_AntiKt4TopoEM_L2_matched, &b_jet_AntiKt4TopoEM_L2_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EF_dr", &jet_AntiKt4TopoEM_EF_dr, &b_jet_AntiKt4TopoEM_EF_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_EF_matched", &jet_AntiKt4TopoEM_EF_matched, &b_jet_AntiKt4TopoEM_EF_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_elAssoc_index", &jet_AntiKt4TopoEM_elAssoc_index, &b_jet_AntiKt4TopoEM_elAssoc_index);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_tauAssoc_index", &jet_AntiKt4TopoEM_tauAssoc_index, &b_jet_AntiKt4TopoEM_tauAssoc_index);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_truthAssoc_index", &jet_AntiKt4TopoEM_truthAssoc_index, &b_jet_AntiKt4TopoEM_truthAssoc_index);
   fChain->SetBranchAddress("mu_muid_n", &mu_muid_n, &b_mu_muid_n);
   fChain->SetBranchAddress("mu_muid_E", &mu_muid_E, &b_mu_muid_E);
   fChain->SetBranchAddress("mu_muid_pt", &mu_muid_pt, &b_mu_muid_pt);
   fChain->SetBranchAddress("mu_muid_m", &mu_muid_m, &b_mu_muid_m);
   fChain->SetBranchAddress("mu_muid_eta", &mu_muid_eta, &b_mu_muid_eta);
   fChain->SetBranchAddress("mu_muid_phi", &mu_muid_phi, &b_mu_muid_phi);
   fChain->SetBranchAddress("mu_muid_px", &mu_muid_px, &b_mu_muid_px);
   fChain->SetBranchAddress("mu_muid_py", &mu_muid_py, &b_mu_muid_py);
   fChain->SetBranchAddress("mu_muid_pz", &mu_muid_pz, &b_mu_muid_pz);
   fChain->SetBranchAddress("mu_muid_charge", &mu_muid_charge, &b_mu_muid_charge);
   fChain->SetBranchAddress("mu_muid_allauthor", &mu_muid_allauthor, &b_mu_muid_allauthor);
   fChain->SetBranchAddress("mu_muid_author", &mu_muid_author, &b_mu_muid_author);
   fChain->SetBranchAddress("mu_muid_beta", &mu_muid_beta, &b_mu_muid_beta);
   fChain->SetBranchAddress("mu_muid_isMuonLikelihood", &mu_muid_isMuonLikelihood, &b_mu_muid_isMuonLikelihood);
   fChain->SetBranchAddress("mu_muid_matchchi2", &mu_muid_matchchi2, &b_mu_muid_matchchi2);
   fChain->SetBranchAddress("mu_muid_matchndof", &mu_muid_matchndof, &b_mu_muid_matchndof);
   fChain->SetBranchAddress("mu_muid_etcone20", &mu_muid_etcone20, &b_mu_muid_etcone20);
   fChain->SetBranchAddress("mu_muid_etcone30", &mu_muid_etcone30, &b_mu_muid_etcone30);
   fChain->SetBranchAddress("mu_muid_etcone40", &mu_muid_etcone40, &b_mu_muid_etcone40);
   fChain->SetBranchAddress("mu_muid_nucone20", &mu_muid_nucone20, &b_mu_muid_nucone20);
   fChain->SetBranchAddress("mu_muid_nucone30", &mu_muid_nucone30, &b_mu_muid_nucone30);
   fChain->SetBranchAddress("mu_muid_nucone40", &mu_muid_nucone40, &b_mu_muid_nucone40);
   fChain->SetBranchAddress("mu_muid_ptcone20", &mu_muid_ptcone20, &b_mu_muid_ptcone20);
   fChain->SetBranchAddress("mu_muid_ptcone30", &mu_muid_ptcone30, &b_mu_muid_ptcone30);
   fChain->SetBranchAddress("mu_muid_ptcone40", &mu_muid_ptcone40, &b_mu_muid_ptcone40);
   fChain->SetBranchAddress("mu_muid_energyLossPar", &mu_muid_energyLossPar, &b_mu_muid_energyLossPar);
   fChain->SetBranchAddress("mu_muid_energyLossErr", &mu_muid_energyLossErr, &b_mu_muid_energyLossErr);
   fChain->SetBranchAddress("mu_muid_etCore", &mu_muid_etCore, &b_mu_muid_etCore);
   fChain->SetBranchAddress("mu_muid_energyLossType", &mu_muid_energyLossType, &b_mu_muid_energyLossType);
   fChain->SetBranchAddress("mu_muid_caloMuonIdTag", &mu_muid_caloMuonIdTag, &b_mu_muid_caloMuonIdTag);
   fChain->SetBranchAddress("mu_muid_caloLRLikelihood", &mu_muid_caloLRLikelihood, &b_mu_muid_caloLRLikelihood);
   fChain->SetBranchAddress("mu_muid_bestMatch", &mu_muid_bestMatch, &b_mu_muid_bestMatch);
   fChain->SetBranchAddress("mu_muid_isStandAloneMuon", &mu_muid_isStandAloneMuon, &b_mu_muid_isStandAloneMuon);
   fChain->SetBranchAddress("mu_muid_isCombinedMuon", &mu_muid_isCombinedMuon, &b_mu_muid_isCombinedMuon);
   fChain->SetBranchAddress("mu_muid_isLowPtReconstructedMuon", &mu_muid_isLowPtReconstructedMuon, &b_mu_muid_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_muid_loose", &mu_muid_loose, &b_mu_muid_loose);
   fChain->SetBranchAddress("mu_muid_medium", &mu_muid_medium, &b_mu_muid_medium);
   fChain->SetBranchAddress("mu_muid_tight", &mu_muid_tight, &b_mu_muid_tight);
   fChain->SetBranchAddress("mu_muid_d0_exPV", &mu_muid_d0_exPV, &b_mu_muid_d0_exPV);
   fChain->SetBranchAddress("mu_muid_z0_exPV", &mu_muid_z0_exPV, &b_mu_muid_z0_exPV);
   fChain->SetBranchAddress("mu_muid_phi_exPV", &mu_muid_phi_exPV, &b_mu_muid_phi_exPV);
   fChain->SetBranchAddress("mu_muid_theta_exPV", &mu_muid_theta_exPV, &b_mu_muid_theta_exPV);
   fChain->SetBranchAddress("mu_muid_qoverp_exPV", &mu_muid_qoverp_exPV, &b_mu_muid_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cb_d0_exPV", &mu_muid_cb_d0_exPV, &b_mu_muid_cb_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_z0_exPV", &mu_muid_cb_z0_exPV, &b_mu_muid_cb_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cb_phi_exPV", &mu_muid_cb_phi_exPV, &b_mu_muid_cb_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cb_theta_exPV", &mu_muid_cb_theta_exPV, &b_mu_muid_cb_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cb_qoverp_exPV", &mu_muid_cb_qoverp_exPV, &b_mu_muid_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_id_d0_exPV", &mu_muid_id_d0_exPV, &b_mu_muid_id_d0_exPV);
   fChain->SetBranchAddress("mu_muid_id_z0_exPV", &mu_muid_id_z0_exPV, &b_mu_muid_id_z0_exPV);
   fChain->SetBranchAddress("mu_muid_id_phi_exPV", &mu_muid_id_phi_exPV, &b_mu_muid_id_phi_exPV);
   fChain->SetBranchAddress("mu_muid_id_theta_exPV", &mu_muid_id_theta_exPV, &b_mu_muid_id_theta_exPV);
   fChain->SetBranchAddress("mu_muid_id_qoverp_exPV", &mu_muid_id_qoverp_exPV, &b_mu_muid_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_me_d0_exPV", &mu_muid_me_d0_exPV, &b_mu_muid_me_d0_exPV);
   fChain->SetBranchAddress("mu_muid_me_z0_exPV", &mu_muid_me_z0_exPV, &b_mu_muid_me_z0_exPV);
   fChain->SetBranchAddress("mu_muid_me_phi_exPV", &mu_muid_me_phi_exPV, &b_mu_muid_me_phi_exPV);
   fChain->SetBranchAddress("mu_muid_me_theta_exPV", &mu_muid_me_theta_exPV, &b_mu_muid_me_theta_exPV);
   fChain->SetBranchAddress("mu_muid_me_qoverp_exPV", &mu_muid_me_qoverp_exPV, &b_mu_muid_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ie_d0_exPV", &mu_muid_ie_d0_exPV, &b_mu_muid_ie_d0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_z0_exPV", &mu_muid_ie_z0_exPV, &b_mu_muid_ie_z0_exPV);
   fChain->SetBranchAddress("mu_muid_ie_phi_exPV", &mu_muid_ie_phi_exPV, &b_mu_muid_ie_phi_exPV);
   fChain->SetBranchAddress("mu_muid_ie_theta_exPV", &mu_muid_ie_theta_exPV, &b_mu_muid_ie_theta_exPV);
   fChain->SetBranchAddress("mu_muid_ie_qoverp_exPV", &mu_muid_ie_qoverp_exPV, &b_mu_muid_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_SpaceTime_detID", &mu_muid_SpaceTime_detID, &b_mu_muid_SpaceTime_detID);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t", &mu_muid_SpaceTime_t, &b_mu_muid_SpaceTime_t);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError", &mu_muid_SpaceTime_tError, &b_mu_muid_SpaceTime_tError);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight", &mu_muid_SpaceTime_weight, &b_mu_muid_SpaceTime_weight);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x", &mu_muid_SpaceTime_x, &b_mu_muid_SpaceTime_x);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y", &mu_muid_SpaceTime_y, &b_mu_muid_SpaceTime_y);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z", &mu_muid_SpaceTime_z, &b_mu_muid_SpaceTime_z);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t_Tile", &mu_muid_SpaceTime_t_Tile, &b_mu_muid_SpaceTime_t_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError_Tile", &mu_muid_SpaceTime_tError_Tile, &b_mu_muid_SpaceTime_tError_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight_Tile", &mu_muid_SpaceTime_weight_Tile, &b_mu_muid_SpaceTime_weight_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x_Tile", &mu_muid_SpaceTime_x_Tile, &b_mu_muid_SpaceTime_x_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y_Tile", &mu_muid_SpaceTime_y_Tile, &b_mu_muid_SpaceTime_y_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z_Tile", &mu_muid_SpaceTime_z_Tile, &b_mu_muid_SpaceTime_z_Tile);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t_TRT", &mu_muid_SpaceTime_t_TRT, &b_mu_muid_SpaceTime_t_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError_TRT", &mu_muid_SpaceTime_tError_TRT, &b_mu_muid_SpaceTime_tError_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight_TRT", &mu_muid_SpaceTime_weight_TRT, &b_mu_muid_SpaceTime_weight_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x_TRT", &mu_muid_SpaceTime_x_TRT, &b_mu_muid_SpaceTime_x_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y_TRT", &mu_muid_SpaceTime_y_TRT, &b_mu_muid_SpaceTime_y_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z_TRT", &mu_muid_SpaceTime_z_TRT, &b_mu_muid_SpaceTime_z_TRT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_t_MDT", &mu_muid_SpaceTime_t_MDT, &b_mu_muid_SpaceTime_t_MDT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_tError_MDT", &mu_muid_SpaceTime_tError_MDT, &b_mu_muid_SpaceTime_tError_MDT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_weight_MDT", &mu_muid_SpaceTime_weight_MDT, &b_mu_muid_SpaceTime_weight_MDT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_x_MDT", &mu_muid_SpaceTime_x_MDT, &b_mu_muid_SpaceTime_x_MDT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_y_MDT", &mu_muid_SpaceTime_y_MDT, &b_mu_muid_SpaceTime_y_MDT);
   fChain->SetBranchAddress("mu_muid_SpaceTime_z_MDT", &mu_muid_SpaceTime_z_MDT, &b_mu_muid_SpaceTime_z_MDT);
   fChain->SetBranchAddress("mu_muid_TileCellEnergyLayer1", &mu_muid_TileCellEnergyLayer1, &b_mu_muid_TileCellEnergyLayer1);
   fChain->SetBranchAddress("mu_muid_TileTimeLayer1", &mu_muid_TileTimeLayer1, &b_mu_muid_TileTimeLayer1);
   fChain->SetBranchAddress("mu_muid_TileCellRmsNoiseLayer1", &mu_muid_TileCellRmsNoiseLayer1, &b_mu_muid_TileCellRmsNoiseLayer1);
   fChain->SetBranchAddress("mu_muid_TileCellSignLayer1", &mu_muid_TileCellSignLayer1, &b_mu_muid_TileCellSignLayer1);
   fChain->SetBranchAddress("mu_muid_TileCellEnergyLayer2", &mu_muid_TileCellEnergyLayer2, &b_mu_muid_TileCellEnergyLayer2);
   fChain->SetBranchAddress("mu_muid_TileTimeLayer2", &mu_muid_TileTimeLayer2, &b_mu_muid_TileTimeLayer2);
   fChain->SetBranchAddress("mu_muid_TileCellRmsNoiseLayer2", &mu_muid_TileCellRmsNoiseLayer2, &b_mu_muid_TileCellRmsNoiseLayer2);
   fChain->SetBranchAddress("mu_muid_TileCellSignLayer2", &mu_muid_TileCellSignLayer2, &b_mu_muid_TileCellSignLayer2);
   fChain->SetBranchAddress("mu_muid_TileCellEnergyLayer3", &mu_muid_TileCellEnergyLayer3, &b_mu_muid_TileCellEnergyLayer3);
   fChain->SetBranchAddress("mu_muid_TileTimeLayer3", &mu_muid_TileTimeLayer3, &b_mu_muid_TileTimeLayer3);
   fChain->SetBranchAddress("mu_muid_TileCellRmsNoiseLayer3", &mu_muid_TileCellRmsNoiseLayer3, &b_mu_muid_TileCellRmsNoiseLayer3);
   fChain->SetBranchAddress("mu_muid_TileCellSignLayer3", &mu_muid_TileCellSignLayer3, &b_mu_muid_TileCellSignLayer3);
   fChain->SetBranchAddress("mu_muid_MSTrkT0_1", &mu_muid_MSTrkT0_1, &b_mu_muid_MSTrkT0_1);
   fChain->SetBranchAddress("mu_muid_MSTrkT0_2", &mu_muid_MSTrkT0_2, &b_mu_muid_MSTrkT0_2);
   fChain->SetBranchAddress("mu_muid_MSTrkT0_3", &mu_muid_MSTrkT0_3, &b_mu_muid_MSTrkT0_3);
   fChain->SetBranchAddress("mu_muid_cov_d0_exPV", &mu_muid_cov_d0_exPV, &b_mu_muid_cov_d0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_exPV", &mu_muid_cov_z0_exPV, &b_mu_muid_cov_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_exPV", &mu_muid_cov_phi_exPV, &b_mu_muid_cov_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_exPV", &mu_muid_cov_theta_exPV, &b_mu_muid_cov_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_qoverp_exPV", &mu_muid_cov_qoverp_exPV, &b_mu_muid_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_z0_exPV", &mu_muid_cov_d0_z0_exPV, &b_mu_muid_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_phi_exPV", &mu_muid_cov_d0_phi_exPV, &b_mu_muid_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_theta_exPV", &mu_muid_cov_d0_theta_exPV, &b_mu_muid_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_d0_qoverp_exPV", &mu_muid_cov_d0_qoverp_exPV, &b_mu_muid_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_phi_exPV", &mu_muid_cov_z0_phi_exPV, &b_mu_muid_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_theta_exPV", &mu_muid_cov_z0_theta_exPV, &b_mu_muid_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_z0_qoverp_exPV", &mu_muid_cov_z0_qoverp_exPV, &b_mu_muid_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_theta_exPV", &mu_muid_cov_phi_theta_exPV, &b_mu_muid_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_muid_cov_phi_qoverp_exPV", &mu_muid_cov_phi_qoverp_exPV, &b_mu_muid_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_cov_theta_qoverp_exPV", &mu_muid_cov_theta_qoverp_exPV, &b_mu_muid_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_muid_ms_d0", &mu_muid_ms_d0, &b_mu_muid_ms_d0);
   fChain->SetBranchAddress("mu_muid_ms_z0", &mu_muid_ms_z0, &b_mu_muid_ms_z0);
   fChain->SetBranchAddress("mu_muid_ms_phi", &mu_muid_ms_phi, &b_mu_muid_ms_phi);
   fChain->SetBranchAddress("mu_muid_ms_theta", &mu_muid_ms_theta, &b_mu_muid_ms_theta);
   fChain->SetBranchAddress("mu_muid_ms_qoverp", &mu_muid_ms_qoverp, &b_mu_muid_ms_qoverp);
   fChain->SetBranchAddress("mu_muid_id_d0", &mu_muid_id_d0, &b_mu_muid_id_d0);
   fChain->SetBranchAddress("mu_muid_id_z0", &mu_muid_id_z0, &b_mu_muid_id_z0);
   fChain->SetBranchAddress("mu_muid_id_phi", &mu_muid_id_phi, &b_mu_muid_id_phi);
   fChain->SetBranchAddress("mu_muid_id_theta", &mu_muid_id_theta, &b_mu_muid_id_theta);
   fChain->SetBranchAddress("mu_muid_id_qoverp", &mu_muid_id_qoverp, &b_mu_muid_id_qoverp);
   fChain->SetBranchAddress("mu_muid_me_d0", &mu_muid_me_d0, &b_mu_muid_me_d0);
   fChain->SetBranchAddress("mu_muid_me_z0", &mu_muid_me_z0, &b_mu_muid_me_z0);
   fChain->SetBranchAddress("mu_muid_me_phi", &mu_muid_me_phi, &b_mu_muid_me_phi);
   fChain->SetBranchAddress("mu_muid_me_theta", &mu_muid_me_theta, &b_mu_muid_me_theta);
   fChain->SetBranchAddress("mu_muid_me_qoverp", &mu_muid_me_qoverp, &b_mu_muid_me_qoverp);
   fChain->SetBranchAddress("mu_muid_ie_d0", &mu_muid_ie_d0, &b_mu_muid_ie_d0);
   fChain->SetBranchAddress("mu_muid_ie_z0", &mu_muid_ie_z0, &b_mu_muid_ie_z0);
   fChain->SetBranchAddress("mu_muid_ie_phi", &mu_muid_ie_phi, &b_mu_muid_ie_phi);
   fChain->SetBranchAddress("mu_muid_ie_theta", &mu_muid_ie_theta, &b_mu_muid_ie_theta);
   fChain->SetBranchAddress("mu_muid_ie_qoverp", &mu_muid_ie_qoverp, &b_mu_muid_ie_qoverp);
   fChain->SetBranchAddress("mu_muid_nOutliersOnTrack", &mu_muid_nOutliersOnTrack, &b_mu_muid_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_muid_nBLHits", &mu_muid_nBLHits, &b_mu_muid_nBLHits);
   fChain->SetBranchAddress("mu_muid_nPixHits", &mu_muid_nPixHits, &b_mu_muid_nPixHits);
   fChain->SetBranchAddress("mu_muid_nSCTHits", &mu_muid_nSCTHits, &b_mu_muid_nSCTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHits", &mu_muid_nTRTHits, &b_mu_muid_nTRTHits);
   fChain->SetBranchAddress("mu_muid_nTRTHighTHits", &mu_muid_nTRTHighTHits, &b_mu_muid_nTRTHighTHits);
   fChain->SetBranchAddress("mu_muid_nBLSharedHits", &mu_muid_nBLSharedHits, &b_mu_muid_nBLSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixSharedHits", &mu_muid_nPixSharedHits, &b_mu_muid_nPixSharedHits);
   fChain->SetBranchAddress("mu_muid_nPixHoles", &mu_muid_nPixHoles, &b_mu_muid_nPixHoles);
   fChain->SetBranchAddress("mu_muid_nSCTSharedHits", &mu_muid_nSCTSharedHits, &b_mu_muid_nSCTSharedHits);
   fChain->SetBranchAddress("mu_muid_nSCTHoles", &mu_muid_nSCTHoles, &b_mu_muid_nSCTHoles);
   fChain->SetBranchAddress("mu_muid_nTRTOutliers", &mu_muid_nTRTOutliers, &b_mu_muid_nTRTOutliers);
   fChain->SetBranchAddress("mu_muid_nTRTHighTOutliers", &mu_muid_nTRTHighTOutliers, &b_mu_muid_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_muid_nGangedPixels", &mu_muid_nGangedPixels, &b_mu_muid_nGangedPixels);
   fChain->SetBranchAddress("mu_muid_nPixelDeadSensors", &mu_muid_nPixelDeadSensors, &b_mu_muid_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_muid_nSCTDeadSensors", &mu_muid_nSCTDeadSensors, &b_mu_muid_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_muid_nTRTDeadStraws", &mu_muid_nTRTDeadStraws, &b_mu_muid_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_muid_expectBLayerHit", &mu_muid_expectBLayerHit, &b_mu_muid_expectBLayerHit);
   fChain->SetBranchAddress("mu_muid_nMDTHits", &mu_muid_nMDTHits, &b_mu_muid_nMDTHits);
   fChain->SetBranchAddress("mu_muid_nMDTHoles", &mu_muid_nMDTHoles, &b_mu_muid_nMDTHoles);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHits", &mu_muid_nCSCEtaHits, &b_mu_muid_nCSCEtaHits);
   fChain->SetBranchAddress("mu_muid_nCSCEtaHoles", &mu_muid_nCSCEtaHoles, &b_mu_muid_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHits", &mu_muid_nCSCPhiHits, &b_mu_muid_nCSCPhiHits);
   fChain->SetBranchAddress("mu_muid_nCSCPhiHoles", &mu_muid_nCSCPhiHoles, &b_mu_muid_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHits", &mu_muid_nRPCEtaHits, &b_mu_muid_nRPCEtaHits);
   fChain->SetBranchAddress("mu_muid_nRPCEtaHoles", &mu_muid_nRPCEtaHoles, &b_mu_muid_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHits", &mu_muid_nRPCPhiHits, &b_mu_muid_nRPCPhiHits);
   fChain->SetBranchAddress("mu_muid_nRPCPhiHoles", &mu_muid_nRPCPhiHoles, &b_mu_muid_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHits", &mu_muid_nTGCEtaHits, &b_mu_muid_nTGCEtaHits);
   fChain->SetBranchAddress("mu_muid_nTGCEtaHoles", &mu_muid_nTGCEtaHoles, &b_mu_muid_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHits", &mu_muid_nTGCPhiHits, &b_mu_muid_nTGCPhiHits);
   fChain->SetBranchAddress("mu_muid_nTGCPhiHoles", &mu_muid_nTGCPhiHoles, &b_mu_muid_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_muid_trackd0", &mu_muid_trackd0, &b_mu_muid_trackd0);
   fChain->SetBranchAddress("mu_muid_trackz0", &mu_muid_trackz0, &b_mu_muid_trackz0);
   fChain->SetBranchAddress("mu_muid_trackphi", &mu_muid_trackphi, &b_mu_muid_trackphi);
   fChain->SetBranchAddress("mu_muid_tracktheta", &mu_muid_tracktheta, &b_mu_muid_tracktheta);
   fChain->SetBranchAddress("mu_muid_trackqoverp", &mu_muid_trackqoverp, &b_mu_muid_trackqoverp);
   fChain->SetBranchAddress("mu_muid_trackcov_d0", &mu_muid_trackcov_d0, &b_mu_muid_trackcov_d0);
   fChain->SetBranchAddress("mu_muid_trackcov_z0", &mu_muid_trackcov_z0, &b_mu_muid_trackcov_z0);
   fChain->SetBranchAddress("mu_muid_trackcov_phi", &mu_muid_trackcov_phi, &b_mu_muid_trackcov_phi);
   fChain->SetBranchAddress("mu_muid_trackcov_theta", &mu_muid_trackcov_theta, &b_mu_muid_trackcov_theta);
   fChain->SetBranchAddress("mu_muid_trackcov_qoverp", &mu_muid_trackcov_qoverp, &b_mu_muid_trackcov_qoverp);
   fChain->SetBranchAddress("mu_muid_trackfitchi2", &mu_muid_trackfitchi2, &b_mu_muid_trackfitchi2);
   fChain->SetBranchAddress("mu_muid_trackfitndof", &mu_muid_trackfitndof, &b_mu_muid_trackfitndof);
   fChain->SetBranchAddress("mu_muid_hastrack", &mu_muid_hastrack, &b_mu_muid_hastrack);
   fChain->SetBranchAddress("mu_muid_truth_dr", &mu_muid_truth_dr, &b_mu_muid_truth_dr);
   fChain->SetBranchAddress("mu_muid_truth_E", &mu_muid_truth_E, &b_mu_muid_truth_E);
   fChain->SetBranchAddress("mu_muid_truth_pt", &mu_muid_truth_pt, &b_mu_muid_truth_pt);
   fChain->SetBranchAddress("mu_muid_truth_eta", &mu_muid_truth_eta, &b_mu_muid_truth_eta);
   fChain->SetBranchAddress("mu_muid_truth_phi", &mu_muid_truth_phi, &b_mu_muid_truth_phi);
   fChain->SetBranchAddress("mu_muid_truth_type", &mu_muid_truth_type, &b_mu_muid_truth_type);
   fChain->SetBranchAddress("mu_muid_truth_status", &mu_muid_truth_status, &b_mu_muid_truth_status);
   fChain->SetBranchAddress("mu_muid_truth_barcode", &mu_muid_truth_barcode, &b_mu_muid_truth_barcode);
   fChain->SetBranchAddress("mu_muid_truth_mothertype", &mu_muid_truth_mothertype, &b_mu_muid_truth_mothertype);
   fChain->SetBranchAddress("mu_muid_truth_motherbarcode", &mu_muid_truth_motherbarcode, &b_mu_muid_truth_motherbarcode);
   fChain->SetBranchAddress("mu_muid_truth_matched", &mu_muid_truth_matched, &b_mu_muid_truth_matched);
   fChain->SetBranchAddress("mu_muid_EFCB_dr", &mu_muid_EFCB_dr, &b_mu_muid_EFCB_dr);
   fChain->SetBranchAddress("mu_muid_EFCB_n", &mu_muid_EFCB_n, &b_mu_muid_EFCB_n);
   fChain->SetBranchAddress("mu_muid_EFCB_MuonType", &mu_muid_EFCB_MuonType, &b_mu_muid_EFCB_MuonType);
   fChain->SetBranchAddress("mu_muid_EFCB_pt", &mu_muid_EFCB_pt, &b_mu_muid_EFCB_pt);
   fChain->SetBranchAddress("mu_muid_EFCB_eta", &mu_muid_EFCB_eta, &b_mu_muid_EFCB_eta);
   fChain->SetBranchAddress("mu_muid_EFCB_phi", &mu_muid_EFCB_phi, &b_mu_muid_EFCB_phi);
   fChain->SetBranchAddress("mu_muid_EFCB_hasCB", &mu_muid_EFCB_hasCB, &b_mu_muid_EFCB_hasCB);
   fChain->SetBranchAddress("mu_muid_EFCB_matched", &mu_muid_EFCB_matched, &b_mu_muid_EFCB_matched);
   fChain->SetBranchAddress("mu_muid_EFMG_dr", &mu_muid_EFMG_dr, &b_mu_muid_EFMG_dr);
   fChain->SetBranchAddress("mu_muid_EFMG_n", &mu_muid_EFMG_n, &b_mu_muid_EFMG_n);
   fChain->SetBranchAddress("mu_muid_EFMG_MuonType", &mu_muid_EFMG_MuonType, &b_mu_muid_EFMG_MuonType);
   fChain->SetBranchAddress("mu_muid_EFMG_pt", &mu_muid_EFMG_pt, &b_mu_muid_EFMG_pt);
   fChain->SetBranchAddress("mu_muid_EFMG_eta", &mu_muid_EFMG_eta, &b_mu_muid_EFMG_eta);
   fChain->SetBranchAddress("mu_muid_EFMG_phi", &mu_muid_EFMG_phi, &b_mu_muid_EFMG_phi);
   fChain->SetBranchAddress("mu_muid_EFMG_hasMG", &mu_muid_EFMG_hasMG, &b_mu_muid_EFMG_hasMG);
   fChain->SetBranchAddress("mu_muid_EFMG_matched", &mu_muid_EFMG_matched, &b_mu_muid_EFMG_matched);
   fChain->SetBranchAddress("mu_muid_EFME_dr", &mu_muid_EFME_dr, &b_mu_muid_EFME_dr);
   fChain->SetBranchAddress("mu_muid_EFME_n", &mu_muid_EFME_n, &b_mu_muid_EFME_n);
   fChain->SetBranchAddress("mu_muid_EFME_MuonType", &mu_muid_EFME_MuonType, &b_mu_muid_EFME_MuonType);
   fChain->SetBranchAddress("mu_muid_EFME_pt", &mu_muid_EFME_pt, &b_mu_muid_EFME_pt);
   fChain->SetBranchAddress("mu_muid_EFME_eta", &mu_muid_EFME_eta, &b_mu_muid_EFME_eta);
   fChain->SetBranchAddress("mu_muid_EFME_phi", &mu_muid_EFME_phi, &b_mu_muid_EFME_phi);
   fChain->SetBranchAddress("mu_muid_EFME_hasME", &mu_muid_EFME_hasME, &b_mu_muid_EFME_hasME);
   fChain->SetBranchAddress("mu_muid_EFME_matched", &mu_muid_EFME_matched, &b_mu_muid_EFME_matched);
   fChain->SetBranchAddress("mu_muid_L2CB_dr", &mu_muid_L2CB_dr, &b_mu_muid_L2CB_dr);
   fChain->SetBranchAddress("mu_muid_L2CB_pt", &mu_muid_L2CB_pt, &b_mu_muid_L2CB_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_eta", &mu_muid_L2CB_eta, &b_mu_muid_L2CB_eta);
   fChain->SetBranchAddress("mu_muid_L2CB_phi", &mu_muid_L2CB_phi, &b_mu_muid_L2CB_phi);
   fChain->SetBranchAddress("mu_muid_L2CB_id_pt", &mu_muid_L2CB_id_pt, &b_mu_muid_L2CB_id_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_ms_pt", &mu_muid_L2CB_ms_pt, &b_mu_muid_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_muid_L2CB_matched", &mu_muid_L2CB_matched, &b_mu_muid_L2CB_matched);
   fChain->SetBranchAddress("mu_muid_L1_dr", &mu_muid_L1_dr, &b_mu_muid_L1_dr);
   fChain->SetBranchAddress("mu_muid_L1_pt", &mu_muid_L1_pt, &b_mu_muid_L1_pt);
   fChain->SetBranchAddress("mu_muid_L1_eta", &mu_muid_L1_eta, &b_mu_muid_L1_eta);
   fChain->SetBranchAddress("mu_muid_L1_phi", &mu_muid_L1_phi, &b_mu_muid_L1_phi);
   fChain->SetBranchAddress("mu_muid_L1_matched", &mu_muid_L1_matched, &b_mu_muid_L1_matched);
   fChain->SetBranchAddress("mu_muid_truthAssoc_index", &mu_muid_truthAssoc_index, &b_mu_muid_truthAssoc_index);
   fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
   fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
   fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
   fChain->SetBranchAddress("mu_staco_m", &mu_staco_m, &b_mu_staco_m);
   fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
   fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
   fChain->SetBranchAddress("mu_staco_px", &mu_staco_px, &b_mu_staco_px);
   fChain->SetBranchAddress("mu_staco_py", &mu_staco_py, &b_mu_staco_py);
   fChain->SetBranchAddress("mu_staco_pz", &mu_staco_pz, &b_mu_staco_pz);
   fChain->SetBranchAddress("mu_staco_charge", &mu_staco_charge, &b_mu_staco_charge);
   fChain->SetBranchAddress("mu_staco_allauthor", &mu_staco_allauthor, &b_mu_staco_allauthor);
   fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
   fChain->SetBranchAddress("mu_staco_beta", &mu_staco_beta, &b_mu_staco_beta);
   fChain->SetBranchAddress("mu_staco_isMuonLikelihood", &mu_staco_isMuonLikelihood, &b_mu_staco_isMuonLikelihood);
   fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
   fChain->SetBranchAddress("mu_staco_matchndof", &mu_staco_matchndof, &b_mu_staco_matchndof);
   fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
   fChain->SetBranchAddress("mu_staco_etcone30", &mu_staco_etcone30, &b_mu_staco_etcone30);
   fChain->SetBranchAddress("mu_staco_etcone40", &mu_staco_etcone40, &b_mu_staco_etcone40);
   fChain->SetBranchAddress("mu_staco_nucone20", &mu_staco_nucone20, &b_mu_staco_nucone20);
   fChain->SetBranchAddress("mu_staco_nucone30", &mu_staco_nucone30, &b_mu_staco_nucone30);
   fChain->SetBranchAddress("mu_staco_nucone40", &mu_staco_nucone40, &b_mu_staco_nucone40);
   fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
   fChain->SetBranchAddress("mu_staco_ptcone30", &mu_staco_ptcone30, &b_mu_staco_ptcone30);
   fChain->SetBranchAddress("mu_staco_ptcone40", &mu_staco_ptcone40, &b_mu_staco_ptcone40);
   fChain->SetBranchAddress("mu_staco_energyLossPar", &mu_staco_energyLossPar, &b_mu_staco_energyLossPar);
   fChain->SetBranchAddress("mu_staco_energyLossErr", &mu_staco_energyLossErr, &b_mu_staco_energyLossErr);
   fChain->SetBranchAddress("mu_staco_etCore", &mu_staco_etCore, &b_mu_staco_etCore);
   fChain->SetBranchAddress("mu_staco_energyLossType", &mu_staco_energyLossType, &b_mu_staco_energyLossType);
   fChain->SetBranchAddress("mu_staco_caloMuonIdTag", &mu_staco_caloMuonIdTag, &b_mu_staco_caloMuonIdTag);
   fChain->SetBranchAddress("mu_staco_caloLRLikelihood", &mu_staco_caloLRLikelihood, &b_mu_staco_caloLRLikelihood);
   fChain->SetBranchAddress("mu_staco_bestMatch", &mu_staco_bestMatch, &b_mu_staco_bestMatch);
   fChain->SetBranchAddress("mu_staco_isStandAloneMuon", &mu_staco_isStandAloneMuon, &b_mu_staco_isStandAloneMuon);
   fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);
   fChain->SetBranchAddress("mu_staco_isLowPtReconstructedMuon", &mu_staco_isLowPtReconstructedMuon, &b_mu_staco_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_staco_loose", &mu_staco_loose, &b_mu_staco_loose);
   fChain->SetBranchAddress("mu_staco_medium", &mu_staco_medium, &b_mu_staco_medium);
   fChain->SetBranchAddress("mu_staco_tight", &mu_staco_tight, &b_mu_staco_tight);
   fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
   fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cb_d0_exPV", &mu_staco_cb_d0_exPV, &b_mu_staco_cb_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_z0_exPV", &mu_staco_cb_z0_exPV, &b_mu_staco_cb_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_phi_exPV", &mu_staco_cb_phi_exPV, &b_mu_staco_cb_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cb_theta_exPV", &mu_staco_cb_theta_exPV, &b_mu_staco_cb_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cb_qoverp_exPV", &mu_staco_cb_qoverp_exPV, &b_mu_staco_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_d0_exPV", &mu_staco_id_d0_exPV, &b_mu_staco_id_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_z0_exPV", &mu_staco_id_z0_exPV, &b_mu_staco_id_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_phi_exPV", &mu_staco_id_phi_exPV, &b_mu_staco_id_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_theta_exPV", &mu_staco_id_theta_exPV, &b_mu_staco_id_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_qoverp_exPV", &mu_staco_id_qoverp_exPV, &b_mu_staco_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_d0_exPV", &mu_staco_me_d0_exPV, &b_mu_staco_me_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_z0_exPV", &mu_staco_me_z0_exPV, &b_mu_staco_me_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_phi_exPV", &mu_staco_me_phi_exPV, &b_mu_staco_me_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_theta_exPV", &mu_staco_me_theta_exPV, &b_mu_staco_me_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_qoverp_exPV", &mu_staco_me_qoverp_exPV, &b_mu_staco_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ie_d0_exPV", &mu_staco_ie_d0_exPV, &b_mu_staco_ie_d0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_z0_exPV", &mu_staco_ie_z0_exPV, &b_mu_staco_ie_z0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_phi_exPV", &mu_staco_ie_phi_exPV, &b_mu_staco_ie_phi_exPV);
   fChain->SetBranchAddress("mu_staco_ie_theta_exPV", &mu_staco_ie_theta_exPV, &b_mu_staco_ie_theta_exPV);
   fChain->SetBranchAddress("mu_staco_ie_qoverp_exPV", &mu_staco_ie_qoverp_exPV, &b_mu_staco_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_SpaceTime_detID", &mu_staco_SpaceTime_detID, &b_mu_staco_SpaceTime_detID);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t", &mu_staco_SpaceTime_t, &b_mu_staco_SpaceTime_t);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError", &mu_staco_SpaceTime_tError, &b_mu_staco_SpaceTime_tError);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight", &mu_staco_SpaceTime_weight, &b_mu_staco_SpaceTime_weight);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x", &mu_staco_SpaceTime_x, &b_mu_staco_SpaceTime_x);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y", &mu_staco_SpaceTime_y, &b_mu_staco_SpaceTime_y);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z", &mu_staco_SpaceTime_z, &b_mu_staco_SpaceTime_z);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t_Tile", &mu_staco_SpaceTime_t_Tile, &b_mu_staco_SpaceTime_t_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError_Tile", &mu_staco_SpaceTime_tError_Tile, &b_mu_staco_SpaceTime_tError_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight_Tile", &mu_staco_SpaceTime_weight_Tile, &b_mu_staco_SpaceTime_weight_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x_Tile", &mu_staco_SpaceTime_x_Tile, &b_mu_staco_SpaceTime_x_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y_Tile", &mu_staco_SpaceTime_y_Tile, &b_mu_staco_SpaceTime_y_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z_Tile", &mu_staco_SpaceTime_z_Tile, &b_mu_staco_SpaceTime_z_Tile);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t_TRT", &mu_staco_SpaceTime_t_TRT, &b_mu_staco_SpaceTime_t_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError_TRT", &mu_staco_SpaceTime_tError_TRT, &b_mu_staco_SpaceTime_tError_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight_TRT", &mu_staco_SpaceTime_weight_TRT, &b_mu_staco_SpaceTime_weight_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x_TRT", &mu_staco_SpaceTime_x_TRT, &b_mu_staco_SpaceTime_x_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y_TRT", &mu_staco_SpaceTime_y_TRT, &b_mu_staco_SpaceTime_y_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z_TRT", &mu_staco_SpaceTime_z_TRT, &b_mu_staco_SpaceTime_z_TRT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t_MDT", &mu_staco_SpaceTime_t_MDT, &b_mu_staco_SpaceTime_t_MDT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError_MDT", &mu_staco_SpaceTime_tError_MDT, &b_mu_staco_SpaceTime_tError_MDT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight_MDT", &mu_staco_SpaceTime_weight_MDT, &b_mu_staco_SpaceTime_weight_MDT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x_MDT", &mu_staco_SpaceTime_x_MDT, &b_mu_staco_SpaceTime_x_MDT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y_MDT", &mu_staco_SpaceTime_y_MDT, &b_mu_staco_SpaceTime_y_MDT);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z_MDT", &mu_staco_SpaceTime_z_MDT, &b_mu_staco_SpaceTime_z_MDT);
   fChain->SetBranchAddress("mu_staco_TileCellEnergyLayer1", &mu_staco_TileCellEnergyLayer1, &b_mu_staco_TileCellEnergyLayer1);
   fChain->SetBranchAddress("mu_staco_TileTimeLayer1", &mu_staco_TileTimeLayer1, &b_mu_staco_TileTimeLayer1);
   fChain->SetBranchAddress("mu_staco_TileCellRmsNoiseLayer1", &mu_staco_TileCellRmsNoiseLayer1, &b_mu_staco_TileCellRmsNoiseLayer1);
   fChain->SetBranchAddress("mu_staco_TileCellSignLayer1", &mu_staco_TileCellSignLayer1, &b_mu_staco_TileCellSignLayer1);
   fChain->SetBranchAddress("mu_staco_TileCellEnergyLayer2", &mu_staco_TileCellEnergyLayer2, &b_mu_staco_TileCellEnergyLayer2);
   fChain->SetBranchAddress("mu_staco_TileTimeLayer2", &mu_staco_TileTimeLayer2, &b_mu_staco_TileTimeLayer2);
   fChain->SetBranchAddress("mu_staco_TileCellRmsNoiseLayer2", &mu_staco_TileCellRmsNoiseLayer2, &b_mu_staco_TileCellRmsNoiseLayer2);
   fChain->SetBranchAddress("mu_staco_TileCellSignLayer2", &mu_staco_TileCellSignLayer2, &b_mu_staco_TileCellSignLayer2);
   fChain->SetBranchAddress("mu_staco_TileCellEnergyLayer3", &mu_staco_TileCellEnergyLayer3, &b_mu_staco_TileCellEnergyLayer3);
   fChain->SetBranchAddress("mu_staco_TileTimeLayer3", &mu_staco_TileTimeLayer3, &b_mu_staco_TileTimeLayer3);
   fChain->SetBranchAddress("mu_staco_TileCellRmsNoiseLayer3", &mu_staco_TileCellRmsNoiseLayer3, &b_mu_staco_TileCellRmsNoiseLayer3);
   fChain->SetBranchAddress("mu_staco_TileCellSignLayer3", &mu_staco_TileCellSignLayer3, &b_mu_staco_TileCellSignLayer3);
   fChain->SetBranchAddress("mu_staco_MSTrkT0_1", &mu_staco_MSTrkT0_1, &b_mu_staco_MSTrkT0_1);
   fChain->SetBranchAddress("mu_staco_MSTrkT0_2", &mu_staco_MSTrkT0_2, &b_mu_staco_MSTrkT0_2);
   fChain->SetBranchAddress("mu_staco_MSTrkT0_3", &mu_staco_MSTrkT0_3, &b_mu_staco_MSTrkT0_3);
   fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_exPV", &mu_staco_cov_z0_exPV, &b_mu_staco_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_exPV", &mu_staco_cov_phi_exPV, &b_mu_staco_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_exPV", &mu_staco_cov_theta_exPV, &b_mu_staco_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_qoverp_exPV", &mu_staco_cov_qoverp_exPV, &b_mu_staco_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_z0_exPV", &mu_staco_cov_d0_z0_exPV, &b_mu_staco_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_phi_exPV", &mu_staco_cov_d0_phi_exPV, &b_mu_staco_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_theta_exPV", &mu_staco_cov_d0_theta_exPV, &b_mu_staco_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_qoverp_exPV", &mu_staco_cov_d0_qoverp_exPV, &b_mu_staco_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_phi_exPV", &mu_staco_cov_z0_phi_exPV, &b_mu_staco_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_theta_exPV", &mu_staco_cov_z0_theta_exPV, &b_mu_staco_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_qoverp_exPV", &mu_staco_cov_z0_qoverp_exPV, &b_mu_staco_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_theta_exPV", &mu_staco_cov_phi_theta_exPV, &b_mu_staco_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_qoverp_exPV", &mu_staco_cov_phi_qoverp_exPV, &b_mu_staco_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_qoverp_exPV", &mu_staco_cov_theta_qoverp_exPV, &b_mu_staco_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ms_d0", &mu_staco_ms_d0, &b_mu_staco_ms_d0);
   fChain->SetBranchAddress("mu_staco_ms_z0", &mu_staco_ms_z0, &b_mu_staco_ms_z0);
   fChain->SetBranchAddress("mu_staco_ms_phi", &mu_staco_ms_phi, &b_mu_staco_ms_phi);
   fChain->SetBranchAddress("mu_staco_ms_theta", &mu_staco_ms_theta, &b_mu_staco_ms_theta);
   fChain->SetBranchAddress("mu_staco_ms_qoverp", &mu_staco_ms_qoverp, &b_mu_staco_ms_qoverp);
   fChain->SetBranchAddress("mu_staco_id_d0", &mu_staco_id_d0, &b_mu_staco_id_d0);
   fChain->SetBranchAddress("mu_staco_id_z0", &mu_staco_id_z0, &b_mu_staco_id_z0);
   fChain->SetBranchAddress("mu_staco_id_phi", &mu_staco_id_phi, &b_mu_staco_id_phi);
   fChain->SetBranchAddress("mu_staco_id_theta", &mu_staco_id_theta, &b_mu_staco_id_theta);
   fChain->SetBranchAddress("mu_staco_id_qoverp", &mu_staco_id_qoverp, &b_mu_staco_id_qoverp);
   fChain->SetBranchAddress("mu_staco_me_d0", &mu_staco_me_d0, &b_mu_staco_me_d0);
   fChain->SetBranchAddress("mu_staco_me_z0", &mu_staco_me_z0, &b_mu_staco_me_z0);
   fChain->SetBranchAddress("mu_staco_me_phi", &mu_staco_me_phi, &b_mu_staco_me_phi);
   fChain->SetBranchAddress("mu_staco_me_theta", &mu_staco_me_theta, &b_mu_staco_me_theta);
   fChain->SetBranchAddress("mu_staco_me_qoverp", &mu_staco_me_qoverp, &b_mu_staco_me_qoverp);
   fChain->SetBranchAddress("mu_staco_ie_d0", &mu_staco_ie_d0, &b_mu_staco_ie_d0);
   fChain->SetBranchAddress("mu_staco_ie_z0", &mu_staco_ie_z0, &b_mu_staco_ie_z0);
   fChain->SetBranchAddress("mu_staco_ie_phi", &mu_staco_ie_phi, &b_mu_staco_ie_phi);
   fChain->SetBranchAddress("mu_staco_ie_theta", &mu_staco_ie_theta, &b_mu_staco_ie_theta);
   fChain->SetBranchAddress("mu_staco_ie_qoverp", &mu_staco_ie_qoverp, &b_mu_staco_ie_qoverp);
   fChain->SetBranchAddress("mu_staco_nOutliersOnTrack", &mu_staco_nOutliersOnTrack, &b_mu_staco_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_staco_nBLHits", &mu_staco_nBLHits, &b_mu_staco_nBLHits);
   fChain->SetBranchAddress("mu_staco_nPixHits", &mu_staco_nPixHits, &b_mu_staco_nPixHits);
   fChain->SetBranchAddress("mu_staco_nSCTHits", &mu_staco_nSCTHits, &b_mu_staco_nSCTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHits", &mu_staco_nTRTHits, &b_mu_staco_nTRTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHighTHits", &mu_staco_nTRTHighTHits, &b_mu_staco_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_nBLSharedHits", &mu_staco_nBLSharedHits, &b_mu_staco_nBLSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixSharedHits", &mu_staco_nPixSharedHits, &b_mu_staco_nPixSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixHoles", &mu_staco_nPixHoles, &b_mu_staco_nPixHoles);
   fChain->SetBranchAddress("mu_staco_nSCTSharedHits", &mu_staco_nSCTSharedHits, &b_mu_staco_nSCTSharedHits);
   fChain->SetBranchAddress("mu_staco_nSCTHoles", &mu_staco_nSCTHoles, &b_mu_staco_nSCTHoles);
   fChain->SetBranchAddress("mu_staco_nTRTOutliers", &mu_staco_nTRTOutliers, &b_mu_staco_nTRTOutliers);
   fChain->SetBranchAddress("mu_staco_nTRTHighTOutliers", &mu_staco_nTRTHighTOutliers, &b_mu_staco_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_staco_nGangedPixels", &mu_staco_nGangedPixels, &b_mu_staco_nGangedPixels);
   fChain->SetBranchAddress("mu_staco_nPixelDeadSensors", &mu_staco_nPixelDeadSensors, &b_mu_staco_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_staco_nSCTDeadSensors", &mu_staco_nSCTDeadSensors, &b_mu_staco_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_staco_nTRTDeadStraws", &mu_staco_nTRTDeadStraws, &b_mu_staco_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_staco_expectBLayerHit", &mu_staco_expectBLayerHit, &b_mu_staco_expectBLayerHit);
   fChain->SetBranchAddress("mu_staco_nMDTHits", &mu_staco_nMDTHits, &b_mu_staco_nMDTHits);
   fChain->SetBranchAddress("mu_staco_nMDTHoles", &mu_staco_nMDTHoles, &b_mu_staco_nMDTHoles);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHits", &mu_staco_nCSCEtaHits, &b_mu_staco_nCSCEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHoles", &mu_staco_nCSCEtaHoles, &b_mu_staco_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHits", &mu_staco_nCSCPhiHits, &b_mu_staco_nCSCPhiHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHoles", &mu_staco_nCSCPhiHoles, &b_mu_staco_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHits", &mu_staco_nRPCEtaHits, &b_mu_staco_nRPCEtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHoles", &mu_staco_nRPCEtaHoles, &b_mu_staco_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHits", &mu_staco_nRPCPhiHits, &b_mu_staco_nRPCPhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHoles", &mu_staco_nRPCPhiHoles, &b_mu_staco_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHits", &mu_staco_nTGCEtaHits, &b_mu_staco_nTGCEtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHoles", &mu_staco_nTGCEtaHoles, &b_mu_staco_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHits", &mu_staco_nTGCPhiHits, &b_mu_staco_nTGCPhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHoles", &mu_staco_nTGCPhiHoles, &b_mu_staco_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_staco_trackd0", &mu_staco_trackd0, &b_mu_staco_trackd0);
   fChain->SetBranchAddress("mu_staco_trackz0", &mu_staco_trackz0, &b_mu_staco_trackz0);
   fChain->SetBranchAddress("mu_staco_trackphi", &mu_staco_trackphi, &b_mu_staco_trackphi);
   fChain->SetBranchAddress("mu_staco_tracktheta", &mu_staco_tracktheta, &b_mu_staco_tracktheta);
   fChain->SetBranchAddress("mu_staco_trackqoverp", &mu_staco_trackqoverp, &b_mu_staco_trackqoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0", &mu_staco_trackcov_d0, &b_mu_staco_trackcov_d0);
   fChain->SetBranchAddress("mu_staco_trackcov_z0", &mu_staco_trackcov_z0, &b_mu_staco_trackcov_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_phi", &mu_staco_trackcov_phi, &b_mu_staco_trackcov_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_theta", &mu_staco_trackcov_theta, &b_mu_staco_trackcov_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_qoverp", &mu_staco_trackcov_qoverp, &b_mu_staco_trackcov_qoverp);
   fChain->SetBranchAddress("mu_staco_trackfitchi2", &mu_staco_trackfitchi2, &b_mu_staco_trackfitchi2);
   fChain->SetBranchAddress("mu_staco_trackfitndof", &mu_staco_trackfitndof, &b_mu_staco_trackfitndof);
   fChain->SetBranchAddress("mu_staco_hastrack", &mu_staco_hastrack, &b_mu_staco_hastrack);
   fChain->SetBranchAddress("mu_staco_truth_dr", &mu_staco_truth_dr, &b_mu_staco_truth_dr);
   fChain->SetBranchAddress("mu_staco_truth_E", &mu_staco_truth_E, &b_mu_staco_truth_E);
   fChain->SetBranchAddress("mu_staco_truth_pt", &mu_staco_truth_pt, &b_mu_staco_truth_pt);
   fChain->SetBranchAddress("mu_staco_truth_eta", &mu_staco_truth_eta, &b_mu_staco_truth_eta);
   fChain->SetBranchAddress("mu_staco_truth_phi", &mu_staco_truth_phi, &b_mu_staco_truth_phi);
   fChain->SetBranchAddress("mu_staco_truth_type", &mu_staco_truth_type, &b_mu_staco_truth_type);
   fChain->SetBranchAddress("mu_staco_truth_status", &mu_staco_truth_status, &b_mu_staco_truth_status);
   fChain->SetBranchAddress("mu_staco_truth_barcode", &mu_staco_truth_barcode, &b_mu_staco_truth_barcode);
   fChain->SetBranchAddress("mu_staco_truth_mothertype", &mu_staco_truth_mothertype, &b_mu_staco_truth_mothertype);
   fChain->SetBranchAddress("mu_staco_truth_motherbarcode", &mu_staco_truth_motherbarcode, &b_mu_staco_truth_motherbarcode);
   fChain->SetBranchAddress("mu_staco_truth_matched", &mu_staco_truth_matched, &b_mu_staco_truth_matched);
   fChain->SetBranchAddress("mu_staco_EFCB_dr", &mu_staco_EFCB_dr, &b_mu_staco_EFCB_dr);
   fChain->SetBranchAddress("mu_staco_EFCB_n", &mu_staco_EFCB_n, &b_mu_staco_EFCB_n);
   fChain->SetBranchAddress("mu_staco_EFCB_MuonType", &mu_staco_EFCB_MuonType, &b_mu_staco_EFCB_MuonType);
   fChain->SetBranchAddress("mu_staco_EFCB_pt", &mu_staco_EFCB_pt, &b_mu_staco_EFCB_pt);
   fChain->SetBranchAddress("mu_staco_EFCB_eta", &mu_staco_EFCB_eta, &b_mu_staco_EFCB_eta);
   fChain->SetBranchAddress("mu_staco_EFCB_phi", &mu_staco_EFCB_phi, &b_mu_staco_EFCB_phi);
   fChain->SetBranchAddress("mu_staco_EFCB_hasCB", &mu_staco_EFCB_hasCB, &b_mu_staco_EFCB_hasCB);
   fChain->SetBranchAddress("mu_staco_EFCB_matched", &mu_staco_EFCB_matched, &b_mu_staco_EFCB_matched);
   fChain->SetBranchAddress("mu_staco_EFMG_dr", &mu_staco_EFMG_dr, &b_mu_staco_EFMG_dr);
   fChain->SetBranchAddress("mu_staco_EFMG_n", &mu_staco_EFMG_n, &b_mu_staco_EFMG_n);
   fChain->SetBranchAddress("mu_staco_EFMG_MuonType", &mu_staco_EFMG_MuonType, &b_mu_staco_EFMG_MuonType);
   fChain->SetBranchAddress("mu_staco_EFMG_pt", &mu_staco_EFMG_pt, &b_mu_staco_EFMG_pt);
   fChain->SetBranchAddress("mu_staco_EFMG_eta", &mu_staco_EFMG_eta, &b_mu_staco_EFMG_eta);
   fChain->SetBranchAddress("mu_staco_EFMG_phi", &mu_staco_EFMG_phi, &b_mu_staco_EFMG_phi);
   fChain->SetBranchAddress("mu_staco_EFMG_hasMG", &mu_staco_EFMG_hasMG, &b_mu_staco_EFMG_hasMG);
   fChain->SetBranchAddress("mu_staco_EFMG_matched", &mu_staco_EFMG_matched, &b_mu_staco_EFMG_matched);
   fChain->SetBranchAddress("mu_staco_EFME_dr", &mu_staco_EFME_dr, &b_mu_staco_EFME_dr);
   fChain->SetBranchAddress("mu_staco_EFME_n", &mu_staco_EFME_n, &b_mu_staco_EFME_n);
   fChain->SetBranchAddress("mu_staco_EFME_MuonType", &mu_staco_EFME_MuonType, &b_mu_staco_EFME_MuonType);
   fChain->SetBranchAddress("mu_staco_EFME_pt", &mu_staco_EFME_pt, &b_mu_staco_EFME_pt);
   fChain->SetBranchAddress("mu_staco_EFME_eta", &mu_staco_EFME_eta, &b_mu_staco_EFME_eta);
   fChain->SetBranchAddress("mu_staco_EFME_phi", &mu_staco_EFME_phi, &b_mu_staco_EFME_phi);
   fChain->SetBranchAddress("mu_staco_EFME_hasME", &mu_staco_EFME_hasME, &b_mu_staco_EFME_hasME);
   fChain->SetBranchAddress("mu_staco_EFME_matched", &mu_staco_EFME_matched, &b_mu_staco_EFME_matched);
   fChain->SetBranchAddress("mu_staco_L2CB_dr", &mu_staco_L2CB_dr, &b_mu_staco_L2CB_dr);
   fChain->SetBranchAddress("mu_staco_L2CB_pt", &mu_staco_L2CB_pt, &b_mu_staco_L2CB_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_eta", &mu_staco_L2CB_eta, &b_mu_staco_L2CB_eta);
   fChain->SetBranchAddress("mu_staco_L2CB_phi", &mu_staco_L2CB_phi, &b_mu_staco_L2CB_phi);
   fChain->SetBranchAddress("mu_staco_L2CB_id_pt", &mu_staco_L2CB_id_pt, &b_mu_staco_L2CB_id_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_ms_pt", &mu_staco_L2CB_ms_pt, &b_mu_staco_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_matched", &mu_staco_L2CB_matched, &b_mu_staco_L2CB_matched);
   fChain->SetBranchAddress("mu_staco_L1_dr", &mu_staco_L1_dr, &b_mu_staco_L1_dr);
   fChain->SetBranchAddress("mu_staco_L1_pt", &mu_staco_L1_pt, &b_mu_staco_L1_pt);
   fChain->SetBranchAddress("mu_staco_L1_eta", &mu_staco_L1_eta, &b_mu_staco_L1_eta);
   fChain->SetBranchAddress("mu_staco_L1_phi", &mu_staco_L1_phi, &b_mu_staco_L1_phi);
   fChain->SetBranchAddress("mu_staco_L1_matched", &mu_staco_L1_matched, &b_mu_staco_L1_matched);
   fChain->SetBranchAddress("mu_staco_truthAssoc_index", &mu_staco_truthAssoc_index, &b_mu_staco_truthAssoc_index);
   fChain->SetBranchAddress("MET_RefFinal_etx", &MET_RefFinal_etx, &b_MET_RefFinal_etx);
   fChain->SetBranchAddress("MET_RefFinal_ety", &MET_RefFinal_ety, &b_MET_RefFinal_ety);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_RefFinal_sumet", &MET_RefFinal_sumet, &b_MET_RefFinal_sumet);
   fChain->SetBranchAddress("MET_Cryo_etx", &MET_Cryo_etx, &b_MET_Cryo_etx);
   fChain->SetBranchAddress("MET_Cryo_ety", &MET_Cryo_ety, &b_MET_Cryo_ety);
   fChain->SetBranchAddress("MET_Cryo_phi", &MET_Cryo_phi, &b_MET_Cryo_phi);
   fChain->SetBranchAddress("MET_Cryo_et", &MET_Cryo_et, &b_MET_Cryo_et);
   fChain->SetBranchAddress("MET_Cryo_sumet", &MET_Cryo_sumet, &b_MET_Cryo_sumet);
   fChain->SetBranchAddress("MET_RefEle_etx", &MET_RefEle_etx, &b_MET_RefEle_etx);
   fChain->SetBranchAddress("MET_RefEle_ety", &MET_RefEle_ety, &b_MET_RefEle_ety);
   fChain->SetBranchAddress("MET_RefEle_phi", &MET_RefEle_phi, &b_MET_RefEle_phi);
   fChain->SetBranchAddress("MET_RefEle_et", &MET_RefEle_et, &b_MET_RefEle_et);
   fChain->SetBranchAddress("MET_RefEle_sumet", &MET_RefEle_sumet, &b_MET_RefEle_sumet);
   fChain->SetBranchAddress("MET_RefJet_etx", &MET_RefJet_etx, &b_MET_RefJet_etx);
   fChain->SetBranchAddress("MET_RefJet_ety", &MET_RefJet_ety, &b_MET_RefJet_ety);
   fChain->SetBranchAddress("MET_RefJet_phi", &MET_RefJet_phi, &b_MET_RefJet_phi);
   fChain->SetBranchAddress("MET_RefJet_et", &MET_RefJet_et, &b_MET_RefJet_et);
   fChain->SetBranchAddress("MET_RefJet_sumet", &MET_RefJet_sumet, &b_MET_RefJet_sumet);
   fChain->SetBranchAddress("MET_RefMuon_etx", &MET_RefMuon_etx, &b_MET_RefMuon_etx);
   fChain->SetBranchAddress("MET_RefMuon_ety", &MET_RefMuon_ety, &b_MET_RefMuon_ety);
   fChain->SetBranchAddress("MET_RefMuon_phi", &MET_RefMuon_phi, &b_MET_RefMuon_phi);
   fChain->SetBranchAddress("MET_RefMuon_et", &MET_RefMuon_et, &b_MET_RefMuon_et);
   fChain->SetBranchAddress("MET_RefMuon_sumet", &MET_RefMuon_sumet, &b_MET_RefMuon_sumet);
   fChain->SetBranchAddress("MET_RefGamma_etx", &MET_RefGamma_etx, &b_MET_RefGamma_etx);
   fChain->SetBranchAddress("MET_RefGamma_ety", &MET_RefGamma_ety, &b_MET_RefGamma_ety);
   fChain->SetBranchAddress("MET_RefGamma_phi", &MET_RefGamma_phi, &b_MET_RefGamma_phi);
   fChain->SetBranchAddress("MET_RefGamma_et", &MET_RefGamma_et, &b_MET_RefGamma_et);
   fChain->SetBranchAddress("MET_RefGamma_sumet", &MET_RefGamma_sumet, &b_MET_RefGamma_sumet);
   fChain->SetBranchAddress("MET_RefTau_etx", &MET_RefTau_etx, &b_MET_RefTau_etx);
   fChain->SetBranchAddress("MET_RefTau_ety", &MET_RefTau_ety, &b_MET_RefTau_ety);
   fChain->SetBranchAddress("MET_RefTau_phi", &MET_RefTau_phi, &b_MET_RefTau_phi);
   fChain->SetBranchAddress("MET_RefTau_et", &MET_RefTau_et, &b_MET_RefTau_et);
   fChain->SetBranchAddress("MET_RefTau_sumet", &MET_RefTau_sumet, &b_MET_RefTau_sumet);
   fChain->SetBranchAddress("MET_CellOut_etx", &MET_CellOut_etx, &b_MET_CellOut_etx);
   fChain->SetBranchAddress("MET_CellOut_ety", &MET_CellOut_ety, &b_MET_CellOut_ety);
   fChain->SetBranchAddress("MET_CellOut_phi", &MET_CellOut_phi, &b_MET_CellOut_phi);
   fChain->SetBranchAddress("MET_CellOut_et", &MET_CellOut_et, &b_MET_CellOut_et);
   fChain->SetBranchAddress("MET_CellOut_sumet", &MET_CellOut_sumet, &b_MET_CellOut_sumet);
   fChain->SetBranchAddress("MET_Track_etx", &MET_Track_etx, &b_MET_Track_etx);
   fChain->SetBranchAddress("MET_Track_ety", &MET_Track_ety, &b_MET_Track_ety);
   fChain->SetBranchAddress("MET_Track_phi", &MET_Track_phi, &b_MET_Track_phi);
   fChain->SetBranchAddress("MET_Track_et", &MET_Track_et, &b_MET_Track_et);
   fChain->SetBranchAddress("MET_Track_sumet", &MET_Track_sumet, &b_MET_Track_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_etx", &MET_MuonBoy_etx, &b_MET_MuonBoy_etx);
   fChain->SetBranchAddress("MET_MuonBoy_ety", &MET_MuonBoy_ety, &b_MET_MuonBoy_ety);
   fChain->SetBranchAddress("MET_MuonBoy_phi", &MET_MuonBoy_phi, &b_MET_MuonBoy_phi);
   fChain->SetBranchAddress("MET_MuonBoy_et", &MET_MuonBoy_et, &b_MET_MuonBoy_et);
   fChain->SetBranchAddress("MET_MuonBoy_sumet", &MET_MuonBoy_sumet, &b_MET_MuonBoy_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Track_etx", &MET_RefMuon_Track_etx, &b_MET_RefMuon_Track_etx);
   fChain->SetBranchAddress("MET_RefMuon_Track_ety", &MET_RefMuon_Track_ety, &b_MET_RefMuon_Track_ety);
   fChain->SetBranchAddress("MET_RefMuon_Track_phi", &MET_RefMuon_Track_phi, &b_MET_RefMuon_Track_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_et", &MET_RefMuon_Track_et, &b_MET_RefMuon_Track_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_sumet", &MET_RefMuon_Track_sumet, &b_MET_RefMuon_Track_sumet);
   fChain->SetBranchAddress("MET_Final_etx", &MET_Final_etx, &b_MET_Final_etx);
   fChain->SetBranchAddress("MET_Final_ety", &MET_Final_ety, &b_MET_Final_ety);
   fChain->SetBranchAddress("MET_Final_phi", &MET_Final_phi, &b_MET_Final_phi);
   fChain->SetBranchAddress("MET_Final_et", &MET_Final_et, &b_MET_Final_et);
   fChain->SetBranchAddress("MET_Final_sumet", &MET_Final_sumet, &b_MET_Final_sumet);
   fChain->SetBranchAddress("MET_Muid_etx", &MET_Muid_etx, &b_MET_Muid_etx);
   fChain->SetBranchAddress("MET_Muid_ety", &MET_Muid_ety, &b_MET_Muid_ety);
   fChain->SetBranchAddress("MET_Muid_phi", &MET_Muid_phi, &b_MET_Muid_phi);
   fChain->SetBranchAddress("MET_Muid_et", &MET_Muid_et, &b_MET_Muid_et);
   fChain->SetBranchAddress("MET_Muid_sumet", &MET_Muid_sumet, &b_MET_Muid_sumet);
   fChain->SetBranchAddress("MET_Muon_etx", &MET_Muon_etx, &b_MET_Muon_etx);
   fChain->SetBranchAddress("MET_Muon_ety", &MET_Muon_ety, &b_MET_Muon_ety);
   fChain->SetBranchAddress("MET_Muon_phi", &MET_Muon_phi, &b_MET_Muon_phi);
   fChain->SetBranchAddress("MET_Muon_et", &MET_Muon_et, &b_MET_Muon_et);
   fChain->SetBranchAddress("MET_Muon_sumet", &MET_Muon_sumet, &b_MET_Muon_sumet);
   fChain->SetBranchAddress("MET_Topo_etx", &MET_Topo_etx, &b_MET_Topo_etx);
   fChain->SetBranchAddress("MET_Topo_ety", &MET_Topo_ety, &b_MET_Topo_ety);
   fChain->SetBranchAddress("MET_Topo_phi", &MET_Topo_phi, &b_MET_Topo_phi);
   fChain->SetBranchAddress("MET_Topo_et", &MET_Topo_et, &b_MET_Topo_et);
   fChain->SetBranchAddress("MET_Topo_sumet", &MET_Topo_sumet, &b_MET_Topo_sumet);
   fChain->SetBranchAddress("MET_Topo_etx_PEMB", &MET_Topo_etx_PEMB, &b_MET_Topo_etx_PEMB);
   fChain->SetBranchAddress("MET_Topo_ety_PEMB", &MET_Topo_ety_PEMB, &b_MET_Topo_ety_PEMB);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMB", &MET_Topo_sumet_PEMB, &b_MET_Topo_sumet_PEMB);
   fChain->SetBranchAddress("MET_Topo_phi_PEMB", &MET_Topo_phi_PEMB, &b_MET_Topo_phi_PEMB);
   fChain->SetBranchAddress("MET_Topo_etx_EMB", &MET_Topo_etx_EMB, &b_MET_Topo_etx_EMB);
   fChain->SetBranchAddress("MET_Topo_ety_EMB", &MET_Topo_ety_EMB, &b_MET_Topo_ety_EMB);
   fChain->SetBranchAddress("MET_Topo_sumet_EMB", &MET_Topo_sumet_EMB, &b_MET_Topo_sumet_EMB);
   fChain->SetBranchAddress("MET_Topo_phi_EMB", &MET_Topo_phi_EMB, &b_MET_Topo_phi_EMB);
   fChain->SetBranchAddress("MET_Topo_etx_PEMEC", &MET_Topo_etx_PEMEC, &b_MET_Topo_etx_PEMEC);
   fChain->SetBranchAddress("MET_Topo_ety_PEMEC", &MET_Topo_ety_PEMEC, &b_MET_Topo_ety_PEMEC);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMEC", &MET_Topo_sumet_PEMEC, &b_MET_Topo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Topo_phi_PEMEC", &MET_Topo_phi_PEMEC, &b_MET_Topo_phi_PEMEC);
   fChain->SetBranchAddress("MET_Topo_etx_EME", &MET_Topo_etx_EME, &b_MET_Topo_etx_EME);
   fChain->SetBranchAddress("MET_Topo_ety_EME", &MET_Topo_ety_EME, &b_MET_Topo_ety_EME);
   fChain->SetBranchAddress("MET_Topo_sumet_EME", &MET_Topo_sumet_EME, &b_MET_Topo_sumet_EME);
   fChain->SetBranchAddress("MET_Topo_phi_EME", &MET_Topo_phi_EME, &b_MET_Topo_phi_EME);
   fChain->SetBranchAddress("MET_Topo_etx_TILE", &MET_Topo_etx_TILE, &b_MET_Topo_etx_TILE);
   fChain->SetBranchAddress("MET_Topo_ety_TILE", &MET_Topo_ety_TILE, &b_MET_Topo_ety_TILE);
   fChain->SetBranchAddress("MET_Topo_sumet_TILE", &MET_Topo_sumet_TILE, &b_MET_Topo_sumet_TILE);
   fChain->SetBranchAddress("MET_Topo_phi_TILE", &MET_Topo_phi_TILE, &b_MET_Topo_phi_TILE);
   fChain->SetBranchAddress("MET_Topo_etx_HEC", &MET_Topo_etx_HEC, &b_MET_Topo_etx_HEC);
   fChain->SetBranchAddress("MET_Topo_ety_HEC", &MET_Topo_ety_HEC, &b_MET_Topo_ety_HEC);
   fChain->SetBranchAddress("MET_Topo_sumet_HEC", &MET_Topo_sumet_HEC, &b_MET_Topo_sumet_HEC);
   fChain->SetBranchAddress("MET_Topo_phi_HEC", &MET_Topo_phi_HEC, &b_MET_Topo_phi_HEC);
   fChain->SetBranchAddress("MET_Topo_etx_FCAL", &MET_Topo_etx_FCAL, &b_MET_Topo_etx_FCAL);
   fChain->SetBranchAddress("MET_Topo_ety_FCAL", &MET_Topo_ety_FCAL, &b_MET_Topo_ety_FCAL);
   fChain->SetBranchAddress("MET_Topo_sumet_FCAL", &MET_Topo_sumet_FCAL, &b_MET_Topo_sumet_FCAL);
   fChain->SetBranchAddress("MET_Topo_phi_FCAL", &MET_Topo_phi_FCAL, &b_MET_Topo_phi_FCAL);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMB", &MET_Topo_nCell_PEMB, &b_MET_Topo_nCell_PEMB);
   fChain->SetBranchAddress("MET_Topo_nCell_EMB", &MET_Topo_nCell_EMB, &b_MET_Topo_nCell_EMB);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMEC", &MET_Topo_nCell_PEMEC, &b_MET_Topo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Topo_nCell_EME", &MET_Topo_nCell_EME, &b_MET_Topo_nCell_EME);
   fChain->SetBranchAddress("MET_Topo_nCell_TILE", &MET_Topo_nCell_TILE, &b_MET_Topo_nCell_TILE);
   fChain->SetBranchAddress("MET_Topo_nCell_HEC", &MET_Topo_nCell_HEC, &b_MET_Topo_nCell_HEC);
   fChain->SetBranchAddress("MET_Topo_nCell_FCAL", &MET_Topo_nCell_FCAL, &b_MET_Topo_nCell_FCAL);
   fChain->SetBranchAddress("MET_Topo_etx_CentralReg", &MET_Topo_etx_CentralReg, &b_MET_Topo_etx_CentralReg);
   fChain->SetBranchAddress("MET_Topo_ety_CentralReg", &MET_Topo_ety_CentralReg, &b_MET_Topo_ety_CentralReg);
   fChain->SetBranchAddress("MET_Topo_sumet_CentralReg", &MET_Topo_sumet_CentralReg, &b_MET_Topo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Topo_phi_CentralReg", &MET_Topo_phi_CentralReg, &b_MET_Topo_phi_CentralReg);
   fChain->SetBranchAddress("MET_Topo_etx_EndcapRegion", &MET_Topo_etx_EndcapRegion, &b_MET_Topo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_ety_EndcapRegion", &MET_Topo_ety_EndcapRegion, &b_MET_Topo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_sumet_EndcapRegion", &MET_Topo_sumet_EndcapRegion, &b_MET_Topo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_phi_EndcapRegion", &MET_Topo_phi_EndcapRegion, &b_MET_Topo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_etx_ForwardReg", &MET_Topo_etx_ForwardReg, &b_MET_Topo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_ety_ForwardReg", &MET_Topo_ety_ForwardReg, &b_MET_Topo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_sumet_ForwardReg", &MET_Topo_sumet_ForwardReg, &b_MET_Topo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_phi_ForwardReg", &MET_Topo_phi_ForwardReg, &b_MET_Topo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx", &MET_LocHadTopo_etx, &b_MET_LocHadTopo_etx);
   fChain->SetBranchAddress("MET_LocHadTopo_ety", &MET_LocHadTopo_ety, &b_MET_LocHadTopo_ety);
   fChain->SetBranchAddress("MET_LocHadTopo_phi", &MET_LocHadTopo_phi, &b_MET_LocHadTopo_phi);
   fChain->SetBranchAddress("MET_LocHadTopo_et", &MET_LocHadTopo_et, &b_MET_LocHadTopo_et);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet", &MET_LocHadTopo_sumet, &b_MET_LocHadTopo_sumet);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMB", &MET_LocHadTopo_etx_PEMB, &b_MET_LocHadTopo_etx_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMB", &MET_LocHadTopo_ety_PEMB, &b_MET_LocHadTopo_ety_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMB", &MET_LocHadTopo_sumet_PEMB, &b_MET_LocHadTopo_sumet_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMB", &MET_LocHadTopo_phi_PEMB, &b_MET_LocHadTopo_phi_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EMB", &MET_LocHadTopo_etx_EMB, &b_MET_LocHadTopo_etx_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EMB", &MET_LocHadTopo_ety_EMB, &b_MET_LocHadTopo_ety_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EMB", &MET_LocHadTopo_sumet_EMB, &b_MET_LocHadTopo_sumet_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EMB", &MET_LocHadTopo_phi_EMB, &b_MET_LocHadTopo_phi_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMEC", &MET_LocHadTopo_etx_PEMEC, &b_MET_LocHadTopo_etx_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMEC", &MET_LocHadTopo_ety_PEMEC, &b_MET_LocHadTopo_ety_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMEC", &MET_LocHadTopo_sumet_PEMEC, &b_MET_LocHadTopo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMEC", &MET_LocHadTopo_phi_PEMEC, &b_MET_LocHadTopo_phi_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EME", &MET_LocHadTopo_etx_EME, &b_MET_LocHadTopo_etx_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EME", &MET_LocHadTopo_ety_EME, &b_MET_LocHadTopo_ety_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EME", &MET_LocHadTopo_sumet_EME, &b_MET_LocHadTopo_sumet_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EME", &MET_LocHadTopo_phi_EME, &b_MET_LocHadTopo_phi_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_TILE", &MET_LocHadTopo_etx_TILE, &b_MET_LocHadTopo_etx_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_TILE", &MET_LocHadTopo_ety_TILE, &b_MET_LocHadTopo_ety_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_TILE", &MET_LocHadTopo_sumet_TILE, &b_MET_LocHadTopo_sumet_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_TILE", &MET_LocHadTopo_phi_TILE, &b_MET_LocHadTopo_phi_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_HEC", &MET_LocHadTopo_etx_HEC, &b_MET_LocHadTopo_etx_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_HEC", &MET_LocHadTopo_ety_HEC, &b_MET_LocHadTopo_ety_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_HEC", &MET_LocHadTopo_sumet_HEC, &b_MET_LocHadTopo_sumet_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_HEC", &MET_LocHadTopo_phi_HEC, &b_MET_LocHadTopo_phi_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_FCAL", &MET_LocHadTopo_etx_FCAL, &b_MET_LocHadTopo_etx_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_FCAL", &MET_LocHadTopo_ety_FCAL, &b_MET_LocHadTopo_ety_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_FCAL", &MET_LocHadTopo_sumet_FCAL, &b_MET_LocHadTopo_sumet_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_FCAL", &MET_LocHadTopo_phi_FCAL, &b_MET_LocHadTopo_phi_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMB", &MET_LocHadTopo_nCell_PEMB, &b_MET_LocHadTopo_nCell_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EMB", &MET_LocHadTopo_nCell_EMB, &b_MET_LocHadTopo_nCell_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMEC", &MET_LocHadTopo_nCell_PEMEC, &b_MET_LocHadTopo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EME", &MET_LocHadTopo_nCell_EME, &b_MET_LocHadTopo_nCell_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_TILE", &MET_LocHadTopo_nCell_TILE, &b_MET_LocHadTopo_nCell_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_HEC", &MET_LocHadTopo_nCell_HEC, &b_MET_LocHadTopo_nCell_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_FCAL", &MET_LocHadTopo_nCell_FCAL, &b_MET_LocHadTopo_nCell_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_CentralReg", &MET_LocHadTopo_etx_CentralReg, &b_MET_LocHadTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_CentralReg", &MET_LocHadTopo_ety_CentralReg, &b_MET_LocHadTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_CentralReg", &MET_LocHadTopo_sumet_CentralReg, &b_MET_LocHadTopo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_CentralReg", &MET_LocHadTopo_phi_CentralReg, &b_MET_LocHadTopo_phi_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EndcapRegion", &MET_LocHadTopo_etx_EndcapRegion, &b_MET_LocHadTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EndcapRegion", &MET_LocHadTopo_ety_EndcapRegion, &b_MET_LocHadTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EndcapRegion", &MET_LocHadTopo_sumet_EndcapRegion, &b_MET_LocHadTopo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EndcapRegion", &MET_LocHadTopo_phi_EndcapRegion, &b_MET_LocHadTopo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_ForwardReg", &MET_LocHadTopo_etx_ForwardReg, &b_MET_LocHadTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_ForwardReg", &MET_LocHadTopo_ety_ForwardReg, &b_MET_LocHadTopo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_ForwardReg", &MET_LocHadTopo_sumet_ForwardReg, &b_MET_LocHadTopo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_ForwardReg", &MET_LocHadTopo_phi_ForwardReg, &b_MET_LocHadTopo_phi_ForwardReg);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("trk_d0", &trk_d0, &b_trk_d0);
   fChain->SetBranchAddress("trk_z0", &trk_z0, &b_trk_z0);
   fChain->SetBranchAddress("trk_phi", &trk_phi, &b_trk_phi);
   fChain->SetBranchAddress("trk_theta", &trk_theta, &b_trk_theta);
   fChain->SetBranchAddress("trk_qoverp", &trk_qoverp, &b_trk_qoverp);
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("trk_phi_wrtPV", &trk_phi_wrtPV, &b_trk_phi_wrtPV);
   fChain->SetBranchAddress("trk_theta_wrtPV", &trk_theta_wrtPV, &b_trk_theta_wrtPV);
   fChain->SetBranchAddress("trk_qoverp_wrtPV", &trk_qoverp_wrtPV, &b_trk_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_err_d0_wrtPV", &trk_err_d0_wrtPV, &b_trk_err_d0_wrtPV);
   fChain->SetBranchAddress("trk_err_z0_wrtPV", &trk_err_z0_wrtPV, &b_trk_err_z0_wrtPV);
   fChain->SetBranchAddress("trk_err_phi_wrtPV", &trk_err_phi_wrtPV, &b_trk_err_phi_wrtPV);
   fChain->SetBranchAddress("trk_err_theta_wrtPV", &trk_err_theta_wrtPV, &b_trk_err_theta_wrtPV);
   fChain->SetBranchAddress("trk_err_qoverp_wrtPV", &trk_err_qoverp_wrtPV, &b_trk_err_qoverp_wrtPV);
   fChain->SetBranchAddress("trk_chi2", &trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_ndof", &trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_nBLHits", &trk_nBLHits, &b_trk_nBLHits);
   fChain->SetBranchAddress("trk_nPixHits", &trk_nPixHits, &b_trk_nPixHits);
   fChain->SetBranchAddress("trk_nSCTHits", &trk_nSCTHits, &b_trk_nSCTHits);
   fChain->SetBranchAddress("trk_nTRTHits", &trk_nTRTHits, &b_trk_nTRTHits);
   fChain->SetBranchAddress("trk_nPixHoles", &trk_nPixHoles, &b_trk_nPixHoles);
   fChain->SetBranchAddress("trk_nSCTHoles", &trk_nSCTHoles, &b_trk_nSCTHoles);
   fChain->SetBranchAddress("trk_nMDTHits", &trk_nMDTHits, &b_trk_nMDTHits);
   fChain->SetBranchAddress("trk_nCSCEtaHits", &trk_nCSCEtaHits, &b_trk_nCSCEtaHits);
   fChain->SetBranchAddress("trk_nCSCPhiHits", &trk_nCSCPhiHits, &b_trk_nCSCPhiHits);
   fChain->SetBranchAddress("trk_nRPCEtaHits", &trk_nRPCEtaHits, &b_trk_nRPCEtaHits);
   fChain->SetBranchAddress("trk_nRPCPhiHits", &trk_nRPCPhiHits, &b_trk_nRPCPhiHits);
   fChain->SetBranchAddress("trk_nTGCEtaHits", &trk_nTGCEtaHits, &b_trk_nTGCEtaHits);
   fChain->SetBranchAddress("trk_nTGCPhiHits", &trk_nTGCPhiHits, &b_trk_nTGCPhiHits);
   fChain->SetBranchAddress("trk_nHits", &trk_nHits, &b_trk_nHits);
   fChain->SetBranchAddress("trk_nHoles", &trk_nHoles, &b_trk_nHoles);
   fChain->SetBranchAddress("trk_hitPattern", &trk_hitPattern, &b_trk_hitPattern);
   fChain->SetBranchAddress("trk_TRTHighTHitsRatio", &trk_TRTHighTHitsRatio, &b_trk_TRTHighTHitsRatio);
   fChain->SetBranchAddress("trk_TRTHighTHitsRatioOutliers", &trk_TRTHighTHitsRatioOutliers, &b_trk_TRTHighTHitsRatioOutliers);
   fChain->SetBranchAddress("trk_pixeldEdx", &trk_pixeldEdx, &b_trk_pixeldEdx);
   fChain->SetBranchAddress("trk_fitter", &trk_fitter, &b_trk_fitter);
   fChain->SetBranchAddress("trk_patternReco1", &trk_patternReco1, &b_trk_patternReco1);
   fChain->SetBranchAddress("trk_patternReco2", &trk_patternReco2, &b_trk_patternReco2);
   fChain->SetBranchAddress("trk_seedFinder", &trk_seedFinder, &b_trk_seedFinder);
   fChain->SetBranchAddress("trk_mc_probability", &trk_mc_probability, &b_trk_mc_probability);
   fChain->SetBranchAddress("trk_mc_barcode", &trk_mc_barcode, &b_trk_mc_barcode);
   fChain->SetBranchAddress("vxp_n", &vxp_n, &b_vxp_n);
   fChain->SetBranchAddress("vxp_x", &vxp_x, &b_vxp_x);
   fChain->SetBranchAddress("vxp_y", &vxp_y, &b_vxp_y);
   fChain->SetBranchAddress("vxp_z", &vxp_z, &b_vxp_z);
   fChain->SetBranchAddress("vxp_chi2", &vxp_chi2, &b_vxp_chi2);
   fChain->SetBranchAddress("vxp_ndof", &vxp_ndof, &b_vxp_ndof);
   fChain->SetBranchAddress("vxp_px", &vxp_px, &b_vxp_px);
   fChain->SetBranchAddress("vxp_py", &vxp_py, &b_vxp_py);
   fChain->SetBranchAddress("vxp_pz", &vxp_pz, &b_vxp_pz);
   fChain->SetBranchAddress("vxp_E", &vxp_E, &b_vxp_E);
   fChain->SetBranchAddress("vxp_m", &vxp_m, &b_vxp_m);
   fChain->SetBranchAddress("vxp_nTracks", &vxp_nTracks, &b_vxp_nTracks);
   fChain->SetBranchAddress("vxp_sumPt", &vxp_sumPt, &b_vxp_sumPt);
   fChain->SetBranchAddress("vxp_type", &vxp_type, &b_vxp_type);
   fChain->SetBranchAddress("vxp_sumWeightInliers", &vxp_sumWeightInliers, &b_vxp_sumWeightInliers);
   fChain->SetBranchAddress("vxp_sumWeightOutliers", &vxp_sumWeightOutliers, &b_vxp_sumWeightOutliers);
   fChain->SetBranchAddress("vxp_sumWeightPileup", &vxp_sumWeightPileup, &b_vxp_sumWeightPileup);
   fChain->SetBranchAddress("vxp_sumWeightFakes", &vxp_sumWeightFakes, &b_vxp_sumWeightFakes);
   fChain->SetBranchAddress("vxp_nInliers", &vxp_nInliers, &b_vxp_nInliers);
   fChain->SetBranchAddress("vxp_nOutliers", &vxp_nOutliers, &b_vxp_nOutliers);
   fChain->SetBranchAddress("vxp_nPileUp", &vxp_nPileUp, &b_vxp_nPileUp);
   fChain->SetBranchAddress("vxp_nFakes", &vxp_nFakes, &b_vxp_nFakes);
   fChain->SetBranchAddress("vxp_purity", &vxp_purity, &b_vxp_purity);
   fChain->SetBranchAddress("vxp_trk_n", &vxp_trk_n, &b_vxp_trk_n);
   fChain->SetBranchAddress("vxp_trk_index", &vxp_trk_index, &b_vxp_trk_index);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
   fChain->SetBranchAddress("timestamp_ns", &timestamp_ns, &b_timestamp_ns);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("detmask0", &detmask0, &b_detmask0);
   fChain->SetBranchAddress("detmask1", &detmask1, &b_detmask1);
   fChain->SetBranchAddress("pixelFlags", &pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("sctFlags", &sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("trtFlags", &trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("larFlags", &larFlags, &b_larFlags);
   fChain->SetBranchAddress("tileFlags", &tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("muonFlags", &muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("fwdFlags", &fwdFlags, &b_fwdFlags);
   fChain->SetBranchAddress("coreFlags", &coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("pixelError", &pixelError, &b_pixelError);
   fChain->SetBranchAddress("sctError", &sctError, &b_sctError);
   fChain->SetBranchAddress("trtError", &trtError, &b_trtError);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("muonError", &muonError, &b_muonError);
   fChain->SetBranchAddress("fwdError", &fwdError, &b_fwdError);
   fChain->SetBranchAddress("coreError", &coreError, &b_coreError);
   fChain->SetBranchAddress("collcand_passCaloTime", &collcand_passCaloTime, &b_collcand_passCaloTime);
   fChain->SetBranchAddress("collcand_passMBTSTime", &collcand_passMBTSTime, &b_collcand_passMBTSTime);
   fChain->SetBranchAddress("collcand_passTrigger", &collcand_passTrigger, &b_collcand_passTrigger);
   fChain->SetBranchAddress("collcand_pass", &collcand_pass, &b_collcand_pass);
   fChain->SetBranchAddress("mcevt_n", &mcevt_n, &b_mcevt_n);
   fChain->SetBranchAddress("mcevt_signal_process_id", &mcevt_signal_process_id, &b_mcevt_signal_process_id);
   fChain->SetBranchAddress("mcevt_event_number", &mcevt_event_number, &b_mcevt_event_number);
   fChain->SetBranchAddress("mcevt_event_scale", &mcevt_event_scale, &b_mcevt_event_scale);
   fChain->SetBranchAddress("mcevt_alphaQCD", &mcevt_alphaQCD, &b_mcevt_alphaQCD);
   fChain->SetBranchAddress("mcevt_alphaQED", &mcevt_alphaQED, &b_mcevt_alphaQED);
   fChain->SetBranchAddress("mcevt_pdf_id1", &mcevt_pdf_id1, &b_mcevt_pdf_id1);
   fChain->SetBranchAddress("mcevt_pdf_id2", &mcevt_pdf_id2, &b_mcevt_pdf_id2);
   fChain->SetBranchAddress("mcevt_pdf_x1", &mcevt_pdf_x1, &b_mcevt_pdf_x1);
   fChain->SetBranchAddress("mcevt_pdf_x2", &mcevt_pdf_x2, &b_mcevt_pdf_x2);
   fChain->SetBranchAddress("mcevt_pdf_scale", &mcevt_pdf_scale, &b_mcevt_pdf_scale);
   fChain->SetBranchAddress("mcevt_pdf1", &mcevt_pdf1, &b_mcevt_pdf1);
   fChain->SetBranchAddress("mcevt_pdf2", &mcevt_pdf2, &b_mcevt_pdf2);
   fChain->SetBranchAddress("mcevt_weight", &mcevt_weight, &b_mcevt_weight);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_m", &mc_m, &b_mc_m);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_status", &mc_status, &b_mc_status);
   fChain->SetBranchAddress("mc_barcode", &mc_barcode, &b_mc_barcode);
   fChain->SetBranchAddress("mc_parents", &mc_parents, &b_mc_parents);
   fChain->SetBranchAddress("mc_children", &mc_children, &b_mc_children);
   fChain->SetBranchAddress("mc_pdgId", &mc_pdgId, &b_mc_pdgId);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("mc_vx_x", &mc_vx_x, &b_mc_vx_x);
   fChain->SetBranchAddress("mc_vx_y", &mc_vx_y, &b_mc_vx_y);
   fChain->SetBranchAddress("mc_vx_z", &mc_vx_z, &b_mc_vx_z);
   fChain->SetBranchAddress("mc_child_index", &mc_child_index, &b_mc_child_index);
   fChain->SetBranchAddress("mc_parent_index", &mc_parent_index, &b_mc_parent_index);
   fChain->SetBranchAddress("trueTau_n", &trueTau_n, &b_trueTau_n);
   fChain->SetBranchAddress("trueTau_pt", &trueTau_pt, &b_trueTau_pt);
   fChain->SetBranchAddress("trueTau_m", &trueTau_m, &b_trueTau_m);
   fChain->SetBranchAddress("trueTau_eta", &trueTau_eta, &b_trueTau_eta);
   fChain->SetBranchAddress("trueTau_phi", &trueTau_phi, &b_trueTau_phi);
   fChain->SetBranchAddress("trueTau_vis_m", &trueTau_vis_m, &b_trueTau_vis_m);
   fChain->SetBranchAddress("trueTau_vis_Et", &trueTau_vis_Et, &b_trueTau_vis_Et);
   fChain->SetBranchAddress("trueTau_vis_eta", &trueTau_vis_eta, &b_trueTau_vis_eta);
   fChain->SetBranchAddress("trueTau_vis_phi", &trueTau_vis_phi, &b_trueTau_vis_phi);
   fChain->SetBranchAddress("trueTau_nProng", &trueTau_nProng, &b_trueTau_nProng);
   fChain->SetBranchAddress("trueTau_nPi0", &trueTau_nPi0, &b_trueTau_nPi0);
   fChain->SetBranchAddress("trueTau_charge", &trueTau_charge, &b_trueTau_charge);
   fChain->SetBranchAddress("trueTau_tauAssoc_dr", &trueTau_tauAssoc_dr, &b_trueTau_tauAssoc_dr);
   fChain->SetBranchAddress("trueTau_tauAssoc_index", &trueTau_tauAssoc_index, &b_trueTau_tauAssoc_index);
   fChain->SetBranchAddress("trueTau_tauAssoc_matched", &trueTau_tauAssoc_matched, &b_trueTau_tauAssoc_matched);
   fChain->SetBranchAddress("trueTau_truthAssoc_index", &trueTau_truthAssoc_index, &b_trueTau_truthAssoc_index);
   fChain->SetBranchAddress("muonTruth_n", &muonTruth_n, &b_muonTruth_n);
   fChain->SetBranchAddress("muonTruth_pt", &muonTruth_pt, &b_muonTruth_pt);
   fChain->SetBranchAddress("muonTruth_m", &muonTruth_m, &b_muonTruth_m);
   fChain->SetBranchAddress("muonTruth_eta", &muonTruth_eta, &b_muonTruth_eta);
   fChain->SetBranchAddress("muonTruth_phi", &muonTruth_phi, &b_muonTruth_phi);
   fChain->SetBranchAddress("muonTruth_charge", &muonTruth_charge, &b_muonTruth_charge);
   fChain->SetBranchAddress("muonTruth_PDGID", &muonTruth_PDGID, &b_muonTruth_PDGID);
   fChain->SetBranchAddress("muonTruth_barcode", &muonTruth_barcode, &b_muonTruth_barcode);
   fChain->SetBranchAddress("muonTruth_type", &muonTruth_type, &b_muonTruth_type);
   fChain->SetBranchAddress("muonTruth_origin", &muonTruth_origin, &b_muonTruth_origin);
   fChain->SetBranchAddress("jet_antikt4truth_n", &jet_antikt4truth_n, &b_jet_antikt4truth_n);
   fChain->SetBranchAddress("jet_antikt4truth_E", &jet_antikt4truth_E, &b_jet_antikt4truth_E);
   fChain->SetBranchAddress("jet_antikt4truth_pt", &jet_antikt4truth_pt, &b_jet_antikt4truth_pt);
   fChain->SetBranchAddress("jet_antikt4truth_m", &jet_antikt4truth_m, &b_jet_antikt4truth_m);
   fChain->SetBranchAddress("jet_antikt4truth_eta", &jet_antikt4truth_eta, &b_jet_antikt4truth_eta);
   fChain->SetBranchAddress("jet_antikt4truth_phi", &jet_antikt4truth_phi, &b_jet_antikt4truth_phi);
   fChain->SetBranchAddress("jet_antikt4truth_EtaOrigin", &jet_antikt4truth_EtaOrigin, &b_jet_antikt4truth_EtaOrigin);
   fChain->SetBranchAddress("jet_antikt4truth_PhiOrigin", &jet_antikt4truth_PhiOrigin, &b_jet_antikt4truth_PhiOrigin);
   fChain->SetBranchAddress("jet_antikt4truth_MOrigin", &jet_antikt4truth_MOrigin, &b_jet_antikt4truth_MOrigin);
   fChain->SetBranchAddress("jet_antikt4truth_EtaOriginEM", &jet_antikt4truth_EtaOriginEM, &b_jet_antikt4truth_EtaOriginEM);
   fChain->SetBranchAddress("jet_antikt4truth_PhiOriginEM", &jet_antikt4truth_PhiOriginEM, &b_jet_antikt4truth_PhiOriginEM);
   fChain->SetBranchAddress("jet_antikt4truth_MOriginEM", &jet_antikt4truth_MOriginEM, &b_jet_antikt4truth_MOriginEM);
   fChain->SetBranchAddress("jet_antikt4truth_WIDTH", &jet_antikt4truth_WIDTH, &b_jet_antikt4truth_WIDTH);
   fChain->SetBranchAddress("jet_antikt4truth_n90", &jet_antikt4truth_n90, &b_jet_antikt4truth_n90);
   fChain->SetBranchAddress("jet_antikt4truth_Timing", &jet_antikt4truth_Timing, &b_jet_antikt4truth_Timing);
   fChain->SetBranchAddress("jet_antikt4truth_LArQuality", &jet_antikt4truth_LArQuality, &b_jet_antikt4truth_LArQuality);
   fChain->SetBranchAddress("jet_antikt4truth_nTrk", &jet_antikt4truth_nTrk, &b_jet_antikt4truth_nTrk);
   fChain->SetBranchAddress("jet_antikt4truth_sumPtTrk", &jet_antikt4truth_sumPtTrk, &b_jet_antikt4truth_sumPtTrk);
   fChain->SetBranchAddress("jet_antikt4truth_OriginIndex", &jet_antikt4truth_OriginIndex, &b_jet_antikt4truth_OriginIndex);
   fChain->SetBranchAddress("jet_antikt4truth_HECQuality", &jet_antikt4truth_HECQuality, &b_jet_antikt4truth_HECQuality);
   fChain->SetBranchAddress("jet_antikt4truth_NegativeE", &jet_antikt4truth_NegativeE, &b_jet_antikt4truth_NegativeE);
   fChain->SetBranchAddress("jet_antikt4truth_BCH_CORR_CELL", &jet_antikt4truth_BCH_CORR_CELL, &b_jet_antikt4truth_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_antikt4truth_BCH_CORR_DOTX", &jet_antikt4truth_BCH_CORR_DOTX, &b_jet_antikt4truth_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_antikt4truth_BCH_CORR_JET", &jet_antikt4truth_BCH_CORR_JET, &b_jet_antikt4truth_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_antikt4truth_BCH_CORR_JET_FORCELL", &jet_antikt4truth_BCH_CORR_JET_FORCELL, &b_jet_antikt4truth_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_antikt4truth_ENG_BAD_CELLS", &jet_antikt4truth_ENG_BAD_CELLS, &b_jet_antikt4truth_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_antikt4truth_N_BAD_CELLS", &jet_antikt4truth_N_BAD_CELLS, &b_jet_antikt4truth_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_antikt4truth_N_BAD_CELLS_CORR", &jet_antikt4truth_N_BAD_CELLS_CORR, &b_jet_antikt4truth_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_antikt4truth_BAD_CELLS_CORR_E", &jet_antikt4truth_BAD_CELLS_CORR_E, &b_jet_antikt4truth_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_antikt4truth_SamplingMax", &jet_antikt4truth_SamplingMax, &b_jet_antikt4truth_SamplingMax);
   fChain->SetBranchAddress("jet_antikt4truth_fracSamplingMax", &jet_antikt4truth_fracSamplingMax, &b_jet_antikt4truth_fracSamplingMax);
   fChain->SetBranchAddress("jet_antikt4truth_hecf", &jet_antikt4truth_hecf, &b_jet_antikt4truth_hecf);
   fChain->SetBranchAddress("jet_antikt4truth_tgap3f", &jet_antikt4truth_tgap3f, &b_jet_antikt4truth_tgap3f);
   fChain->SetBranchAddress("jet_antikt4truth_isUgly", &jet_antikt4truth_isUgly, &b_jet_antikt4truth_isUgly);
   fChain->SetBranchAddress("jet_antikt4truth_isBadLoose", &jet_antikt4truth_isBadLoose, &b_jet_antikt4truth_isBadLoose);
   fChain->SetBranchAddress("jet_antikt4truth_isBadTight", &jet_antikt4truth_isBadTight, &b_jet_antikt4truth_isBadTight);
   fChain->SetBranchAddress("jet_antikt4truth_emfrac", &jet_antikt4truth_emfrac, &b_jet_antikt4truth_emfrac);
   fChain->SetBranchAddress("jet_antikt4truth_Offset", &jet_antikt4truth_Offset, &b_jet_antikt4truth_Offset);
   fChain->SetBranchAddress("jet_antikt4truth_EMJES", &jet_antikt4truth_EMJES, &b_jet_antikt4truth_EMJES);
   fChain->SetBranchAddress("jet_antikt4truth_EMJES_EtaCorr", &jet_antikt4truth_EMJES_EtaCorr, &b_jet_antikt4truth_EMJES_EtaCorr);
   fChain->SetBranchAddress("jet_antikt4truth_EMJESnooffset", &jet_antikt4truth_EMJESnooffset, &b_jet_antikt4truth_EMJESnooffset);
   fChain->SetBranchAddress("jet_antikt4truth_GCWJES", &jet_antikt4truth_GCWJES, &b_jet_antikt4truth_GCWJES);
   fChain->SetBranchAddress("jet_antikt4truth_GCWJES_EtaCorr", &jet_antikt4truth_GCWJES_EtaCorr, &b_jet_antikt4truth_GCWJES_EtaCorr);
   fChain->SetBranchAddress("jet_antikt4truth_CB", &jet_antikt4truth_CB, &b_jet_antikt4truth_CB);
   fChain->SetBranchAddress("jet_antikt4truth_emscale_E", &jet_antikt4truth_emscale_E, &b_jet_antikt4truth_emscale_E);
   fChain->SetBranchAddress("jet_antikt4truth_emscale_pt", &jet_antikt4truth_emscale_pt, &b_jet_antikt4truth_emscale_pt);
   fChain->SetBranchAddress("jet_antikt4truth_emscale_m", &jet_antikt4truth_emscale_m, &b_jet_antikt4truth_emscale_m);
   fChain->SetBranchAddress("jet_antikt4truth_emscale_eta", &jet_antikt4truth_emscale_eta, &b_jet_antikt4truth_emscale_eta);
   fChain->SetBranchAddress("jet_antikt4truth_emscale_phi", &jet_antikt4truth_emscale_phi, &b_jet_antikt4truth_emscale_phi);
   fChain->SetBranchAddress("jet_antikt4truth_jvtxf", &jet_antikt4truth_jvtxf, &b_jet_antikt4truth_jvtxf);
   fChain->SetBranchAddress("jet_antikt4truth_jvtx_x", &jet_antikt4truth_jvtx_x, &b_jet_antikt4truth_jvtx_x);
   fChain->SetBranchAddress("jet_antikt4truth_jvtx_y", &jet_antikt4truth_jvtx_y, &b_jet_antikt4truth_jvtx_y);
   fChain->SetBranchAddress("jet_antikt4truth_jvtx_z", &jet_antikt4truth_jvtx_z, &b_jet_antikt4truth_jvtx_z);
   fChain->SetBranchAddress("jet_antikt4truth_GSCFactorF", &jet_antikt4truth_GSCFactorF, &b_jet_antikt4truth_GSCFactorF);
   fChain->SetBranchAddress("jet_antikt4truth_WidthFraction", &jet_antikt4truth_WidthFraction, &b_jet_antikt4truth_WidthFraction);
   fChain->SetBranchAddress("jet_antikt4truth_el_dr", &jet_antikt4truth_el_dr, &b_jet_antikt4truth_el_dr);
   fChain->SetBranchAddress("jet_antikt4truth_el_matched", &jet_antikt4truth_el_matched, &b_jet_antikt4truth_el_matched);
   fChain->SetBranchAddress("jet_antikt4truth_mu_dr", &jet_antikt4truth_mu_dr, &b_jet_antikt4truth_mu_dr);
   fChain->SetBranchAddress("jet_antikt4truth_mu_matched", &jet_antikt4truth_mu_matched, &b_jet_antikt4truth_mu_matched);
   fChain->SetBranchAddress("jet_antikt4truth_L1_dr", &jet_antikt4truth_L1_dr, &b_jet_antikt4truth_L1_dr);
   fChain->SetBranchAddress("jet_antikt4truth_L1_matched", &jet_antikt4truth_L1_matched, &b_jet_antikt4truth_L1_matched);
   fChain->SetBranchAddress("jet_antikt4truth_L2_dr", &jet_antikt4truth_L2_dr, &b_jet_antikt4truth_L2_dr);
   fChain->SetBranchAddress("jet_antikt4truth_L2_matched", &jet_antikt4truth_L2_matched, &b_jet_antikt4truth_L2_matched);
   fChain->SetBranchAddress("jet_antikt4truth_EF_dr", &jet_antikt4truth_EF_dr, &b_jet_antikt4truth_EF_dr);
   fChain->SetBranchAddress("jet_antikt4truth_EF_matched", &jet_antikt4truth_EF_matched, &b_jet_antikt4truth_EF_matched);
   fChain->SetBranchAddress("jet_antikt4truth_elAssoc_index", &jet_antikt4truth_elAssoc_index, &b_jet_antikt4truth_elAssoc_index);
   fChain->SetBranchAddress("jet_antikt4truth_tauAssoc_index", &jet_antikt4truth_tauAssoc_index, &b_jet_antikt4truth_tauAssoc_index);
   fChain->SetBranchAddress("jet_antikt4truth_truthAssoc_index", &jet_antikt4truth_truthAssoc_index, &b_jet_antikt4truth_truthAssoc_index);
   fChain->SetBranchAddress("trig_L1_jet_n", &trig_L1_jet_n, &b_trig_L1_jet_n);
   fChain->SetBranchAddress("trig_L1_jet_eta", &trig_L1_jet_eta, &b_trig_L1_jet_eta);
   fChain->SetBranchAddress("trig_L1_jet_phi", &trig_L1_jet_phi, &b_trig_L1_jet_phi);
   fChain->SetBranchAddress("trig_L1_jet_thrNames", &trig_L1_jet_thrNames, &b_trig_L1_jet_thrNames);
   fChain->SetBranchAddress("trig_L1_jet_thrValues", &trig_L1_jet_thrValues, &b_trig_L1_jet_thrValues);
   fChain->SetBranchAddress("trig_L1_jet_thrPattern", &trig_L1_jet_thrPattern, &b_trig_L1_jet_thrPattern);
   fChain->SetBranchAddress("trig_L1_jet_myKin_pt", &trig_L1_jet_myKin_pt, &b_trig_L1_jet_myKin_pt);
   fChain->SetBranchAddress("trig_L1_jet_myKin_eta", &trig_L1_jet_myKin_eta, &b_trig_L1_jet_myKin_eta);
   fChain->SetBranchAddress("trig_L1_jet_myKin_phi", &trig_L1_jet_myKin_phi, &b_trig_L1_jet_myKin_phi);
   fChain->SetBranchAddress("trig_L1_TAV", &trig_L1_TAV, &b_trig_L1_TAV);
   fChain->SetBranchAddress("trig_L2_passedPhysics", &trig_L2_passedPhysics, &b_trig_L2_passedPhysics);
   fChain->SetBranchAddress("trig_EF_passedPhysics", &trig_EF_passedPhysics, &b_trig_EF_passedPhysics);
   fChain->SetBranchAddress("trig_L1_TBP", &trig_L1_TBP, &b_trig_L1_TBP);
   fChain->SetBranchAddress("trig_L1_TAP", &trig_L1_TAP, &b_trig_L1_TAP);
   fChain->SetBranchAddress("trig_L2_passedRaw", &trig_L2_passedRaw, &b_trig_L2_passedRaw);
   fChain->SetBranchAddress("trig_EF_passedRaw", &trig_EF_passedRaw, &b_trig_EF_passedRaw);
   fChain->SetBranchAddress("trig_L2_truncated", &trig_L2_truncated, &b_trig_L2_truncated);
   fChain->SetBranchAddress("trig_EF_truncated", &trig_EF_truncated, &b_trig_EF_truncated);
   fChain->SetBranchAddress("trig_L2_resurrected", &trig_L2_resurrected, &b_trig_L2_resurrected);
   fChain->SetBranchAddress("trig_EF_resurrected", &trig_EF_resurrected, &b_trig_EF_resurrected);
   fChain->SetBranchAddress("trig_L2_passedThrough", &trig_L2_passedThrough, &b_trig_L2_passedThrough);
   fChain->SetBranchAddress("trig_EF_passedThrough", &trig_EF_passedThrough, &b_trig_EF_passedThrough);
   fChain->SetBranchAddress("trig_L1_esum_thrNames", &trig_L1_esum_thrNames, &b_trig_L1_esum_thrNames);
   fChain->SetBranchAddress("trig_L1_esum_energyX", &trig_L1_esum_energyX, &b_trig_L1_esum_energyX);
   fChain->SetBranchAddress("trig_L1_esum_energyY", &trig_L1_esum_energyY, &b_trig_L1_esum_energyY);
   fChain->SetBranchAddress("trig_L1_esum_energyT", &trig_L1_esum_energyT, &b_trig_L1_esum_energyT);
   fChain->SetBranchAddress("trig_L1_esum_overflowX", &trig_L1_esum_overflowX, &b_trig_L1_esum_overflowX);
   fChain->SetBranchAddress("trig_L1_esum_overflowY", &trig_L1_esum_overflowY, &b_trig_L1_esum_overflowY);
   fChain->SetBranchAddress("trig_L1_esum_overflowT", &trig_L1_esum_overflowT, &b_trig_L1_esum_overflowT);
   fChain->SetBranchAddress("trig_L2_met_MEx", &trig_L2_met_MEx, &b_trig_L2_met_MEx);
   fChain->SetBranchAddress("trig_L2_met_MEy", &trig_L2_met_MEy, &b_trig_L2_met_MEy);
   fChain->SetBranchAddress("trig_L2_met_MEz", &trig_L2_met_MEz, &b_trig_L2_met_MEz);
   fChain->SetBranchAddress("trig_L2_met_sumEt", &trig_L2_met_sumEt, &b_trig_L2_met_sumEt);
   fChain->SetBranchAddress("trig_L2_met_sumE", &trig_L2_met_sumE, &b_trig_L2_met_sumE);
   fChain->SetBranchAddress("trig_L2_met_flag", &trig_L2_met_flag, &b_trig_L2_met_flag);
   fChain->SetBranchAddress("trig_L2_met_nameOfComponent", &trig_L2_met_nameOfComponent, &b_trig_L2_met_nameOfComponent);
   fChain->SetBranchAddress("trig_L2_met_MExComponent", &trig_L2_met_MExComponent, &b_trig_L2_met_MExComponent);
   fChain->SetBranchAddress("trig_L2_met_MEyComponent", &trig_L2_met_MEyComponent, &b_trig_L2_met_MEyComponent);
   fChain->SetBranchAddress("trig_L2_met_MEzComponent", &trig_L2_met_MEzComponent, &b_trig_L2_met_MEzComponent);
   fChain->SetBranchAddress("trig_L2_met_sumEtComponent", &trig_L2_met_sumEtComponent, &b_trig_L2_met_sumEtComponent);
   fChain->SetBranchAddress("trig_L2_met_sumEComponent", &trig_L2_met_sumEComponent, &b_trig_L2_met_sumEComponent);
   fChain->SetBranchAddress("trig_L2_met_componentCalib0", &trig_L2_met_componentCalib0, &b_trig_L2_met_componentCalib0);
   fChain->SetBranchAddress("trig_L2_met_componentCalib1", &trig_L2_met_componentCalib1, &b_trig_L2_met_componentCalib1);
   fChain->SetBranchAddress("trig_L2_met_sumOfSigns", &trig_L2_met_sumOfSigns, &b_trig_L2_met_sumOfSigns);
   fChain->SetBranchAddress("trig_L2_met_usedChannels", &trig_L2_met_usedChannels, &b_trig_L2_met_usedChannels);
   fChain->SetBranchAddress("trig_L2_met_status", &trig_L2_met_status, &b_trig_L2_met_status);
   fChain->SetBranchAddress("trig_EF_met_MEx", &trig_EF_met_MEx, &b_trig_EF_met_MEx);
   fChain->SetBranchAddress("trig_EF_met_MEy", &trig_EF_met_MEy, &b_trig_EF_met_MEy);
   fChain->SetBranchAddress("trig_EF_met_MEz", &trig_EF_met_MEz, &b_trig_EF_met_MEz);
   fChain->SetBranchAddress("trig_EF_met_sumEt", &trig_EF_met_sumEt, &b_trig_EF_met_sumEt);
   fChain->SetBranchAddress("trig_EF_met_sumE", &trig_EF_met_sumE, &b_trig_EF_met_sumE);
   fChain->SetBranchAddress("trig_EF_met_flag", &trig_EF_met_flag, &b_trig_EF_met_flag);
   fChain->SetBranchAddress("trig_EF_met_nameOfComponent", &trig_EF_met_nameOfComponent, &b_trig_EF_met_nameOfComponent);
   fChain->SetBranchAddress("trig_EF_met_MExComponent", &trig_EF_met_MExComponent, &b_trig_EF_met_MExComponent);
   fChain->SetBranchAddress("trig_EF_met_MEyComponent", &trig_EF_met_MEyComponent, &b_trig_EF_met_MEyComponent);
   fChain->SetBranchAddress("trig_EF_met_MEzComponent", &trig_EF_met_MEzComponent, &b_trig_EF_met_MEzComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEtComponent", &trig_EF_met_sumEtComponent, &b_trig_EF_met_sumEtComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEComponent", &trig_EF_met_sumEComponent, &b_trig_EF_met_sumEComponent);
   fChain->SetBranchAddress("trig_EF_met_componentCalib0", &trig_EF_met_componentCalib0, &b_trig_EF_met_componentCalib0);
   fChain->SetBranchAddress("trig_EF_met_componentCalib1", &trig_EF_met_componentCalib1, &b_trig_EF_met_componentCalib1);
   fChain->SetBranchAddress("trig_EF_met_sumOfSigns", &trig_EF_met_sumOfSigns, &b_trig_EF_met_sumOfSigns);
   fChain->SetBranchAddress("trig_EF_met_usedChannels", &trig_EF_met_usedChannels, &b_trig_EF_met_usedChannels);
   fChain->SetBranchAddress("trig_EF_met_status", &trig_EF_met_status, &b_trig_EF_met_status);
   fChain->SetBranchAddress("trig_L2_jet_n", &trig_L2_jet_n, &b_trig_L2_jet_n);
   fChain->SetBranchAddress("trig_L2_jet_E", &trig_L2_jet_E, &b_trig_L2_jet_E);
   fChain->SetBranchAddress("trig_L2_jet_eta", &trig_L2_jet_eta, &b_trig_L2_jet_eta);
   fChain->SetBranchAddress("trig_L2_jet_phi", &trig_L2_jet_phi, &b_trig_L2_jet_phi);
   fChain->SetBranchAddress("trig_L2_jet_RoIWord", &trig_L2_jet_RoIWord, &b_trig_L2_jet_RoIWord);
   fChain->SetBranchAddress("trig_EF_jet_n", &trig_EF_jet_n, &b_trig_EF_jet_n);
   fChain->SetBranchAddress("trig_EF_jet_E", &trig_EF_jet_E, &b_trig_EF_jet_E);
   fChain->SetBranchAddress("trig_EF_jet_pt", &trig_EF_jet_pt, &b_trig_EF_jet_pt);
   fChain->SetBranchAddress("trig_EF_jet_m", &trig_EF_jet_m, &b_trig_EF_jet_m);
   fChain->SetBranchAddress("trig_EF_jet_eta", &trig_EF_jet_eta, &b_trig_EF_jet_eta);
   fChain->SetBranchAddress("trig_EF_jet_phi", &trig_EF_jet_phi, &b_trig_EF_jet_phi);
   fChain->SetBranchAddress("trig_EF_jet_emscale_E", &trig_EF_jet_emscale_E, &b_trig_EF_jet_emscale_E);
   fChain->SetBranchAddress("trig_EF_jet_emscale_pt", &trig_EF_jet_emscale_pt, &b_trig_EF_jet_emscale_pt);
   fChain->SetBranchAddress("trig_EF_jet_emscale_m", &trig_EF_jet_emscale_m, &b_trig_EF_jet_emscale_m);
   fChain->SetBranchAddress("trig_EF_jet_emscale_eta", &trig_EF_jet_emscale_eta, &b_trig_EF_jet_emscale_eta);
   fChain->SetBranchAddress("trig_EF_jet_emscale_phi", &trig_EF_jet_emscale_phi, &b_trig_EF_jet_emscale_phi);
   fChain->SetBranchAddress("trig_EF_jet_RoIword", &trig_EF_jet_RoIword, &b_trig_EF_jet_RoIword);
   fChain->SetBranchAddress("trig_EF_jet_el_dr", &trig_EF_jet_el_dr, &b_trig_EF_jet_el_dr);
   fChain->SetBranchAddress("trig_EF_jet_el_matched", &trig_EF_jet_el_matched, &b_trig_EF_jet_el_matched);
   fChain->SetBranchAddress("trig_EF_jet_mu_dr", &trig_EF_jet_mu_dr, &b_trig_EF_jet_mu_dr);
   fChain->SetBranchAddress("trig_EF_jet_mu_matched", &trig_EF_jet_mu_matched, &b_trig_EF_jet_mu_matched);
   fChain->SetBranchAddress("trig_EF_jet_L1_dr", &trig_EF_jet_L1_dr, &b_trig_EF_jet_L1_dr);
   fChain->SetBranchAddress("trig_EF_jet_L1_matched", &trig_EF_jet_L1_matched, &b_trig_EF_jet_L1_matched);
   fChain->SetBranchAddress("trig_EF_jet_L2_dr", &trig_EF_jet_L2_dr, &b_trig_EF_jet_L2_dr);
   fChain->SetBranchAddress("trig_EF_jet_L2_matched", &trig_EF_jet_L2_matched, &b_trig_EF_jet_L2_matched);
   fChain->SetBranchAddress("trig_EF_jet_EF_dr", &trig_EF_jet_EF_dr, &b_trig_EF_jet_EF_dr);
   fChain->SetBranchAddress("trig_EF_jet_EF_matched", &trig_EF_jet_EF_matched, &b_trig_EF_jet_EF_matched);
   fChain->SetBranchAddress("trig_EF_jet_elAssoc_index", &trig_EF_jet_elAssoc_index, &b_trig_EF_jet_elAssoc_index);
   fChain->SetBranchAddress("trig_EF_jet_tauAssoc_index", &trig_EF_jet_tauAssoc_index, &b_trig_EF_jet_tauAssoc_index);
   fChain->SetBranchAddress("trig_EF_jet_truthAssoc_index", &trig_EF_jet_truthAssoc_index, &b_trig_EF_jet_truthAssoc_index);
   fChain->SetBranchAddress("trig_Nav_n", &trig_Nav_n, &b_trig_Nav_n);
   fChain->SetBranchAddress("trig_Nav_chain_ChainId", &trig_Nav_chain_ChainId, &b_trig_Nav_chain_ChainId);
   fChain->SetBranchAddress("trig_Nav_chain_RoIType", &trig_Nav_chain_RoIType, &b_trig_Nav_chain_RoIType);
   fChain->SetBranchAddress("trig_Nav_chain_RoIIndex", &trig_Nav_chain_RoIIndex, &b_trig_Nav_chain_RoIIndex);
   fChain->SetBranchAddress("trig_RoI_L2_j_n", &trig_RoI_L2_j_n, &b_trig_RoI_L2_j_n);
   fChain->SetBranchAddress("trig_RoI_EF_j_n", &trig_RoI_EF_j_n, &b_trig_RoI_EF_j_n);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   fChain->SetBranchAddress("trig_EF_trigmuonef_n", &trig_EF_trigmuonef_n, &b_trig_EF_trigmuonef_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_n", &trig_EF_trigmuonef_track_n, &b_trig_EF_trigmuonef_track_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MuonType", &trig_EF_trigmuonef_track_MuonType, &b_trig_EF_trigmuonef_track_MuonType);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_pt", &trig_EF_trigmuonef_track_MS_pt, &b_trig_EF_trigmuonef_track_MS_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_eta", &trig_EF_trigmuonef_track_MS_eta, &b_trig_EF_trigmuonef_track_MS_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_phi", &trig_EF_trigmuonef_track_MS_phi, &b_trig_EF_trigmuonef_track_MS_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_charge", &trig_EF_trigmuonef_track_MS_charge, &b_trig_EF_trigmuonef_track_MS_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_d0", &trig_EF_trigmuonef_track_MS_d0, &b_trig_EF_trigmuonef_track_MS_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_z0", &trig_EF_trigmuonef_track_MS_z0, &b_trig_EF_trigmuonef_track_MS_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2", &trig_EF_trigmuonef_track_MS_chi2, &b_trig_EF_trigmuonef_track_MS_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2prob", &trig_EF_trigmuonef_track_MS_chi2prob, &b_trig_EF_trigmuonef_track_MS_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posX", &trig_EF_trigmuonef_track_MS_posX, &b_trig_EF_trigmuonef_track_MS_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posY", &trig_EF_trigmuonef_track_MS_posY, &b_trig_EF_trigmuonef_track_MS_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posZ", &trig_EF_trigmuonef_track_MS_posZ, &b_trig_EF_trigmuonef_track_MS_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_hasMS", &trig_EF_trigmuonef_track_MS_hasMS, &b_trig_EF_trigmuonef_track_MS_hasMS);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_pt", &trig_EF_trigmuonef_track_SA_pt, &b_trig_EF_trigmuonef_track_SA_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_eta", &trig_EF_trigmuonef_track_SA_eta, &b_trig_EF_trigmuonef_track_SA_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_phi", &trig_EF_trigmuonef_track_SA_phi, &b_trig_EF_trigmuonef_track_SA_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_charge", &trig_EF_trigmuonef_track_SA_charge, &b_trig_EF_trigmuonef_track_SA_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_d0", &trig_EF_trigmuonef_track_SA_d0, &b_trig_EF_trigmuonef_track_SA_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_z0", &trig_EF_trigmuonef_track_SA_z0, &b_trig_EF_trigmuonef_track_SA_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2", &trig_EF_trigmuonef_track_SA_chi2, &b_trig_EF_trigmuonef_track_SA_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2prob", &trig_EF_trigmuonef_track_SA_chi2prob, &b_trig_EF_trigmuonef_track_SA_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posX", &trig_EF_trigmuonef_track_SA_posX, &b_trig_EF_trigmuonef_track_SA_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posY", &trig_EF_trigmuonef_track_SA_posY, &b_trig_EF_trigmuonef_track_SA_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posZ", &trig_EF_trigmuonef_track_SA_posZ, &b_trig_EF_trigmuonef_track_SA_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_hasSA", &trig_EF_trigmuonef_track_SA_hasSA, &b_trig_EF_trigmuonef_track_SA_hasSA);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_pt", &trig_EF_trigmuonef_track_CB_pt, &b_trig_EF_trigmuonef_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_eta", &trig_EF_trigmuonef_track_CB_eta, &b_trig_EF_trigmuonef_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_phi", &trig_EF_trigmuonef_track_CB_phi, &b_trig_EF_trigmuonef_track_CB_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_charge", &trig_EF_trigmuonef_track_CB_charge, &b_trig_EF_trigmuonef_track_CB_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_d0", &trig_EF_trigmuonef_track_CB_d0, &b_trig_EF_trigmuonef_track_CB_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_z0", &trig_EF_trigmuonef_track_CB_z0, &b_trig_EF_trigmuonef_track_CB_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2", &trig_EF_trigmuonef_track_CB_chi2, &b_trig_EF_trigmuonef_track_CB_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2prob", &trig_EF_trigmuonef_track_CB_chi2prob, &b_trig_EF_trigmuonef_track_CB_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posX", &trig_EF_trigmuonef_track_CB_posX, &b_trig_EF_trigmuonef_track_CB_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posY", &trig_EF_trigmuonef_track_CB_posY, &b_trig_EF_trigmuonef_track_CB_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posZ", &trig_EF_trigmuonef_track_CB_posZ, &b_trig_EF_trigmuonef_track_CB_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_matchChi2", &trig_EF_trigmuonef_track_CB_matchChi2, &b_trig_EF_trigmuonef_track_CB_matchChi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_hasCB", &trig_EF_trigmuonef_track_CB_hasCB, &b_trig_EF_trigmuonef_track_CB_hasCB);
   fChain->SetBranchAddress("trig_L2_el_n", &trig_L2_el_n, &b_trig_L2_el_n);
   fChain->SetBranchAddress("trig_L2_el_E", &trig_L2_el_E, &b_trig_L2_el_E);
   fChain->SetBranchAddress("trig_L2_el_Et", &trig_L2_el_Et, &b_trig_L2_el_Et);
   fChain->SetBranchAddress("trig_L2_el_pt", &trig_L2_el_pt, &b_trig_L2_el_pt);
   fChain->SetBranchAddress("trig_L2_el_eta", &trig_L2_el_eta, &b_trig_L2_el_eta);
   fChain->SetBranchAddress("trig_L2_el_phi", &trig_L2_el_phi, &b_trig_L2_el_phi);
   fChain->SetBranchAddress("trig_L2_el_RoIWord", &trig_L2_el_RoIWord, &b_trig_L2_el_RoIWord);
   fChain->SetBranchAddress("trig_L2_el_zvertex", &trig_L2_el_zvertex, &b_trig_L2_el_zvertex);
   fChain->SetBranchAddress("trig_L2_el_charge", &trig_L2_el_charge, &b_trig_L2_el_charge);
   fChain->SetBranchAddress("trig_EF_el_n", &trig_EF_el_n, &b_trig_EF_el_n);
   fChain->SetBranchAddress("trig_EF_el_E", &trig_EF_el_E, &b_trig_EF_el_E);
   fChain->SetBranchAddress("trig_EF_el_Et", &trig_EF_el_Et, &b_trig_EF_el_Et);
   fChain->SetBranchAddress("trig_EF_el_pt", &trig_EF_el_pt, &b_trig_EF_el_pt);
   fChain->SetBranchAddress("trig_EF_el_m", &trig_EF_el_m, &b_trig_EF_el_m);
   fChain->SetBranchAddress("trig_EF_el_eta", &trig_EF_el_eta, &b_trig_EF_el_eta);
   fChain->SetBranchAddress("trig_EF_el_phi", &trig_EF_el_phi, &b_trig_EF_el_phi);
   fChain->SetBranchAddress("trig_EF_el_px", &trig_EF_el_px, &b_trig_EF_el_px);
   fChain->SetBranchAddress("trig_EF_el_py", &trig_EF_el_py, &b_trig_EF_el_py);
   fChain->SetBranchAddress("trig_EF_el_pz", &trig_EF_el_pz, &b_trig_EF_el_pz);
   fChain->SetBranchAddress("trig_EF_el_charge", &trig_EF_el_charge, &b_trig_EF_el_charge);
   fChain->SetBranchAddress("trig_EF_el_author", &trig_EF_el_author, &b_trig_EF_el_author);
   fChain->SetBranchAddress("trig_EF_el_isEM", &trig_EF_el_isEM, &b_trig_EF_el_isEM);
   fChain->SetBranchAddress("trig_EF_el_loose", &trig_EF_el_loose, &b_trig_EF_el_loose);
   fChain->SetBranchAddress("trig_EF_el_medium", &trig_EF_el_medium, &b_trig_EF_el_medium);
   fChain->SetBranchAddress("trig_EF_el_mediumIso", &trig_EF_el_mediumIso, &b_trig_EF_el_mediumIso);
   fChain->SetBranchAddress("trig_EF_el_tight", &trig_EF_el_tight, &b_trig_EF_el_tight);
   fChain->SetBranchAddress("trig_EF_el_tightIso", &trig_EF_el_tightIso, &b_trig_EF_el_tightIso);
   fChain->SetBranchAddress("trig_EF_el_EF_2e10_loose", &trig_EF_el_EF_2e10_loose, &b_trig_EF_el_EF_2e10_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_2e10_medium", &trig_EF_el_EF_2e10_medium, &b_trig_EF_el_EF_2e10_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e15_loose", &trig_EF_el_EF_2e15_loose, &b_trig_EF_el_EF_2e15_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_loose", &trig_EF_el_EF_2e3_loose, &b_trig_EF_el_EF_2e3_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_loose_SiTrk", &trig_EF_el_EF_2e3_loose_SiTrk, &b_trig_EF_el_EF_2e3_loose_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_loose_TRT", &trig_EF_el_EF_2e3_loose_TRT, &b_trig_EF_el_EF_2e3_loose_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_medium", &trig_EF_el_EF_2e3_medium, &b_trig_EF_el_EF_2e3_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_medium_SiTrk", &trig_EF_el_EF_2e3_medium_SiTrk, &b_trig_EF_el_EF_2e3_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_medium_TRT", &trig_EF_el_EF_2e3_medium_TRT, &b_trig_EF_el_EF_2e3_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_2e3_tight", &trig_EF_el_EF_2e3_tight, &b_trig_EF_el_EF_2e3_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium", &trig_EF_el_EF_2e5_medium, &b_trig_EF_el_EF_2e5_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium_SiTrk", &trig_EF_el_EF_2e5_medium_SiTrk, &b_trig_EF_el_EF_2e5_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_medium_TRT", &trig_EF_el_EF_2e5_medium_TRT, &b_trig_EF_el_EF_2e5_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_2e5_tight", &trig_EF_el_EF_2e5_tight, &b_trig_EF_el_EF_2e5_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_NoCut", &trig_EF_el_EF_e10_NoCut, &b_trig_EF_el_EF_e10_NoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose", &trig_EF_el_EF_e10_loose, &b_trig_EF_el_EF_e10_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose_mu10", &trig_EF_el_EF_e10_loose_mu10, &b_trig_EF_el_EF_e10_loose_mu10);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_loose_mu6", &trig_EF_el_EF_e10_loose_mu6, &b_trig_EF_el_EF_e10_loose_mu6);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium", &trig_EF_el_EF_e10_medium, &b_trig_EF_el_EF_e10_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_IDTrkNoCut", &trig_EF_el_EF_e10_medium_IDTrkNoCut, &b_trig_EF_el_EF_e10_medium_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_SiTrk", &trig_EF_el_EF_e10_medium_SiTrk, &b_trig_EF_el_EF_e10_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_medium_TRT", &trig_EF_el_EF_e10_medium_TRT, &b_trig_EF_el_EF_e10_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_tight", &trig_EF_el_EF_e10_tight, &b_trig_EF_el_EF_e10_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e10_tight_TRT", &trig_EF_el_EF_e10_tight_TRT, &b_trig_EF_el_EF_e10_tight_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_loose", &trig_EF_el_EF_e15_loose, &b_trig_EF_el_EF_e15_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_loose_IDTrkNoCut", &trig_EF_el_EF_e15_loose_IDTrkNoCut, &b_trig_EF_el_EF_e15_loose_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium", &trig_EF_el_EF_e15_medium, &b_trig_EF_el_EF_e15_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_SiTrk", &trig_EF_el_EF_e15_medium_SiTrk, &b_trig_EF_el_EF_e15_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_medium_TRT", &trig_EF_el_EF_e15_medium_TRT, &b_trig_EF_el_EF_e15_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_tight", &trig_EF_el_EF_e15_tight, &b_trig_EF_el_EF_e15_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e15_tight_TRT", &trig_EF_el_EF_e15_tight_TRT, &b_trig_EF_el_EF_e15_tight_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e18_medium", &trig_EF_el_EF_e18_medium, &b_trig_EF_el_EF_e18_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose", &trig_EF_el_EF_e20_loose, &b_trig_EF_el_EF_e20_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_IDTrkNoCut", &trig_EF_el_EF_e20_loose_IDTrkNoCut, &b_trig_EF_el_EF_e20_loose_IDTrkNoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_TRT", &trig_EF_el_EF_e20_loose_TRT, &b_trig_EF_el_EF_e20_loose_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_passEF", &trig_EF_el_EF_e20_loose_passEF, &b_trig_EF_el_EF_e20_loose_passEF);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_passL2", &trig_EF_el_EF_e20_loose_passL2, &b_trig_EF_el_EF_e20_loose_passL2);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe20", &trig_EF_el_EF_e20_loose_xe20, &b_trig_EF_el_EF_e20_loose_xe20);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe20_noMu", &trig_EF_el_EF_e20_loose_xe20_noMu, &b_trig_EF_el_EF_e20_loose_xe20_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe30", &trig_EF_el_EF_e20_loose_xe30, &b_trig_EF_el_EF_e20_loose_xe30);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_loose_xe30_noMu", &trig_EF_el_EF_e20_loose_xe30_noMu, &b_trig_EF_el_EF_e20_loose_xe30_noMu);
   fChain->SetBranchAddress("trig_EF_el_EF_e20_medium", &trig_EF_el_EF_e20_medium, &b_trig_EF_el_EF_e20_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e25_loose", &trig_EF_el_EF_e25_loose, &b_trig_EF_el_EF_e25_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e25_medium", &trig_EF_el_EF_e25_medium, &b_trig_EF_el_EF_e25_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e30_loose", &trig_EF_el_EF_e30_loose, &b_trig_EF_el_EF_e30_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_loose", &trig_EF_el_EF_e3_loose, &b_trig_EF_el_EF_e3_loose);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_loose_SiTrk", &trig_EF_el_EF_e3_loose_SiTrk, &b_trig_EF_el_EF_e3_loose_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_loose_TRT", &trig_EF_el_EF_e3_loose_TRT, &b_trig_EF_el_EF_e3_loose_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_medium", &trig_EF_el_EF_e3_medium, &b_trig_EF_el_EF_e3_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_medium_SiTrk", &trig_EF_el_EF_e3_medium_SiTrk, &b_trig_EF_el_EF_e3_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e3_medium_TRT", &trig_EF_el_EF_e3_medium_TRT, &b_trig_EF_el_EF_e3_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_L2SW", &trig_EF_el_EF_e5_NoCut_L2SW, &b_trig_EF_el_EF_e5_NoCut_L2SW);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_Ringer", &trig_EF_el_EF_e5_NoCut_Ringer, &b_trig_EF_el_EF_e5_NoCut_Ringer);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_NoCut_firstempty", &trig_EF_el_EF_e5_NoCut_firstempty, &b_trig_EF_el_EF_e5_NoCut_firstempty);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_loose_mu4", &trig_EF_el_EF_e5_loose_mu4, &b_trig_EF_el_EF_e5_loose_mu4);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium", &trig_EF_el_EF_e5_medium, &b_trig_EF_el_EF_e5_medium);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_MV", &trig_EF_el_EF_e5_medium_MV, &b_trig_EF_el_EF_e5_medium_MV);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_SiTrk", &trig_EF_el_EF_e5_medium_SiTrk, &b_trig_EF_el_EF_e5_medium_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_TRT", &trig_EF_el_EF_e5_medium_TRT, &b_trig_EF_el_EF_e5_medium_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_medium_mu4", &trig_EF_el_EF_e5_medium_mu4, &b_trig_EF_el_EF_e5_medium_mu4);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight", &trig_EF_el_EF_e5_tight, &b_trig_EF_el_EF_e5_tight);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_SiTrk", &trig_EF_el_EF_e5_tight_SiTrk, &b_trig_EF_el_EF_e5_tight_SiTrk);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_TRT", &trig_EF_el_EF_e5_tight_TRT, &b_trig_EF_el_EF_e5_tight_TRT);
   fChain->SetBranchAddress("trig_EF_el_EF_e5_tight_e5_NoCut", &trig_EF_el_EF_e5_tight_e5_NoCut, &b_trig_EF_el_EF_e5_tight_e5_NoCut);
   fChain->SetBranchAddress("trig_EF_el_EF_em105_passHLT", &trig_EF_el_EF_em105_passHLT, &b_trig_EF_el_EF_em105_passHLT);
   fChain->SetBranchAddress("trig_EF_el_hastrack", &trig_EF_el_hastrack, &b_trig_EF_el_hastrack);
   fChain->SetBranchAddress("trig_RoI_EF_mu_n", &trig_RoI_EF_mu_n, &b_trig_RoI_EF_mu_n);
   fChain->SetBranchAddress("trig_RoI_EF_mu_type", &trig_RoI_EF_mu_type, &b_trig_RoI_EF_mu_type);
   fChain->SetBranchAddress("trig_RoI_EF_mu_lastStep", &trig_RoI_EF_mu_lastStep, &b_trig_RoI_EF_mu_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_mu_Muon_ROI", &trig_RoI_EF_mu_Muon_ROI, &b_trig_RoI_EF_mu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_mu_Muon_ROIStatus", &trig_RoI_EF_mu_Muon_ROIStatus, &b_trig_RoI_EF_mu_Muon_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID", &trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID, &b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus", &trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus, &b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer", &trig_RoI_EF_mu_TrigMuonEFInfoContainer, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_n", &trig_RoI_EF_e_n, &b_trig_RoI_EF_e_n);
   fChain->SetBranchAddress("trig_RoI_EF_e_type", &trig_RoI_EF_e_type, &b_trig_RoI_EF_e_type);
   fChain->SetBranchAddress("trig_RoI_EF_e_lastStep", &trig_RoI_EF_e_lastStep, &b_trig_RoI_EF_e_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROI", &trig_RoI_EF_e_EmTau_ROI, &b_trig_RoI_EF_e_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROIStatus", &trig_RoI_EF_e_EmTau_ROIStatus, &b_trig_RoI_EF_e_EmTau_ROIStatus);
   //   fChain->SetBranchAddress("trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID", &trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID, &b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFID);
   //   fChain->SetBranchAddress("trig_RoI_EF_e_Rec::TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus", &trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus, &b_trig_RoI_EF_e_Rec__TrackParticleContainer_HLT_InDetTrigParticleCreation_Electron_EFIDStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Electrons", &trig_RoI_EF_e_egammaContainer_egamma_Electrons, &b_trig_RoI_EF_e_egammaContainer_egamma_Electrons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus", &trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Photons", &trig_RoI_EF_e_egammaContainer_egamma_Photons, &b_trig_RoI_EF_e_egammaContainer_egamma_Photons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus", &trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus);
   fChain->SetBranchAddress("trig_L1_emtau_n", &trig_L1_emtau_n, &b_trig_L1_emtau_n);
   fChain->SetBranchAddress("trig_L1_emtau_eta", &trig_L1_emtau_eta, &b_trig_L1_emtau_eta);
   fChain->SetBranchAddress("trig_L1_emtau_phi", &trig_L1_emtau_phi, &b_trig_L1_emtau_phi);
   fChain->SetBranchAddress("trig_L1_emtau_thrNames", &trig_L1_emtau_thrNames, &b_trig_L1_emtau_thrNames);
   fChain->SetBranchAddress("trig_L1_emtau_thrValues", &trig_L1_emtau_thrValues, &b_trig_L1_emtau_thrValues);
   fChain->SetBranchAddress("trig_L1_emtau_core", &trig_L1_emtau_core, &b_trig_L1_emtau_core);
   fChain->SetBranchAddress("trig_L1_emtau_EMClus", &trig_L1_emtau_EMClus, &b_trig_L1_emtau_EMClus);
   fChain->SetBranchAddress("trig_L1_emtau_tauClus", &trig_L1_emtau_tauClus, &b_trig_L1_emtau_tauClus);
   fChain->SetBranchAddress("trig_L1_emtau_EMIsol", &trig_L1_emtau_EMIsol, &b_trig_L1_emtau_EMIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadIsol", &trig_L1_emtau_hadIsol, &b_trig_L1_emtau_hadIsol);
   fChain->SetBranchAddress("trig_L1_emtau_hadCore", &trig_L1_emtau_hadCore, &b_trig_L1_emtau_hadCore);
   fChain->SetBranchAddress("trig_L1_emtau_thrPattern", &trig_L1_emtau_thrPattern, &b_trig_L1_emtau_thrPattern);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM10", &trig_L1_emtau_L1_2EM10, &b_trig_L1_emtau_L1_2EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM14", &trig_L1_emtau_L1_2EM14, &b_trig_L1_emtau_L1_2EM14);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM2", &trig_L1_emtau_L1_2EM2, &b_trig_L1_emtau_L1_2EM2);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM3", &trig_L1_emtau_L1_2EM3, &b_trig_L1_emtau_L1_2EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_2EM5", &trig_L1_emtau_L1_2EM5, &b_trig_L1_emtau_L1_2EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10", &trig_L1_emtau_L1_EM10, &b_trig_L1_emtau_L1_EM10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM10I", &trig_L1_emtau_L1_EM10I, &b_trig_L1_emtau_L1_EM10I);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14", &trig_L1_emtau_L1_EM14, &b_trig_L1_emtau_L1_EM14);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14I", &trig_L1_emtau_L1_EM14I, &b_trig_L1_emtau_L1_EM14I);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14_XE10", &trig_L1_emtau_L1_EM14_XE10, &b_trig_L1_emtau_L1_EM14_XE10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM14_XE15", &trig_L1_emtau_L1_EM14_XE15, &b_trig_L1_emtau_L1_EM14_XE15);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM2", &trig_L1_emtau_L1_EM2, &b_trig_L1_emtau_L1_EM2);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM2_UNPAIRED_ISO", &trig_L1_emtau_L1_EM2_UNPAIRED_ISO, &b_trig_L1_emtau_L1_EM2_UNPAIRED_ISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM2_UNPAIRED_NONISO", &trig_L1_emtau_L1_EM2_UNPAIRED_NONISO, &b_trig_L1_emtau_L1_EM2_UNPAIRED_NONISO);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3", &trig_L1_emtau_L1_EM3, &b_trig_L1_emtau_L1_EM3);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_EMPTY", &trig_L1_emtau_L1_EM3_EMPTY, &b_trig_L1_emtau_L1_EM3_EMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_FIRSTEMPTY", &trig_L1_emtau_L1_EM3_FIRSTEMPTY, &b_trig_L1_emtau_L1_EM3_FIRSTEMPTY);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM3_MV", &trig_L1_emtau_L1_EM3_MV, &b_trig_L1_emtau_L1_EM3_MV);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5", &trig_L1_emtau_L1_EM5, &b_trig_L1_emtau_L1_EM5);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_MU10", &trig_L1_emtau_L1_EM5_MU10, &b_trig_L1_emtau_L1_EM5_MU10);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM5_MU6", &trig_L1_emtau_L1_EM5_MU6, &b_trig_L1_emtau_L1_EM5_MU6);
   fChain->SetBranchAddress("trig_L1_emtau_L1_EM85", &trig_L1_emtau_L1_EM85, &b_trig_L1_emtau_L1_EM85);
   fChain->SetBranchAddress("trig_L1_emtau_RoIWord", &trig_L1_emtau_RoIWord, &b_trig_L1_emtau_RoIWord);
   fChain->SetBranchAddress("trig_EF_tau_n", &trig_EF_tau_n, &b_trig_EF_tau_n);
   fChain->SetBranchAddress("trig_EF_tau_Et", &trig_EF_tau_Et, &b_trig_EF_tau_Et);
   fChain->SetBranchAddress("trig_EF_tau_pt", &trig_EF_tau_pt, &b_trig_EF_tau_pt);
   fChain->SetBranchAddress("trig_EF_tau_m", &trig_EF_tau_m, &b_trig_EF_tau_m);
   fChain->SetBranchAddress("trig_EF_tau_eta", &trig_EF_tau_eta, &b_trig_EF_tau_eta);
   fChain->SetBranchAddress("trig_EF_tau_phi", &trig_EF_tau_phi, &b_trig_EF_tau_phi);
   fChain->SetBranchAddress("trig_EF_tau_px", &trig_EF_tau_px, &b_trig_EF_tau_px);
   fChain->SetBranchAddress("trig_EF_tau_py", &trig_EF_tau_py, &b_trig_EF_tau_py);
   fChain->SetBranchAddress("trig_EF_tau_pz", &trig_EF_tau_pz, &b_trig_EF_tau_pz);
   fChain->SetBranchAddress("trig_EF_tau_RoIword", &trig_EF_tau_RoIword, &b_trig_EF_tau_RoIword);
   fChain->SetBranchAddress("trig_EF_tau_author", &trig_EF_tau_author, &b_trig_EF_tau_author);
   fChain->SetBranchAddress("trig_EF_tau_ROIword", &trig_EF_tau_ROIword, &b_trig_EF_tau_ROIword);
   fChain->SetBranchAddress("trig_EF_tau_nProng", &trig_EF_tau_nProng, &b_trig_EF_tau_nProng);
   fChain->SetBranchAddress("trig_EF_tau_numTrack", &trig_EF_tau_numTrack, &b_trig_EF_tau_numTrack);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_numTrack", &trig_EF_tau_seedCalo_numTrack, &b_trig_EF_tau_seedCalo_numTrack);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_sumTrkPt", &trig_EF_tau_calcVars_sumTrkPt, &b_trig_EF_tau_calcVars_sumTrkPt);
   fChain->SetBranchAddress("trig_EF_tau_nLooseTrk", &trig_EF_tau_nLooseTrk, &b_trig_EF_tau_nLooseTrk);
   fChain->SetBranchAddress("trig_EF_tau_leadLooseTrkPt", &trig_EF_tau_leadLooseTrkPt, &b_trig_EF_tau_leadLooseTrkPt);
   fChain->SetBranchAddress("trig_EF_tau_leadLooseTrkEta", &trig_EF_tau_leadLooseTrkEta, &b_trig_EF_tau_leadLooseTrkEta);
   fChain->SetBranchAddress("trig_EF_tau_leadLooseTrkPhi", &trig_EF_tau_leadLooseTrkPhi, &b_trig_EF_tau_leadLooseTrkPhi);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_EMRadius", &trig_EF_tau_seedCalo_EMRadius, &b_trig_EF_tau_seedCalo_EMRadius);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_hadRadius", &trig_EF_tau_seedCalo_hadRadius, &b_trig_EF_tau_seedCalo_hadRadius);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_etEMAtEMScale", &trig_EF_tau_seedCalo_etEMAtEMScale, &b_trig_EF_tau_seedCalo_etEMAtEMScale);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_etHadAtEMScale", &trig_EF_tau_seedCalo_etHadAtEMScale, &b_trig_EF_tau_seedCalo_etHadAtEMScale);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_isolFrac", &trig_EF_tau_seedCalo_isolFrac, &b_trig_EF_tau_seedCalo_isolFrac);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_centFrac", &trig_EF_tau_seedCalo_centFrac, &b_trig_EF_tau_seedCalo_centFrac);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_etEMCalib", &trig_EF_tau_seedCalo_etEMCalib, &b_trig_EF_tau_seedCalo_etEMCalib);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_etHadCalib", &trig_EF_tau_seedCalo_etHadCalib, &b_trig_EF_tau_seedCalo_etHadCalib);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_eta", &trig_EF_tau_seedCalo_eta, &b_trig_EF_tau_seedCalo_eta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_phi", &trig_EF_tau_seedCalo_phi, &b_trig_EF_tau_seedCalo_phi);
   fChain->SetBranchAddress("trig_EF_tau_invMassOfTrks", &trig_EF_tau_invMassOfTrks, &b_trig_EF_tau_invMassOfTrks);
   fChain->SetBranchAddress("trig_EF_tau_looseTrkWidth", &trig_EF_tau_looseTrkWidth, &b_trig_EF_tau_looseTrkWidth);
   fChain->SetBranchAddress("trig_EF_tau_looseTrkRadius", &trig_EF_tau_looseTrkRadius, &b_trig_EF_tau_looseTrkRadius);
   fChain->SetBranchAddress("trig_EF_tau_etOverPtLeadTrk", &trig_EF_tau_etOverPtLeadTrk, &b_trig_EF_tau_etOverPtLeadTrk);
   fChain->SetBranchAddress("trig_EF_tau_ipZ0SinThetaSigLeadTrk", &trig_EF_tau_ipZ0SinThetaSigLeadTrk, &b_trig_EF_tau_ipZ0SinThetaSigLeadTrk);
   fChain->SetBranchAddress("trig_EF_tau_leadTrkPt", &trig_EF_tau_leadTrkPt, &b_trig_EF_tau_leadTrkPt);
   fChain->SetBranchAddress("trig_EF_tau_ipSigLeadTrk", &trig_EF_tau_ipSigLeadTrk, &b_trig_EF_tau_ipSigLeadTrk);
   fChain->SetBranchAddress("trig_EF_tau_ipSigLeadLooseTrk", &trig_EF_tau_ipSigLeadLooseTrk, &b_trig_EF_tau_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("trig_EF_tau_trFlightPathSig", &trig_EF_tau_trFlightPathSig, &b_trig_EF_tau_trFlightPathSig);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_stripWidth2", &trig_EF_tau_seedCalo_stripWidth2, &b_trig_EF_tau_seedCalo_stripWidth2);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_nStrip", &trig_EF_tau_seedCalo_nStrip, &b_trig_EF_tau_seedCalo_nStrip);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_trkAvgDist", &trig_EF_tau_seedCalo_trkAvgDist, &b_trig_EF_tau_seedCalo_trkAvgDist);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_trkRmsDist", &trig_EF_tau_seedCalo_trkRmsDist, &b_trig_EF_tau_seedCalo_trkRmsDist);
   fChain->SetBranchAddress("trig_EF_tau_numTopoClusters", &trig_EF_tau_numTopoClusters, &b_trig_EF_tau_numTopoClusters);
   fChain->SetBranchAddress("trig_EF_tau_numEffTopoClusters", &trig_EF_tau_numEffTopoClusters, &b_trig_EF_tau_numEffTopoClusters);
   fChain->SetBranchAddress("trig_EF_tau_topoInvMass", &trig_EF_tau_topoInvMass, &b_trig_EF_tau_topoInvMass);
   fChain->SetBranchAddress("trig_EF_tau_effTopoInvMass", &trig_EF_tau_effTopoInvMass, &b_trig_EF_tau_effTopoInvMass);
   fChain->SetBranchAddress("trig_EF_tau_topoMeanDeltaR", &trig_EF_tau_topoMeanDeltaR, &b_trig_EF_tau_topoMeanDeltaR);
   fChain->SetBranchAddress("trig_EF_tau_effTopoMeanDeltaR", &trig_EF_tau_effTopoMeanDeltaR, &b_trig_EF_tau_effTopoMeanDeltaR);
   fChain->SetBranchAddress("trig_EF_tau_numCells", &trig_EF_tau_numCells, &b_trig_EF_tau_numCells);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_sumTrkPt", &trig_EF_tau_calcVars_EF_tau_sumTrkPt, &b_trig_EF_tau_calcVars_EF_tau_sumTrkPt);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks", &trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks, &b_trig_EF_tau_calcVars_EF_tau_etHadSumPtTracks);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks", &trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks, &b_trig_EF_tau_calcVars_EF_tau_etEMSumPtTracks);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks", &trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks, &b_trig_EF_tau_calcVars_EF_tau_etHad_EMScalePt3Trks);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks", &trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks, &b_trig_EF_tau_calcVars_EF_tau_etEM_EMScale_Pt3Trks);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_mass", &trig_EF_tau_calcVars_EF_tau_mass, &b_trig_EF_tau_calcVars_EF_tau_mass);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk", &trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk, &b_trig_EF_tau_calcVars_EF_tau_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_drMax", &trig_EF_tau_calcVars_EF_tau_drMax, &b_trig_EF_tau_calcVars_EF_tau_drMax);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_drMin", &trig_EF_tau_calcVars_EF_tau_drMin, &b_trig_EF_tau_calcVars_EF_tau_drMin);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_emFracCalib", &trig_EF_tau_calcVars_EF_tau_emFracCalib, &b_trig_EF_tau_calcVars_EF_tau_emFracCalib);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk", &trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk, &b_trig_EF_tau_calcVars_EF_tau_TRTHTOverLT_LeadTrk);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_calRadius", &trig_EF_tau_calcVars_calRadius, &b_trig_EF_tau_calcVars_calRadius);
   fChain->SetBranchAddress("trig_EF_tau_calcVars_EMFractionAtEMScale", &trig_EF_tau_calcVars_EMFractionAtEMScale, &b_trig_EF_tau_calcVars_EMFractionAtEMScale);
   fChain->SetBranchAddress("trig_EF_tau_track_n", &trig_EF_tau_track_n, &b_trig_EF_tau_track_n);
   fChain->SetBranchAddress("trig_EF_tau_track_d0", &trig_EF_tau_track_d0, &b_trig_EF_tau_track_d0);
   fChain->SetBranchAddress("trig_EF_tau_track_z0", &trig_EF_tau_track_z0, &b_trig_EF_tau_track_z0);
   fChain->SetBranchAddress("trig_EF_tau_track_phi", &trig_EF_tau_track_phi, &b_trig_EF_tau_track_phi);
   fChain->SetBranchAddress("trig_EF_tau_track_theta", &trig_EF_tau_track_theta, &b_trig_EF_tau_track_theta);
   fChain->SetBranchAddress("trig_EF_tau_track_qoverp", &trig_EF_tau_track_qoverp, &b_trig_EF_tau_track_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_track_pt", &trig_EF_tau_track_pt, &b_trig_EF_tau_track_pt);
   fChain->SetBranchAddress("trig_EF_tau_track_eta", &trig_EF_tau_track_eta, &b_trig_EF_tau_track_eta);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_d0", &trig_EF_tau_track_atPV_d0, &b_trig_EF_tau_track_atPV_d0);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_z0", &trig_EF_tau_track_atPV_z0, &b_trig_EF_tau_track_atPV_z0);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_phi", &trig_EF_tau_track_atPV_phi, &b_trig_EF_tau_track_atPV_phi);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_theta", &trig_EF_tau_track_atPV_theta, &b_trig_EF_tau_track_atPV_theta);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_qoverp", &trig_EF_tau_track_atPV_qoverp, &b_trig_EF_tau_track_atPV_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_pt", &trig_EF_tau_track_atPV_pt, &b_trig_EF_tau_track_atPV_pt);
   fChain->SetBranchAddress("trig_EF_tau_track_atPV_eta", &trig_EF_tau_track_atPV_eta, &b_trig_EF_tau_track_atPV_eta);
   fChain->SetBranchAddress("trig_EF_tau_track_nBLHits", &trig_EF_tau_track_nBLHits, &b_trig_EF_tau_track_nBLHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nPixHits", &trig_EF_tau_track_nPixHits, &b_trig_EF_tau_track_nPixHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nSCTHits", &trig_EF_tau_track_nSCTHits, &b_trig_EF_tau_track_nSCTHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nTRTHits", &trig_EF_tau_track_nTRTHits, &b_trig_EF_tau_track_nTRTHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nPixHoles", &trig_EF_tau_track_nPixHoles, &b_trig_EF_tau_track_nPixHoles);
   fChain->SetBranchAddress("trig_EF_tau_track_nSCTHoles", &trig_EF_tau_track_nSCTHoles, &b_trig_EF_tau_track_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_tau_track_nBLSharedHits", &trig_EF_tau_track_nBLSharedHits, &b_trig_EF_tau_track_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nPixSharedHits", &trig_EF_tau_track_nPixSharedHits, &b_trig_EF_tau_track_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nSCTSharedHits", &trig_EF_tau_track_nSCTSharedHits, &b_trig_EF_tau_track_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nTRTHighTHits", &trig_EF_tau_track_nTRTHighTHits, &b_trig_EF_tau_track_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_tau_track_nTRTOutliers", &trig_EF_tau_track_nTRTOutliers, &b_trig_EF_tau_track_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_track_nTRTHighTOutliers", &trig_EF_tau_track_nTRTHighTOutliers, &b_trig_EF_tau_track_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_track_nHits", &trig_EF_tau_track_nHits, &b_trig_EF_tau_track_nHits);
   fChain->SetBranchAddress("trig_EF_tau_track_pixeldEdx", &trig_EF_tau_track_pixeldEdx, &b_trig_EF_tau_track_pixeldEdx);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_n", &trig_EF_tau_seedCalo_track_n, &b_trig_EF_tau_seedCalo_track_n);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_d0", &trig_EF_tau_seedCalo_track_d0, &b_trig_EF_tau_seedCalo_track_d0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_z0", &trig_EF_tau_seedCalo_track_z0, &b_trig_EF_tau_seedCalo_track_z0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_phi", &trig_EF_tau_seedCalo_track_phi, &b_trig_EF_tau_seedCalo_track_phi);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_theta", &trig_EF_tau_seedCalo_track_theta, &b_trig_EF_tau_seedCalo_track_theta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_qoverp", &trig_EF_tau_seedCalo_track_qoverp, &b_trig_EF_tau_seedCalo_track_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_pt", &trig_EF_tau_seedCalo_track_pt, &b_trig_EF_tau_seedCalo_track_pt);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_eta", &trig_EF_tau_seedCalo_track_eta, &b_trig_EF_tau_seedCalo_track_eta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_d0", &trig_EF_tau_seedCalo_track_atPV_d0, &b_trig_EF_tau_seedCalo_track_atPV_d0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_z0", &trig_EF_tau_seedCalo_track_atPV_z0, &b_trig_EF_tau_seedCalo_track_atPV_z0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_phi", &trig_EF_tau_seedCalo_track_atPV_phi, &b_trig_EF_tau_seedCalo_track_atPV_phi);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_theta", &trig_EF_tau_seedCalo_track_atPV_theta, &b_trig_EF_tau_seedCalo_track_atPV_theta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_qoverp", &trig_EF_tau_seedCalo_track_atPV_qoverp, &b_trig_EF_tau_seedCalo_track_atPV_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_pt", &trig_EF_tau_seedCalo_track_atPV_pt, &b_trig_EF_tau_seedCalo_track_atPV_pt);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_atPV_eta", &trig_EF_tau_seedCalo_track_atPV_eta, &b_trig_EF_tau_seedCalo_track_atPV_eta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nBLHits", &trig_EF_tau_seedCalo_track_nBLHits, &b_trig_EF_tau_seedCalo_track_nBLHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nPixHits", &trig_EF_tau_seedCalo_track_nPixHits, &b_trig_EF_tau_seedCalo_track_nPixHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nSCTHits", &trig_EF_tau_seedCalo_track_nSCTHits, &b_trig_EF_tau_seedCalo_track_nSCTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nTRTHits", &trig_EF_tau_seedCalo_track_nTRTHits, &b_trig_EF_tau_seedCalo_track_nTRTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nPixHoles", &trig_EF_tau_seedCalo_track_nPixHoles, &b_trig_EF_tau_seedCalo_track_nPixHoles);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nSCTHoles", &trig_EF_tau_seedCalo_track_nSCTHoles, &b_trig_EF_tau_seedCalo_track_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nBLSharedHits", &trig_EF_tau_seedCalo_track_nBLSharedHits, &b_trig_EF_tau_seedCalo_track_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nPixSharedHits", &trig_EF_tau_seedCalo_track_nPixSharedHits, &b_trig_EF_tau_seedCalo_track_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nSCTSharedHits", &trig_EF_tau_seedCalo_track_nSCTSharedHits, &b_trig_EF_tau_seedCalo_track_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nTRTHighTHits", &trig_EF_tau_seedCalo_track_nTRTHighTHits, &b_trig_EF_tau_seedCalo_track_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nTRTOutliers", &trig_EF_tau_seedCalo_track_nTRTOutliers, &b_trig_EF_tau_seedCalo_track_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nTRTHighTOutliers", &trig_EF_tau_seedCalo_track_nTRTHighTOutliers, &b_trig_EF_tau_seedCalo_track_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_nHits", &trig_EF_tau_seedCalo_track_nHits, &b_trig_EF_tau_seedCalo_track_nHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_track_pixeldEdx", &trig_EF_tau_seedCalo_track_pixeldEdx, &b_trig_EF_tau_seedCalo_track_pixeldEdx);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_n", &trig_EF_tau_loosetrack_n, &b_trig_EF_tau_loosetrack_n);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_d0", &trig_EF_tau_loosetrack_d0, &b_trig_EF_tau_loosetrack_d0);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_z0", &trig_EF_tau_loosetrack_z0, &b_trig_EF_tau_loosetrack_z0);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_phi", &trig_EF_tau_loosetrack_phi, &b_trig_EF_tau_loosetrack_phi);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_theta", &trig_EF_tau_loosetrack_theta, &b_trig_EF_tau_loosetrack_theta);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_qoverp", &trig_EF_tau_loosetrack_qoverp, &b_trig_EF_tau_loosetrack_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_pt", &trig_EF_tau_loosetrack_pt, &b_trig_EF_tau_loosetrack_pt);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_eta", &trig_EF_tau_loosetrack_eta, &b_trig_EF_tau_loosetrack_eta);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_d0", &trig_EF_tau_loosetrack_atPV_d0, &b_trig_EF_tau_loosetrack_atPV_d0);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_z0", &trig_EF_tau_loosetrack_atPV_z0, &b_trig_EF_tau_loosetrack_atPV_z0);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_phi", &trig_EF_tau_loosetrack_atPV_phi, &b_trig_EF_tau_loosetrack_atPV_phi);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_theta", &trig_EF_tau_loosetrack_atPV_theta, &b_trig_EF_tau_loosetrack_atPV_theta);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_qoverp", &trig_EF_tau_loosetrack_atPV_qoverp, &b_trig_EF_tau_loosetrack_atPV_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_pt", &trig_EF_tau_loosetrack_atPV_pt, &b_trig_EF_tau_loosetrack_atPV_pt);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_atPV_eta", &trig_EF_tau_loosetrack_atPV_eta, &b_trig_EF_tau_loosetrack_atPV_eta);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nBLHits", &trig_EF_tau_loosetrack_nBLHits, &b_trig_EF_tau_loosetrack_nBLHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nPixHits", &trig_EF_tau_loosetrack_nPixHits, &b_trig_EF_tau_loosetrack_nPixHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nSCTHits", &trig_EF_tau_loosetrack_nSCTHits, &b_trig_EF_tau_loosetrack_nSCTHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nTRTHits", &trig_EF_tau_loosetrack_nTRTHits, &b_trig_EF_tau_loosetrack_nTRTHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nPixHoles", &trig_EF_tau_loosetrack_nPixHoles, &b_trig_EF_tau_loosetrack_nPixHoles);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nSCTHoles", &trig_EF_tau_loosetrack_nSCTHoles, &b_trig_EF_tau_loosetrack_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nBLSharedHits", &trig_EF_tau_loosetrack_nBLSharedHits, &b_trig_EF_tau_loosetrack_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nPixSharedHits", &trig_EF_tau_loosetrack_nPixSharedHits, &b_trig_EF_tau_loosetrack_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nSCTSharedHits", &trig_EF_tau_loosetrack_nSCTSharedHits, &b_trig_EF_tau_loosetrack_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nTRTHighTHits", &trig_EF_tau_loosetrack_nTRTHighTHits, &b_trig_EF_tau_loosetrack_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nTRTOutliers", &trig_EF_tau_loosetrack_nTRTOutliers, &b_trig_EF_tau_loosetrack_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nTRTHighTOutliers", &trig_EF_tau_loosetrack_nTRTHighTOutliers, &b_trig_EF_tau_loosetrack_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_nHits", &trig_EF_tau_loosetrack_nHits, &b_trig_EF_tau_loosetrack_nHits);
   fChain->SetBranchAddress("trig_EF_tau_loosetrack_pixeldEdx", &trig_EF_tau_loosetrack_pixeldEdx, &b_trig_EF_tau_loosetrack_pixeldEdx);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_n", &trig_EF_tau_seedCalo_widetrack_n, &b_trig_EF_tau_seedCalo_widetrack_n);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_d0", &trig_EF_tau_seedCalo_widetrack_d0, &b_trig_EF_tau_seedCalo_widetrack_d0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_z0", &trig_EF_tau_seedCalo_widetrack_z0, &b_trig_EF_tau_seedCalo_widetrack_z0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_phi", &trig_EF_tau_seedCalo_widetrack_phi, &b_trig_EF_tau_seedCalo_widetrack_phi);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_theta", &trig_EF_tau_seedCalo_widetrack_theta, &b_trig_EF_tau_seedCalo_widetrack_theta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_qoverp", &trig_EF_tau_seedCalo_widetrack_qoverp, &b_trig_EF_tau_seedCalo_widetrack_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_pt", &trig_EF_tau_seedCalo_widetrack_pt, &b_trig_EF_tau_seedCalo_widetrack_pt);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_eta", &trig_EF_tau_seedCalo_widetrack_eta, &b_trig_EF_tau_seedCalo_widetrack_eta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_d0", &trig_EF_tau_seedCalo_widetrack_atPV_d0, &b_trig_EF_tau_seedCalo_widetrack_atPV_d0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_z0", &trig_EF_tau_seedCalo_widetrack_atPV_z0, &b_trig_EF_tau_seedCalo_widetrack_atPV_z0);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_phi", &trig_EF_tau_seedCalo_widetrack_atPV_phi, &b_trig_EF_tau_seedCalo_widetrack_atPV_phi);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_theta", &trig_EF_tau_seedCalo_widetrack_atPV_theta, &b_trig_EF_tau_seedCalo_widetrack_atPV_theta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_qoverp", &trig_EF_tau_seedCalo_widetrack_atPV_qoverp, &b_trig_EF_tau_seedCalo_widetrack_atPV_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_pt", &trig_EF_tau_seedCalo_widetrack_atPV_pt, &b_trig_EF_tau_seedCalo_widetrack_atPV_pt);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_atPV_eta", &trig_EF_tau_seedCalo_widetrack_atPV_eta, &b_trig_EF_tau_seedCalo_widetrack_atPV_eta);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nBLHits", &trig_EF_tau_seedCalo_widetrack_nBLHits, &b_trig_EF_tau_seedCalo_widetrack_nBLHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nPixHits", &trig_EF_tau_seedCalo_widetrack_nPixHits, &b_trig_EF_tau_seedCalo_widetrack_nPixHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nSCTHits", &trig_EF_tau_seedCalo_widetrack_nSCTHits, &b_trig_EF_tau_seedCalo_widetrack_nSCTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nTRTHits", &trig_EF_tau_seedCalo_widetrack_nTRTHits, &b_trig_EF_tau_seedCalo_widetrack_nTRTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nPixHoles", &trig_EF_tau_seedCalo_widetrack_nPixHoles, &b_trig_EF_tau_seedCalo_widetrack_nPixHoles);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nSCTHoles", &trig_EF_tau_seedCalo_widetrack_nSCTHoles, &b_trig_EF_tau_seedCalo_widetrack_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nBLSharedHits", &trig_EF_tau_seedCalo_widetrack_nBLSharedHits, &b_trig_EF_tau_seedCalo_widetrack_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nPixSharedHits", &trig_EF_tau_seedCalo_widetrack_nPixSharedHits, &b_trig_EF_tau_seedCalo_widetrack_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nSCTSharedHits", &trig_EF_tau_seedCalo_widetrack_nSCTSharedHits, &b_trig_EF_tau_seedCalo_widetrack_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nTRTHighTHits", &trig_EF_tau_seedCalo_widetrack_nTRTHighTHits, &b_trig_EF_tau_seedCalo_widetrack_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nTRTOutliers", &trig_EF_tau_seedCalo_widetrack_nTRTOutliers, &b_trig_EF_tau_seedCalo_widetrack_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers", &trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers, &b_trig_EF_tau_seedCalo_widetrack_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_nHits", &trig_EF_tau_seedCalo_widetrack_nHits, &b_trig_EF_tau_seedCalo_widetrack_nHits);
   fChain->SetBranchAddress("trig_EF_tau_seedCalo_widetrack_pixeldEdx", &trig_EF_tau_seedCalo_widetrack_pixeldEdx, &b_trig_EF_tau_seedCalo_widetrack_pixeldEdx);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_n", &trig_EF_tau_othertrack_n, &b_trig_EF_tau_othertrack_n);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_d0", &trig_EF_tau_othertrack_d0, &b_trig_EF_tau_othertrack_d0);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_z0", &trig_EF_tau_othertrack_z0, &b_trig_EF_tau_othertrack_z0);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_phi", &trig_EF_tau_othertrack_phi, &b_trig_EF_tau_othertrack_phi);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_theta", &trig_EF_tau_othertrack_theta, &b_trig_EF_tau_othertrack_theta);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_qoverp", &trig_EF_tau_othertrack_qoverp, &b_trig_EF_tau_othertrack_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_pt", &trig_EF_tau_othertrack_pt, &b_trig_EF_tau_othertrack_pt);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_eta", &trig_EF_tau_othertrack_eta, &b_trig_EF_tau_othertrack_eta);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_d0", &trig_EF_tau_othertrack_atPV_d0, &b_trig_EF_tau_othertrack_atPV_d0);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_z0", &trig_EF_tau_othertrack_atPV_z0, &b_trig_EF_tau_othertrack_atPV_z0);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_phi", &trig_EF_tau_othertrack_atPV_phi, &b_trig_EF_tau_othertrack_atPV_phi);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_theta", &trig_EF_tau_othertrack_atPV_theta, &b_trig_EF_tau_othertrack_atPV_theta);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_qoverp", &trig_EF_tau_othertrack_atPV_qoverp, &b_trig_EF_tau_othertrack_atPV_qoverp);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_pt", &trig_EF_tau_othertrack_atPV_pt, &b_trig_EF_tau_othertrack_atPV_pt);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_atPV_eta", &trig_EF_tau_othertrack_atPV_eta, &b_trig_EF_tau_othertrack_atPV_eta);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nBLHits", &trig_EF_tau_othertrack_nBLHits, &b_trig_EF_tau_othertrack_nBLHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nPixHits", &trig_EF_tau_othertrack_nPixHits, &b_trig_EF_tau_othertrack_nPixHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nSCTHits", &trig_EF_tau_othertrack_nSCTHits, &b_trig_EF_tau_othertrack_nSCTHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nTRTHits", &trig_EF_tau_othertrack_nTRTHits, &b_trig_EF_tau_othertrack_nTRTHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nPixHoles", &trig_EF_tau_othertrack_nPixHoles, &b_trig_EF_tau_othertrack_nPixHoles);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nSCTHoles", &trig_EF_tau_othertrack_nSCTHoles, &b_trig_EF_tau_othertrack_nSCTHoles);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nBLSharedHits", &trig_EF_tau_othertrack_nBLSharedHits, &b_trig_EF_tau_othertrack_nBLSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nPixSharedHits", &trig_EF_tau_othertrack_nPixSharedHits, &b_trig_EF_tau_othertrack_nPixSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nSCTSharedHits", &trig_EF_tau_othertrack_nSCTSharedHits, &b_trig_EF_tau_othertrack_nSCTSharedHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nTRTHighTHits", &trig_EF_tau_othertrack_nTRTHighTHits, &b_trig_EF_tau_othertrack_nTRTHighTHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nTRTOutliers", &trig_EF_tau_othertrack_nTRTOutliers, &b_trig_EF_tau_othertrack_nTRTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nTRTHighTOutliers", &trig_EF_tau_othertrack_nTRTHighTOutliers, &b_trig_EF_tau_othertrack_nTRTHighTOutliers);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_nHits", &trig_EF_tau_othertrack_nHits, &b_trig_EF_tau_othertrack_nHits);
   fChain->SetBranchAddress("trig_EF_tau_othertrack_pixeldEdx", &trig_EF_tau_othertrack_pixeldEdx, &b_trig_EF_tau_othertrack_pixeldEdx);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_n", &trig_L2_trk_idscan_tau_n, &b_trig_L2_trk_idscan_tau_n);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_algorithmId", &trig_L2_trk_idscan_tau_algorithmId, &b_trig_L2_trk_idscan_tau_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_trackStatus", &trig_L2_trk_idscan_tau_trackStatus, &b_trig_L2_trk_idscan_tau_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_chi2Ndof", &trig_L2_trk_idscan_tau_chi2Ndof, &b_trig_L2_trk_idscan_tau_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nStrawHits", &trig_L2_trk_idscan_tau_nStrawHits, &b_trig_L2_trk_idscan_tau_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nHighThrHits", &trig_L2_trk_idscan_tau_nHighThrHits, &b_trig_L2_trk_idscan_tau_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nPixelSpacePoints", &trig_L2_trk_idscan_tau_nPixelSpacePoints, &b_trig_L2_trk_idscan_tau_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nSCT_SpacePoints", &trig_L2_trk_idscan_tau_nSCT_SpacePoints, &b_trig_L2_trk_idscan_tau_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_hitPattern", &trig_L2_trk_idscan_tau_hitPattern, &b_trig_L2_trk_idscan_tau_hitPattern);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nStraw", &trig_L2_trk_idscan_tau_nStraw, &b_trig_L2_trk_idscan_tau_nStraw);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_nStrawTime", &trig_L2_trk_idscan_tau_nStrawTime, &b_trig_L2_trk_idscan_tau_nStrawTime);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_a0", &trig_L2_trk_idscan_tau_a0, &b_trig_L2_trk_idscan_tau_a0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_z0", &trig_L2_trk_idscan_tau_z0, &b_trig_L2_trk_idscan_tau_z0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_phi0", &trig_L2_trk_idscan_tau_phi0, &b_trig_L2_trk_idscan_tau_phi0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_eta", &trig_L2_trk_idscan_tau_eta, &b_trig_L2_trk_idscan_tau_eta);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_pt", &trig_L2_trk_idscan_tau_pt, &b_trig_L2_trk_idscan_tau_pt);
   fChain->SetBranchAddress("trig_L2_trk_idscan_tau_covariance", &trig_L2_trk_idscan_tau_covariance, &b_trig_L2_trk_idscan_tau_covariance);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_n", &trig_L2_trk_sitrack_tau_n, &b_trig_L2_trk_sitrack_tau_n);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_algorithmId", &trig_L2_trk_sitrack_tau_algorithmId, &b_trig_L2_trk_sitrack_tau_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_trackStatus", &trig_L2_trk_sitrack_tau_trackStatus, &b_trig_L2_trk_sitrack_tau_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_chi2Ndof", &trig_L2_trk_sitrack_tau_chi2Ndof, &b_trig_L2_trk_sitrack_tau_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nStrawHits", &trig_L2_trk_sitrack_tau_nStrawHits, &b_trig_L2_trk_sitrack_tau_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nHighThrHits", &trig_L2_trk_sitrack_tau_nHighThrHits, &b_trig_L2_trk_sitrack_tau_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nPixelSpacePoints", &trig_L2_trk_sitrack_tau_nPixelSpacePoints, &b_trig_L2_trk_sitrack_tau_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nSCT_SpacePoints", &trig_L2_trk_sitrack_tau_nSCT_SpacePoints, &b_trig_L2_trk_sitrack_tau_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_hitPattern", &trig_L2_trk_sitrack_tau_hitPattern, &b_trig_L2_trk_sitrack_tau_hitPattern);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nStraw", &trig_L2_trk_sitrack_tau_nStraw, &b_trig_L2_trk_sitrack_tau_nStraw);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_nStrawTime", &trig_L2_trk_sitrack_tau_nStrawTime, &b_trig_L2_trk_sitrack_tau_nStrawTime);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_a0", &trig_L2_trk_sitrack_tau_a0, &b_trig_L2_trk_sitrack_tau_a0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_z0", &trig_L2_trk_sitrack_tau_z0, &b_trig_L2_trk_sitrack_tau_z0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_phi0", &trig_L2_trk_sitrack_tau_phi0, &b_trig_L2_trk_sitrack_tau_phi0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_eta", &trig_L2_trk_sitrack_tau_eta, &b_trig_L2_trk_sitrack_tau_eta);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_pt", &trig_L2_trk_sitrack_tau_pt, &b_trig_L2_trk_sitrack_tau_pt);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_tau_covariance", &trig_L2_trk_sitrack_tau_covariance, &b_trig_L2_trk_sitrack_tau_covariance);
   fChain->SetBranchAddress("trig_L2_tau_n", &trig_L2_tau_n, &b_trig_L2_tau_n);
   fChain->SetBranchAddress("trig_L2_tau_pt", &trig_L2_tau_pt, &b_trig_L2_tau_pt);
   fChain->SetBranchAddress("trig_L2_tau_eta", &trig_L2_tau_eta, &b_trig_L2_tau_eta);
   fChain->SetBranchAddress("trig_L2_tau_phi", &trig_L2_tau_phi, &b_trig_L2_tau_phi);
   fChain->SetBranchAddress("trig_L2_tau_px", &trig_L2_tau_px, &b_trig_L2_tau_px);
   fChain->SetBranchAddress("trig_L2_tau_py", &trig_L2_tau_py, &b_trig_L2_tau_py);
   fChain->SetBranchAddress("trig_L2_tau_pz", &trig_L2_tau_pz, &b_trig_L2_tau_pz);
   fChain->SetBranchAddress("trig_L2_tau_RoIword", &trig_L2_tau_RoIword, &b_trig_L2_tau_RoIword);
   fChain->SetBranchAddress("trig_L2_tau_simpleEtFlow", &trig_L2_tau_simpleEtFlow, &b_trig_L2_tau_simpleEtFlow);
   fChain->SetBranchAddress("trig_L2_tau_nMatchedTracks", &trig_L2_tau_nMatchedTracks, &b_trig_L2_tau_nMatchedTracks);
   fChain->SetBranchAddress("trig_L2_tau_cluster_quality", &trig_L2_tau_cluster_quality, &b_trig_L2_tau_cluster_quality);
   fChain->SetBranchAddress("trig_L2_tau_cluster_EMenergy", &trig_L2_tau_cluster_EMenergy, &b_trig_L2_tau_cluster_EMenergy);
   fChain->SetBranchAddress("trig_L2_tau_cluster_HADenergy", &trig_L2_tau_cluster_HADenergy, &b_trig_L2_tau_cluster_HADenergy);
   fChain->SetBranchAddress("trig_L2_tau_cluster_eta", &trig_L2_tau_cluster_eta, &b_trig_L2_tau_cluster_eta);
   fChain->SetBranchAddress("trig_L2_tau_cluster_phi", &trig_L2_tau_cluster_phi, &b_trig_L2_tau_cluster_phi);
   fChain->SetBranchAddress("trig_L2_tau_cluster_EMRadius2", &trig_L2_tau_cluster_EMRadius2, &b_trig_L2_tau_cluster_EMRadius2);
   fChain->SetBranchAddress("trig_L2_tau_cluster_CaloRadius", &trig_L2_tau_cluster_CaloRadius, &b_trig_L2_tau_cluster_CaloRadius);
   fChain->SetBranchAddress("trig_L2_tau_cluster_IsoFrac", &trig_L2_tau_cluster_IsoFrac, &b_trig_L2_tau_cluster_IsoFrac);
   fChain->SetBranchAddress("trig_L2_tau_cluster_numTotCells", &trig_L2_tau_cluster_numTotCells, &b_trig_L2_tau_cluster_numTotCells);
   fChain->SetBranchAddress("trig_L2_tau_cluster_stripWidth", &trig_L2_tau_cluster_stripWidth, &b_trig_L2_tau_cluster_stripWidth);
   fChain->SetBranchAddress("trig_L2_tau_cluster_stripWidthOffline", &trig_L2_tau_cluster_stripWidthOffline, &b_trig_L2_tau_cluster_stripWidthOffline);
   fChain->SetBranchAddress("trig_L2_tau_cluster_EMenergyNor", &trig_L2_tau_cluster_EMenergyNor, &b_trig_L2_tau_cluster_EMenergyNor);
   fChain->SetBranchAddress("trig_L2_tau_cluster_EMenergyNar", &trig_L2_tau_cluster_EMenergyNar, &b_trig_L2_tau_cluster_EMenergyNar);
   fChain->SetBranchAddress("trig_L2_tau_cluster_HADenergyNor", &trig_L2_tau_cluster_HADenergyNor, &b_trig_L2_tau_cluster_HADenergyNor);
   fChain->SetBranchAddress("trig_L2_tau_cluster_HADenergyNar", &trig_L2_tau_cluster_HADenergyNar, &b_trig_L2_tau_cluster_HADenergyNar);
   fChain->SetBranchAddress("trig_L2_tau_cluster_etNar", &trig_L2_tau_cluster_etNar, &b_trig_L2_tau_cluster_etNar);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_nCoreTracks", &trig_L2_tau_tracksinfo_nCoreTracks, &b_trig_L2_tau_tracksinfo_nCoreTracks);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_nSlowTracks", &trig_L2_tau_tracksinfo_nSlowTracks, &b_trig_L2_tau_tracksinfo_nSlowTracks);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_nIsoTracks", &trig_L2_tau_tracksinfo_nIsoTracks, &b_trig_L2_tau_tracksinfo_nIsoTracks);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_charge", &trig_L2_tau_tracksinfo_charge, &b_trig_L2_tau_tracksinfo_charge);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_leadingTrackPt", &trig_L2_tau_tracksinfo_leadingTrackPt, &b_trig_L2_tau_tracksinfo_leadingTrackPt);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_scalarPtSumCore", &trig_L2_tau_tracksinfo_scalarPtSumCore, &b_trig_L2_tau_tracksinfo_scalarPtSumCore);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_scalarPtSumIso", &trig_L2_tau_tracksinfo_scalarPtSumIso, &b_trig_L2_tau_tracksinfo_scalarPtSumIso);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_3fastest_pt", &trig_L2_tau_tracksinfo_3fastest_pt, &b_trig_L2_tau_tracksinfo_3fastest_pt);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_3fastest_eta", &trig_L2_tau_tracksinfo_3fastest_eta, &b_trig_L2_tau_tracksinfo_3fastest_eta);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_3fastest_phi", &trig_L2_tau_tracksinfo_3fastest_phi, &b_trig_L2_tau_tracksinfo_3fastest_phi);
   fChain->SetBranchAddress("trig_L2_tau_tracksinfo_3fastest_m", &trig_L2_tau_tracksinfo_3fastest_m, &b_trig_L2_tau_tracksinfo_3fastest_m);
   fChain->SetBranchAddress("trig_L2_tau_tracks_algorithmId", &trig_L2_tau_tracks_algorithmId, &b_trig_L2_tau_tracks_algorithmId);
   fChain->SetBranchAddress("trig_L2_tau_idscan_trk_n", &trig_L2_tau_idscan_trk_n, &b_trig_L2_tau_idscan_trk_n);
   fChain->SetBranchAddress("trig_L2_tau_idscan_trk_index", &trig_L2_tau_idscan_trk_index, &b_trig_L2_tau_idscan_trk_index);
   fChain->SetBranchAddress("trig_L2_tau_sitrack_trk_n", &trig_L2_tau_sitrack_trk_n, &b_trig_L2_tau_sitrack_trk_n);
   fChain->SetBranchAddress("trig_L2_tau_sitrack_trk_index", &trig_L2_tau_sitrack_trk_index, &b_trig_L2_tau_sitrack_trk_index);
   fChain->SetBranchAddress("trig_RoI_L2_tau_n", &trig_RoI_L2_tau_n, &b_trig_RoI_L2_tau_n);
   fChain->SetBranchAddress("trig_RoI_L2_tau_type", &trig_RoI_L2_tau_type, &b_trig_RoI_L2_tau_type);
   fChain->SetBranchAddress("trig_RoI_L2_tau_lastStep", &trig_RoI_L2_tau_lastStep, &b_trig_RoI_L2_tau_lastStep);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigRoiDescriptor", &trig_RoI_L2_tau_TrigRoiDescriptor, &b_trig_RoI_L2_tau_TrigRoiDescriptor);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigRoiDescriptorStatus", &trig_RoI_L2_tau_TrigRoiDescriptorStatus, &b_trig_RoI_L2_tau_TrigRoiDescriptorStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauCluster", &trig_RoI_L2_tau_TrigTauCluster, &b_trig_RoI_L2_tau_TrigTauCluster);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauClusterStatus", &trig_RoI_L2_tau_TrigTauClusterStatus, &b_trig_RoI_L2_tau_TrigTauClusterStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauClusterDetails", &trig_RoI_L2_tau_TrigTauClusterDetails, &b_trig_RoI_L2_tau_TrigTauClusterDetails);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauClusterDetailsStatus", &trig_RoI_L2_tau_TrigTauClusterDetailsStatus, &b_trig_RoI_L2_tau_TrigTauClusterDetailsStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauTracksInfo", &trig_RoI_L2_tau_TrigTauTracksInfo, &b_trig_RoI_L2_tau_TrigTauTracksInfo);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauTracksInfoStatus", &trig_RoI_L2_tau_TrigTauTracksInfoStatus, &b_trig_RoI_L2_tau_TrigTauTracksInfoStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTau", &trig_RoI_L2_tau_TrigTau, &b_trig_RoI_L2_tau_TrigTau);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigTauStatus", &trig_RoI_L2_tau_TrigTauStatus, &b_trig_RoI_L2_tau_TrigTauStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_EmTau_ROI", &trig_RoI_L2_tau_EmTau_ROI, &b_trig_RoI_L2_tau_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_L2_tau_EmTau_ROIStatus", &trig_RoI_L2_tau_EmTau_ROIStatus, &b_trig_RoI_L2_tau_EmTau_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigInDetTrackCollection", &trig_RoI_L2_tau_TrigInDetTrackCollection, &b_trig_RoI_L2_tau_TrigInDetTrackCollection);
   fChain->SetBranchAddress("trig_RoI_L2_tau_TrigInDetTrackCollectionStatus", &trig_RoI_L2_tau_TrigInDetTrackCollectionStatus, &b_trig_RoI_L2_tau_TrigInDetTrackCollectionStatus);
   fChain->SetBranchAddress("trig_RoI_EF_tau_n", &trig_RoI_EF_tau_n, &b_trig_RoI_EF_tau_n);
   fChain->SetBranchAddress("trig_RoI_EF_tau_type", &trig_RoI_EF_tau_type, &b_trig_RoI_EF_tau_type);
   fChain->SetBranchAddress("trig_RoI_EF_tau_lastStep", &trig_RoI_EF_tau_lastStep, &b_trig_RoI_EF_tau_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_tau_EmTau_ROI", &trig_RoI_EF_tau_EmTau_ROI, &b_trig_RoI_EF_tau_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_tau_EmTau_ROIStatus", &trig_RoI_EF_tau_EmTau_ROIStatus, &b_trig_RoI_EF_tau_EmTau_ROIStatus);
   //   fChain->SetBranchAddress("trig_RoI_EF_tau_Analysis::TauJetContainer", &trig_RoI_EF_tau_Analysis__TauJetContainer, &b_trig_RoI_EF_tau_Analysis__TauJetContainer);
   //   fChain->SetBranchAddress("trig_RoI_EF_tau_Analysis::TauJetContainerStatus", &trig_RoI_EF_tau_Analysis__TauJetContainerStatus, &b_trig_RoI_EF_tau_Analysis__TauJetContainerStatus);
   Notify();
}

Bool_t EventTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EventTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t EventTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EventTree_cxx
*/