#include<stdio.h>
int main ()
{
int Z,B,A;
printf("enter number:");
scanf("%d",&A);
Z=((A%100)%100)/10;
B=(((A%10)%10)%10);
  if (B==Z){
  printf("success");
  }
  else{
  printf("failure");
  }
}
