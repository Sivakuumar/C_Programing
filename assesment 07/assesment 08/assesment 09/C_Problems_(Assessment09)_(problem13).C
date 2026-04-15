#include <stdio.h>

int main() {
    int numbers[100];
    int input;
    int count = 0;
    int i = 0;

    while (1) {
        scanf("%d", &input);
        
        if (input == 0) {
            break;
        }
        
        numbers[i] = input;
        i++;
        count++;
    }

    if (count == 4 && numbers[0] == numbers[3]) {
        printf("Success");
    } else {
        printf("Failure");
    }

    return 0;
}