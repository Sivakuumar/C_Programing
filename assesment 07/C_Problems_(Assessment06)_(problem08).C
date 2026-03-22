#include <stdio.h>

void disp_2digit_even_sum6(int n);

int main()
{
    disp_2digit_even_sum6(0);
    return 0;
}

void disp_2digit_even_sum6(int n)
{
    int i, a, b;

    for(i = 10; i <= 99; i++)
    {
        if(i % 2 == 0)   // even check
        {
            a = i / 10;   // first digit
            b = i % 10;   // second digit

            if(a + b == 6)
            {
                printf("%d ", i);
            }
        }
    }
}