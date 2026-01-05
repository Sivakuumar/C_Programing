#include<stdio.h>
int main ()
{
int X,Y,Z,A,sum;
printf("enter number:");
scanf("%d",&A);
X=A/100;
Y=(A%100)%10;
Z=(A%100)/10;
sum=X+Y+Z;
printf("result=%d",sum);
}