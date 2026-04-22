#include <stdio.h>

void strcomp(char *src, char *dst) {
    int i = 0;
    int isSame = 1; 

    while (*(src + i) != '\0' || *(dst + i) != '\0') {
        if (*(src + i) != *(dst + i)) {
            isSame = 0;
            break;
        }
        i++;
    }

    if (isSame == 1) {
        printf("success");
    } else {
        printf("failure");
    }
}

int main() {
    char string1[100], string2[100];

    scanf("%s", string1);
    scanf("%s", string2);

    strcomp(string1, string2);

    return 0;
}