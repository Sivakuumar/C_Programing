#include<stdio.h>

int disp_single_digit_square(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = disp_single_digit_square(x);
       printf("%d", y);
    }
    
    return 0;
}

int disp_single_digit_square(int a)
{
    int count = 0;
    int digit;
    
    while (a > 0)
    {
        digit = a % 10;
        
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
        
        a = a / 10;
    }
    
    return count;
}