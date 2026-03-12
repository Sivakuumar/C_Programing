#include<stdio.h>
int main()
{
    int a,b,c,lcm;

    printf("Enter number 1 : ");
    scanf("%d",&a);

    printf("Enter number 2 : ");
    scanf("%d",&b);

    printf("Enter number 3 : ");
    scanf("%d",&c);
    if(a>b && a>c)
        lcm = a;
    else if(b>c)
        lcm = b;
    else
        lcm = c;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}