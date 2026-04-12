#include <stdio.h>

int main() {
    int numbers[5];
    int small;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    small = numbers[0];

    for (i = 1; i < 5; i++) {
        if (numbers[i] < small) {
            small = numbers[i];
        }
    }

    printf("%d", small);

    return 0;
}