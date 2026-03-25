#include <stdio.h>

void check_prime_and_sum14(int n) {
    int i, isPrime = 1;
    int temp = n, sum = 0, digit;

    
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

    
    while (temp > 0) {
        digit = temp % 10;  
        sum = sum + digit;  
        temp = temp / 10;   
    }

    
    if (isPrime && sum == 14) {
        printf("Output - Prime & sum of digits is 14\n");
    } 
    else if (!isPrime && sum == 14) {
        printf("Output - Not Prime but sum of digits is 14\n");
    }
    else if (isPrime && sum != 14) {
        printf("Output - Prime & sum of digits is not 14\n");
    }
    else {
        printf("Output - Not Prime & Sum of Digits is not 14\n");
    }
}

int main() {
    int num;
    printf("Input : ");
    scanf("%d", &num);

    check_prime_and_sum14(num);

    return 0;
}