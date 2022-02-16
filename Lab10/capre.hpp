#ifndef CAPRE_HPP
#define CAPRE_HPP

#include"ferma.hpp"

class Capre:public Ferma{
	int nr_animale;
	int cantitate;
	char *tip_mancare;
	char *nume_animal;
		public:
			Capre();
			Capre(int,int,const char*,const char*);
			Capre& operator=(const Capre&);
			~Capre();
			int getCantitateTotala();
			int getCantitate();
			char *getName();
			char *getTip();
			int getNumarAnimale();
			void afisare();
};

#endif
