#include<stdio.h>
#include<math.h> // Biblioteca para usar a função sqrt()

#define LENGTH 8 // Tamanho fixo para o array A

// ======================= func auxiliares ====================================

/// @brief Calcula a média dos elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser checados
/// @return A média calculada
/// @note Veio do código da questão 3
float mediaArr(const float *arr, const unsigned int len){
    float sum = 0;

    for(int i = 0; i < len; i++){
        sum += arr[i];
    }

    return sum / len;
}

// =========================== main ===========================================

int main(int argc, char* argv[]){
    float a[LENGTH] = {2.5, 5.523, 3.51, 8, 3.42, 9.004, 6.123, 0.523};
    float mediaA = mediaArr(a, LENGTH); // calcula a media
    
    float sum = 0; // somatorio do quadrado da dispersão dos elementos
    float variancia, desvpad;

    for(int i = 0; i < LENGTH; i++){
        sum += pow(a[i] - mediaA, 2); // Soma o quadrado da dispersão de cada
                                      // elemento
    }

    variancia = sum / (LENGTH - 1); // calcula a variância
    desvpad = (float) sqrt(variancia); // Retorna o desvio padrão
                                       // cast de precaução porque o
                                       // retorno é do tipo double    
    printf("Desvio-padrao amostral dos elementos do array A: %.5f\n", desvpad);

    return 0;
}

// Nada a declarar em questão de aprendizado.