#include "Towar_Gwarancja.h"
#include <iostream>
#include "Towar.h"


Towar_Gwarancja::Towar_Gwarancja(std::string nazwa): Towar(nazwa){}


void Towar_Gwarancja::Sprzedaj(){
    Towar::Sprzedaj();
    std::cout<<"Podbicie gwarancji"<<std::endl;
}