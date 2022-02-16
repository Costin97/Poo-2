#include "porci.hpp"

Porci::Porci(){
	this->nr_animale=-1;
	this->cantitate1=-1;
	this->tip_mancare1=NULL;
	this->cantitate2=-1;
	this->tip_mancare2=NULL;
}

Porci::Porci(int nr,int c1,int c2,const char*tip1,const char* tip2,const char* nume){
	this->nr_animale=nr;
	this->cantitate1=c1;
	this->cantitate2=c2;
	if(this->tip_mancare1!=NULL){
		delete[]this->tip_mancare1;
	}
	if(this->tip_mancare2!=NULL){
		delete[]this->tip_mancare2;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
	this->tip_mancare1=new char[strlen(tip1)+1];
	this->tip_mancare2=new char[strlen(tip2)+1];
	this->nume_animal=new char[strlen(nume)+1];
	strcpy(this->tip_mancare1,tip1);
	strcpy(this->tip_mancare2,tip2);
	strcpy(this->nume_animal,nume);
}

Porci& Porci::operator=(const Porci& obj){
	this->nr_animale=obj.nr_animale;
	this->cantitate1=obj.cantitate1;
	this->cantitate2=obj.cantitate2;
	if(this->tip_mancare1!=NULL){
		delete[]this->tip_mancare1;
	}
	if(this->tip_mancare2!=NULL){
		delete[]this->tip_mancare2;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
	this->tip_mancare1=new char[strlen(obj.tip_mancare1)+1];
	strcpy(this->tip_mancare1,obj.tip_mancare1);
	this->tip_mancare2=new char[strlen(obj.tip_mancare2)+1];
	strcpy(this->tip_mancare2,obj.tip_mancare2);
	this->nume_animal=new char[strlen(obj.nume_animal)+1];
	strcpy(this->nume_animal,obj.nume_animal);
	return *this;
}

int Porci::getCantitateTotala(){
	return this->cantitate1+this->cantitate2;
}


int Porci::getCantitate(){
	return this->cantitate1;
}

int Porci::getCantitate2(){
	return this->cantitate2;
}

char* Porci::getName(){
	return this->nume_animal;
}

char *Porci::getTip(){
	return this->tip_mancare1;
}

char *Porci::getTip2(){
	return this->tip_mancare2;
}

int Porci::getNumarAnimale(){
	return this->nr_animale;
}

void Porci::afisare(){
	cout<<"Nume animal: "<<this->nume_animal<<endl;
	cout<<"Tip mancare1: "<<this->tip_mancare1<<endl;
	cout<<"Tip mancare2: "<<this->tip_mancare2<<endl;
	cout<<"Cantitate mancare: "<<this->getCantitateTotala()<<endl;
	cout<<"Numar de animale: "<<this->nr_animale<<endl<<endl;
}

Porci::~Porci(){
	if(this->tip_mancare1!=NULL){
		delete[]this->tip_mancare1;
	}
	if(this->tip_mancare2!=NULL){
		delete[]this->tip_mancare2;
	}
	if(this->nume_animal!=NULL){
		delete[]this->nume_animal;
	}
}
