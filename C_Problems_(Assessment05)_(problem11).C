#include<stdio.h>
int main()
{
   int n,count;
   printf("Enter an number : ");
   scanf("%d",&n);
   count = 0 ;
    for(;n>0;n/=10)
    {
      count = count + 1 ;
    }  
    printf("%d\n",count);
}