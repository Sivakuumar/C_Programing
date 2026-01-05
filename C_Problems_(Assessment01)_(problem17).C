#include<stdio.h>
int main ()
{
int X,Y,A,sum;
printf("enter number:");
scanf("%d",&A);
X=A/10;
Y=A%10;
sum=X*10+Y*0;
printf("result=%d",sum);
}