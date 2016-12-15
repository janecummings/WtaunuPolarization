# WtaunuPolarization

The code in this repository is a representative sample of the analysis framework that I wrote in 2011 while working on the measurement of tau polarization in W decays to a tau and neutrino with data collected by the ATLAS detector in 2010. This was the first physics analysis that I performed at the LHC. At the time, I was still fairly new to programming in C++ and I wrote this code with much help from Dr. Zofia Czyczula, then a postdoc at Yale. My primary roles on this analysis team were developing and validating the event selection and performing investigations of the comparability of the observed data and simulated distributions. I helped to write and edit the paper that documents this analysis published in 2012. I went on to work on another measurement of tau polarization, in Z decays to tau lepton pairs. These two measurements were the subject of my PhD thesis.


* TauPolar.cxx - main program for analyzing the data and simulation samples
* EventTree.cxx - event class to read the event data from ROOT files 
* CutFlow.cxx - helper class with member functions that perform event selections to identify the signal signature
* histo.cxx -  helper class for booking histograms

* plotPer.C, trkplot.C - produce plots from output files from analysis 

* plots/* - published public plots 

