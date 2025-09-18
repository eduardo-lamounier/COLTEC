#include<stdio.h>

#define ROW 4 // Quant. fixa de linhas
#define COL 2 // Quant. fixa de colunas

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

// =============================== fillMat ====================================

/// @brief Atribui um valor especifico para todas as posições de uma matriz
/// @param mat A matriz que vai ser preenchida
/// @param row A quant. de linhas da matriz que vão ser preenchidas
/// @param col A quant. de colunas da matriz que vão preenchidas
/// @param n O valor que vai ser atribuído
void fillMat(int mat[][COL], const unsigned int row, const unsigned int col, const int n){
    for(int i = 0; i < ROW; i++){
        // Passa por cada linha da matriz
        for(int j = 0; j < COL; j++){
            // Passa por cada coluna
            mat[i][j] = n; // Atualiza cada elemento da matriz
        }
    }
}

// ================================ main ======================================

int main(int argc, char* argv[]){
    int matriz[ROW][COL];
    int n; // Valor que vai ser usado para preencher a matriz

    scanf("%d", &n);

    fillMat(matriz, ROW, COL, n); // Preenche toda a matriz com o número N
    printMat(matriz, ROW, COL); // Imprime a matriz depois de preenchida

    return 0;
}

// Nada a declarar em questão de aprendizado.