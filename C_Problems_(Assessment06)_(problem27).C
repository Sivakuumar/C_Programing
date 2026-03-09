#include<stdio.h>
int main()
{
    int n,i,count,sum;
    count = 0;
    while(i<100000)
    {
        i=0;
        n = i;
        sum = 0;
        while(n>0)
        {
            n/=10;
            sum = sum + (n % 10);
        }
        if(sum == 14){
            count = count + 1;
        }
    }i++;
    printf("%d",count);
}
