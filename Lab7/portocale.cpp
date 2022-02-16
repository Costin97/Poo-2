#include "portocale.hpp"
#include <cstring>

Portocale::Portocale(int nr,int pret){
	this->nr_kilograme=nr;
	this->pret_kg=pret;
}

Portocale::Portocale(const Portocale& obj){
	this->nr_kilograme=obj.nr_kilograme;
	this->pret_kg=obj.pret_kg;
}

Portocale& Portocale::operator=(const Portocale& obj){
	this->nr_kilograme=obj.nr_kilograme;
	this->pret_kg=obj.pret_kg;
	return (*this);
}

float Portocale::getPret(){
	float pret=(float)this->nr_kilograme/this->pret_kg;
	return pret;
}

char* Portocale::getNume(){
	char copie[10]="Portocale";
	char *nume=new char[strlen(copie)+1];
	strcpy(nume,copie);
	return nume;
}

void Portocale::afisare(){
	cout<<"Portocale->"<<this->getPret()<<" lei"<<endl;
}



