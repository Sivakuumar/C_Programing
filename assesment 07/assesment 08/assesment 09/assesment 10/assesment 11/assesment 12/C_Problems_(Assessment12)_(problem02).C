#include <stdio.h>

int main() {
    char str[100];
    char e;
    int i = 0;
    int first = 1; 
    scanf("%s", str);

    scanf(" %c", & e);

    while (str[i] != '\0') {
        if (str[i] == e) {
            if (!first) {
                printf(", ");
            }
            
            printf("%d", i + 1);
            first = 0; 
        }
        i++;
    }

    return 0;
}