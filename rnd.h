#ifndef __rnd__
#define __rnd__

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - contains generator of random names with length from 1 to 10
//------------------------------------------------------------------------------

inline auto Random() {
    int count = rand() % 10 + 1;
    char* name = new char[count];
    for (int i = 0; i < count - 1; i++) {
        name[i] = static_cast<char>(rand() % 25) + 'a';
    }
    name[count - 1] = '\0';
    return name;
}

#endif //__rnd__
