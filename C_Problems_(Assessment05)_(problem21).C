#include<stdio.h>
int main()
{
    int n,d,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        d = n % 10;
        if(d % 2 != 0)
        {
            count = count + 1 ;
        }
    }  
    printf("%d",count);
}
