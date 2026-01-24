
#include<stdio.h>
int main()
{
    int n,d,X;
    X = 0;
    for(n=70;n<80;n++)
    {
        d = (n/10);
        if(d == 7 && n % 2 !=0)
        {
         X = X + n;  
        }
    }  
    printf("%d\n",X);
}