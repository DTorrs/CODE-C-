#include<iostream>
using namespace std;

int main(){
	
	int n,n1,n2,n3,resultado;
	
	cout<<"Digite un numero entero: "<<endl;cin>>n;
	
	if(n%2==0){
		cout<<"Pares enteros sucesivos:"<<endl;
		n1=n+2;
		cout<<n1<<endl;
		n2=n+4;
		cout<<n2<<endl;
		n3=n+6;
		cout<<n3<<endl;
	}
	
	else{
		cout<<"Pares enteros sucesivos:"<<endl;
		n1=n+1;
		cout<<n1<<endl;
		n2=n+3;
		cout<<n2<<endl;
		n3=n+5;
		cout<<n3<<endl;
		
	}
	
	resultado=(n1+n2+n3)*n;
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
