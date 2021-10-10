//------------------------------------------------------------------------------
// tree.cpp - contains parameters input proccess
// for already made tree
//------------------------------------------------------------------------------

#include "tree.h"

//------------------------------------------------------------------------------
// Tree parameters input from file
void In(tree& t, ifstream& ifst) {
    t.name = new char[10];
    ifst >> t.name;
    t.length = strlen(t.name);
}

// Random tree parameters input
void InRnd(tree& t) {
    t.name = Random();
}

//------------------------------------------------------------------------------
// Tree parameters output in formative stream
void Out(tree& t, ofstream& ofst) {
    ofst << "It is Tree: name = " << t.name <<
         ". Fraction = " << Fraction(t) << "\n";
}

//------------------------------------------------------------------------------
// Computing tree fraction
double Fraction(tree& t) {
    int vowels_count = 0;
    for (int i = 0; i < t.length; i++) {
        if (t.name[i] == 'a' || t.name[i] == 'e' || t.name[i] == 'i'
            || t.name[i] == 'o' || t.name[i] == 'u') {
            ++vowels_count;
        }
    }

    return 1.0 * vowels_count / t.length;
}
