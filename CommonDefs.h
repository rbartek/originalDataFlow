#ifndef COMMON_DEFS_H_
#define COMMON_DEFS_H_

#include "Event.h"
#include <iostream>
#include <fstream>
#include <streambuf>
#include <list>


//
// general settings
//

extern long MAX_EVENT;                                  // #events to be processed
extern double TRIGGER_RATE;                             // L1 trigger rate in kHz
extern double SIGNAL_XSECTION;                          // signal (jet) X-section in mb
extern double TOTAL_XSECTION;                           // MinBias X-section in mb
extern double PEAK_LUMI;                                // in 10^34
extern int BUNCH_SPACING;                               // spacing between filled LHC bunches
extern long WBC;                                        // trigger latency
extern int LAYER;
extern int DETECTOR;
extern int LADDER;
extern int MIN_MOD, MAX_MOD;
extern std::list<std::string> SignalFileNames;
extern std::list<std::string> MinBiasFileNames;
extern bool CreatePileUp;
const int MINIMAL_TRIGGER_GAP(3);                       // minimal gap between triggers (3 BX)

//
// module and ROC settings
//

extern int CHIPS_PER_LINK[2];
extern int CHIPS_PER_MODULE;
extern int LINKS_PER_MODULE;
const unsigned int TBM_STACK_SIZE(16);                  // size of trigger stack in TBM
const int DCOLS_PER_ROC(26);
const unsigned int TS_BUFFER_SIZE(24);
const unsigned int DATA_BUFFER_SIZE(80);
const unsigned int ROC_BUFFER_SIZE(64);
const int CONVERSION_TIME(4);

//
// readout format
//

const int TBM_HEADER_LENGTH(8);                         // TBM header length in LHC clocks
const int TBM_TRAILER_LENGTH(8);                        // TBM trailer length in LHC clocks
const int TBM_READOUT_GAP(1);                           // gap between TBM trailer and next header in LHC clocks
const int ROC_HEADER_LENGTH(3);                         // ROC header length in bits
const int CLOCKS_PER_HIT(6);                            // #clocks per pixel hit

enum {BPIX=0, FPIX};

#endif /*COMMON_DEFS_H_*/
