#include<stdio.h>

#define LENGTH 8 // Tamanho fixo para o array arr

// ====================== funcs auxiliares ====================================

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

// ================ printarrinv ===============================================

/// @brief Imprime os elementos de um array na ordem reversa
/// @param arr O ponteiro que aponta para o array que vai ser imprimido
/// @param len A quant. de elementos do array que vão ser imprimidos
void printArrInv(const int *arr, const unsigned int len){
    printf("[");
    for(int i = len - 1; i >= 0; i--){ 
        // Itera da direita para a esquerda
        printf("%d", arr[i]);
        if(i != 0)printf(", "); // Coloca a virgula se não tiver no primeiro
                                // elemento (que é o último a ser imprimido)
    }
    printf("]\n");
}

// ================= main =====================================================

int main(int argc, char* argv){
    int arr[LENGTH] = {4, 2, 3, 7, 4, 1, 3, 5};

    printf("Elementos do array:\n");
    printArr(arr, LENGTH);
    printf("Elementos do array na ordem reversa:\n");
    printArrInv(arr, LENGTH);

    return 0;
}

// Nada a declarar em questão de aprendizado.