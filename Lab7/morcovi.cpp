#include "morcovi.hpp"

Morcovi::Morcovi(int q,int pret){
	this->cantitate=q;
	this->pret_100_grame=pret;
}

Morcovi::Morcovi(const Morcovi& obj){
	this->cantitate=obj.cantitate;
	this->pret_100_grame=obj.pret_100_grame;
}

Morcovi& Morcovi::operator=(const Morcovi& obj){
	this->cantitate=obj.cantitate;
	this->pret_100_grame=obj.pret_100_grame;
	return(*this);
}

char* Morcovi::getNume(){
	char copie[9]="Morcovi";
	char *nume=new char[strlen(copie)+1];
	strcpy(nume,copie);
	return nume;
}

float Morcovi::getPret(){
	float pret=(float)this->cantitate/this->pret_100_grame;
	return pret;
}

void Morcovi::afisare(){
	cout<<"Morcovi->"<<this->getPret()<<" lei"<<endl;
}
