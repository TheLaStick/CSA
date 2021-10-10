//------------------------------------------------------------------------------
// flower.cpp - contains parameters input proccess
// for already made flower
//------------------------------------------------------------------------------

#include "flower.h"

//------------------------------------------------------------------------------
// Flower parameters input from file
void In(flower &f, ifstream &ifst) {
    f.name = new char[10];
    ifst >> f.name;
    f.length = strlen(f.name);
    int type_number;
    ifst >> type_number;
    switch (type_number) {
        case flower::HOME:
            f.type = flower::HOME;
            break;
        case flower::GARDEN:
            f.type = flower::GARDEN;
            break;
        case flower::WILD:
            f.type = flower::WILD;
            break;
        default:
            f.type = flower::INCORRECT_TYPE;
    }
}

// Random flower parameters input
void InRnd(flower &f) {
    f.name = Random();
}

//------------------------------------------------------------------------------
// Flower parameters output in formative stream
void Out(flower &f, ofstream &ofst) {
    ofst << "It is Flower: name = " << f.name <<
         ". Type = " << f.type <<
         ". Fraction = " << Fraction(f) << "\n";
}

//------------------------------------------------------------------------------
// Computing flower fraction
double Fraction(flower &f) {
    int vowels_count = 0;
    for (int i = 0; i < f.length; i++) {
        if (f.name[i] == 'a' || f.name[i] == 'e' || f.name[i] == 'i'
            || f.name[i] == 'o' || f.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / f.length;
}
