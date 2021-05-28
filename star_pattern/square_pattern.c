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
int i,j,n;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	 if (i==1 || i==n/2)
	 {
	 	for(j=1;j<=n/2;j++)
	 	printf("*");
	   }   
	 else if(i==2 || i<=n/2)
	 {
	 	for(j=1;j<=n/2;j++)
	 	{
	 	 	if(j==1 || j==n/2)
	 	 	printf("*");
	 	 	else
	 	 	printf(" ");
	 	}
	 	
	 }
	 else
	 {
	     for(j=1;j<=n;j++)
	     {
	        if(j==1)
	        printf("*");
	        else
	        printf(" ");
	      }  
	 
	}
 printf("\n");
 }
return 0;
}




