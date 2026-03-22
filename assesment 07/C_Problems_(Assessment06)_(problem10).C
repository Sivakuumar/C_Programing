#include <stdio.h>

void disp_2digit_odd_sum_tens7(int n);

int main()
{
    disp_2digit_odd_sum_tens7(0);
    return 0;
}

void disp_2digit_odd_sum_tens7(int n)
{
    int i, sum = 0;

    for(i = 10; i <= 99; i++)
    {
        if(i % 2 != 0 && i / 10 == 7)  // odd + tens digit = 7
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);
}