#ifndef PORCI_HPP
#define PORCI_HPP

#include"ferma.hpp"

class Porci:public Ferma{
	int nr_animale;
	int cantitate1;
	char *tip_mancare1;
	int cantitate2;
	char *tip_mancare2;
	char *nume_animal;
		public:
			Porci();
			Porci(int,int,int,const char*,const char*,const char*);
			Porci& operator=(const Porci&);
			~Porci();
			int getCantitateTotala();
			int getCantitate();
			int getCantitate2();
			char *getName();
			char *getTip();
			char *getTip2();
			int getNumarAnimale();
			void afisare();
};


#endif
