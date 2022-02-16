#include "vector.cpp"
#include "fractie.cpp"
#include "nr_complex.cpp"
#include <iostream>


int main(){
	cout<<"Vectorul de tip int"<<endl;
	int copie1[5]={15,18,14,28,10};
	Vector<int> v1(5,copie1);
	
	cout<<"Urmeaza afisarea inainte de sortare:"<<endl;
	v1.afisare();
	cout<<"Urmeaza sortarea:"<<endl;
	v1.sortare();
	cout<<"Urmeaza afisarea dupa sortare:"<<endl;
	v1.afisare();
	
	cout<<"Vectorul de tip double"<<endl;

	double copie2[5]={32131,3434,54546,233,444655};
	Vector<double> v2(5,copie2);
	
	cout<<"Urmeaza afisarea inainte de sortare:"<<endl;
	v2.afisare();
	cout<<"Urmeaza sortarea:"<<endl;
	v2.sortare();
	cout<<"Urmeaza afisarea dupa sortare:"<<endl;
	v2.afisare();
	
	cout<<"Vector de tip complex"<<endl;
	Nr_complex *copie3=new Nr_complex[5];
	copie3[0]=Nr_complex(500,100);
	copie3[1]=Nr_complex(30,12);
	copie3[2]=Nr_complex(55,8);
	copie3[3]=Nr_complex(5,4);
	copie3[4]=Nr_complex(170,9);
	Vector<Nr_complex> nrc(5,copie3);
	
	cout<<"Urmeaza afisarea inainte de sortare:"<<endl;
	nrc.afisare();
	cout<<"Urmeaza sortarea:"<<endl;
	nrc.sortare();
	cout<<"Urmeaza afisarea dupa sortare:"<<endl;
	nrc.afisare();
	
	cout<<"Vector de tip fractie"<<endl;
	Fractie *copie4=new Fractie[5];
	copie4[0]=Fractie(2,5);
	copie4[1]=Fractie(7,5);
	copie4[2]=Fractie(9,12);
	copie4[3]=Fractie(3,20);
	copie4[4]=Fractie(11,27);
	Vector<Fractie> frc(5,copie4);
	
	cout<<"Urmeaza afisarea inainte de sortare:"<<endl;
	frc.afisare();
	cout<<"Urmeaza sortarea:"<<endl;
	frc.sortare();
	cout<<"Urmeaza afisarea dupa sortare:"<<endl;
	frc.afisare();
	
	return 0;
}
