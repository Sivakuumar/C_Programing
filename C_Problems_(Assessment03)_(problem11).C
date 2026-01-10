#include<stdio.h>
int main ()
{
int X,Y,A;
printf("enter number:");
scanf("%d",&A);
X=A/10;
Y=A%10;
  if (X<=Y){
  printf("success");
  }
  else{
  printf("failure");
  }
}
