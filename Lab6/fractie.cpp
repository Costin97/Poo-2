#include "fractie.hpp"

Fractie::Fractie(int aa,int bb){
	a=aa;
	b=bb;
}

Fractie::Fractie(const Fractie &obj){
//	cout<<"Constructorul de copiere\n";
	this->a=obj.a;
	this->b=obj.b;
}

Fractie& Fractie::operator=(const Fractie& obj){
	this->a=obj.a;
	this->b=obj.b;
	
	return *this;
}

Fractie::~Fractie(){
//	cout<<"Destructorul\n";
	a=0;
	b=0;
}

double Fractie::getValoare() const{
	double rezultat;
	if(b!=0){
		rezultat=a/(double)b;
		return rezultat;
	}
	else{
		cout<<"Nu se poate face impartirea lui a la b,b=0!\n";
		return 0;
	}
}

bool Fractie::operator>(const Fractie &obj1){
	if(this->getValoare()>obj1.getValoare()){
		return true;
	}
	return false;
}

ostream& operator<<(ostream& out,const Fractie& obj){
	if(obj.b!=0){
		out<<obj.a<<"/"<<obj.b<<endl;
	}
	else{
		out<<"Numitorul este egal cu 0,nu se paote face impartirea!"<<endl;
	}
	return out;
}
