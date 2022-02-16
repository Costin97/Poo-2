#ifndef MASINA_HPP
#define MASINA_HPP

#include "vehicul.cpp"

class Masina:virtual public Vehicul{
	protected:
		int dimensiuni[3]; 
		char *marca;
	public:
		Masina();
		Masina(int[],const char*,const char*,int);
		Masina(const Masina&);
		Masina& operator=(const Masina&);
		char *getMarca();
		void getDimensiuni();
		void afisare();
		~Masina();
};

#endif

