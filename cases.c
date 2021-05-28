#include<stdio.h>
int main()
{
int month;

printf("Hi Welcome sir!!!!\n");
printf("Please enter the month (from 1 to 12)");
scanf("%d",&month);

switch(month)
{


case 1:
	printf("January\n");
	break;
case 2:
	printf("February\n");
case 3:
	printf("March\n");
case 4:
	printf("April\n");
case 5:
	printf("May\n");
case 6:
	printf("June\n");
case 7:
	printf("July\n");
case 8:
	printf("August\n");
case 9:
	printf("Septmeber\n");
case 10:
	printf("October\n");
case 11:
	printf("November\n");
case 12:
	printf("December\n");
default:
	printf("Priyanka");
	break;


}



return 0;
}
