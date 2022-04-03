#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int a,b,n,num,pares=0,impares=1,suma=0,opcion;
	
	cout<<"Cuantos numeros desea ingresar?"<<endl;cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Ingrese un numero: "<<endl;cin>>num;
}
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1.Calcular suma de los numeros pares"<<endl;
	cout<<"2.Calcular producto de los numeros impares"<<endl;
	cout<<"3.Calcular potencia par de los numeros impares"<<endl;
	cout<<"4.Calcular suma de los numeros negativos"<<endl;
	cout<<"Digite la opcion"<<endl;cin>>opcion;

	switch(opcion){
	case 1: if(num%2==0){pares=pares+num; cout<<"La suma es: "<<pares;}
	break;
    case 2: if(num%2!=0){impares=impares*num; cout<<impares;}
	break;
    case 3: 
    break;
    case 4: if(num<0){suma=suma+num; cout<<suma;}
    break;
}
	
	cout<<"opción Salir, presione 5";
	
	cin>>a;
	
	switch(a)
	
	case 5: cout<<"Seguro que quiere salir? SI=1 NO=0";
	cin>>b;
	if(b=1){return 0;
	}
	else{return main();
	}
	

}
