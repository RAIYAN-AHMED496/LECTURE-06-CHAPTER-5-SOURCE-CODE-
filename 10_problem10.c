#include <stdio.h>

int main(){
  int a=150, b=175, c=210;
  float avg,total;

  avg = (a+b+c) / 3.0;
  total = avg * 20;

  printf("Total= %.2f", total);
  return 0;
}