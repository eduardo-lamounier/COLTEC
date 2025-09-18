#include<stdio.h>

#define LENGTH 7 // Tamanho fixo do array

// ====================== somatarr ============================================

/// @brief Somatório dos elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser somados
/// @return A soma calculada
int somatArr(const int *arr, const unsigned int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += arr[i]; // Soma o elemento atual 
    }

    return sum;
}

// ===================== main =================================================

int main(int argc, char* argv[]){
    int arr[LENGTH] = {5, 4, 1, 2, 6, 4, 10};

    // Imprime o somatório do vetor arr
    printf("Somatorio do vetor: %d\n", somatArr(arr, LENGTH));

    return 0;
}

// Nada a declarar em questão de aprendizado.