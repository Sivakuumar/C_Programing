#include <stdio.h>

void memcomp(int *src, int *dst, int size) {
    int i;
    int isSame = 1;

    for (i = 0; i < size; i++) {
        if (*(src + i) != *(dst + i)) {
            isSame = 0;
            break;
        }
    }

    if (isSame == 1) {
        printf("Success");
    } else {
        printf("failure"); 
    }
}

int main() {
    int array1[5], array2[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &array1[i]);
    }

    for (i = 0; i < 5; i++) {
        scanf("%d", &array2[i]);
    }

    memcomp(array1, array2, 5);

    return 0;
}