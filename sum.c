// Sample code to perform I/O:
#include <stdio.h>

int isprime(int x){
	int i,n;
	for(i=2;i<x;i++){
		if(x%i==0)
		return -1;
	}
	return 1;
}



int main(){
	int t,n,m,j,k,i,mul=1;
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&n,&m);
	int v[n];
	int count[n];
	for (i=0;i<n;i++)
	{
	 scanf("%d",&v[i]);
	 count[i]=0;
	 }
	for (i=0;i<n;i++)
	{
	
		for(j=v[i];j<=m;j++){
			if(isprime(j)!=1)
			count[i]+=1;
		}
	}
	for (i=0;i<n;i++)
	{
	 printf("%d",count[i]);
	 
	 }
	
	for(k=0;k<n;k++)
	{
		mul=mul*count[k];
	}	
	printf("%d",(mul/n)%1000000007);
	}
}

