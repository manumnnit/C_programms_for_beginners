#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
//printf("%d",a<b?b<c?c:b:a<c?c:a); finding greatest out of three numbers
//printf("%d",a<b?a>c?a:b<c?b:c:a>c?b<c?b:c:a);  finding second greatest out of three numbers
printf("%d",a<b?a<c?a:c:b<c?b:c);  // finding lowest out of three numbers

return 0;
}
