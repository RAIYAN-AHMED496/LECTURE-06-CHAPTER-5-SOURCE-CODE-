#include <stdio.h>

int main(){
  int a,b,c;
  printf("Enter the value of a,b and c: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a>b){
    if(a>c){
      printf("A is the greatest number");
    } else{
      printf("B is the greatest number");
    }
  }
  else{
    if(b>c){
      printf("B is the greatest number");
    } else{
      printf("C is the greatest number");
    }
  }
  return 0;
}