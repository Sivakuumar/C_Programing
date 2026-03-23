#include<stdio.h>
#include<math.h>

void check_last_digit_odd(int);

int main ()
{
    int x;
    scanf("%d",&x);
    check_last_digit_odd(x);
    
    return 0;
}

void check_last_digit_odd(int x) 
{
    int temp = x;
    int first_digit;
    int digits_count = log10(x);
    long long multiplier = pow(10, digits_count);

    first_digit = x / multiplier;
    if (first_digit % 2 != 0) 
    {
        
        x = x - multiplier;
    }

    printf("%d", x);
}