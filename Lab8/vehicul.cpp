#include "vehicul.hpp"

Vehicul::Vehicul(){
	this->proprietar=NULL;
	this->pret=0;
}

Vehicul::Vehicul(const char *pr,int p){
	this->proprietar=new char(strlen(pr)+1);
	strcpy(this->proprietar,pr);
	this->pret=p;
}

Vehicul::Vehicul(const Vehicul& obj){
	this->proprietar=new char(strlen(obj.proprietar)+1);
	strcpy(this->proprietar,obj.proprietar);
	this->pret=obj.pret;
}

Vehicul& Vehicul::operator=(const Vehicul& obj){
	this->proprietar=new char(strlen(obj.proprietar)+1);
	strcpy(this->proprietar,obj.proprietar);
	this->pret=obj.pret;
	return *this;
}

char* Vehicul::getProp(){
	return this->proprietar;
}

int Vehicul::getPret(){
	return this->pret;
}

void Vehicul::afisare(){
	cout<<"Pret: "<<this->pret<<endl;
	cout<<"Proprietar: "<<this->proprietar<<endl;
}

Vehicul::~Vehicul(){
	cout<<"Intra vehicul"<<endl;
	delete[]this->proprietar;
}
