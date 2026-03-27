#include <stdio.h>

void disp_single_digit_square(int n) {
    int count = 0;
    int digit;
    int temp = n;

    while (temp > 0) {
        digit = temp % 10; 

        if (digit == 1 || digit == 4 || digit == 9) {
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
        disp_single_digit_square(num);
    }
    return 0;
}