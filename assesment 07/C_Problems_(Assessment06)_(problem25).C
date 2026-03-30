#include <stdio.h>

void disp_single_digit_prime(long long n) {
    int count = 0;
    int digit;
    long long temp = n;

    if (temp == 0) {
        count = 0;
    } else {
        while (temp > 0) {
            digit = temp % 10;

            if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
                count++;
            }

            temp = temp / 10; 
        }
    }

    printf("Output : %d\n", count);
}

int main() {
    long long num;
    printf("Input : ");
    if (scanf("%lld", &num) == 1) {
        disp_single_digit_prime(num);
    }
    return 0;
}