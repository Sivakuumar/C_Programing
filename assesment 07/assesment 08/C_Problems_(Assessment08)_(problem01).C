#include<stdio.h>

int disp_sum(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    y = disp_sum(x);
    printf("%d", y);
    
    return 0;
}

int disp_sum(int a)
{
    int sum = 0;
    int i;
    
    for(i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}