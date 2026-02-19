#include<stdio.h>
int main()
{
    int n,d,X;
    X = 0;
    n=70;
    while(n<=100)
    {
        d = n/10;
        if(d == 7 && n % 2 !=0)
        {
           X = X + n;
        }
        n++;
    }  
    printf("%d\n",X);
}
