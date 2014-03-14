//____________________________________________________________________________
/*!

\class   genie::EventRecord

\brief   Generated Event Record. It is a GHepRecord object that can accept /
         be visited by EventRecordVisitorI objects (event generation modules).
         All the other important container manipulation methods are defined
         at the base GHepRecord record.

\author  Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         STFC, Rutherford Appleton Laboratory

\created October 1, 2004

\cpright Copyright (c) 2003-2013, GENIE Neutrino MC Generator Collaboration
         For the full text of the license visit http://copyright.genie-mc.org
         or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PROB_RECORD_H_
#define _PROB_RECORD_H_

#include <ostream>
#include <string>
#include <map>

using std::ostream;

namespace genie {

class ProbabilityRecord {

public :

  ProbabilityRecord();
  ~ProbabilityRecord();

  void SetMultiProb(double a) {fMultiProb = a;}
  double AddProb(std::string val, bool yn) {return fProbName[val]=yn; }
  bool ProbName(std::string name, bool yn) { return fProbName[name]; }
  int Size() {return fProbName.size();}
  

private:

  double fMultiProb;
  std::map <std::string, bool> fProbName;
  

  //ClassDef(ProbabilityRecord, 1)

};

}      // genie namespace

#endif // _PROB_RECORD_H_
