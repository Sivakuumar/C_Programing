#include<stdio.h>

int main()
{
    int a = 9999;

    while(a >= 1000)
    {
        if((a % 7 == 0) && (a % 9 == 0))
        {
            printf("The largest 4-digit number divisible by 7 and 9 is: %d", a);
            break;
        }
        a--;
    }

    return 0;
}