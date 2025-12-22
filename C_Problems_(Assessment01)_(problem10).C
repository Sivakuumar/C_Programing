#include<stdio.h>
int main ()
{
    int X,Y;
    printf("enter number:");
    scanf("%d",&X);
    Y=(X%100)/10;
    printf("result=%d",Y);

}