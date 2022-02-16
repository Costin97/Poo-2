#include "municipiu.hpp"

Municipiu::Municipiu():Oras(){
	this->regiune=NULL;
}

Municipiu::Municipiu(const char* regiune,int bonus,const char* nume,int loc,int venit):Oras(bonus,nume,loc,venit){
	if(this->regiune!=NULL){
		delete[]this->regiune;
	}
	this->regiune=new char(strlen(regiune)+1);
	strcpy(this->regiune,regiune);
}

Municipiu& Municipiu::operator=(const Municipiu& obj){
	(Oras&)(*this)=obj;
	if(this->regiune!=NULL){
		delete[]this->regiune;
	}
	this->regiune=new char(strlen(obj.regiune)+1);
	strcpy(this->regiune,obj.regiune);
	return *this;
}

Municipiu::~Municipiu(){
	if(this->regiune!=NULL){
		delete[]this->regiune;
	}
}

void Municipiu::afisare(){
	Oras::afisare();
	cout<<"Regiune:"<<this->regiune<<endl<<endl;
}

