#include<stdio.h>
int main()
{
    int n,i,digit,count=0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(i=2;i<n;)
    {
        digit = n % 10;
        if((digit==2) || (digit==3) || (digit==5) || (digit==7))
        {
            count = count + 1;
        }
        n = n /10 ;
    }
    printf("%d",count);
}
