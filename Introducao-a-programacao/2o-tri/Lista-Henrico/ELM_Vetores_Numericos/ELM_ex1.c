#include<stdio.h>

#define LENGTH 10 // Tamanho fixo para o array

int main(int argc, char* argv[]){
    int arr[LENGTH] = {7, 3, 4, 1, 2, 4, 5, 7, 7, 2};

    printf("[");
    for(int i = 0; i < LENGTH; i++){
        printf("%d", arr[i]); // Imprime o elemento atual

        if(i < LENGTH - 1)printf(", "); // se não estiver no último elemento,
                                        // coloco a virgula na frente
    }
    printf("]\n");
    
    return 0;
}

// Nada a declarar em questão de aprendizado.