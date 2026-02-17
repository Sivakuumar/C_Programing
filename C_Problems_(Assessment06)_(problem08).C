
#include<stdio.h>
int main()
{
    int n,d,sum;
    n = 11;
    sum = 0;
    while(n<100)
    {
        d = (n/10)+(n%10);
        if(n % 2 == 0 && d == 6)
        {
           printf("%d\n",n);
        }
        n++;
    }  
}