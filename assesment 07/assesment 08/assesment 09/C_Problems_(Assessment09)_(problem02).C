#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int avg; 
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }

    avg = sum / 5;

    printf("%d", avg);

    return 0;
}