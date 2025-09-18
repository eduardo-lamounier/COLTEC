#include "ELMPalgmat.h"

// ===============================< Operações >================================

/// @brief Troca os elementos de duas linhas de uma matriz
void trocaLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L1, const unsigned int L2){
    // Se L1 e L2 não forem linhas válidas, aborta o programa, mostrando uma
    // mensagem de erro:
    assert(L1 >= 0 & L1 < m && L2 >= 0 && L1 < m);

    // Para cada coluna:
    for(int i = 0; i < n; i++){
        // Troca os elementos na linha 1 e 2 usando uma variável auxiliar
        float aux = A[L1][i];
        A[L1][i] = A[L2][i];
        A[L2][i] = aux;
    }
}

/// @brief Em uma matriz, para cada elemento de uma certa linha, se soma o 
///        elemento de uma outra linha, da mesma coluna, multiplicada por uma
///        constante
void somaLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L1, const unsigned L2, const float k){
    // Se L1 e L2 não forem linhas válidas, aborta o programa, mostrando uma
    // mensagem de erro:
    assert(L1 >= 0 && L1 < m && L2 >= 0 && L2 < m);

    // Para cada coluna:
    for(int i = 0; i < n; i++){
        // Soma o elemento na linha 2 pela multiplicação da linha 1 e a 
        // constante
        A[L2][i] += A[L1][i] * k;
    }
}

/// @brief Multiplica cada elemento de uma linha de uma matriz por uma constante
void multLinha(float A[][MAX_COL], const unsigned int m, const unsigned int n,
 const unsigned int L, const float k){
    // Se L1 não for uma linhas válida, aborta o programa, mostrando uma
    // mensagem de erro:
    assert(L >= 0 && L < m);
    
    // Para cada coluna:
    for(int i = 0; i < n; i++){
        // Multiplica o elemento na linha L pela constante k:
        A[L][i] *= k;
    }
}

/// @brief Perfoma a multiplicação matricial entre duas matrizes
void matMult(const float A[][MAX_COL], const unsigned int mA, const unsigned int nA,
 const float B[][MAX_COL], const unsigned int mB, const unsigned int nB, float C[][MAX_COL]){
    // Aborta o programa caso a quantidade de linhas sendo utilizadas na
    // primeira matriz não seja igual a quantidade de linhas sendo utilizadas
    // na segunda:
    assert(nA == mB);

    // Passa por cada linha da primeira matriz:
    for(int i = 0; i < mA; i++){

        // Passa por cada coluna da segunda matriz:
        for(int j = 0; j < nB; j++){
            
            // Calcula o produto escalar entre a linha i da matriz A e a coluna
            // j da matriz B
            float ij_sum = 0;
            
            for(int u = 0; u < nA /* ou mB */; u++){
                ij_sum += A[i][u] * B[u][j];
            }

            // Armazena o produto escalar na posição i, j da matriz de
            // resultado:
            C[i][j] = ij_sum;
        }
    }
}

/// @brief Performa a multiplicação entre uma matriz e um vetor
void matetMult(const float A[][MAX_COL], const unsigned int mA, const unsigned int nA,
 const float v[], const unsigned int nv, float res[]){
    // Aborta o programa caso a quantidade de elementos no vetor não seja igual
    // à quantidade de colunas na matriz
    assert(nA == nv);
    
    for(int i = 0; i < mA; i++){
        // Faz o produto escalar entre a linha i da matriz e o vetor:
        float i_sum = 0;
        
        for(int j = 0; j < nA; j++){
            i_sum += A[i][j] * v[j];
        }

        // Armazena o produto escalar na posição i do vetor de resultado:
        res[i] = i_sum;
    }    
}

/// @brief Imprime as voltagens calculadas usando LKC
void exibeRes(const float v[], const unsigned int m, const char unidade[]){
    // Para cada voltagem:
    for(int i = 0; i < m; i++){
        // Imprime a voltagem com unidade de medida:
        printf("%.5f%s\n", v[i], unidade);
    }
    printf("\n");
}