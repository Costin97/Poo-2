#ifndef NUCI_HPP
#define NUCI_HPP
#include "baza.hpp"

class Nuci:public Baza //pretul final=cantitate/pret_100_grame
{
	int cantitate;
	int pret_100_grame;
	public:
		Nuci(int cantitate=0,int pret_100_grame=0);
		Nuci(const Nuci&);
		Nuci& operator=(const Nuci&);
		float getPret();
		void afisare();
		char *getNume();
};

#endif
