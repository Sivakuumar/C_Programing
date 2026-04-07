#include<stdio.h>

int disp_LCM2(int, int);

int main ()
{
    int x1, x2, y;
    if (scanf("%d %d", &x1, &x2) == 2) {
        y = disp_LCM2(x1, x2);
        printf("%d", y);
    }
    
    return 0;
}

int disp_LCM2(int a, int b)
{
    int max;
    
    if (a > b)
        max = a;
    else
        max = b;
    
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}