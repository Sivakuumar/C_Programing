#include<stdio.h>
int main ()
{
    int X,Y;
    printf("enter number:");
    scanf("%d",&X);
    Y=X-5*(X%2!=0);
    printf("result=%d",Y);
}