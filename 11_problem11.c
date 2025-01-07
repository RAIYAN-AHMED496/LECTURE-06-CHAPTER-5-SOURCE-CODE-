#include <stdio.h>

int main(){
  int x,sum;

  printf("Enter the age of son: ");
  scanf("%d", &x);

  sum = x+(3*x)+(3*x)+5;
  printf("Sum of their age is %d.", sum);
  return 0;
}