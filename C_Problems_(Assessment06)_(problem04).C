#include<stdio.h>
int main ()
{
    int x,sum;
    sum=0;
    x=6;
    while (x>0)
      {
        sum=sum+x;
        x--;
      }
      printf("%d",sum);
}