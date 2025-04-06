#include <iostream>
#include "Towar.h"

Towar::Towar(std::string a){
        nazwa = a;
    }
  void Towar::Sprzedaj(){
    std::cout<<"Sprzedano towar: "<<nazwa<<std::endl;
  }