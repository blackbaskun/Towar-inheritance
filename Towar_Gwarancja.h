#ifndef TOWARG
#define TOWARG
#include <iostream>
#include "Towar.h"


class Towar_Gwarancja: public Towar{
    public:
    Towar_Gwarancja(std::string a);
    void Sprzedaj();
   
};

#endif