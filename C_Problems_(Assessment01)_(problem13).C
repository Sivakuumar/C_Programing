#include<stdio.h>
int main ()
{
int X,Y,A,sum;
printf("enter number:");
scanf("%d",&A);
X=A/10;
Y=A%10;
sum=(X*1)+(Y*10);
printf("result=%d",sum);
}