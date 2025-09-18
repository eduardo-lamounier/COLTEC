#include<stdio.h>

#define Nmax 20 // Tamanho máx para o array

// ==================== func auxiliares =======================================

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

// ===================== fibonacci ============================================

/// @brief Armazena os primeiros elementos da sequência de fibonacci em um
///        array
/// @param arr O ponteiro que aponta para o array onde a sequência vai ser
///            armazenada
/// @param n A quant. de elementos da sequência que vão ser armazenados
void fibonacci(int *arr, const unsigned int n){
    for(int u = 0; u < 2 && u < n; u++){
        // Para i = 0, 1; arr[i - 1] ou/e arr[i - 2] estariam fora dos
        // limites do array apontado por arr
        arr[u] = 1;
    }

    // Inicia de um ponto onde há dois elementos atrás:
    for(int i = 2; i < n; i++){
        // Soma o elemento atual aos anteriores
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

// ====================== main ================================================

int main(int argc, char* argv[]){
    int n; // Quant. de elementos do array que vão ser usados
    int arr[Nmax];

    scanf("%d", &n);
    fibonacci(arr, n); // Armazena os N primeiros elementos da sequência de
                       // fibonacci no array
    
    printArr(arr, n); // Imprime o array depois da operação

    return 0;
}

// Nada a declarar em questão de aprendizado.