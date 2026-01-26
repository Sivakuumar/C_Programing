#include<stdio.h>
int main()
{
   int n,orginal,d,first;
   d=1;
   printf("Enter an number : ");
   scanf("%d",&n);
   orginal = n;
    for(;n>= 10;n/=10)
    {
        d=d*10;
    }
   first = n;
   if(first % 2== 0){
   printf("%d",orginal);
}
else{
   printf("%d", orginal - d);
}
}