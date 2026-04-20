#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int foundNonZero = 0; 
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] != '0') {
            foundNonZero = 1;
        }
        if (foundNonZero == 1) {
            printf("%c", str[i]);
        }
        
        i++;
    }

    if (foundNonZero == 0) {
        printf("0");
    }

    return 0;
}