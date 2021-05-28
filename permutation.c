#include<stdio.h>
int fact(int);

int main()
{
int n,r;
printf("enter the value of n and r\n");
scanf("%d %d",&n,&r);
printf("permutation is %d\n",fact(n)/fact(n-r));
return 0;
}



int fact(int n)
{
int i,fac=1;
for(i=1;i<=n;i++)
fac=fac*i;
return fac;
}
