#include "portocale.cpp"
#include "morcovi.cpp"
#include "nuci.cpp"
#include "banana.cpp"
#include <cstring>

int main(){
	Baza**v;
	v=new Baza*[10];
	v[0]=new Portocale(10,7);
	v[1]=new Morcovi(19,11);
	v[2]=new Nuci(30,14);
	v[3]=new Portocale(10,4);
	v[4]=new Portocale(18,8);
	v[5]=new Banana(13);
	v[6]=new Nuci(32,14);
	v[7]=new Morcovi(39,11);
	v[8]=new Banana(12);
	v[9]=new Morcovi(29,21);
	for(int i=0;i<10;i++){
		v[i]->afisare();
	}
	cout<<"------------------"<<endl;
	float pret_final=0.0;
	for(int i=0;i<10;i++){
		pret_final+=v[i]->getPret();
	}
	cout<<"Pretul final este:"<<pret_final<<endl;
	cout<<"------------------"<<endl;
	cout<<"Numele sunt:"<<endl;
	for(int i=0;i<4;i++){
	cout<<v[i]->getNume()<<endl;
	}
	cout<<"------------------"<<endl;
	
	//voi face cate un contor pt fiecare tip de clasa,pentru a putea "sti" cate elemente de fiecare tip am.
	
	int contorB=0,contorN=0,contorP=0,contorM=0;
	char numeB[8]="Banana",numeN[5]="Nuci",numeP[10]="Portocale",numeM[10]="Morcovi";
	for(int i=0;i<10;i++){
		if(strcmp(numeB,v[i]->getNume())==0){
			contorB++;
		}
		else if(strcmp(numeN,v[i]->getNume())==0){
			contorN++;
		}
		else if(strcmp(numeP,v[i]->getNume())==0){
			contorP++;
		}
		else if(strcmp(numeM,v[i]->getNume())==0){
			contorM++;
		}
	}
	cout<<"Numarul de elemente din fiecare tip sunt:"<<endl;
	cout<<"Banane:"<<contorB<<endl;
	cout<<"Portocale:"<<contorP<<endl;
	cout<<"Morcovi:"<<contorM<<endl;
	cout<<"Nuci:"<<contorN<<endl;
	cout<<"------------------"<<endl;
	for(int i=0;i<10-1;i++){
		int ok=0;
		if(strcmp(numeB,v[i]->getNume())==0){
			contorB--;
			ok=1;
		}
		if(ok==0&&contorB!=0){
			for(int j=i+1;j<10;j++){
				if(strcmp(numeB,v[j]->getNume())==0){
					Baza *aux;
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
					contorB--;
					break;
			}
		}
	}else if(contorB==0){
		if(strcmp(numeP,v[i]->getNume())==0){
			contorP--;
			ok=1;
		}
		if(ok==0&&contorP!=0){
			for(int j=i+1;j<10;j++){
				if(strcmp(numeP,v[j]->getNume())==0){
					Baza *aux;
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
					contorP--;
					break;
			}
		}
	}else if(contorP==0){
	if(strcmp(numeM,v[i]->getNume())==0){
			contorM--;
			ok=1;
		}
		if(ok==0&&contorM!=0){
			for(int j=i+1;j<10;j++){
				if(strcmp(numeM,v[j]->getNume())==0){
					Baza *aux;
					aux=v[i];
					v[i]=v[j];
					v[j]=aux;
					contorM--;
					break;
			}
		}
	}
}
}
}

		cout<<"Afisare dupa ordonare:"<<endl;
		for(int i=0;i<10;i++){
			v[i]->afisare();
		}
		float pret_total_portocale=0;
		for(int i=0;i<10;i++){
		if(strcmp(numeP,v[i]->getNume())==0){
			pret_total_portocale+=v[i]->getPret();
		}
	}
		cout<<"Pretul total al portocalelor este:"<<pret_total_portocale<<endl;
		//eliberare de memorie
		for(int i=0;i<10;i++){
			delete v[i];
		}
		delete[]v;
		
		return 0;
}
