#include<stdio.h>
#include<string.h> // Para poder usar a função memmove

#define LENGTH_AB 10 // Tamanho fixo dos arrays A e B
#define LENGTH_C 6 // Tamanho fixo do array C

// ==================== func auxiliares =======================================

/// @brief Imprime os elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser imprimido
/// @param len A quant. de elementos do array que vão ser imprimidos
/// @note Veio do código da questão 1
void printArr(const int* arr, const unsigned int len){
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
        if(i < len - 1)printf(", ");
    }
    printf("]\n");
}

// ====================== main ================================================

int main(int argc, char* argv[]){
    int a[LENGTH_AB] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[LENGTH_AB] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int c[LENGTH_C] = {0, 1, 1, 2, 3, 5};

    printf("ANTES DA TROCA:\n");
    printf("Arrays A, B, C; respectivamente:\n");
    printArr(a, LENGTH_AB);
    printArr(b, LENGTH_AB);
    printArr(c, LENGTH_C);

    printf("----------------------------------------------------------------\n");

    // Primeiro método: Usando um loop for
    for(int i = 0; i < LENGTH_AB; i++){
        // Copia os elementos do array B para o array A um por um
        a[i] = b[i];
    }
    
    printf("DEPOIS DA TROCA B->A:\n");
    printf("Arrays A, B, C; respectivamente:\n");
    printArr(a, LENGTH_AB);
    printArr(b, LENGTH_AB);
    printArr(c, LENGTH_C);

    printf("----------------------------------------------------------------\n");

    // Segundo método: Usando o comando da biblioteca string.h:
    // void *memmove(void *dest, const void *src, size_t n)
    memmove(a, c, LENGTH_C * sizeof(int)); // Copia os primeiros n bytes do array
                                           // C para o array A
    
    // Poderia também usar a função:
    // void *memcpy(void *dest, const void *src, size_t n)
    // mas memmove é preferível porque trata sobreposição de memória (+seguro)

    printf("DEPOIS DA TROCA C->A:\n");
    printf("Arrays A, B, C; respectivamente:\n");
    printArr(a, LENGTH_AB);
    printArr(b, LENGTH_AB);
    printArr(c, LENGTH_C);

    return 0;
}

// Nada a declarar em questão de aprendizado.