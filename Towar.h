#ifndef TOWAR
#define TOWAR
#include <iostream>
#include <string>

class Towar{
   
  

    public:
    std::string nazwa;
    // Towar();
    Towar(std::string a);
    virtual void Sprzedaj();

    virtual ~Towar(){
        std::cout<<"Destruktor\n";
    }

    
};

#endif