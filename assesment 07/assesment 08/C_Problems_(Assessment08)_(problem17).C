#include<stdio.h>

int disp_count_sum14();

int main()
{
    int y;
    y = disp_count_sum14();
    printf("%d", y);
    
    return 0;
}

int disp_count_sum14()
{
    int count = 0;
    int i, temp, sum;
    
    for (i = 0; i < 100000; i++)
    {
        sum = 0;
        temp = i;
        
        while (temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        
        if (sum == 14)
        {
            count++;
        }
    }
    
    return count;
}