#ifndef CAI_HPP
#define CAI_HPP

#include "ferma.hpp"

class Cai:public Ferma{
	int nr_animale;
	int cantitate;
	char *tip_mancare;
	char *nume_animal;
		public:
			Cai();
			Cai(int,int,const char*,const char*);
			Cai& operator=(const Cai&);
			~Cai();
			int getCantitateTotala();
			int getCantitate();
			char *getName();
			char *getTip();
			int getNumarAnimale();
			void afisare();
};

#endif
