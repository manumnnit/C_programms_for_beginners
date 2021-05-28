#include<stdio.h>
void swap(int* ,int*);

int main()
{
int a,b;
printf("enter the value of a and b\n");
scanf("%d %d",&a,&b);
printf("%d %d\n",a,b);
swap(&a,&b);
printf("%d %d\n",a,b);
swap(&a,&b);
printf("%d %d",a,b);
return 0;
}
void swap(int *i,int *j)
{
*i=*i+*j;
*j=*i-*j;
*i=*i-*j;
}
