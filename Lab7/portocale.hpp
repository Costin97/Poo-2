#ifndef PORTOCALE_HPP
#define PORTOCALE_HPP
#include "baza.hpp"

class Portocale: public Baza //pretul final=nr_kilograme/pret
{
	private:
		int nr_kilograme;
		int pret_kg;
		public:
			Portocale(int nr_kilograme=0,int pret_kg=0);
			Portocale(const Portocale&);
			Portocale&operator=(const Portocale&);
			float getPret();
			void afisare();
			char *getNume();
};

#endif
