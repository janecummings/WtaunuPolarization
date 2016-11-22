#ifndef HISTO_H
#define HISTO_H
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TClonesArray.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MyTH1F{
  
 public:
  string m_name;
  string m_title;
  int m_nbins;
  float m_xlo;
  float m_xhi;
  
  MyTH1F();
  MyTH1F(const char *name, const char *title, int bins, float xlo, float xhi);
  ~MyTH1F();
  
};

class histo: public TObject{
 public:
  histo();
  ~histo();
  
  static histo* getObj();

  void Create();
  void Store(TFile *root_file);
  TH1F* GetTH1F(TString a);
  
  
 private:
  static histo* gObj;
  
  vector<MyTH1F> m_histoTH1F;
  TClonesArray *m_TH1FArray;
  TFile* m_outputRootFile;
 

};

#endif
  
