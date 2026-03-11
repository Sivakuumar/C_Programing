#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    LCM = (a<b)?a:b;
    while(1)
    {
        if((LCM % a == 0) && (LCM % b == 0))
        {
            printf("%d",LCM);
            goto end;
        }
        LCM++;
    }
    end:
    return 0;
}