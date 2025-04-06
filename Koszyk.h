#ifndef KOSZYK
#define KOSZYK
#include <iostream>
#include "Towar.h"

class Koszyk{
    int ile =0;
    Towar*tab[100];
    public:
    void Dodaj_Towar_do_Koszyka(Towar *a);
    void Sprzedaj_Zawartosc_Koszyka();
};

#endif