#ifndef TARA_HPP
#define TARA_HPP

#include "oras.hpp"
class Tara{
	Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si
				//parcurgeti vectorul pana dati de NULL.
		public:
			Tara();
			Tara(Localitate**);
			void afisare();
			~Tara();
			int getLoc();
			int venit();
};
#endif
