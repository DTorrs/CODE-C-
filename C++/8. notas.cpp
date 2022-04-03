#include<iostream>
using namespace std;

int main(){
	
	float n1,n2,n3,n4,n5,n6,promedio;
	
	cout<<"Digite la nota final de las asignaturas: "<<endl;cin>>n1>>n2>>n3>>n4>>n5>>n6;
	promedio=(n1+n2+n3+n4+n5+n6)/6;
	cout<<"Su promedio es: "<<promedio<<endl;
	
	if(promedio>3.5){
		cout<<"Usted ha aprobado";
	}
	else{
		cout<<"Usted no ha aprobado";
	}
	
	
	return 0;
}
