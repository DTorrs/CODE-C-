#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int n,potencia,factorial=1,i=1;
	
	cout<<"Digite un numero: "; cin>>n;
	
	if(n%2==0){cout<<"Es par"<<endl;
	potencia=pow(n,7);
	cout<<"La potencia elevada a la 7 es: ";cout<<potencia;
	}
	
	else{cout<<"Es impar"<<endl;
	for(i;i<=n;i++){
	factorial=factorial*i;}
	cout<<"El factorial es: ";cout<<factorial;
	}
	
	
	return 0;
}
