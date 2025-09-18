#include<stdio.h>

#define LENGTH 6 // Tamanho fixo para o array A

int main(int argc, char* argv[]){
    float a[LENGTH] = {5.2, 2.7, 3.23, 8.654, 3.1415, 2.73};
    float sum = 0; // soma dos valores de A
    float media; // media dos valores de A

    for(int i = 0; i < LENGTH; i++){
        // Soma o elemento atual
        sum += a[i];
    }

    media = sum / LENGTH; // calcula a média
    printf("Media dos elementos do array A: %.2f\n", media);

    return 0;
}

// Nada a declarar em questão de aprendizado.