/*

Criadores: Eduardo Lamounier e Miguel Peterson
Data de criação: 28/08/2025

Arquivo para testar as funções da biblioteca criada para a questão 4.

*/

#include<stdio.h>
#include "ELMPalgmat.h" // Biblioteca da questão 4

// Tamanho fixo das matrizes 1 e 2 sendo usadas de teste:
#define MAT1_LIN 3
#define MAT1_COL 2

#define MAT2_LIN 2
#define MAT2_COL 2

// Tamanho do vetor sendo usado de teste:
#define VEC_LEN 3

// ===========================< Funções auxiliares >===========================

/// @brief Imprime todos os elementos da matriz
void matPrint(const float mat[][MAX_COL], const unsigned int lin, const unsigned int col){
    for(int i = 0; i < lin; i++){

        for(int j = 0; j < col; j++){
            printf("%.5f ", mat[i][j]);
        }
        printf("\n");
    }
}

/// @brief Imprime todos os elementos de um vetor
/// @note Também funciona para linhas ou colunas de uma matriz 
void vecPrint(const float arr[], const unsigned len){
    for(int i = 0; i < len; i++){
        printf("%.5f ", arr[i]);
    }
    printf("\n");
}

// ==================================< Main >==================================

int main(int argc, char *argv[]){
    // Cria uma matriz com 3 linhas e 2 colunas:
    float mat[MAT1_LIN][MAX_COL] = {
        {5, 2.666},
        {4.333, 1.777},
        {7, 3.5333},
    };
    printf("Matriz inicialmente:\n");
    matPrint(mat, MAT1_LIN, MAT1_COL);

    // Teste das funções:

    // --------------------------/ Troca das linhas /--------------------------
    
    printf("\nLinha 1 e 2, respectivamente, antes da troca:\n");
    vecPrint(mat[1], MAT1_COL);
    vecPrint(mat[2], MAT1_COL);

    trocaLinha(mat, MAT1_LIN, MAT1_COL, 1, 2);

    printf("\nLinha 1 e 2, respectivamente, depois da troca:\n");
    vecPrint(mat[1], MAT1_COL);
    vecPrint(mat[2], MAT1_COL);

    // ---------------------------/ Soma da linha /----------------------------
    
    printf("\nLinha 0 antes de ser somada com a linha 2 multiplicada por 3:\n");
    vecPrint(mat[0], MAT1_COL);
    printf("-linha 2: ");
    vecPrint(mat[2], MAT1_COL);

    somaLinha(mat, MAT1_LIN, MAT1_COL, 2, 0, 3);

    printf("\nLinha 0 depois da soma:\n");
    vecPrint(mat[0], MAT1_COL);

    // -----------------------/ Multiplicação da linha /-----------------------

    printf("\nLinha 2 antes de ser multiplicada por 2.7:\n");
    vecPrint(mat[2], MAT1_COL);

    multLinha(mat, MAT1_LIN, MAT1_COL, 2, 2.7f);

    printf("\nLinha 2 depois da multiplicacao:\n");
    vecPrint(mat[2], MAT1_COL);

    // Impressão para uma análise final:
    printf("\nMatriz depois de todas as operacoes anteriores:\n");
    matPrint(mat, MAT1_LIN, MAT1_COL);

    // ----------------------/ Multiplicação matricial /-----------------------

    // Segunda matriz para a multiplicação:
    float mat2[MAT2_LIN][MAX_COL] = {
        {5.321, 0.6555},
        {5.444, 2.111},
    },
    mat3[MAT1_LIN][MAX_COL]; // Matriz para armazenar a multiplicação 
                             // matricial

    printf("\nMatriz 1 e 2, que vao ser multiplicadas; respectivamente:\n");
    matPrint(mat, MAT1_LIN, MAT1_COL);
    printf("\n");
    matPrint(mat2, MAT2_LIN, MAT2_COL);

    matMult(mat, MAT1_LIN, MAT1_COL, mat2, MAT2_LIN, MAT2_COL, mat3);

    printf("\nResultado da multiplicacao matricial entre matriz 1 e 2:\n");
    matPrint(mat3, MAT1_LIN, MAT2_COL);

    // ---------------------/ Multiplicação matriz-vetor /---------------------    

    float vec[MAT1_COL] = {4, 2.2};
    float res[MAT1_LIN];

    printf("\nMatriz e vetor, respectivamente, antes da multiplicacao:\n");

    matPrint(mat, MAT1_LIN, MAT1_COL);
    printf("\n");
    vecPrint(vec, MAT1_COL);    
    
    matetMult(mat, MAT1_LIN, MAT1_COL, vec, MAT1_COL, res);

    // -----------------------------/ Exibe Res /------------------------------

    char unidade[] = "V"; // Como se fosse a voltagem em Volts

    printf("\nResultado da multiplicacao anterior:\n");

    exibeRes(res, MAT1_LIN, unidade);

    return 0;
}