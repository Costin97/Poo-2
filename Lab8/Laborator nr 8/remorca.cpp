#include "remorca.hpp"

Remorca::Remorca():Vehicul(){
	this->greutate_maxima=0;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=0;
	}
}

Remorca::Remorca(int v[3],int g,int pret,const char* proprietar):Vehicul(proprietar,pret){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=v[i];
	}
	this->greutate_maxima=g;
}

Remorca::Remorca(const Remorca& obj){
	this->greutate_maxima=obj.greutate_maxima;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=obj.dimensiuni[i];
	}
}

Remorca& Remorca::operator=(const Remorca& obj){
	(Vehicul&)(*this)=obj;
	this->greutate_maxima=obj.greutate_maxima;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=obj.dimensiuni[i];
	}
	return *this;
}

void Remorca::getDim(){
	for (int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<" ";
	}		
	cout<<endl;
}

int Remorca::getGreutate()
{
	return this->greutate_maxima;
}
void Remorca::afisare(){
	cout<<"Proprietarul remorcii: "<<Vehicul::getProp()<<endl;
	cout<<"Pretul remorcii: "<<Vehicul::getPret()<<endl;
	cout<<"Greutate maxima: "<<this->greutate_maxima<<endl;
	cout<<"Dimensiuni:"<<endl;
	for(int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<endl;
	}
}
