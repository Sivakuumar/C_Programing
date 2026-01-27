#include <stdio.h>
int main()
{
    int num, i, count = 0;
    int digit, sum = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
        count = 1;
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0) {
                count = 1;
                break;}
        }
    }
    for (temp = num; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        sum = sum + digit;
    }

    if (count == 0 && sum == 14)
        printf("Prime & sum of digits is 14");

    else if (count != 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");

    else if (count == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");

    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
