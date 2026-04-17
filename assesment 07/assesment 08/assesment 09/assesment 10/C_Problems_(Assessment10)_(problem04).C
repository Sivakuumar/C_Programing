#include <stdio.h>

int main() 
{
    char str[100];
    int result =0;
    int i=0;
    scanf("%s", str);
    while ( str[i]!='\0')
    {
        if (str[i]>='0' && str[i]<='9')
        {
            result = result*10 + (str[i]-'0');
        }
        i++;
    }
    

    printf("%d", result);

    return 0;
}