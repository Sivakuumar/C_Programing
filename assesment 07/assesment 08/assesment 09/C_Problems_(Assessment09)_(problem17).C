#include <stdio.h>

int main() {
   
    int numbers[10]; 
    int i, n = 5; 
    int carry = 0;


    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        numbers[i] = numbers[i] + carry;
        
        carry = numbers[i] / 10;
        
        numbers[i] = numbers[i] % 10;
    }
    if (carry > 0) {
        printf("%d ", carry);
    }

    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}