#include<stdio.h>
int main()
{
char x;
printf("welcome!!!!");
printf("enter first char of your name");
scanf("%c",&x);



switch(x)
{

case 97:
       printf("anka\n");
       break;
case 'k':     
       printf("kalpna\n");
       break;
case 'h':       
       printf("himanshu\n");
       break;
case 'r':      
       printf("ragini\n");
       break;
case 'm':     
       printf("mandheer\n");
       break;
case 's':
	printf("simple\n");
	break;
default:
       printf("invalid input");
       break;
  }     
return 0;
}
