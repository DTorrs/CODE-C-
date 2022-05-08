#include<iostream>
using namespace std;

int main(){
	
int n;

 while(n<=0){
	cout<<"Digite el numero de usuarios a ingresar: ";cin>>n;
}
	string nombre[20], apellido[20];
	float la[100],lh[100],cxdia[100],cxmes[100],kw=402.61,valor[100];
	
	
	for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el nombre del usuario: ";cin>>nombre[i]>>apellido[i];
        
        cout<<"Ingrese en kw el valor de la lectura de ayer: ";cin>>la[i];
        cout<<"Ingrese en kw el valor de la lectura de hoy: ";cin>>lh[i];
        
    cxdia[i]=lh[i]-la[i];
	cxmes[i]=cxdia[i]*30;
	valor[i]=cxmes[i]*kw;
	
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Usuario: "<<nombre[i]<<" "<<apellido[i]<<endl;
        cout<<"Consumo total: "<<cxmes[i]<<endl;
        cout<<"Valor a pagar: "<<valor[i]<<endl;
    }
    return 0;
	
}
