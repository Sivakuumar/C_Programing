#include <stdio.h>

void disp_total_2digit_odd(int n) {
    int count = 0;
    int pair;
    int temp = n;

    while (temp >= 10) {
        pair = temp % 100;

        if (pair % 2 != 0) {
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
        disp_total_2digit_odd(num);
    }
    return 0;
}