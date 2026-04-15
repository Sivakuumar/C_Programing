#include <stdio.h>

int main() {
    int numbers[100]; 
    int i = 0;
    int count = 0;
    int sum = 0;
    int input;

    while (1) {
        scanf("%d", &input);
        
        if (input == 0) {
            break;
        }
        
        numbers[i] = input;
        i++;
        count++;
    }

    for (i = 0; i < count; i++) {
        sum = sum + numbers[i];
    }

    printf("%d\n", count);
    printf("%d", sum);

    return 0;
}