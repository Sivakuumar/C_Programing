#include<stdio.h>
int main ()
{
    int x,count=0;
    x = 2;
    for(x=2;x<10;x++)
      {
        if(x%2!=0)
        {
            count+=1;
        }
      }
      printf("%d",count);
}
