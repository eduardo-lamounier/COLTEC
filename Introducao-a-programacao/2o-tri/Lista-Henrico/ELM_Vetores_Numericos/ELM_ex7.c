#include<stdio.h>

#define LENGTH 7 // Tamanho fixo para o array arr

// ======================= minval =============================================

/// @brief Retorna o menor valor de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser checados
/// @return O valor mínimo encontrado
int getMinVal(const int *arr, const unsigned int len){
    int min = arr[0]; // Começa sendo o primeiro elemento
    for(int i = 1; i < len; i++){
        if(arr[i] < min){
            min = arr[i]; // Checo se o elemento atual é menor que o menor
                          // elemento que já foi encontrado anteriormente
        }
    }

    return min;
}

// ====================== main ================================================

int main(int argc, char* argv[]){
    int arr[LENGTH] = {5, 4, 1, 2, 6, 4, 10};

    // Imprime o valor mínimo do array arr
    printf("Valor minimo do array: %d\n", getMinVal(arr, LENGTH));

    return 0;
}

// Nada a declarar em questão de aprendizado.