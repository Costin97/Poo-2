#include "oras.hpp"

Oras::Oras():Localitate(){
	this->bonus_venit=-1;
}

Oras::Oras(int bonus_venit,const char *nume,int nr_loc,int venit):Localitate(nume,nr_loc,venit){
	this->bonus_venit=bonus_venit;
}

Oras& Oras::operator=(const Oras& obj){
	(Localitate&)(*this)=obj;
	this->bonus_venit=obj.bonus_venit;
	return *this;
}

Oras::~Oras(){
	this->bonus_venit=-1;
}

void Oras::afisare(){
	Localitate::afisare();
	cout<<"Venit bonus:"<<this->bonus_venit<<endl<<endl;
}
