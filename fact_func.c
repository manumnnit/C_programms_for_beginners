#include<stdio.h>
int fact(int);

int main()
{
int a,i,b;
printf("enter the value of a \n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=fact(i); //1  2 6 24 120
printf("fact of %d is %d\n",i,b);
}
return 0;
}


int fact(int a)
{
int fac=1,i;
for(i=1;i<=a;i++)
fac=fac*i;
return fac;
}
