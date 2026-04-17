#include <stdio.h>

int main() 
{
    char str[100];
    int result =0;
    int i=0,j;
    char swap;
    int num, temp;
    scanf("%d", &num);
    if (num==0)
    {
        str[i++] = '0';
    }
    else
    {
       temp = num;
        while (temp>0)
        {
            str[i++] = (temp%10) + '0';
            temp=temp / 10;
        }
    }
    str[i] = '\0';
    for (j=0; j<i/2; j++)
    {
        swap = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = swap;
    }

    printf("%s", str);

    return 0;
}