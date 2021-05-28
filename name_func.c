#include<stdio.h>
void name(char);

void main()
{
char input;
printf("enter the first digit of your name/n");
scanf("%c",&input);
name(input);

}
void name(char product)
{
if (product=='p')
printf("the name is priyanka");
if (product=='r')
printf("the name is ragini");
if (product=='k')
printf("the name is kalpna");
if (product=='h')
printf("the name is himanshu");
if (product=='m')
printf("the name is mandheer");
}
