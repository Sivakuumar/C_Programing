#include <stdio.h>

void disp_two_digit_square(int n) {
    int count = 0;
    int pair;
    int temp = n;

    while (temp >= 10) {
        pair = temp % 100;

        if (pair == 16 || pair == 25 || pair == 36 || pair == 49 || pair == 64 || pair == 81) {
            count++;
        }

        temp = temp / 10;
    }

    printf("Output : %d\n", count);
}

int main() {
    int num;
    printf("Input : ");
    if (scanf("%d", &num) == 1) {
        disp_two_digit_square(num);
    }
    return 0;
}