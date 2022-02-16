#ifndef BANANA_HPP
#define BANANA_HPP
#include "baza.hpp"

class Banana:public Baza //pretul final = pret bucata
{
	int pret_bucata;
	public:
		Banana(int pret_bucata=0);
		Banana(const Banana&);
		Banana& operator=(const Banana&);
		float getPret();
		void afisare();
		char *getNume();

};

#endif
