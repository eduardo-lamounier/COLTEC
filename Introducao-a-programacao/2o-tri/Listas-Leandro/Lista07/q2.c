#include<stdio.h>
#include<stdlib.h>

#define txt_size 100

int main(){
  char txt[txt_size + 1];
  fgets(txt, txt_size + 1, stdin);

  for(int i = 0; txt[i] != '\n'; i++){
    if(txt[i] == ' '){
      for(int j = i + 1; txt[j-1] != '\n'; j++){
        txt[j-1] = txt[j];
      }
    }
  }
  printf("Novo texto sem espaços: %s", txt);

  return 0;
}