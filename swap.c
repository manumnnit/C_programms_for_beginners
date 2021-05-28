#include<stdio.h>
int main()
{
int a=8,b=4, temp;
printf("a=%d \t b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("a=%d \t b=%d\n",a,b);
return 0;
}
