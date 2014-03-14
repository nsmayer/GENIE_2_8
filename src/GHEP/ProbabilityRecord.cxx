//____________________________________________________________________________
/*
 Copyright (c) 2003-2013, GENIE Neutrino MC Generator Collaboration
 For the full text of the license visit http://copyright.genie-mc.org
 or see $GENIE/LICENSE

 Author: Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
         STFC, Rutherford Appleton Laboratory - October 01, 2004

 For the class documentation see the corresponding header file.

 Important revisions after version 2.0.0 :

*/
//____________________________________________________________________________

#include "GHEP/ProbabilityRecord.h"

using namespace genie;

//ClassImp(ProbabilityRecord)

//____________________________________________________________________________
//namespace genie {
//ostream & operator<< (ostream& stream, const ProbabilityRecord & event_record)
//{
//event_record.Print(stream);
//return stream;
//}
//}
//___________________________________________________________________________
ProbabilityRecord::ProbabilityRecord() :
  fMultiProb(1.0)
{

}

//___________________________________________________________________________
ProbabilityRecord::~ProbabilityRecord()
{

}

//___________________________________________________________________________
//void ProbabilityRecord::Print(ostream & stream) const
//{
//  GHepRecord::Print(stream);
//}

//___________________________________________________________________________
