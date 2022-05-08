#include<iostream>
using namespace std;

int main(){
	
	int numeros[10];
	int numeros2[10];
	int numeros3[10];
	int suma=0;
	int promedio=0;
	
		
	for(int i=0;i<10;i++){
		cout<<"Digite un numero: ";cin>>numeros[i];
		suma=suma+numeros[i];
	numeros2[i]=numeros[i];
	numeros3[i]=numeros[i];
	}
	
	cout<<"CUADRADO DE NUMEROS PARES"<<endl;
		
		for(int i=0;i<10;i++){
		if(numeros[i]%2==0){
		numeros2[i]=numeros[i]*numeros[i];
		cout<<numeros2[i]<<endl;
		}

		else{
		numeros3[i]=numeros[i]*numeros[i]*numeros[i];
		
	}

}
    cout<<"CUBO DE NUMEROS IMPARES"<<endl;
    
	for(int i=0;i<10;i++){
		if(numeros[i]%2==0){
		numeros2[i]=numeros[i]*numeros[i];
		}

		else{
		numeros3[i]=numeros[i]*numeros[i]*numeros[i];
		cout<<numeros3[i]<<endl;
	}

}


	
	
   return 0;
}
