#include<stdio.h>
int add(int,int);  //function declaration

int main()
{
int a,b,c;
printf("enter the value of a,b\n");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("%d",c);
return 0;
}

int add(int a,int b)
{
int c=0,i;
for(i=a;i<=b;i++)
c=c+i;
return c;
}




