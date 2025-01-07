#include <stdio.h>

int main(){
  char ch;
  printf("Enter an alphabet: ");
  scanf("%c", &ch);

  if(ch>='a' && ch<='z'){
    printf("Small Letter");
  } else if(ch>='A' && ch <= 'Z'){
    printf("Capital letter");
  } else{
    printf("Wrong input");
  }
  return 0;
}