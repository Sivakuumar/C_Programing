#include<stdio.h>
void disp_rsum(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_rsum(x);
}
void disp_rsum(int x)
{
    int y;
    int sum ;
    for(y=x;y<=6;y++)
    {
        sum += y;
    }
    printf("Sum: %d\n", sum);
}