#ifndef VACI_HPP
#define VACI_HPP

#include"ferma.hpp"

class Vaci:public Ferma{
	int nr_animale;
	int cantitate;
	char *tip_mancare;
	char *nume_animal;
		public:
			Vaci();
			Vaci(int,int,const char*,const char*);
			Vaci& operator=(const Vaci&);
			~Vaci();
			int getCantitateTotala();
			int getCantitate();
			char *getName();
			char *getTip();
			int getNumarAnimale();
			void afisare();
};

#endif
