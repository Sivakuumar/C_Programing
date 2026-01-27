#include<stdio.h>
int main()
{
   int n,i;
   i=2;
   printf("Enter an number : ");
   scanf("%d",&n);
   for (;i<n;i++)
   {
    if(n % i == 0)
    {
        printf("Not Prime");
        goto last;
    }
   }
   printf("Prime");
   last:return 0;
}