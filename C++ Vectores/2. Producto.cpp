#include<iostream>
using namespace std;

int main(){
	
	int auxiliar;
	float numeros[5];
	float numeros2[5];
	float inverso[5];
	float numeros3[5];
	
	for(int i=0;i<5;i++){
	cout<<"Primer arreglo, digite un numero: ";cin>>numeros[i];
}
    for(int i=0;i<5;i++){
	cout<<"Segundo arreglo, digite un numero " << (i+1) << ": ";cin>>numeros2[i];
}
cout<<endl;
	 for(int i=0;i<5;i++){
	cout<<"Numero " << (i+1) << ": "<<numeros2[i]<<endl;
}
	 for(int i=0;i<5/2;i++){
	 	auxiliar=numeros2[i];
	 	numeros2[i]=numeros2[5-1-i];
	 	numeros2[5-1-i]=auxiliar;
}
	cout<<endl;
	 for(int i=0;i<5;i++){
	cout<<"Numero " << (i+1) << ": "<<numeros2[i]<<endl;
}

cout<<"Resultados de la multiplicacion:"<<endl;
for(int i=0;i<5;i++){
	numeros3[i]=numeros[i]*numeros2[i];
	cout<<numeros3[i]<<endl;
}

	
	return 0;
}
