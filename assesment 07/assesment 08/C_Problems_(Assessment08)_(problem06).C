#include<stdio.h>

int disp_sum_all_digits(int);

int main ()
{
    int x, y;
    
    if (scanf("%d", &x) == 1) 
    {
        y = disp_sum_all_digits(x);
        
        printf("%d", y);
    }
    
    return 0;
}

int disp_sum_all_digits(int a)
{
    int sum = 0;
    int digit;
    
    while (a > 0)
    {
        
        digit = a % 10;
        
        sum = sum + digit;
        a = a / 10;
    }
    return sum;
}