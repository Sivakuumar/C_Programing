#include<stdio.h>
void disp_sum(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_sum(x);
}
void disp_sum(int x)
{
    int y;
    int sum ;
    for(y=x;y<=5;y++)
    {
        sum += y;
    }
    printf("Sum: %d\n", sum);
}