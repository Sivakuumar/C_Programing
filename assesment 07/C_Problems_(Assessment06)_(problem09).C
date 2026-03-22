#include <stdio.h>

void disp_2digit_oness5(int n);

int main()
{
    disp_2digit_oness5(0);
    return 0;
}

void disp_2digit_oness5(int n)
{
    int i, sum = 0;

    for(i = 10; i <= 99; i++)
    {
        if(i % 10 == 5)   // one's digit = 5
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);
}