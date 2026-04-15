#include <stdio.h>

int main() {
    int original[100];
    int sum_array[100];
    int input, i = 0, count = 0;
    int temp, sum, j, swap;

    while (1) {
        scanf("%d", &input);
        if (input == 0) break;
        original[count] = input;
        count++;
    }

    for (i = 0; i < count; i++) {
        temp = original[i];
        sum = 0;
        
        while (temp > 0) {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        sum_array[i] = sum;
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (sum_array[i] > sum_array[j]) {
                swap = sum_array[i];
                sum_array[i] = sum_array[j];
                sum_array[j] = swap;
            }
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", sum_array[i]);
    }

    return 0;
}