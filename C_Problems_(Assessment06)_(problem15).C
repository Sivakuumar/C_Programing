#include <stdio.h>

int main()
{
    int n, original, first, d = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Find divisor (100 for 3-digit, 1000 for 4-digit, etc.)
    while (n >= 10)
    {
        n = n / 10;
        d = d * 10;
    }

    first = n;   // First digit

    if (first % 2 == 0)
    {
        // Replace first digit with 5
        printf("%d", 5 * d + (original % d));
    }
    else
    {
        printf("%d", original);
    }

    return 0;
}