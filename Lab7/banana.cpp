#include "banana.hpp"
#include <cstring>

Banana::Banana(int pret){
	this->pret_bucata=pret;
}

Banana::Banana(const Banana& obj){
	this->pret_bucata=obj.pret_bucata;
}

Banana& Banana::operator=(const Banana& obj){
	this->pret_bucata=obj.pret_bucata;
	return (*this);
}

char* Banana::getNume(){
	char copie[8]="Banana";
	char *nume=new char[strlen(copie)+1];
	strcpy(nume,copie);
	return nume;
}

void Banana::afisare(){
	cout<<"Banana->"<<this->getPret()<<" lei"<<endl;
}

float Banana::getPret(){
	float pret=(float)this->pret_bucata;
	return pret;
}

