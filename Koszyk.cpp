#include "Towar.h"
#include <iostream>
#include "Koszyk.h"

void Koszyk::Dodaj_Towar_do_Koszyka(Towar *a){
    tab[ile]=a;
    ile++;
    
}


void Koszyk::Sprzedaj_Zawartosc_Koszyka(){
    for(int i = 0; i<ile;i++){
         tab[i]->Sprzedaj();
    }
           
    
}