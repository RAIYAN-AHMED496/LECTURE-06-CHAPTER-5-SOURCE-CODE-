#include <stdio.h>

int main(){
  int a=80, b=90, c=95;
  
  if(a>b){
    if(a>c){
      printf("Asika scores the highest run");
    } else {
      printf("Nurani scores the highest run");
    }
  } else{
    if(b>c){
      printf("Silvy scores the highest run");
    } else{
      printf("Nurani scores the highest run");
    }
  }
  return 0;
}