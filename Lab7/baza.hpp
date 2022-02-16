#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
using namespace std;

class Baza{
	public:
		virtual void afisare()=0;
//		virtual ~Baza()=0;
		virtual float getPret()=0;
		virtual char* getNume()=0;
};

#endif
