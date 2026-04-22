#include <stdio.h>
void find_2digit_odd_sum7(int *ptr, int *count) {
    int i, d1, d2;
    *count = 0; 

    for (i = 10; i <= 99; i++) {
        if (i % 2 != 0) {
            d1 = i / 10; 
            d2 = i % 10; 
            
            if (d1 + d2 == 7) {
                *(ptr + (*count)) = i;
                (*count)++;
            }
        }
    }
}

int main() {
    int results[10]; 
    int total_found;
    int i;

    
    find_2digit_odd_sum7(results, &total_found);

    for (i = 0; i < total_found; i++) {
        printf("%d", results[i]);
        if (i < total_found - 1) {
            printf(", "); 
        }
    }

    return 0;
}