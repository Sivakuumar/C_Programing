#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int words = 0;

       gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words++;
        }
        i++;
    }

    if (i > 0) {
        printf("%d", words + 1);
    } else {
        printf("0");
    }

    return 0;
}