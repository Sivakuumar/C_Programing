#include<stdio.h>
int main()
{
   int n,rev,d;
   printf("Enter an number : ");
   scanf("%d",&n);
   rev = 0 ;
    for(;n>0;n/=10)
    {
        d=n%10;
        rev = (rev*10) + d ;
    }  
    printf("%d\n",rev);
}