#include<iostream>
using namespace std;

int main(){
	
	int numeros[100];
	int numeros2[100];
	int numeros3[100];
	int n;
	int suma=0;
	int promedio=0;
	
	cout<<"Digite el total de numeros a ingresar: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";cin>>numeros[i];
		suma=suma+numeros[i];
	numeros2[i]=numeros[i];
	numeros3[i]=numeros[i];
	}
	promedio=suma/n;
	
int i=0;


		
		cout<<"Menores o iguales al promedio: ";
		while(i<n){
		if(numeros[i]<=promedio){
		cout<<numeros2[i];
		i++;
		}
	
		else{
		cout<<"--- Mayores al promedio: ";
		while(i<n){
		cout<<numeros3[i];
		i++;
	}
}
}

	
	
   return 0;
}
