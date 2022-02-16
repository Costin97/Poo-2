#include "masina.hpp"

Masina::Masina():Vehicul(){
	this->marca=NULL;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=0;
	}
}

Masina::Masina(int v[],const char*m,const char*p,int pret):Vehicul(p,pret){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=v[i];
	}
	this->marca=new char(strlen(m)+1);
	strcpy(this->marca,m);
}

Masina::Masina(const Masina& obj){
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=obj.dimensiuni[i];
	}
	this->marca=new char(strlen(obj.marca)+1);
	strcpy(this->marca,obj.marca);
}

Masina& Masina::operator=(const Masina& obj){
	(Vehicul&)(*this)=obj;
	for(int i=0;i<3;i++){
		this->dimensiuni[i]=obj.dimensiuni[i];
	}
	this->marca=new char(strlen(obj.marca)+1);
	strcpy(marca,obj.marca);
	return *this;
}

char* Masina::getMarca(){
	return this->marca;
}

void Masina::getDimensiuni(){
	for (int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<" ";
}
cout<<endl;
}

void Masina::afisare(){
	cout<<"Proprietarul masinii: "<<Vehicul::getProp()<<endl;
	cout<<"Pretul masinii: "<<Vehicul::getPret()<<endl;
	cout<<"Marca: "<<this->marca<<endl;
	cout<<"Dimensiuni:"<<endl;
	for(int i=0;i<3;i++){
		cout<<this->dimensiuni[i]<<endl;
	}
}

Masina::~Masina(){
	cout<<"Intra masina"<<endl;
	delete[]this->marca;
}
