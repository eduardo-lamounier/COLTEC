#include<stdio.h>

#define txt_size 100

int main(){
  int spaces = 0;
  char txt[txt_size];
  fgets(txt, txt_size, stdin);

  for(int i = 0; txt[i] != '\n'; i++){
    spaces += txt[i] == ' ';
  }
  printf("O texto acima possui %d espaços em branco.\n", spaces);

  return 0;
}