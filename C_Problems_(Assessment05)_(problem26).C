#include<stdio.h>
int main()
{
    int a;
    for(a=9999;a>=1000;a--)
    {
        if((a % 7 == 0) && (a % 9 == 0))
        {
            printf("%d",a);
            goto end;
        }
    }
    end:
    return 0;
}
