#include<stdio.h>

#define ROW 2 // Quant. fixa de linhas para as matrizes que serão somadas
#define COL 4 // Quant. fixa de colunas para as matrizes que serão somadas

// ========================== funcs auxiliares ================================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser imprimidas
/// @param col A quant. de colunas que vão ser imprimidas
/// @note Função da questão 1
void printMat(const int mat[][COL], const unsigned int row, const unsigned int col){
    for(int i = 0; i < row; i++){
        // Passa por cada linha da matriz
        for(int j = 0; j < col; j++){
            // Passa por cada coluna
            printf("%d\t", mat[i][j]);
        }
        printf("\n"); // separa as linhas
    }
}

// ============================== matSum ======================================

/// @brief Calcula a soma de duas matrizes de mesmo tamanho
/// @param matin1 Uma das matrizes que vai participar da soma
/// @param matin2 A outra matriz que vai participar da soma
/// @param matout A matriz onde o resultado da operação vai ser armazenado
/// @param row A quant. de linhas das matrizes A e B que vão ser utilizadas
/// @param col A quant. de colunas das matrizes A e B que vão ser utilizadas
void matSum(const int matin1[][COL], const int matin2[][COL], int matout[][COL], const unsigned int row, const unsigned int col){
    for(int i = 0; i < row; i++){
        // Passa por cada linha das matrizes A e B
        for(int j = 0; j < col; j++){
            // Passa por cada coluna das matrizes A e B
            matout[i][j] = matin1[i][j] + matin2[i][j]; // Soma os elementos de mesmas
                                              // posições de ambas matrizes
        }
    }
}

// =================================== main ===================================

int main(int argc, char* argv[]){
    // As matrizes que serão somadas:
    int matrizA[ROW][COL] = {
        {4, 2, 1, 0},
        {2, 1, 8, 9}
    };
    int matrizB[ROW][COL] = {
        {3, 1, 2, 1},
        {0, -1, 4, 0}
    };

    int matrizC[ROW][COL]; // Matriz que vai armazenar a soma

    matSum(matrizA, matrizB, matrizC, ROW, COL); // Realiza a soma
    printMat(matrizC, ROW, COL); // Imprime a soma das matrizes

    return 0;
}

// Nada a declarar em questão de aprendizado.