#include "masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca():Masina(),Remorca(),Vehicul(){
	this->masa_totala=0;
}

Masina_cu_remorca::Masina_cu_remorca(int masa,int dim1[3],int g,int dim2[3],const char*m,const char*p,int pret):Masina(dim2,m,p,pret),Remorca(dim1,g,pret,p),Vehicul(p,pret){
	this->masa_totala=masa;
}

Masina_cu_remorca::Masina_cu_remorca(const Masina_cu_remorca& obj):Masina(obj),Remorca(obj),Vehicul(obj){
	this->masa_totala=obj.masa_totala;
}

Masina_cu_remorca& Masina_cu_remorca::operator=(const Masina_cu_remorca& obj){
	(Masina&)(*this)=obj;
	(Remorca&)(*this)=obj;
	(Vehicul&)(*this)=obj;
	this->masa_totala=obj.masa_totala;
	return (*this);
}

void Masina_cu_remorca::afisare(){
	cout<<"MASINA CU REMORCA"<<endl<<endl;
	cout<<"Proprietarul masinii cu remorca: "<<Vehicul::getProp()<<endl;
	cout<<"Pretul masinii cu remorca: "<<Vehicul::getPret()<<endl;
	cout<<"Marca masinii este: "<<Masina::getMarca()<<endl;
	cout<<"Dimensiunile masinii sunt: ";
	Masina::getDimensiuni();
	cout<<"Greutatea remorcii este: "<<Remorca::getGreutate()<<endl;
	cout<<"Dimensiunile remorcii sunt: ";
	Remorca::getDim();
	cout<<"Masa totala: "<<this->masa_totala<<endl;
}

bool Masina_cu_remorca::operator<(const Masina_cu_remorca& obj){
	if(this->masa_totala<obj.masa_totala){
		return true;
	}
	return false;
}

bool Masina_cu_remorca::operator>(const Masina_cu_remorca& obj){
	if(this->masa_totala>obj.masa_totala){
		return true;
	}
	return false;
}

int operator + (const Masina_cu_remorca& obj1,const Masina_cu_remorca& obj2){
	int masa_totala_adunare=0;
	masa_totala_adunare=obj1.masa_totala+obj2.masa_totala;
	return masa_totala_adunare;
} 

int operator - (const Masina_cu_remorca& obj1,const Masina_cu_remorca& obj2){
	int masa_totala_diferenta;
	if(obj1.masa_totala>=obj2.masa_totala){
		masa_totala_diferenta=obj1.masa_totala-obj2.masa_totala;
	}else{
		masa_totala_diferenta=obj2.masa_totala-obj1.masa_totala;
	}
	return masa_totala_diferenta;
}
