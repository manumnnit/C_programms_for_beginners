#include<stdio.h>
int main()
{
int x=5;
int *ptr,**ptr2;
ptr=&x;
*ptr=10;
ptr2=&ptr;
*ptr=**ptr2+ *ptr;
printf("%d---%d---%d\n",**ptr2,*ptr,**ptr2+*ptr);   //

return 0;
}




