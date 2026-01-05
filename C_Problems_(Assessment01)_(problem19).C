#include<stdio.h>
int main ()
{
int X,Y,Z,A,sum;
printf("enter number:");
scanf("%d",&A);
X=A/100;
Y=(A%100)%10;
Z=2;
sum=X*100+Y*10+Z;
printf("result=%d",sum);
}