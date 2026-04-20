#include <stdio.h>

int main() {
    char str[100];
    int intArray[100];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        intArray[i] = str[i] - '0';
        i++;
    }

    int count = i;
    for (i = 0; i < count; i++) {
        printf("%d ", intArray[i]);
    }

    return 0;
}