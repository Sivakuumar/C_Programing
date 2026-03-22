#include<stdio.h>

void count_total_digits(int);

int main ()
{
    int x;
    scanf("%d",&x);
    count_total_digits(x);
    
    return 0;
}
void count_total_digits(int x) 
{
    int count = 0;
    int temp = x;
    if (x == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }

    printf("%d", count);
}