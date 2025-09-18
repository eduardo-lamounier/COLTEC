/*

Autores: Eduardo Lamounier e Miguel Peterson

Criado em: 28/08/2025
Finalizado em: 16/08/2025

-------------------------------------------------------------------------------

Header com funções de resolução de circuitos usando LKC. Implementa também 
diversas funções com operações de algebra linear

Importante: A inclusão desse header torna necessária a inclusão do arquivo 
ELMPalgmat.c na hora de compilar a aplicação

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/

#ifndef ELMPalgmat_H
#define ELMPalgmat_H

#define MAX_COL 10 // Quantidade máxima de colunas para matrizes

// ==============================< Bibliotecas >===============================

#include<stdio.h>
#include<assert.h> // Biblioteca para tratar erros

// ===============================< Operações >================================

/// @brief Troca os elementos de duas linhas de uma matriz
/// @param A Uma referência à matriz
/// @param m A quantidade de linhas da matriz que são utilizadas
/// @param n A quantidade de colunas da matriz que são utilizadas
/// @param L1 O index de uma das linhas que vão ser trocadas
/// @param L2 O index da outra linha que vai ser trocada
/// @note A quantidade de linhas e colunas da matriz passadas como argumento 
///       podem ou não serem a quantidade total de linhas e colunas alocadas na
///       memória
/// @note A matriz tem uma quantidade fixa de 'MAX_COL' colunas alocadas na
///       memória, mesmo se as colunas sendo utilizadas forem apenas uma fração
///       disso
void trocaLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L1, const unsigned int L2);

/// @brief Em uma matriz, para cada elemento de uma certa linha, se soma o 
///        elemento de uma outra linha, da mesma coluna, multiplicada por uma
///        constante
/// @param A Uma referência à matriz
/// @param m A quantidade de linhas da matriz que são utilizadas
/// @param n A quantidade de colunas da matriz que são utilizadas
/// @param L1 A linha que vai ser multiplicada pela constante
/// @param L2 A linha que vai ser somada do produto calculado
/// @param k A constante de multiplicação
/// @note A quantidade de linhas e colunas da matriz passadas como argumento 
///       podem ou não serem a quantidade total de linhas e colunas alocadas na
///       memória
/// @note A matriz tem uma quantidade fixa de 'MAX_COL' colunas alocadas na
///       memória, mesmo se as colunas sendo utilizadas forem apenas uma fração
///       disso
void somaLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L1, const unsigned L2, const float k);

/// @brief Multiplica cada elemento de uma linha de uma matriz por uma constante
/// @param A Uma referência à matriz
/// @param m A quantidade de linhas da matriz que são utilizadas
/// @param n A quantidade de colunas da matriz que são utilizadas 
/// @param L A linha que vai ser multiplicada pela constante
/// @param k A constante multiplicadora
/// @note A quantidade de linhas e colunas da matriz passadas como argumento 
///       podem ou não serem a quantidade total de linhas e colunas alocadas na
///       memória
/// @note A matriz tem uma quantidade fixa de 'MAX_COL' colunas alocadas na
///       memória, mesmo se as colunas sendo utilizadas forem apenas uma fração
///       disso
void multLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L, const float k);

/// @brief Performa a multiplicação entre uma matriz e um vetor
/// @param A Uma referência à matriz
/// @param mA A quantidade de linhas da matriz sendo utilizadas
/// @param nA A quantidade de colunas da matriz sendo utilizadas
/// @param v Uma referência ao vetor participando na multiplicação
/// @param nv A quantidade de elementos no vetor
/// @param res Uma referência ao vetor que vai armazenar o resultado da
///            operação
/// @note A quantidade de colunas utilizadas na matriz tem que ser igual à 
///       quantidade de elementos do vetor, caso contrário, aborta o programa
/// @note A quantidade de linhas e colunas da matriz passadas como argumento 
///       podem ou não serem a quantidade total de linhas e colunas alocadas na
///       memória
/// @note A matriz tem uma quantidade fixa de 'MAX_COL' colunas alocadas na
///       memória, mesmo se as colunas sendo utilizadas forem apenas uma fração
///       disso
void matMult(const float A[][MAX_COL], const unsigned int mA, const unsigned int nA,
 const float B[][MAX_COL], const unsigned int mB, const unsigned int nB, float C[][MAX_COL]);

/// @brief Perfoma a multiplicação matricial entre duas matrizes
/// @param A Uma referência à primeira matriz participando da multiplicação
/// @param mA A quantidade de linhas sendo utilizadas na primeira matriz
/// @param nA A quantidade de colunas sendo utilizadas na primeira matriz
/// @param B Uma referência à segunda matriz participando da multiplicação
/// @param mB A quantidade de linhas sendo utilizadas na segunda matriz
/// @param nB A quantidade de colunas sendo utilizadas na segunda matriz
/// @param C Uma referência matriz que vai armazenar o resultado da operação, 
///          sendo ela de dimensões mA x nB
/// @note A quantidade de linhas utilizadas na matriz A tem que ser igual a
///       quantidade de colunas utilizadas na matriz B, caso contrário, aborta o
///       programa
/// @note As matrizes tem uma quantidade fixa de 'MAX_COL' colunas alocadas na
///       memória, mesmo se as colunas sendo utilizadas sejam apenas uma fração
///       disso
void matetMult(const float A[][MAX_COL], const unsigned int mA, const unsigned int nA,
    const float v[], const unsigned int nv, float res[]);

/// @brief Imprime as voltagens calculadas usando LKC
/// @param v Uma referência a um vetor com as voltagens calculadas
/// @param m A quantidade de elementos do vetor sendo utilizadas
/// @param unidade Uma referência a uma string, cujo texto representa a unidade
///                de medida (ex: V - volts ou mV - milivolts)
/// @note A quantidade real de elementos alocados no vetor pode ser, ou não,
///       igual à quantidade sendo utilizada e passada como argumento
void exibeRes(const float v[], const unsigned int m, const char unidade[]);

#endif