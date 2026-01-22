
#include<stdio.h>
int main()
{
    int n,d,sum;
    n = 11;
    sum = 0;
    for(n=11;n<100;n++)
    {
        d = (n/10)+(n%10);
        if(n % 2 != 0 && d == 7)
        {
           printf("%d\n",n);
        }
    }  
}