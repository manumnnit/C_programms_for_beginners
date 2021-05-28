#include<stdio.h>
int main()
{
int year;
printf("enter the year is");
scanf("%d",&year);
if(year%4==0)
{
printf("the year is  leap year");
}
else()
{
printf("invalid input");
}
return 0;
}
