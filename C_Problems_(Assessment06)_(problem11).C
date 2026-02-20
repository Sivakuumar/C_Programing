#include<stdio.h>
int main()
{
   int n,count;
   printf("Enter an number : ");
   scanf("%d",&n);
   count = 0 ;
    while(n>0)
    {
      count = count + 1 ;
      n/=10;
    }  
    printf("%d\n",count);
}