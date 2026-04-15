#include <stdio.h>

int main() {
    int arr1[50], arr2[50], result[51];
    int i, carry = 0, sum = 0;

    for (i = 0; i < 50; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 50; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 49; i >= 0; i--) {
        sum = arr1[i] + arr2[i] + carry;
        result[i + 1] = sum % 10; 
        carry = sum / 10;         
    }

    result[0] = carry;

    for (i = 0; i < 51; i++) {
        if (i == 0 && result[i] == 0) continue; 
        printf("%d", result[i]);
    }

    return 0;
}