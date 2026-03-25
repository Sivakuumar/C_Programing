#include <stdio.h>

void disp_2digit_even_sum6() {
    int count = 0;
    int i, j, isPrime;

    for (i = 2; i <= 9; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }

    printf("%d\n", count);
}

int main() {
    disp_2digit_even_sum6();
    
    return 0;
}
