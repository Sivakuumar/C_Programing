#include <stdio.h>

void disp_count_sum14() 
{
    int count = 0;
    int i, temp, sum, digit;

    for (i = 0; i < 100000; i++) 
    {
        sum = 0;
        temp = i;

        while (temp > 0) 
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    printf("%d\n", count);
}

int main() 
{
    disp_count_sum14();

    return 0;
}