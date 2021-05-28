#include<stdio.h>
int main()
{
int n,i,answer=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
answer=i*n;
printf("answer=%d\n",answer);
}
return 0;
}




