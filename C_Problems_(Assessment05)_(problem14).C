#include<stdio.h>
int main()
{
   int n,orginal,d,last,first,mid,o;
   d=1;
   printf("Enter an number : ");
   scanf("%d",&n);
   orginal = n;
   last = n % 10;
    for(;n>= 10;n/=10)
    {
        d=d*10;
    }  
      last = last * d;
   first = n;
   mid = (orginal % d)/ 10;
   o = last + (mid * 10) + first;
   printf("%d",o);
}


