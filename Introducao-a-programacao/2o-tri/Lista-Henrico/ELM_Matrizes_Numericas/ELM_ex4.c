#include<stdio.h>

#define ROW 3 // Quant. fixa de linhas da matriz antes da transposição
#define COL 2 // Quant. fixa de colunas da matriz antes da transposição

// =========================== funcs auxiliares ===============================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser imprimidas
/// @param col A quant. de colunas que vão ser imprimidas
/// @note Função da questão 1
void printMat(const int mat[][ROW], const unsigned int row, const unsigned int col){
    // foi necessário colocar ROW no lugar de COW visto que vou imprimir apenas
    // a matriz transposta
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
    int a[ROW][COL] = {
        // Matriz antes da transposição
        {1, 0},
        {4, 6},
        {-1, 10}
    };

    int b[COL][ROW]; // Armazena a matriz depois da transposição(quant. de 
                     // linhas e colunas inverte)

    for(int i = 0; i < ROW; i++){
        // Passa por todas as linhas da matriz inicial
        for(int j = 0; j < COL; j++){
            // Passa por todas as colunas da matriz inicial
            b[j][i] = a[i][j]; // Transposição de cada elemento
        }
    }

    printMat(b, COL, ROW); // Imprime a matriz depois da transposição

    return 0;
}

// Nada a declarar em questão de aprendizado.