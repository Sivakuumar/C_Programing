#include<stdio.h>

int disp_LCM3(int, int, int);

int main ()
{
    int x1, x2, x3, y;
    if (scanf("%d %d %d", &x1, &x2, &x3) == 3) {
        y = disp_LCM3(x1, x2, x3);
        printf("%d", y);
    }
    
    return 0;
}

int disp_LCM3(int a, int b, int c)
{
    int max;
    
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;
    
    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            return max;
        }
        max++;
    }
}