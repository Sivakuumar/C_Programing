#include<stdio.h>

int disp_single_digit_prime(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = disp_single_digit_prime(x);
        printf("%d", y);
    }
    
    return 0;
}

int disp_single_digit_prime(int a)
{
    int count = 0;
    int digit;
    
    while (a > 0)
    {
        digit = a % 10;
        
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        
        a = a / 10;
    }
    
    return count;
}