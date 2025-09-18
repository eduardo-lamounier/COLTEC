#include<stdio.h>

#define ROW 5 // Quant. fixa de linhas da matriz
#define COL 4 // Quant. fixa de colunas da matriz

// ============================= funcs auxiliares =============================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser utilizadas
/// @param col A quant. de colunas que vão ser utilizadas
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

// ========================== fillMatinAscendOrd ==============================

/// @brief Preenche uma matriz com uma sequência crescente de inteiros
/// @param mat A matriz que vai ser preenchida
/// @param row Quant. de linhas que vão ser utilizadas
/// @param col Quant. de colunas que vão ser utilizadas
/// @param begVal Valor inicial da sequência
void fillMatinAscendOrd(int mat[][COL], const unsigned int row, const unsigned int col, const int begVal){
    int currVal = begVal; // Valor atual da sequência
    
    for(int i = 0; i < row; i++){
        // Passa por todas as linhas da matriz
        for(int j = 0; j < col; j++){
            // Passa por todas as colunas da matriz
            mat[i][j] = currVal++; // Atribui o valor atual da sequência, que
                                   // incrementa em 1 logo em seguida
        }
    }
}

// ================================== main ====================================

int main(int argc, char* argv[]){
    int matriz[ROW][COL];
    int n; // Valor inicial da sequência

    scanf("%d", &n);

    fillMatinAscendOrd(matriz, ROW, COL, n); // Preenche a matriz
    printMat(matriz, ROW, COL); // Imprime a matriz após a operação

    return 0;
}

// Nada a declarar em questão de aprendizado.