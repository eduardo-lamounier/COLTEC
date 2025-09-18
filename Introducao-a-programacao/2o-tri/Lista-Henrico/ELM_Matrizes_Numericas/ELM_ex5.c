#include<stdio.h>

#define ROW 3 // Quant. fixa de linhas da matriz
#define COL 2 // Quant. fixa de colunas da matriz

// ======================= funcs auxiliares ===================================

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

// ================================= main =====================================

int main(int argc, char* argv[]){
    int matriz[ROW][COL] = {
        {3, 1},
        {-1, 0},
        {5, -4}
    };
    
    printMat(matriz, ROW, COL);

    return 0;
}

// Nada a declarar em questão de aprendizado.