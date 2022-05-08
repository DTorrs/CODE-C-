#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int m[100][100],a,b,c,x,i,j,n;
do{	
	cout<<"Digite el tamaño de la matriz: ";cin>>n;
}while(n<0||n>=200);

a=0;
b=n;
c=n*n;
x=1;
i=0;

while(x<=c){
	for(j=a;j<b;j++){
		m[i][j]=x;
		x++;
	}
	for(i=a+1;i<b;i++){
		m[i][j-1]=x;
		x++;
	}
	for(j=b-1;j>a;j--){
		m[i-1][j-1]=x;
		x++;
	}
	for(i=b-1;i>a+1;i--){
		m[i][j]=x;
		x++;
	}
	a++;
	b--;
}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(m[i][j]<10){
			cout<< " "<<m[i][j]<<" ";
			}else{
			cout<<m[i][j]<<" ";
			}
			
		}
		cout<<"\n";
	}
	
	

	
	return 0;
}
