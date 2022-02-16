#ifndef FERMA_HPP
#define FERMA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Ferma{
	public:
		virtual ~Ferma()=0;
		virtual void afisare()=0;
		virtual char* getName()=0;
		virtual int getCantitateTotala()=0;
		virtual int getCantitate()=0;
		virtual char* getTip()=0;
		virtual int getNumarAnimale()=0;
};

#endif
