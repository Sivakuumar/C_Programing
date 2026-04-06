#include<stdio.h>

int disp_two_digit_square(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = disp_two_digit_square(x);
        printf("%d", y);
    }
    
    return 0;
}

int disp_two_digit_square(int a)
{
    int count = 0;
    int num;
    
    while (a >= 10)
    {
        num = a % 100;
        
        if (num == 16 || num == 25 || num == 36 || num == 49 || num == 64 || num == 81)
        {
            count++;
        }
        
        a = a / 10;
    }
    
    return count;
}