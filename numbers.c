#include<stdio.h>
int main()
{
int x,y;
printf("enter the value of x and y");
scanf("%d %d",&x,&y);

if(x>0&&y>0)
printf("first quadrant");
else if(x<0&&y>0)
printf("2nd quadrant");
else if(x<0&&y<0)
printf("3rd quadrant");
else if(x>0&&y<0)
printf("4th quadrant");
else
printf("invalid input");
return 0;
}
