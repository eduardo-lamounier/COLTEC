#include<stdio.h>
#include<math.h> // Biblioteca para poder utilizar a função sqrt()

#define LENGTH 8 // Tamanho fixo para o array

// =================== funcs auxiliares =======================================

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

// ===================== desvpad ==============================================

/// @brief Calcula o desvio-padrão amostral dos elementos de um array
/// @param arr O ponteiro que aponta para o array que vai ser iterado
/// @param len A quant. de elementos do array que vão ser checados
/// @return O desvio-padrão calculado
/// @note Veio do código da questão 4
float desvpad(const float *arr, const unsigned int len){
// função: calcula o desvio padrão dos len elementos do array arr
    float sum = 0; // somatorio do quadrado da dispersão dos elementos
    float variancia;
    float media = mediaArr(arr, len); // calcula a media

    for(int i = 0; i < LENGTH; i++){
        sum += pow(arr[i] - media, 2); // Soma o quadrado da dispersão de cad
                                       // elemento
    }

    variancia = (float) sum / (LENGTH - 1); // calcula a variância
    return (float) sqrt(variancia); // Retorna o desvio padrão
                                    // cast de precaução porque o
                                    // retorno é do tipo double 
}

// ======================== main ==============================================

int main(int argc, char* argv[]){
    float arr[LENGTH] = {2.5, 2.1, 6.43, 8.52, 0.23, 0.641, 8.5, 7};

    // Imprime o desvio padrão do array arr
    printf("Desvio padrao do array: %.3f\n", desvpad(arr, LENGTH));

    return 0;
}

// Nada a declarar em questão de aprendizado.