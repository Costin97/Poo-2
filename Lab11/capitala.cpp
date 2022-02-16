#include "capitala.hpp"

Capitala::Capitala():Oras(){
	this->tara=NULL;
}

Capitala::Capitala(const char* tara,int bonus,const char*nume,int loc,int venit):Oras(bonus,nume,loc,venit){
	if(this->tara!=NULL){
		delete[]this->tara;
	}
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}

Capitala& Capitala::operator=(const Capitala& obj){
	(Oras&)(*this)=obj;
	if(this->tara!=NULL){
		delete[]this->tara;
	}
	this->tara=new char[strlen(obj.tara)+1];
	strcpy(this->tara,obj.tara);
	return *this;
}

Capitala::~Capitala(){
	if(this->tara!=NULL){
		delete[]this->tara;
	}
}

void Capitala::afisare(){
	Oras::afisare();
	cout<<"Tara:"<<this->tara<<endl<<endl;
}
