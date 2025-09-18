#include<stdio.h>

#define LENGTH 6 // Tamanho fixo dos arrays

// =================== funcs auxiliares =======================================

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

// ====================== mirrorarr ===========================================

/// @brief Espelha os elementos de um array
/// @param vin Ponteiro que aponta para o array que vai ser espelhado
/// @param vout Ponteiro que aponta para onde o array espelhado vai ser
///             armazenado
/// @param len Quant. de elementos do array que vão ser espelhados
void mirrorArr(const int *vin, int *vout, const unsigned int len){
    for(int i = 0; i < len; i++){
        vout[i] = vin[len - i - 1]; // Espelha cada elemento de vin
    }
}

// ========================= main =============================================

int main(int argc, char* argv[]){
    int arr[LENGTH] = {3, 5, 0, 5, 4, 8};
    int mirr_arr[LENGTH]; // Array que vai armazenar o array original espelhado

    mirrorArr(arr, mirr_arr, LENGTH);
    printf("Array original:\n");
    printArr(arr, LENGTH);
    printf("Array espelhado:\n");
    printArr(mirr_arr, LENGTH);

    return 0;
}

// Nada a declarar em questão de aprendizado.