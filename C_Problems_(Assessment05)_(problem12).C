#include<stdio.h>
int main()
{
   int n,sum,d;
   printf("Enter an number : ");
   scanf("%d",&n);
   sum = 0 ;
    for(;n>0;n/=10)
    {
        d=n%10;
        sum = sum + d ;
    }  
    printf("%d\n",sum);
}