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
sum=(sum<10)?sum:(sum/10)+(sum%10);
printf("result=%d",sum);
}