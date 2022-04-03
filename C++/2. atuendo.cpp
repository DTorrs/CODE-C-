#include<iostream>
using namespace std;

int main(){
	
int c=1,p=1,z=1,ch=1,l=1,ac,ap,az,ach,al;
int camisa,pantalon,zapatos,chaqueta,libro,suma;
ac=0;ap=0;az=0;ach=0;al=0;

	do{cout<<"Digite el valor de la camisa: ";cin>>camisa;
	ac=ac+camisa;
	c++;	
	}while(c<=4);
	
	do{cout<<"Digite el valor del pantalon: ";cin>>pantalon;
	ap=ap+pantalon;		
	p++;	
	}while(p<=3);
	
	do{cout<<"Digite el valor del par de zapatos: ";cin>>zapatos;
	az=az+zapatos;		
	z++;	
	}while(z<=2);
	
	do{cout<<"Digite el valor de la chaquta: ";cin>>chaqueta;
	ach=ach+chaqueta;		
	ch++;	
	}while(ch<=1);
	
	do{cout<<"Digite el valor del libro: ";cin>>libro;
	al=al+libro;		
	l++;	
	}while(l<=4);
	
	suma=ac+ap+az+ach+al;
	cout<<"Total invertido en el atuendo: "<<suma;
	
	return 0;
}
