#ifndef NR_COMPLEX_HPP
#define NR_COMPLEX_HPP
#include <iostream>
using namespace std;

class Nr_complex{
	int real;
	int imaginar;
		public:
			Nr_complex(int r=0,int i=0);
			Nr_complex(const Nr_complex&);
			Nr_complex& operator=(const Nr_complex&);
			double getValoare()const;
			friend ostream& operator<<(ostream&,const Nr_complex&);
			bool operator>(const Nr_complex&);
};

#endif


