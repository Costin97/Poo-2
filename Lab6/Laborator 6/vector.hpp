#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "fractie.hpp"
#include "nr_complex.hpp"
using namespace std;

template<class X>
class Vector{
	int dim;
	X *buf;
		public:
			Vector(int,X*);
			void afisare();
			void sortare();
			~Vector();
};

#endif
