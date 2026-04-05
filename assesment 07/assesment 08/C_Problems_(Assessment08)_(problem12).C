#include<stdio.h>
int disp_total_odd_digits_square(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) 
    {
        y = disp_total_odd_digits_square(x);
        printf("%d", y);
    }
    
    return 0;
}

int disp_total_odd_digits_square(int a)
{
    int count = 0;
    int digit;
    while (a > 0)
    {
        digit = a % 10;
        if (digit % 2 == 0)
        {
            count++; 
        }
        
        a = a / 10;
    }
    
    return count;
}