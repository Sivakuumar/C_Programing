#include<stdio.h>

int disp_count_HCF2(int, int);

int main ()
{
    int x1, x2, y;
    if (scanf("%d %d", &x1, &x2) == 2) {
        y = disp_count_HCF2(x1, x2);
        printf("%d", y);
    }
    
    return 0;
}

int disp_count_HCF2(int a, int b)
{
    int min, hcf = 1;
    int i;
    
    if (a < b)
        min = a;
    else
        min = b;
    
    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i; 
        }
    }
    
    return hcf;
}