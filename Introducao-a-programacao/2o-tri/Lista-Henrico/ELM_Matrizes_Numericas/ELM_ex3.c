#include<stdio.h>

#define ROW 3 // Quant. fixa de linhas para a matriz
#define COL 4 // Quant. fixa de colunas para a matriz

// =========================== funcs auxiliares ===============================

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

// ============================== main ========================================

int main(int argc, char* argv[]){
    int matriz[ROW][COL];
    int contador = 1;

    for(int i = ROW - 1; i >= 0; i--){
        // Passa por todas as linhas da matriz de trás para frente
        for(int j = COL - 1; j >= 0; j--){
           // Passa por todas as colunas na linha i de trás para frente
            matriz[i][j] = contador++; // Armazena o atual valor da contagem
        }
    }

    printMat(matriz, ROW, COL);

    return 0;
}

// Nada a declarar em questão de aprendizado.