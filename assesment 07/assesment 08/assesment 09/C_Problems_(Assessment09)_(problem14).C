#include <stdio.h>

int main() {
    int numbers[100];
    int input, i = 0, count = 0;
    int mid_index, result;

    while (1) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        numbers[i] = input;
        i++;
        count++;
    }

    if (count % 2 != 0) {
        mid_index = count / 2;
        result = numbers[mid_index];
    } else {
        mid_index = count / 2;
        result = (numbers[mid_index - 1] + numbers[mid_index]) / 2;
    }

    printf("%d", result);

    return 0;
}