#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void disp_LCM2() {
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = find_gcd(num1, num2);
    
    lcm = (num1 * num2) / gcd;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
}

int main() {
    disp_LCM2();
    return 0;
}