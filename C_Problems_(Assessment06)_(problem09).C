#include<stdio.h>
int main()
{
    int n,d,X;
    X = 0;
    n=10;
    while(n<99)
    {
        d = (n%10);
        if(d == 5)
        {
           X = X + n;
        }
        n++;
    }  
    printf("%d\n",X);
}