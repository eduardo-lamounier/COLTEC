#include<stdio.h>

#define ROW 2 // Quant. fixa de linhas para as matrizes que serão
              // multiplicadas ponto a ponto
#define COL 4 // Quant. fixa de colunas para as matrizes que serão
              // multiplicadas ponto a ponto

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

// ============================= multMatPaP ===================================

/// @brief Multiplica duas matrizes de mesmo tamanho ponto a ponto
/// @param matin1 Uma das matrizes que vai participar da multiplicação
/// @param matin2 A outra matriz que vai participar da multiplicação
/// @param matout A matriz onde o resultado da operação vai ser armazenado
/// @param row A quant. de linhas que vão ser utilizadas de ambas as matrizes
/// @param col A quant. de colunas que vão ser utilizadas de ambas as matrizes
void multMatpap(const int matin1[][COL], const int matin2[][COL], int matout[][COL], const unsigned int row, const unsigned int col){
    for(int i = 0; i < row; i++){
        // Passa por cada linha das duas matrizes
        for(int j = 0; j < col; j++){
            // Passa por cada coluna das duas matrizes
            matout[i][j] = matin1[i][j] * matin2[i][j]; // Multiplica os elementos de
                                              // mesmas posições de ambas as
                                              // matrizes
        }
    }
}

// ================================= main =====================================

int main(int argc, char* argv[]){
    // As duas matrizes que serão multiplicadas:
    int matrizA[ROW][COL] = {
        {4, 2, 1, 0},
        {2, 1, 8, 9}
    };
    int matrizB[ROW][COL] = {
        {3, 1, 2, 1},
        {0, -1, 4, 0}
    };

    int matrizC[ROW][COL]; // Matriz que vai armazenar a multiplicação

    multMatpap(matrizA, matrizB, matrizC, ROW, COL); // Multiplica as matrizes A e B
    printMat(matrizC, ROW, COL); // Imprime a multiplicação das matrizes

}

// Nada a declarar em questão de aprendizado.