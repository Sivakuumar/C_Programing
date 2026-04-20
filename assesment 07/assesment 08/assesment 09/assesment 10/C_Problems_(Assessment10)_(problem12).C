#include <stdio.h>

int main() {
    int intArray[50];
    char charArray[51];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &intArray[i]);
    }

    
    for (i = 0; i < n; i++) {
      
        charArray[i] = intArray[i] + '0';
    }

   
    charArray[i] = '\0';

    
    printf("%s", charArray);

    return 0;
}