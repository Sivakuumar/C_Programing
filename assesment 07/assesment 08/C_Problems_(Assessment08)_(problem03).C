#include<stdio.h>
int disp_2digit_ones5(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    
    y = disp_2digit_ones5(x);
    
    printf("%d", y);
    
    return 0;
}

int disp_2digit_ones5(int a)
{
    int sum = 0;
    int i;
    for(i = 10; i <= 99; i++)
    {
        if(i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    return sum;
}