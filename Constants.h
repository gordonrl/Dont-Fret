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

//need to use a map to represent each string because a given fret could have two correct answers
//ex: f# = gb so f# is the 2nd fret of the E string and gb is also the second fret of the E string
using note = string;
using fret = int;

//maps for each guitar string: E, A, D, G, B (don't need to repeat the E string of course)
//NOTE: 0th fret represents the open string
//NOTE: Maps only go through one octave (i.e. they stop at the 11th fret)

//E String
const map<note, fret> E_STRING = {
    {E_NAT, 0}, {F_FLAT, 0}, {F_NAT, 1}, {E_SHARP, 1}, {F_SHARP, 2}, {G_FLAT, 2}, {G_NAT, 3},
    {G_SHARP, 4}, {A_FLAT, 4}, {A_NAT, 5}, {A_SHARP, 6}, {B_FLAT, 6}, {B_NAT, 7},
    {C_FLAT, 7}, {B_SHARP, 8}, {C_NAT, 8}, {C_SHARP, 9}, {D_FLAT, 9}, {D_NAT, 10},
    {D_SHARP, 11}, {E_FLAT, 11}
};

//A String
const map<note, fret> A_STRING = {
    {A_NAT, 0}, {A_SHARP, 1}, {B_FLAT, 1}, {B_NAT, 2}, {C_FLAT, 2}, {B_SHARP, 3},
    {C_NAT, 3}, {C_SHARP, 4}, {D_FLAT, 4}, {D_NAT, 5}, {D_SHARP, 6}, {E_FLAT, 6},
    {E_NAT, 7}, {F_FLAT, 7}, {F_NAT, 8}, {E_SHARP, 8}, {F_SHARP, 9}, {G_FLAT, 9},
    {G_NAT, 10}, {G_SHARP, 11}, {A_FLAT, 11}
};

//D String
const map<note, fret> D_STRING = {
    {D_NAT, 0}, {D_SHARP, 1}, {E_FLAT, 1}, {E_NAT, 2}, {F_FLAT, 2}, {F_NAT, 3},
    {E_SHARP, 3}, {F_SHARP, 4}, {G_FLAT, 4}, {G_NAT, 5}, {G_SHARP, 6}, {A_FLAT, 6},
    {A_NAT, 7}, {A_SHARP, 8}, {B_FLAT, 8}, {B_NAT, 9}, {C_FLAT, 9}, {C_NAT, 10},
    {B_SHARP, 10}, {C_SHARP, 11}, {D_FLAT, 11}
};

//G String
const map<note, fret> G_STRING = {
    {G_NAT, 0}, {G_SHARP, 1}, {A_FLAT, 1}, {A_NAT, 2}, {A_SHARP, 3}, {B_FLAT, 3},
    {B_NAT, 4}, {C_FLAT, 4}, {C_NAT, 5}, {B_SHARP, 5}, {C_SHARP, 6}, {D_FLAT, 6},
    {D_NAT, 7}, {D_SHARP, 8}, {E_FLAT, 8}, {E_NAT, 9}, {F_FLAT, 9}, {F_NAT, 10},
    {E_SHARP, 10}, {F_SHARP, 11}, {G_FLAT, 11}
};

//B String
const map<note, fret> B_STRING = {
    {B_NAT, 0}, {C_FLAT, 0}, {B_SHARP, 1}, {C_NAT, 1}, {C_SHARP, 2}, {D_FLAT, 2},
    {D_NAT, 3}, {D_SHARP, 4}, {E_FLAT, 4}, {E_NAT, 5}, {F_FLAT, 5}, {E_SHARP, 6},
    {F_NAT, 6}, {F_SHARP, 7}, {G_FLAT, 7}, {G_NAT, 8}, {G_SHARP, 9}, {A_FLAT, 9},
    {A_NAT, 10}, {A_SHARP, 11}, {B_FLAT, 11}
};



#endif /* Constants_h */
