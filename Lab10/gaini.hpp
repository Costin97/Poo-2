#ifndef GAINI_HPP
#define GAINI_HPP

#include"ferma.hpp"

class Gaini:public Ferma{
	int nr_animale;
	int cantitate;
	char *tip_mancare;
	char *nume_animal;
		public:
			Gaini();
			Gaini(int,int,const char*,const char*);
			Gaini& operator=(const Gaini&);
			~Gaini();
			int getCantitateTotala();
			int getCantitate();
			char *getName();
			char *getTip();
			int getNumarAnimale();
			void afisare();
};

#endif
