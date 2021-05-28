#include<stdio.h>
int main()
{
int a,b,c,flag;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
flag=0;
if(a*a==b*b+c*c)
flag=1;
if(b*b==c*c+a*a)
flag=1;
if(c*c==b*b+a*a)
flag=1;

if(flag==1)
printf("yes the numbers are triplets");
else
printf("numbers are not triplets");

return 0;
}
