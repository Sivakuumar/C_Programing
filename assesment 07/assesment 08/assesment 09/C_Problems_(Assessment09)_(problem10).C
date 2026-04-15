#include <stdio.h>

int main() {
    int original[5];
    int non_primes[5];
    int i, j, count = 0;
    int is_prime;

    for (i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < 5; i++) {
        is_prime = 1; 
        
        if (original[i] < 2) {
            is_prime = 0;
        } else {
            for (j = 2; j <= original[i] / 2; j++) {
                if (original[i] % j == 0) {
                    is_prime = 0; 
                    break;
                }
            }
        }

        if (is_prime == 0) {
            non_primes[count] = original[i];
            count++;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", non_primes[i]);
    }

    return 0;
}