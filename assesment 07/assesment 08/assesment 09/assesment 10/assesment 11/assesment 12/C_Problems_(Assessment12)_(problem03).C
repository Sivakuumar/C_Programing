#include <stdio.h>

int main() {
    char mainStr[100], subStr[50];
    int i, j, match;

    scanf("%s", mainStr);
    scanf("%s", subStr);

    for (i = 0; mainStr[i] != '\0'; i++) {
        match = 1; 
        for (j = 0; subStr[j] != '\0'; j++) {
          
            if (mainStr[i + j] == '\0' || mainStr[i + j] != subStr[j]) {
                match = 0;
                break;
            }
        }

       
        if (match == 1) {
            printf("%d", i + 1); 
            return 0; 
        }
    }

    return 0;
}