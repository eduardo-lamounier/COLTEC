#include<stdio.h>

#define ROW 2 // Quant. fixa de linhas da matriz
#define COL 3 // Quant. fixa de colunas da matriz

// ========================= funcs auxiliares =================================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser imprimidas
/// @param col A quant. de colunas que vão ser imprimidas
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

// ============================ main ==========================================

int main(int argc, char* argv[]){
    int matriz[ROW][COL];
    int n; // Constante que vai ser atribuída a cada elemento da matriz

    scanf("%d", &n);

    for(int i = 0; i < ROW; i++){
        // Passa por cada linha da matriz
        for(int j = 0; j < COL; j++){
            // Passa por cada coluna
            matriz[i][j] = n; // Atualiza cada elemento da matriz
        }
    }

    printMat(matriz, ROW, COL); // Imprime os elementos da matriz depois da
                                // operação

    return 0;
}

// Nada a declarar em questão de aprendizado.