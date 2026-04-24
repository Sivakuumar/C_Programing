#include <stdio.h>
 int main()
 {
    char x,*y;
    x=0;
    printf("%d\n",x);
    y=&x;
    *y=0;
    printf("%d\n",x * *y);
    return 0;
 }
 