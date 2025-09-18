#include<stdio.h>

#define LENGTH 6 // Tamanho fixo do array

// ==================== funcs auxiliares ======================================

/// @brief Imprime os elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser imprimido
/// @param len A quant. de elementos do array que vão ser imprimidos
/// @note Inspirado na função printArr da questão 4 (desta vez para floats)
void printArr(const float* arr, const unsigned int len){
    // dessa vez para um array de floats
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%.2f", arr[i]);
        if(i < len - 1)printf(", ");
    }
    printf("]\n");
}

// ======================= sumconst ===========================================

/// @brief Soma uma constante a todos os elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser somados à constante
/// @param n A constante somadora
void sumConst(float *arr, const unsigned int len, const float n){
    for(int i = 0; i < len; i++){
        arr[i] += n;
    }
}

// ========================== main ============================================

int main(int argc, char* argv[]){
    float arr[LENGTH] = {3.12, 5.4, 0.76, 5, 4.1, 8.42};
    float n; // Valor que vai ser somado a todos os elementos do array

    scanf("%f", &n);

    sumConst(arr, LENGTH, n);
    printArr(arr, LENGTH); // Imprime os elementos depois da soma

    return 0;
}

// Nada a declarar em questão de aprendizado.