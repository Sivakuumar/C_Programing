#include <stdio.h>

void arrange_ascend(int *ptr) {
    int i;
    for (i = 0; i < 5; i++) {
        *(ptr + i) = i + 1;
    }
}

int main() {
    int numbers[5];
    int i;

    arrange_ascend(numbers);

    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}