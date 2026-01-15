#include<stdio.h>
int main ()
{
    int x;
    x=11;
    loop:if (x<20)
      {
        printf("%d/n",x);
        x=(x+1)+1;
        goto loop;
      }
}
