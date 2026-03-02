#include<stdio.h>
int main()
{
   int n,i;
   i=2;
   printf("Enter an number : ");
   scanf("%d",&n);
   while (i<n)
   {
    if(n % i == 0)
    {
        printf("Not Prime");
        goto last;
        
    }
    i++;
   }
   printf("Prime");
   last:return 0;
}