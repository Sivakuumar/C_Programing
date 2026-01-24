
#include<stdio.h>
int main()
{
    int n,d,X;
    X = 0;
    for(n=10;n<99;n++)
    {
        d = (n%10);
        if(d == 5)
        {
           X = X + n;
        }
    }  
    printf("%d\n",X);
}