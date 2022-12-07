//
//  Constants.h
//  Don't_Fret
//
//  Created by Gordon Lewis on 12/7/22.
//

#ifndef Constants_h
#define Constants_h

#include <iostream>
#include <string>
#include <map>

using namespace std;
//constants used for each note of the scale
const string C_NAT = "C";
const string C_SHARP = "C#";
const string D_FLAT = "Db";
const string D_NAT = "D";
const string D_SHARP = "D#";
const string E_FLAT = "Eb";
const string E_NAT = "E";
const string F_FLAT = "Fb";
const string E_SHARP = "E";
const string F_NAT = "F";
const string F_SHARP = "F#";
const string G_FLAT = "Gb";
const string G_NAT = "G";
const string G_SHARP = "G#";
const string A_FLAT = "Ab";
const string A_NAT = "A";
const string A_SHARP = "A#";
const string B_FLAT = "Bb";
const string B_NAT = "B";
const string C_FLAT = "Cb";
const string B_SHARP = "B#";

//array of possible notes
const string notes[] = {C_NAT, C_SHARP, D_FLAT, D_NAT, D_SHARP, E_FLAT, E_NAT, F_FLAT, E_SHARP, F_NAT, F_SHARP, G_FLAT, G_NAT, G_SHARP,
                        A_FLAT, A_NAT, A_SHARP, B_FLAT, B_NAT, C_FLAT, B_SHARP};

//maps for each guitar string and the corresponding note for their fret
using note = string;
using fret = int;

const map<fret, note> E_STRING = {
    //Fill in and do the same for A, D, G, and B strings
};


#endif /* Constants_h */
