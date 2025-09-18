#include<stdio.h>

#define txt_size 100

int main(){
  char txt[txt_size + 1];
  fgets(txt, txt_size + 1, stdin);

  for(int i = 0; txt[i] != '\n'; i++){
    int c = txt[i];
    txt[i] = c > 90 && (i == 0 || txt[i - 1] == ' ')? c - 32 : c;  
  }
  printf("O novo texto com o primeiro caractere da palavra em maiuscúlo é: %s", txt);

  return 0;
}