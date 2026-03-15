#include<stdio.h>
int main()
{
    int a,b,i,hcf=1;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    i=1;
    while((i<=a)&& (i<=b))
    {
        if((a % i == 0) && (b % i == 0))
        {
            hcf = i;
        }
        i++;
    }
    printf("%d",hcf);
}
