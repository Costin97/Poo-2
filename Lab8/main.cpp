#include "masina_cu_remorca.cpp"

int main()
{
	Baza**v;
	Baza *aux;
	v=new Baza*[6];
	int dim_remorca1[3]={1,2,3};
	int dim_remorca2[3]={5,2,3};
	int dim_remorca3[3]={8,7,9};
	int dim_remorca4[3]={2,5,9};
	int dim_masina1[3]={5,5,3};
	int dim_masina2[3]={3,7,3};
	
	v[0]=new Vehicul("Ion",9800);
	v[1] =new Masina_cu_remorca(1200, dim_remorca1, 200, dim_masina1, "BMW", "Andreea", 3500 );
	v[2]=new Masina(dim_masina1,"Audi","Ion",2690);
	v[3]=new Remorca(dim_remorca1,120,870,"Mircea");

	cout<<"Afisarea vectorului inainte de sortare: "<<endl<<endl<<endl;
	for(int i=0;i<4;i++){
		v[i]->afisare();
		cout<<"-----------------------------------------"<<endl<<endl<<endl;
	}
	for (int i=0;i<3;i++)
		for(int j=i+1;j<4;j++){
			if(v[i]->getPret()>v[j]->getPret())
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
	}
	cout<<"Afisarea vectorului dupa sortare: "<<endl<<endl<<endl;
	for(int i=0;i<4;i++){
		v[i]->afisare();
		cout<<"-----------------------------------------"<<endl;
	}
	Masina_cu_remorca obj1(1930, dim_remorca3, 230, dim_masina1, "OPEL", "Andrei", 2780 );
	Masina_cu_remorca obj2(1820, dim_remorca4, 450, dim_masina2, "FIAT", "Costi", 3340 );
	cout<<"Exemplu pentru operatorul > : ";
	int rasp1=obj1>obj2;
	cout<<rasp1<<endl;
	cout<<"Exemplu pentru operatorul < : ";
	int rasp2=obj1<obj2;
	cout<<rasp2<<endl;
	cout<<"Exemplu pentru operatorul + :";
	int suma=obj1+obj2;
	cout<<suma<<endl;
	cout<<"Exemplu pentru operatorul - :";
	int diferenta=obj1-obj2;
	cout<<diferenta<<endl;
	for(int i=0;i<4;i++){
			delete v[i];
	}
	delete[]v;

	return 0;
}

