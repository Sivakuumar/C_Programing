#include <stdio.h>

int main() {
    int original[5];
    int reversed_array[5];
    int i, temp, reverse, sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < 5; i++) {
        temp = original[i];
        reverse = 0;
        
        while (temp > 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        
        reversed_array[i] = reverse;
    }

    for (i = 0; i < 5; i++) {
        sum = sum + reversed_array[i];
    }

    printf("%d", sum);

    return 0;
}