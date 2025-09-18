#include<stdio.h>

#define SIDE_LENGHT 3 // Quant. fixa de linhas e colunas da matriz

// =========================== funcs auxiliares ===============================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser imprimidas
/// @param col A quant. de colunas que vão ser imprimidas
/// @note Função da questão 1
void printMat(const int mat[][SIDE_LENGHT], const unsigned int row, const unsigned int col){
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
    int matriz[SIDE_LENGHT][SIDE_LENGHT];
    int n; // Valor que vai ser posicionado na diagonal

    scanf("%d", &n);

    for(int i = 0; i < SIDE_LENGHT; i++){
        for(int j = 0; j < SIDE_LENGHT; j++){
            if(i == j){
                matriz[i][j] = n;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    printMat(matriz, SIDE_LENGHT, SIDE_LENGHT);

    return 0;
}

// Nada a declarar em questão de aprendizado.