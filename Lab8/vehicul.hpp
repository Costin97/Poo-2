#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include "baza.cpp"

class Vehicul:public Baza
{
	protected:
		char *proprietar;
		int pret;
	public:
		Vehicul();
		Vehicul(const char*,int);
		Vehicul(const Vehicul&);
		Vehicul& operator=(const Vehicul&);
		char* getProp();
		int getPret();
		void afisare();
		~Vehicul();
};

#endif

