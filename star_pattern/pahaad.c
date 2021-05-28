// Nested For Loop
/* 
 i
row1 i=1	****
row2 i=2	*  *
row3 i=3	*  *	
row4 i=4	****
*/


#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	for(j=1;j<=n-i;j++)
		printf(" ");
	for(k=1;k<= (2*i-1);k++)
		printf("*");
		
 printf("\n");
 }
 for(i=1;i<=n/2;i++)
 {
	for(j=1;j<=n-2;j++)
		printf(" ");
	
		printf("||");
		
 printf("\n");
 }
 
 	
return 0;
}




