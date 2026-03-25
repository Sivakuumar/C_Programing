#include <stdio.h>

void middle_2digits_prime(int n) {
   
    int temp = n / 10; 
    int middleTwo = temp % 100;

    int i, isPrime = 1;

    if (middleTwo < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= middleTwo / 2; i++) {
            if (middleTwo % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Output - Prime\n");
    } else {
        printf("Output - Not Prime\n");
    }
}

int main() {
    int num;
    printf("Input : ");
    if (scanf("%d", &num) == 1) {
        middle_2digits_prime(num);
    }
    return 0;
}