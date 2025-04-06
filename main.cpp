
#include "Towar.h"
#include "Koszyk.h"
#include "Towar_Gwarancja.h"
#include "Towar_Spozywczy.h"
 
int main()
{
	Koszyk z;
	Towar_Gwarancja o1("ser");
	Towar_Gwarancja o2("bulka");
	Towar_Spozywczy k1("sernik");

	z.Dodaj_Towar_do_Koszyka(&o1);
	z.Dodaj_Towar_do_Koszyka(&o2);
	z.Dodaj_Towar_do_Koszyka(&k1);
	

	z.Sprzedaj_Zawartosc_Koszyka();

	
	return 0;
}


