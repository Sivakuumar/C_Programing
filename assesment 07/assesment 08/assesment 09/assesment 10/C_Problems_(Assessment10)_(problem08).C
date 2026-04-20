#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int isValid = 1; 

    scanf("%s", str);
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            isValid = 0;
            break;
        }
        i++;
        
        if (i > 50) {
            isValid = 0;
            break;
        }
    }

    if (isValid == 1 && i > 0) {
        printf("Valid Number");
    } else {
        printf("Invalid Number");
    }

    return 0;
}