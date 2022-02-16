#include "cai.hpp"

Cai::Cai(){
	this->nr_animale=-1;
	this->cantitate=-1;
	this->tip_mancare=NULL;
}

Cai::Cai(int nr,int c,const char*tip,const char* nume){
	this->nr_animale=nr;
	this->cantitate=c;
	if(this->tip_mancare!=NULL){
		delete[]this->tip_mancare;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
	this->tip_mancare=new char[strlen(tip)+1];
	this->nume_animal=new char[strlen(nume)+1];
	strcpy(this->tip_mancare,tip);
	strcpy(this->nume_animal,nume);
}

Cai& Cai::operator=(const Cai& obj){
	this->nr_animale=obj.nr_animale;
	this->cantitate=obj.cantitate;
	if(this->tip_mancare!=NULL){
		delete[]this->tip_mancare;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
	this->tip_mancare=new char[strlen(obj.tip_mancare)+1];
	strcpy(this->tip_mancare,obj.tip_mancare);
	this->nume_animal=new char[strlen(obj.nume_animal)+1];
	strcpy(this->nume_animal,obj.nume_animal);
	return *this;
}

int Cai::getCantitateTotala(){
	return this->cantitate;
}

int Cai::getCantitate(){
	return this->cantitate;
}

char* Cai::getName(){
	return this->nume_animal;
}

char *Cai::getTip(){
	return this->tip_mancare;
}

int Cai::getNumarAnimale(){
	return this->nr_animale;
}

void Cai::afisare(){
	cout<<"Nume animal: "<<this->nume_animal<<endl;
	cout<<"Tip mancare: "<<this->tip_mancare<<endl;
	cout<<"Cantitate mancare: "<<this->cantitate<<endl;
	cout<<"Numar de animale: "<<this->nr_animale<<endl<<endl;
}

Cai::~Cai(){
	if(this->tip_mancare!=NULL){
		delete[]this->tip_mancare;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
}
