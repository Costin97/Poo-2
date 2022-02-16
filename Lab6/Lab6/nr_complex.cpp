#include "nr_complex.hpp"
#include <math.h>

Nr_complex::Nr_complex(int r,int i){
	this->real=r;
	this->imaginar=i;
}

Nr_complex::Nr_complex(const Nr_complex& obj){
	this->real=obj.real;
	this->imaginar=obj.imaginar;
}

Nr_complex& Nr_complex::operator=(const Nr_complex& obj){
	this->real=obj.real;
	this->imaginar=obj.imaginar;
	
	return (*this);
}


double Nr_complex::getValoare()const{
	double a;
	a=sqrt((this->real)*(this->real)+(this->imaginar)*(this->imaginar));
	return a;
}

ostream& operator<<(ostream& out,const Nr_complex& obj){
	out<<"Numarul real este: "<<obj.real<<endl;
	out<<"Numarul imaginar este: "<<obj.imaginar<<endl;
}

bool Nr_complex::operator>(const Nr_complex& obj){
	if((*this).getValoare()>obj.getValoare()){
		return true;
	}
	return false;
}


