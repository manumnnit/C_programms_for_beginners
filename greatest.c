#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
/*if(a<b)
 { if(b<c)
 printf(" the greatest number is %d",c);
  else
  printf(" the greatest number is %d",b);
  }
else
{
  if(a>c) 
  printf("the greatest number is %d",a);
  else
  printf("the greatest number is %d",c);
  }
*/
printf("%d",a<b? b<c?c:b : a>c?a:c);


return 0;
}
