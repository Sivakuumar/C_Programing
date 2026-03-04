#include<stdio.h>
int main()
{
   int n,i,last;
   i=2;
   printf("Enter an number : ");
   scanf("%d",&n);
   last = n % 100;
   while (i<last)
   {
    if( last% i == 0)
    {
        printf("Not Prime");
        goto last;
    }
    i++;
   }
   printf("Prime");
   last:return 0;
}