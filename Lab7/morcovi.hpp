#ifndef MORCOVI_HPP
#define MORCOVI_HPP
#include "baza.hpp"

class Morcovi:public Baza //pretul final =  cantitate/pret_100_grame
{
	int cantitate;
	int pret_100_grame;
	public:
		Morcovi(int cantitate=0,int pret_100_grame=0);
		Morcovi(const Morcovi&);
		Morcovi& operator=(const Morcovi&);
		float getPret();
		void afisare();
		char *getNume();
};

#endif
