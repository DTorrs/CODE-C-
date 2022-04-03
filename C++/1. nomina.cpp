#include<iostream>
using namespace std;

int main(){
	
	int sueldobase=855000,sueldonuevo,sueldobono,extra,bono,prestaciones=222300,i=1,nt=0;
	
	do{
	
	cout<<"Ingrese las horas extra del empleado: "; cin>>extra;
	
	if(extra==10){
		bono=sueldobase*0.1;
		sueldobono=sueldobase+bono;
		sueldonuevo=sueldobono-prestaciones;
		nt=nt+sueldonuevo;
		cout<<"El sueldo nuevo es: "<<endl; cout<<sueldonuevo<<endl;
	}
	else if(extra==20){
		bono=sueldobase*0.15;
		sueldobono=sueldobase+bono;
		sueldonuevo=sueldobono-prestaciones;
		nt=nt+sueldonuevo;
		cout<<"El sueldo nuevo es: "<<endl; cout<<sueldonuevo<<endl;
	}
	else if(extra==32){
		bono=sueldobase*0.2;
		sueldobono=sueldobase+bono;
		sueldonuevo=sueldobono-prestaciones;
		nt=nt+sueldonuevo;
		cout<<"El sueldo nuevo es: "<<endl; cout<<sueldonuevo<<endl;
	}
	else{cout<<"Digite 10, 20 o 32"<<endl;
	}
	
	i++;
    }while(i<=10);
    
    cout<<"La nomina total a pagar es: "<<nt;
	
	return 0;
	
	
	
	
}
