#ifndef TOWARS
#define TOWARS
#include <iostream>
#include "Towar.h"

class Towar_Spozywczy: public Towar{
    public:
    Towar_Spozywczy(std::string a);
    void Sprzedaj();

};

#endif