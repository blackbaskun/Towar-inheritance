#include <iostream>
#include "Towar.h"
#include "Towar_Spozywczy.h"

Towar_Spozywczy::Towar_Spozywczy(std::string nazwa): Towar(nazwa){}


void Towar_Spozywczy::Sprzedaj(){
    Towar::Sprzedaj();
    std::cout<<"Sprawdzenie terminu do spozycia"<<std::endl;
}