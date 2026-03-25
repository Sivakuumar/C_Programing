#include <stdio.h>

void check_first_2digits_prime(int n) {
   
    int lastTwo = n % 100;
    
    int i, isPrime = 1;

    
    if (lastTwo < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= lastTwo / 2; i++) {
            if (lastTwo % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("Output - Prime\n");
    }
     else 
    {
        printf("Output - Not Prime\n");
    }
}

int main() {
    int num;

    printf("Input : ");
    if (scanf("%d", &num) == 1)
    {
        check_first_2digits_prime(num);
    }

    return 0;
}