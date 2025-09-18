#include<stdio.h>

#define LENGTH 6 // Tamanho fixo do array

// ======================= funcs auxiliares ===================================

/// @brief Imprime os elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser imprimido
/// @param len A quant. de elementos do array que vão ser imprimidos
/// @note Função da questão 11
void printArr(const float* arr, const unsigned int len){
    // dessa vez para um array de floats
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%.2f", arr[i]);
        if(i < len - 1)printf(", ");
    }
    printf("]\n");
}

// ======================= multconst ==========================================

/// @brief Multiplica todos os elementos de um array por uma constante
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser multiplicados pela
///            constante
/// @param n A constante multiplicadora
void multConst(float *arr, const unsigned int len, const float n){
    for(int i = 0; i < len; i++){
        arr[i] *= n; // Multiplica cada elemento por n
    }
}

// ============================= main =========================================

int main(int argc, char* argv[]){
    float arr[LENGTH] = {3.12, 5.4, 0.76, 5, 4.1, 8.42};
    float n; // Valor que vai ser multiplicado por cada elemento do array

    scanf("%f", &n);
    multConst(arr, LENGTH, n);
    printArr(arr, LENGTH);

    return 0;
}

// Nada a declarar em questão de aprendizado.