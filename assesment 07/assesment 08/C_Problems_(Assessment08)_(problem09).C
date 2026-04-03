#include<stdio.h>

int check_last_digit_odd(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = check_last_digit_odd(x);
        printf("%d", y);
    }
    
    return 0;
}

int check_last_digit_odd(int a)
{
    int first, temp = a, power = 1;
    
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    first = temp;
    
    if (first % 2 != 0) {
        a = a - (1 * power);
    }
    
    return a;
}