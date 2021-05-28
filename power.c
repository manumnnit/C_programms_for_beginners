#include<stdio.h>
int main()
{
int i,x,y,power=1;
printf("enter the value of base x,exponent y");
scanf("%d %d",&x,&y);
for(i=1;i<=y;i++)
{
power=power*x;
}
printf("%d %d %d",power,x,y);
return 0;
}
