#include <stdio.h>

void strcopy(char *src, char *dst) {
    int i = 0;
    
    while (*(src + i) != '\0') {
        *(dst + i) = *(src + i);
        i++;
    }
    
    *(dst + i) = '\0';
}

int main() {
    char source[100];
    char destination[100];

    scanf(" %[^\n]s", source);

    strcopy(source, destination);

    printf("%s", destination);

    return 0;
}