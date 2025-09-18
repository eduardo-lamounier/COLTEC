#include<stdio.h>

#define txt_size 100

int verifyVowels(char c){
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main(){
  int vowels = 0;
  char txt[txt_size + 1];
  fgets(txt, txt_size + 1, stdin);

  for(int i = 0; txt[i] != '\n'; i++){
    vowels += verifyVowels(txt[i]);
  }

  printf("O texto contém %d vogais", vowels);

  return 0;
}