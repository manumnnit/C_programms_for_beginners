// Nested For Loop
/* 
 i
row1 i=1	1
row2 i=2	1	2
row3 i=3	1	2	3
row4 i=4	1	2	3	4
*/


#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	 for(j=1;j<=i;j++)
	 	printf("*");
	 printf("\n");
	}

return 0;
}




