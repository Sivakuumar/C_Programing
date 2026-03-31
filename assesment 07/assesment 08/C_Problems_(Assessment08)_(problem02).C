#include<stdio.h>

int disp_rsum(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    y = disp_rsum(x);
    printf("%d", y);
    
    return 0;
}

int disp_rsum(int a)
{
    int sum = 0;
    int i;
    
    for(i = 6; i >= 1; i--)
    {
        sum = sum + i;
    }
    
    return sum;
}