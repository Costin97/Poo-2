#include "localitate.hpp"

Localitate::Localitate(){
	this->nume=NULL;
	this->nr_locuitori=-1;
	this->venit_mediu=-1;
}

Localitate::Localitate(const char* nume,int nr_loc,int venit){
//	if(this->nume!=NULL){
//		delete[]this->nume;
//	}
	this->nume=new char(strlen(nume)+1);
	strcpy(this->nume,nume);
	this->nr_locuitori=nr_loc;
	this->venit_mediu=venit;

}

Localitate& Localitate::operator=(const Localitate& obj){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	return *this;
}

Localitate::~Localitate(){
	if(this->nume!=NULL){
		delete[]this->nume;
	}
	this->nr_locuitori=-1;
	this->venit_mediu=-1;
}

void Localitate::afisare(){
	cout<<"Nume:"<<this->nume<<endl<<endl;
	cout<<"Numar Locuitori:"<<this->nr_locuitori<<endl<<endl;
	cout<<"Venit mediu:"<<this->venit_mediu<<endl<<endl;
}

int Localitate::nrLoc(){
	return this->nr_locuitori;
}

int Localitate::venit_Mediu(){
	return this->venit_mediu;
}
