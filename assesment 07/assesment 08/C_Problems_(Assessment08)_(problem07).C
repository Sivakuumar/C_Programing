#include<stdio.h>
int disp_reverse_number(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = disp_reverse_number(x);
        printf("%d", y);
    }
    
    return 0;
}

int disp_reverse_number(int a)
{
    int reverse = 0;
    int digit;
    while (a > 0)
    {
        digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }
    return reverse;
}