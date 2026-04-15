#include <stdio.h>

int main() {
    int original[5];
    int even_only[5]; 
    int i;
    int count = 0;  
    for (i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < 5; i++) {
        if (original[i] % 2 == 0) {
            even_only[count] = original[i];
            count++; 
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", even_only[i]);
    }

    return 0;
}