#include<iostream>
#include<bits/stdc++.h>
#define tam 50
using namespace std;

int main(){
	
	int n=5,valor=1;
	int m[100][100];
	
	for(int j=0;j<n;j++){
		if(j%2==0){
			for(int i=0;i<=n;i++){
				m[i][j]=valor;
				valor++;
			}
		}
		else{
			for(int i=n;i>=0;i--){
				m[i][j]=valor;
				valor++;
			}
		}
	}
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<n;j++){
			cout<<m[i][j];cout<<" ";
		}
	cout<<"\n";	
	}
	
	
	
	
	return 0;
}
