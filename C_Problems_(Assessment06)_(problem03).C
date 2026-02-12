#include<stdio.h>
int main ()
{
    int x,sum;
    sum=0;
    x=1;
    while (x<6)
      {
        x=x+1;
        x++;
        sum=sum+x;
      }
      printf("%d",sum);
}