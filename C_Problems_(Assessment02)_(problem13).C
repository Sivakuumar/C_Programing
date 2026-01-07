#include<stdio.h>
int main ()
{
int X,Y,Z,B,A,sum;
printf("enter number:");
scanf("%d",&A);
X=A/1000;
Y=(A%1000)/100;
Z=((A%100)%100)/10;
B=(((A%10)%10)%10);
sum=(B==Z) ;
printf("result=%d",sum);
}