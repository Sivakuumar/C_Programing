#include <stdio.h>

int find_gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b) 
{
    if (a == 0 || b == 0) return 0;
    return (a * b) / find_gcd(a, b);
}


void disp_LCM3() 
{
    int n1, n2, n3, lcm12, final_lcm;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    
    lcm12 = find_lcm(n1, n2);

    
    final_lcm = find_lcm(lcm12, n3);

    printf("The LCM of %d, %d and %d is: %d\n", n1, n2, n3, final_lcm);
}

int main() {
    disp_LCM3();
    return 0;
}