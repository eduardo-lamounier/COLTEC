#include<stdio.h>

#define txt_size 100

int main(){
  int isItAPalindrome = 1;
  char txt[txt_size + 1];
  int lastCharIndex = -1;
  fgets(txt, txt_size + 1, stdin);

  for(int i = 0; txt[i] != '\n'; i++){
    lastCharIndex = (txt[i+1] == '\n')*i;
  }

  if(lastCharIndex == -1){
    printf("Frase inválida\n");
    return;
  }
  
  for(int i = 0; txt[i] != '\n'; i++){
    if(txt[i] != txt[lastCharIndex - i]){
      isItAPalindrome = 0;
      break;
    }
  }

  if(isItAPalindrome){
    printf("A frase é um palindromo\n");
  }else{
    printf("A frase não é um palindromo\n");
  }

  return 0;
}