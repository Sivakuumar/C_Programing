#include<stdio.h>
int main()
{
   int n,sum,d;
   printf("Enter an number : ");
   scanf("%d",&n);
   sum = 0 ;
    while(n>0)
    {
        d=n%10;
        sum = sum + d ;
        n/=10;
    }  
    printf("%d\n",sum);
}