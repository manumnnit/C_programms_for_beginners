#include<stdio.h>
int main()
{
int amount=50000,choice,withdrawl;

printf("welcome to atm service\n");
printf("Enter Your Choice:\n Press 1 for withdrawl \n press 2 for Checking account balance\n");
scanf("%d",&choice);
if(choice==1)
{
printf("enter the amount for withdrawl \n");
scanf("%d",&withdrawl);
printf("the remaing balance is %d",amount-withdrawl);
}

else if(choice==2)
{
printf("the amount is %d \n",amount);
}
else {
printf("invalid choice");
}
return 0;
}

