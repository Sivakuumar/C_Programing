#include <stdio.h>

void memcopy(int *src, int *dst, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(dst + i) = *(src + i);
    }
}

int main() {
    int source_array[5];
    int destination_array[5];
    int i;

        for (i = 0; i < 5; i++) {
        scanf("%d", &source_array[i]);
    }
    memcopy(source_array, destination_array, 5);

    for (i = 0; i < 5; i++) {
        printf("%d ", destination_array[i]);
    }

    return 0;
}