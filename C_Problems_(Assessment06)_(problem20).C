#include<stdio.h>
int main()
{
    int num,i,count;
    count = 0;
    i = 2;
    while(i<10)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count = count + 1;
        }
        i++;
    }
    printf("%d",count);
}
