#include <stdio.h>

void incrementArray(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) + 1;
    }
}

int main() {
    int numbers[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    incrementArray(numbers, 5);

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}