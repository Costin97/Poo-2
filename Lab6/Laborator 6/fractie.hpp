#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Fractie{
	private:
		int a;
		int b;
		
		public:
			
			Fractie(int aa=0,int bb=0);
			Fractie (const Fractie&);
			Fractie & operator=(const Fractie&);
			
			double getValoare() const;
			bool operator >(const Fractie&);
			friend ostream& operator<<(ostream&,const Fractie&);
			
			~Fractie();
};

#endif
