#include "ferma.cpp"
#include "vaci.cpp"
#include "gaini.cpp"
#include "cai.cpp"
#include "porci.cpp"
#include "capre.cpp"

int main(){
	Ferma**v;
	v=new Ferma*[5];
	int cantitate_depozit=2000;
	cout<<"Cantitatea depozitului este de: "<<cantitate_depozit<<" de kilograme!"<<endl<<endl;
	v[0]=new Vaci(10,30,"nutret","vaci");
	v[1]=new Gaini(100,5,"graunte","gaini");
	v[2]=new Cai(2,8,"nutret","cai");
	v[3]=new Porci(8,4,5,"graunte","iarba","porci");
	v[4]=new Capre(4,4,"nutret","capre");
	cout<<"Afisarea inainte de toate lucrurile:"<<endl;
	for(int i=0;i<5;i++){
		v[i]->afisare();
	}
	int cantitate_totala_pe_zi=0;
	for(int i=0;i<5;i++){
		cantitate_totala_pe_zi+=v[i]->getCantitateTotala();
	}
	cout<<"Cantitatea totala de mancare pe zi este de: "<<cantitate_totala_pe_zi<<" kilograme!"<<endl<<endl;
	int nutret=0,graunte=0,iarba=0;
	for(int i=0;i<5;i++){
		if(strcmp(v[i]->getName(),"porci")==0){
			graunte+=v[i]->getCantitate();
			cout<<"Porci cantitate totala:"<<v[i]->getCantitateTotala()<<endl;
			iarba+=v[i]->getCantitateTotala()-v[i]->getCantitate();
		}
		else{
			if(strcmp(v[i]->getTip(),"graunte")==0){
				graunte+=v[i]->getCantitate();
			}
			else if(strcmp(v[i]->getTip(),"nutret")==0){
				nutret+=v[i]->getCantitate();
			}
		}
	}
	
	cout<<"Cantitatea pe fiecare tip este:"<<endl;
	cout<<"Iarba: "<<iarba<<" kilograme"<<endl;
	cout<<"Graunte: "<<graunte<<" kilograme"<<endl;
	cout<<"Nutret: "<<nutret<<" kilograme"<<endl;
	cout<<"Iar cantitatea totala este: "<<cantitate_totala_pe_zi<<endl;
	
	float iarba_s,nutret_s,graunte_s;
	iarba_s=(float)iarba/cantitate_totala_pe_zi*cantitate_depozit;
	nutret_s=(float)nutret/cantitate_totala_pe_zi*cantitate_depozit;
	graunte_s=(float)graunte/cantitate_totala_pe_zi*cantitate_depozit;
	cout<<"Cantitatea pe care trebuie sa o stochez in hambar pentru a ajunge cat mai multe zile:"<<endl<<endl;
	cout<<"Cantitatea pe fiecare tip este:"<<endl;
	cout<<"Iarba: "<<iarba_s<<" kilograme"<<endl;
	cout<<"Graunte: "<<graunte_s<<" kilograme"<<endl;
	cout<<"Nutret: "<<nutret_s<<" kilograme"<<endl;
	int nr_goliri=cantitate_depozit/cantitate_totala_pe_zi;
	int nr_de_umpleri=365/nr_goliri;
	cout<<"Hambarul se reumple de "<<nr_de_umpleri<<" ori"<<endl;
	float nutret_ramas,iarba_ramasa,graunte_ramase,total_ramas;
	float nr_zile_ramase=365-nr_de_umpleri*nr_goliri;
	total_ramas=cantitate_depozit-nr_zile_ramase*cantitate_totala_pe_zi;
	cout<<"Mancarea ramasa la finalul anului este: "<<total_ramas<<endl;
	if(total_ramas<0){
		cout<<"Nu ramane deloc cantitate de mancare,ba mai mult,nu este suficienta!"<<endl;
	}
	else{
	nutret_ramas=(float)(nutret*total_ramas/cantitate_totala_pe_zi);
	iarba_ramasa=(float)(iarba*total_ramas/cantitate_totala_pe_zi);
	graunte_ramase=(float)(graunte*total_ramas/cantitate_totala_pe_zi);
	cout<<"Nutretul ramas la final de an este: "<<nutret_ramas<<endl;
	cout<<"Iarba ramasa la final de an este: "<<iarba_ramasa<<endl;
	cout<<"Grauntele ramase la final de an sunt: "<<graunte_ramase<<endl;
	}
	Ferma *aux;
	for(int i=0;i<5;i++){
		for(int j=i;j<5;j++){
			if(v[i]->getCantitateTotala()<v[j]->getCantitateTotala()){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	cout<<"Primii 3 consumatori sunt: "<<endl;
	for(int i=0;i<3;i++){
		cout<<v[i]->getName()<<endl;
	}
	return 0;
}
