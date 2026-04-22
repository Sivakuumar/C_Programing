#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
    int i;

    for (i = 0; i < size1; i++) {
        *(dst + i) = *(src1 + i);
    }

    for (i = 0; i < size2; i++) {
        *(dst + size1 + i) = *(src2 + i);
    }
}

int main() {
    int arr1[5], arr2[5], result[10];
    int i;

    for (i = 0; i < 5; i++) scanf("%d", &arr1[i]);

    for (i = 0; i < 5; i++) scanf("%d", &arr2[i]);

    intcon(arr1, 5, arr2, 5, result);

    for (i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}