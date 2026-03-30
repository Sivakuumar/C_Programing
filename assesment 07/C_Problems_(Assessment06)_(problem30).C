#include <stdio.h>

void disp_count_HCF2() 
{
    int n1, n2, a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d is: %d\n", n1, n2, a);
}

int main() 
{
    disp_count_HCF2();
    return 0;
}