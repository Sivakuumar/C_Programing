#include <stdio.h>

int main() {
    int numbers[5];
    int big;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    big = numbers[0];

    for (i = 1; i < 5; i++) {
        if (numbers[i] > big) {
            big = numbers[i];
        }
    }

    printf("%d", big);

    return 0;
}