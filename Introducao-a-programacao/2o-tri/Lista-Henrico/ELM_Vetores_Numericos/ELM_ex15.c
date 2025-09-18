#include<stdio.h>

#define LENGTH 6 // Tamanho fixo do array

// ====================== getmaxval ===========================================

/// @brief Descobre o maior valor em um array 
/// @param vin O ponteiro que aponta para o array que vai ser iterado
/// @param maxval O ponteiro que aponta para o array onde o resultado da
///               operação vai ser armazenado: O primeiro elemento 
///               representa o valor máximo encontrado e o segundo elemento
///               representa a posição do elemento encontrado (len >= 2)
/// @param len A quant. de elementos do array de entrada que vão ser checados
void getMaxVal(const int *vin, int *maxval, const unsigned int len){
    maxval[0] = vin[0];
    maxval[1] = 0;

    for(int i = 1; i < len; i++){
        // Passa por todos os elementos do array (saltando o primeiro que já
        // foi checado antes do loop)
        if(vin[i] > maxval[0]){
            // Caso o elemento atual seja maior que o que foi achado até agora,
            // atualiza o maior valor e sua posição
            maxval[0] = vin[i];
            maxval[1] = i;
        }
    }
}

// ========================= main =============================================

int main(int argc, char* argv[]){
    int arr[LENGTH] = {3, 2, 1, 6, 4, 2}; // array com os valores
    int maxval[2]; // array cuja posição 0 armazena o valor máximo presente no
                   // array, e posição 1 armazena a posição desse valor máximo

    getMaxVal(arr, maxval, LENGTH);
    printf("Valor maximo eh %d, e eh o %do elemento da lista\n", maxval[0], maxval[1] + 1);

    return 0;
}

// Nada a declarar em questão de aprendizado.