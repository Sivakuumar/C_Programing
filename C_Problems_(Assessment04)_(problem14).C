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
   last = last * d;
   first = n;
   mid = (orginal % d)/ 10;
   o = last + (mid * 10) + first;
   printf("%d",o);
}