#ifndef CutFlow_h
#define CutFlow_h

#include "TROOT.h"
#include "TString.h"
#include "EventTree.h"
#include "math.h"

using namespace std;

class CutFlow: public TObject
{

 public:
  CutFlow();
  ~CutFlow();

  static CutFlow* getObj();

  float DeltaPhi(float, float);
  float DeltaR(float,float,float,float);
  //float DeltaR(float&,float&,float&,float&);
  bool passTrigger(EventTree*, string);
  int nVertex(EventTree*);
  bool cleanCollision(EventTree*);
  vector<bool> JetFlags(EventTree*, bool);
  int ITau(EventTree*, string);
  vector<int> TauFlags(EventTree*, int);
  vector<int> TauFlagsOld(EventTree*, string);
  bool eVeto(EventTree*);
  bool mVeto(EventTree*);
  float metSig(EventTree*);
  
 

 private:
  static CutFlow* gObj;

  // ClassDef(CutFlow,1)

};

#endif

