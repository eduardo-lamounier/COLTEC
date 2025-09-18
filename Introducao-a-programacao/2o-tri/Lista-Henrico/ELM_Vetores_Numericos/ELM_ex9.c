#include<stdio.h>

#define LENGTH 7 // Tamanho fixo do array arr

// ========================== mediaarr =================================

/// @brief Calcula a média dos elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser checados
/// @return A média calculada
/// @note Função da questão 4
float mediaArr(const float *arr, const unsigned int len){
    float sum = 0;

    for(int i = 0; i < len; i++){
        sum += arr[i];
    }

    return sum / len;
}

// ======================== main ==============================================

int main(int argc, char* argv[]){
    float arr[LENGTH] = {5.25, 4.12, 1.5, 2.5, 0.5, 5.31, 10.1};

    // Imprime a média do vetor arr
    printf("Media do vetor: %.2f\n", mediaArr(arr, LENGTH));

    return 0;
}

// Nada a declarar em questão de aprendizado.