#include<iostream>
using namespace std;

int main(){
	
	int x,cont,z,i,nprimos[50];
	i=0;
	
	for(x=1;x<=50;x++)
{	
		cont=0;



	for(z=1;z<=x;z++)
{
		if(x%z==0)
{
	
	cont++;
}
}

if (cont==2 || z==1 || z==0)
{
	nprimos[i]=x;
	i++;
}
}

for(x=0;x<i;x++){
	cout<<endl<<nprimos[x];
}


	return 0;
}
