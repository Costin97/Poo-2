#include "vector.hpp"
#include "nr_complex.hpp"
#include "fractie.hpp"
#include <iostream>

template <class X>
Vector<X>::Vector(int dim,X *buf){
	this->dim=dim;
	this->buf=new X[dim];
	for(int i=0;i<dim;i++){
		this->buf[i]=buf[i];
	}
}

template <class X>
void Vector<X>::afisare(){
	cout<<"Dimensiunea este: "<<this->dim<<endl;
	cout<<"Vectorul este:"<<endl;
	for(int i=0;i<this->dim;i++){
		cout<<this->buf[i]<<" ";
	}
	cout<<endl;
}

template <class X>
void Vector<X>::sortare(){
	X aux;
	for(int i=0;i<this->dim-1;i++)
		for(int j=i+1;j<this->dim;j++){
			if(this->buf[i]>this->buf[j]){
				aux=this->buf[i];
				this->buf[i]=this->buf[j];
				this->buf[j]=aux;
			}
		}
}

template <class X>
Vector<X>::~Vector(){
	delete[]this->buf;
}

static void test(){
		int copie1[5]={15,18,14,28,10};
		Vector<int> v1(5,copie1);
		v1.afisare();
		
		double copie2[5]={32131,3434,54546,233,444655};
		Vector<double> v2(5,copie2);
		v2.afisare();
		
		Nr_complex *copie3=new Nr_complex[5];
		copie3[0]=Nr_complex(500,100);
		copie3[1]=Nr_complex(30,12);
		copie3[2]=Nr_complex(55,8);
		copie3[3]=Nr_complex(5,4);
		copie3[4]=Nr_complex(170,9);
		
		Vector<Nr_complex> nrc(5,copie3);
		nrc.afisare();
		
		Fractie *copie4=new Fractie[5];
		copie4[0]=Fractie(2,5);
		copie4[1]=Fractie(7,5);
		copie4[2]=Fractie(9,12);
		copie4[3]=Fractie(3,20);
		copie4[4]=Fractie(11,27);
		
		Vector<Fractie> frc(5,copie4);
		frc.afisare();
		
		v1.sortare();
		v2.sortare();
		nrc.sortare();
		frc.sortare();	
}
