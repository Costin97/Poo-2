#include "tara.hpp"
Tara::Tara(){
	this->v=NULL;
}

Tara::Tara(Localitate **w){
	this->v=w;
}

void Tara::afisare(){
	int contor=0;
	while(v[contor]!=NULL){
		v[contor]->afisare();
		cout<<endl;
		contor++;
	}
}

int Tara::getLoc()
{
//	cout<<"Intra";
		int contor=0;
	int nr_loc=0;
	while(v[contor]!=NULL){
		nr_loc+=v[contor]->nrLoc();
		contor++;
	}
	return nr_loc;
}
int Tara::venit(){
	cout<<"intra"<<endl;
	int contor=0;
	int venitul=0;
	while(v[contor]!=NULL){
		venitul+=v[contor]->venit_Mediu();
		contor++;
	}
	return venitul;
}
Tara::~Tara(){
	delete[]v;
}

