#include<stdio.h>
int main()
{
   int n,i,last;
   i=2;
   printf("Enter an number : ");
   scanf("%d",&n);
   last =( n % 1000)/10;
   for (;i<last;i++)
   {
    if( last% i == 0)
    {
        printf("Not Prime");
        goto last;
    }
   }
   printf("Prime");
   last:return 0;
}