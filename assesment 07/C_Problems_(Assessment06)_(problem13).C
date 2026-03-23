#include<stdio.h>
void disp_reverse_number(int);

int main ()
{
    int x;
    scanf("%d",&x);
    disp_reverse_number(x);
    
    return 0;
}
void disp_reverse_number(int x) 
{
    int reverse = 0;
    int digit;

    while (x != 0) 
    {
        digit = x % 10; 
        reverse = (reverse * 10) + digit; 
        x = x / 10;                   

    printf("%d", reverse);
    }
}    