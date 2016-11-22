ROOTCFLAGS=$(shell root-config --cflags)
ROOTLIBS=-L$(ROOTSYS)/lib -lCore -lCint -lHist -lMatrix -ldl -lGpad -lGraf -lTree -lPhysics -lFoam -lTreePlayer
LIBS += $(ROOTLIBS)
ROOTCINT=$(ROOTSYS)/bin/rootcint
CXX =g++ -m32 -g $(shell echo ${GoodRunsListLib}) $(shell echo ${GoodRunsListInc})
CPPFLAGS=$(ROOTCFLAGS)
LDFLAGS=$(ROOTLIBS)



TauPolar: TauPolar.o CutFlow.o EventTree.o histo.o
	@echo "generating TauPolar"
	$(CXX) $(LDFLAGS) TauPolar.o CutFlow.o EventTree.o histo.o -o TauPolar

TauPolar.o: TauPolar.cxx 
	@echo "generating TauPolar.o"
	$(CXX) $(CPPFLAGS) -c TauPolar.cxx -o TauPolar.o

CutFlow.o: CutFlow.cxx CutFlow.h
	$(CXX) $(CPPFLAGS) -c $< -o $*.o

EventTree.o: EventTree.cxx EventTree.h
	$(CXX) $(CPPFLAGS) -c $< -o $*.o

histo.o: histo.cxx histo.h
	$(CXX) $(CPPFLAGS) -c $< -o $*.o

clean:
	rm -rf *.o TauPolar
