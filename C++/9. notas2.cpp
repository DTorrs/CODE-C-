#include<iostream>
using namespace std;

int main(){
	
	float n1,n2,n3,n4,n5,n6,promedio,i,a=0,r=0;
	do{

	cout<<"Digite la nota final de las asignaturas: "<<endl;cin>>n1>>n2>>n3>>n4>>n5>>n6;
	promedio=(n1+n2+n3+n4+n5+n6)/6;
	cout<<"Su promedio es: "<<promedio<<endl;
	
	if(promedio>3.5){
		a=a+1;
		cout<<"Usted ha aprobado"<<endl;
	}
	else{
		r=r+1;
		cout<<"Usted no ha aprobado"<<endl;
	}
	
	i++;
	}while(i<10);
	
	cout<<"Alumnos aprobados: "<<a<<endl;
	cout<<"Alumnos reprobados: "<<r;
	
	
	
	return 0;
}
