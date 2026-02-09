#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    for(lcm = (a<b)?a:b; ;LCM++)
    {
        if((LCM % a == 0) && (LCM % b == 0))
        {
            printf("%d",LCM);
            goto end;
        }
    }
    end:
    return 0;
}
