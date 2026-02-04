#include<stdio.h>
int main()
{
    int n,d,total;
    total = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(;n>10;n/=10)
    {
        digit = n % 100;
        if((d==16) || (d==25) || (d==36) || (d==49) ||
        (digit==64) || (digit==81) )
        {
            total = total + 1 ;
        }
    }
    printf("%d",total);
}
