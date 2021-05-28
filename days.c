#include<stdio.h>
int main()
{
int a,b;
printf("enter your choice\n");
printf("press 1-monday \n 2-tuesday\n 3-wednesday \n 4-thrusday \n 5-friday\n 6-saturday\n 7-sunday\n");
scanf("%d",&a);
printf("press 8-lunch \n 9-dinner\n");
scanf("%d",&b);

if(a==1 && b==8)
printf("monday lunch is-aalu sbji, dal ,roti");
else if(a==1 && b==9)
printf("monday dinner is-toor dal,rice");
else if(a==2 && b==8)
printf("tues lunch is-aalu palak,roti");
else if(a==2 && b==9)
printf("tues dinner is-tahri");
else if(a==3 && b==8)
printf("wed lunch is-bhindi, toor dal,roti");
else if(a==3 && b==9)
printf("wed dinner is-khichdi");
else if(a==4 && b==8)
printf("thrusday lunch is-ghobhi sbji,roti,moong dal");
else if(a==4 && b==9)
printf("thrusday dinner is-arhar dal,rice");
else if(a==5 && b==8)
printf("friday lunch is-kundru sbji,dal,roti");
else if(a==5 && b==9)
printf("friday dinner is-sambhar,rice");
else if(a==6 && b==8)
printf("sat lunch is-arbi sbji,roti");
else if(a==6 && b==9)
printf("sat dinner is-dal,rice");
else if(a==7 && b==8 || a==7 && b==9)
printf("sunday-whatever u want");
else
printf("invalid input");

return 0;
}

