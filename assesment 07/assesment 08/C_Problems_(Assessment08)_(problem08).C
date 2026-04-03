#include<stdio.h>

int swap_first_last(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) {
        y = swap_first_last(x);
        printf("%d", y);
    }
    
    return 0;
}

int swap_first_last(int n)
{
    int first, last, digits = 0, temp = n, power = 1, i;
    
    last = n % 10;
    
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    
    for (i = 0; i < digits; i++) {
        power *= 10;
    }
   
    int swapped = last * power + (n % power / 10) * 10 + first;
    
    return swapped;
}