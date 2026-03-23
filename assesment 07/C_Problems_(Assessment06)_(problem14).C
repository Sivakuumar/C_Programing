#include<stdio.h>
#include<math.h> // pow() function-kaga ithu mukkiyam

void disp_interchange_first_last_digit(int);

int main ()
{
    int x;
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
    
    return 0;
}

void disp_interchange_first_last_digit(int x) 
{
    int first_digit, last_digit, digits_count, swapped_num;

    last_digit = x % 10;
    digits_count = log10(x); 
    first_digit = x / pow(10, digits_count);
    swapped_num = last_digit * pow(10, digits_count);
    swapped_num = swapped_num + (x % (int)pow(10, digits_count));
    swapped_num = swapped_num - last_digit + first_digit;

    printf("%d", swapped_num);
}