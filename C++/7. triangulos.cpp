#include<iostream>
using namespace std;

int main(){
	
	int angulo,angulo3,suma,i;
	do{
	
	cout<<"Digite el valor de un angulo (no recto) del triangulo: "<<endl;cin>>angulo;
	
	suma=angulo+90;
	angulo3=180-suma;
	
	cout<<"El valor del tercer angulo del triangulo es: "<<angulo3<<endl;
    
    i++;
	}while(i<4);
	
	return 0;
}
