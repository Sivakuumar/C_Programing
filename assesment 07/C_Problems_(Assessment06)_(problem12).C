#include<stdio.h>
void disp_sum_all_digits(int);

int main ()
{
    int x;
    scanf("%d",&x);
    disp_sum_all_digits(x);
    
    return 0;
}

void disp_sum_all_digits(int x) 
{
    int sum = 0;
    int digit;

    if (x < 0) {
        x = -x;
    }

    while (x > 0) 
    {
        digit = x % 10;
        sum = sum + digit;
        x = x / 10;        
    }

    printf("%d", sum);
}