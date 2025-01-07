#include <stdio.h>

int main(){
  char ch;
  printf("Enter a caracter: ");
  scanf("%c", &ch);

  if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
    printf("The caracter is a Vowel");
  } else {
    printf("The caracter is a consonant");
  }
  return 0;
}