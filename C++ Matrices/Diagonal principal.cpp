#include<iostream>
using namespace std;
int main(){
	
	int matriz[5][5];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Ingrese el valor de la posicion: ["<<i<<"]["<<j<<"]: "<<endl;
			cin>>matriz[i][j];
		}
	}
		for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
cout<<"Diagonal principal de la raiz: ";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	if(i==j){
		cout<<matriz[i][j];
	}
}
}
	
	return 0;
}
