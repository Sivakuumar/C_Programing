#include<stdio.h>
int disp_2digit_even_sum6();

int main ()
{
    int y;
    y = disp_2digit_even_sum6();
    printf("%d", y);
    
    return 0;
}

int disp_2digit_even_sum6()
{
    int count = 0;
    int i;
    
    for (i = 0; i <= 9; i++)
    {
      
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            count++;
        }
    }
    
    return count;
}