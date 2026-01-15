#include<stdio.h>
int main ()
{
    int x;
    x=1;
    loop:if (x<10)
      {
        printf("%d/n",x);
        x=(x+1)+1;
        goto loop;
      }
}
