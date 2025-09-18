#include<stdio.h>

#define LENGTH 6 // Tamanho fixo dos arrays

// ==================== funcs auxiliares ======================================

/// @brief Imprime os elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser imprimido
/// @param len A quant. de elementos do array que vão ser imprimidos
/// @note Função da questão 2
void printArr(const int* arr, const unsigned int len){
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
        if(i < len - 1)printf(", ");
    }
    printf("]\n");
}

// ================== multpap =================================================

/// @brief Multiplicação ponto a ponto entre dois arrays
/// @param vin1 O ponteiro que aponta para um dos arrays que vão ser
///             multiplicados
/// @param vin2 O ponteiro que aponta para o outro array que vai ser 
///             multiplicado
/// @param vout O ponteiro que aponta para o array onde o resultado da operação
///             vai ser armazenado
/// @param len A quant. de elementos que vão ser multiplicados em ambos os 
///            arrays
void multArrpap(const int *vin1, const int *vin2, int *vout, const unsigned int len){
    for(int i = 0; i < len; i++){
        vout[i] = vin1[i] * vin2[i];
    }
}

// ==================== main ==================================================

int main(int argc, char* argv[]){
    int arrA[LENGTH] = {3, 2, 1, 6, 4, 2};
    int arrB[LENGTH] = {2, 8, 3, 1, 2, 1};
    int mult_arr[LENGTH]; // Array que armazena a multiplicação ponto a ponto
                          // entre os elementos dos arrays A e B

    multArrpap(arrA, arrB, mult_arr, LENGTH);
    printArr(mult_arr, LENGTH);

    return 0;
}

// Nada a declarar em questão de aprendizado.