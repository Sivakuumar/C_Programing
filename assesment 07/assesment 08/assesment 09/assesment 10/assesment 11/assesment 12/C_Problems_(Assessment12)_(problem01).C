#include <stdio.h>
 int main()
 {
    char x,*y;
    x=60;
    printf("%d\n",x);
    y=&x;
    *y=54;
    printf("%d\n",*y);
    return 0;
 }
 