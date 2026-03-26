#include <stdio.h>

void disp_total_odd_digits(int n) {
    int count = 0;
    int digit;
    int temp = n;

   
    if (n == 0) {
        count = 0; 
    } else {
       
        while (temp > 0) {
            digit = temp % 10;
            
            if (digit % 2 != 0) {
                count++;
            }
            
            temp = temp / 10; 
        }
    }

    printf("Output : %d\n", count);
}

int main() {
    int num;
    printf("Input : ");
    if (scanf("%d", &num) == 1) {
        disp_total_odd_digits(num);
    }
    return 0;
}