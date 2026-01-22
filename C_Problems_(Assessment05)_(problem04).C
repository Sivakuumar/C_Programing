#include<stdio.h>
int main ()
{
    int x,sum;
    sum = 0;
    for(x=6;x>=1;x--)
      {
        sum=sum + x;
      }
    printf("%d",sum);
}
