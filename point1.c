#include<stdio.h>
int main()
{
int x=2;
int *p,*q,**r;
p=&x;
q=p;
r=&q;
**r=*p+x-*q;
printf("%d--%d--%d",**r,*p,*q);
return 0;
}

