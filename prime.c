
// Designing the solution of any problem


#include<stdio.h>	
int main()
{
int i,n,flag=0,count=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	flag=1;
	count=count+1;
	}
}
printf("%d",count);
if(flag==1)
printf("number is not prime");
else
printf("number is prime");

return 0;
}
