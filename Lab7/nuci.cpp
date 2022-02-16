#include "nuci.hpp"

Nuci::Nuci(int q,int pret){
	this->cantitate=q;
	this->pret_100_grame=pret;
}

Nuci::Nuci(const Nuci& obj){
	this->cantitate=obj.cantitate;
	this->pret_100_grame=obj.pret_100_grame;
}

Nuci& Nuci::operator=(const Nuci& obj){
	this->cantitate=obj.cantitate;
	this->pret_100_grame=obj.pret_100_grame;
	return(*this);
}

void Nuci::afisare(){
	cout<<"Nuci->"<<this->getPret()<<" lei"<<endl;
}

char* Nuci::getNume(){
	char copie[6]="Nuci";
	char *nume=new char[strlen(copie)+1];
	strcpy(nume,copie);
	return nume;
}

float Nuci::getPret(){
	float pret=(float)this->cantitate/this->pret_100_grame;
	return pret;
}
