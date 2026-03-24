#include <stdio.h>
void check_prime(int n) {
    int i, isPrime = 1;
    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Output - Prime\n");
    else
        printf("Output - Not Prime\n");
}

int main() {
    int number;

    printf("Input : ");
    scanf("%d", &number);
    check_prime(number);

    return 0;
}