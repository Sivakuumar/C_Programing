#include<stdio.h>
int main()
{
   int n,orginal,d,last,first,mid,o;
   d=1;
   printf("Enter an number : ");
   scanf("%d",&n);
   orginal = n;
   last = n % 10;
   Loop:if(n >= 10)
   {
       n = n / 10;
       d = d * 10;              
       goto Loop;
   }
   first = n;
   if(first % 2 == 0)
   {
     printf("%d",n);
   }
   else
   {
    o = orginal - d;
    printf("%d",o);
   }

}