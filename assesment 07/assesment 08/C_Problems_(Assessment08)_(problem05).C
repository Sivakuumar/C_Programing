#include<stdio.h>

int count_total_digits(int);

int main ()
{
    int x, y;
    if (scanf("%d", &x) == 1) 
    {
        y = count_total_digits(x);
        
        printf("%d", y);
    }
    
    return 0;
}

int count_total_digits(int a)
{
    int count = 0;
    
    if (a == 0) {
        return 1;
    }
    
    
    while (a > 0)
    {
        a = a / 10;
        count++;
    }
    
    return count;
}