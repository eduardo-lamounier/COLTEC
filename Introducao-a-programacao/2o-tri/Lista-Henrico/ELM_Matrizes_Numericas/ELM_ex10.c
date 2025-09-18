#include<stdio.h>

#define aROW 2 // Quant. fixa de linhas da matriz A
#define aCOL 2 // Quant. fixa de colunas da matriz A

#define bROW 2 // Quant. fixa de linhas da matriz B
#define bCOL 3 // Quant. fixa de colunas da matrizB

// ========================== funcs auxiliares ================================

/// @brief Imprime todos os elementos de uma matriz
/// @param mat A matriz que vai ser imprimida
/// @param row A quant. de linhas que vão ser imprimidas
/// @param col A quant. de colunas que vão ser imprimidas
/// @note Função da questão 1
void printMat(const int mat[][bCOL], const unsigned int row, const unsigned int col){
    for(int i = 0; i < row; i++){
        // Passa por cada linha da matriz
        for(int j = 0; j < col; j++){
            // Passa por cada coluna
            printf("%d\t", mat[i][j]);
        }
        printf("\n"); // separa as linhas
    }
}

// ============================= multMat ======================================

/// @brief Faz a multiplicação matricial entre duas matrizes
/// @param matin1 A primeira matriz da multiplicação
/// @param matin2 A segunda matriz da multiplicação
/// @param matout A matriz onde o resultado da operação vai ser armazenado
/// @param row1 A quant. de linhas da primeira matriz que vão ser utilizadas
/// @param col1 A quant. de colunas da primeira matriz que vão ser utilizadas
/// @param row2 A quant. de linhas da segunda matriz que vão ser utilizadas
/// @param col2 A quant. de colunas da segunda matriz que vão ser utilizadas
void multMat(const int matin1[][aCOL], const int matin2[][bCOL], int matout[][bCOL],
const unsigned int row1, const unsigned int col1, const unsigned int row2, const unsigned int col2){
    
    if(col1 != row2){
        printf("Não foi possível fazer a multiplicação matricial:\n");
        printf("A primeira matriz deve ter a mesma quantidade de colunas do que a quantidade de linhas da segunda matriz.\n");
        return;
    }

    for(int i = 0; i < row1; i++){
        // Passa por cada linha da primeira matriz
        for(int j = 0; j < col2; j++){
            // Passa por cada coluna da segunda matriz

            int ijsum = 0; // Valor na posição (i, j) da matriz resultante, que
                           // se dá pela soma do produto dos elementos (i, u)
                           // da matriz 1 e (u, j) da matriz 2, onde u é a
                           // quant. de colunas da matriz 1, ou ainda de linhas
                           // da matriz 2
            for(int u = 0; u < row2; u++){
                // Passa por cada linha da segunda matriz (ou coluna da
                // primeira, visto que são equivalentes)
                ijsum += matin1[i][u] * matin2[u][j]; // Calcula o produto e
                                                      // soma à variavel ij
            }

            matout[i][j] = ijsum; // atribui o valor na posição (i, j)
        }
    }

}

// ================================== main ====================================

int main(int argc, char* argv[]){
    // As matrizes que serão multiplicadas:
    int matrizA[aROW][aCOL] = {
        {2, 0},
        {3, 1}
    };
    int matrizB[bROW][bCOL] = {
        {3, 1, 2},
        {0, -1, 4}
    };

    int matrizC[aROW][bCOL]; // Matriz que vai armazenar o resultado do produto
                             // matricial entre as matrizes A e B

    multMat(matrizA, matrizB, matrizC, aROW, aCOL, bROW, bCOL);
    printMat(matrizC, aROW, bCOL);

    return 0;
}

/* ------------------------------ Aprendizado ---------------------------------

Pedi para a IA fazer a multiplicação entre matrizes para eu ver se meu código
estava com a saída correta e para ver se eu próprio tinha calculado
corretamente.

O prompt, junto com o anexo de um print das matrizes A e B, foi:

> Por favor, faça o produto matricial dessas duas matrizes para eu ver se meu
> código calculou corretamente.

Meu código e meus cálculos tinham dado certo.

-------------------------------------------------------------------------------

Quanto ao aprendizado em si, eu já tinha feito esse código antes, tanto que eu
até te disse sobre ter tentado fazer usando alocação dinámica. Mesmo assim, eu
já tinha até esquecido como que era a multiplicação matricial e aqueles vídeos
que você anexou sobre matrizes (principalmente o que mostra de onde surge as
matrizes na matemática, o que elas representam) foram muito bons.

Mas uma coisa que acho interessante notar de quando eu fiz usando alocação é
que tem como você literalmente retornar o vetor ou a matriz simplesmente 
retornando o endereço de memória, então você pode alocar dentro da função e
retornar o endereço alocado, por exemplo.

*/