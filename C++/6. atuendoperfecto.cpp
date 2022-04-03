#include<iostream>
using namespace std;

int main(){
	
	int corbata,cinturon,zapatos,camisa,traje,opcion;
	
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1.Valor de la corbata"<<endl;
	cout<<"2.Valor del cinturon"<<endl;
	cout<<"3.Valor de los zapatos"<<endl;
	cout<<"4.Valor de la camisa"<<endl;
	cout<<"Opcion"<<endl;cin>>opcion;
	
	switch(opcion){
		
		case 1:
		cout<<"Digite el valor de la corbata:"<<endl;
		cin>>corbata;
		traje=corbata*6;
		cout<<"El traje completo costaria: "<<traje;
		break;
		
		case 2:
		cout<<"Digite el valor del cinturon:"<<endl;
		cin>>cinturon;
		traje=cinturon*5;
		cout<<"El traje completo costaria: "<<traje;
		break;
		
		case 3:
		cout<<"Digite el valor de los zapatos:"<<endl;	
		cin>>zapatos;
		traje=zapatos*2;
		cout<<"El traje completo costaria: "<<traje;
		break;
		
		case 4:
		cout<<"Digite el valor de la camisa:"<<endl;	
		cin>>camisa;
		traje=((camisa*3)/2)*2;
		cout<<"El traje completo costaria: "<<traje;
		break;
		
		default:
		cout<<"Opcion incorrecta";
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
