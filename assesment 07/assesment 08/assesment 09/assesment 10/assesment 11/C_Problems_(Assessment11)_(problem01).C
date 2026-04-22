#include <stdio.h>

int main() {
    int num;
    int *ptr; 
    scanf("%d", &num);

    printf("%d\n", num);

    ptr = &num;

    *ptr = *ptr + 10; 

    printf("%d", num);

    return 0;
}