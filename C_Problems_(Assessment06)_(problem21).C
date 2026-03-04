#include<stdio.h>
int main()
{
    int n,d,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&n);
    while(n>0)
    {
        d = n % 10;
        if(d % 2 != 0)
        {
            count = count + 1 ;
        }
        n/=10;
    }  
    printf("%d",count);
}