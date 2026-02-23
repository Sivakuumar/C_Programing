#include<stdio.h>
int main()
{
   int n,rev,d;
   printf("Enter an number : ");
   scanf("%d",&n);
   rev = 0 ;
    while(n>0)
    {
        d=n%10;
        rev = (rev*10) + d ;
        n/=10;
    }  
    printf("%d\n",rev);
}