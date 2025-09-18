#include<stdio.h>
#include<stdlib.h>

// Nesse código eu percebi uma coisa interessante: Passar o endereço de memória como argumento não faz
// com que a matriz seja alterada fora da função

// Depois que as funções faziam o que devia ser feito, era como se o trabalho delas ficasse 
// invisível para outras funções; logo foi necessário retornar o endereço de memória no final
// delas

// A propósito, um dos códigos mais difíceis que eu já fiz(pensar em matrizes confunde
// mundo a cabeça, principalmente com algo de matemática avançada assim)

// ==================== funcs auxiliares =========================================
void print_min(float **mat, int lin, int col){
    // função: simplesmente imprime os elementos da matriz "mat"
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%f\t", mat[i][j]);
        }
        printf("\n");
    }
}

float** get_min(float **mat, int lin, int col){
    // função: inicializa uma matriz ao mesmo tempo que faz o input dela

    // inicializa as linhas da matriz
    mat = (float**) malloc(lin * sizeof(float*));

    for(int i = 0; i < lin; i++){
        // inicializa as colunas da matriz para cada linha
        mat[i] = (float*) malloc(col * sizeof(float));

        printf("Linha %d:\n", i);
        for(int j = 0; j < col; j++){
            // Input de cada valor individual
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }

    return mat;
}

// ====================== funcs principais =========================================
float** mult_mats(float **min1, float **min2, int lin1, int col1, int col2){
    // função: multiplica duas matrizes enquanto inicializa a matriz de saída(o resultado)

    // inicializa as linhas da matriz de saída
    float **mout = (float**) malloc(lin1 * sizeof(float*));
    for(int i = 0; i < lin1; i++){
        // inicializa as colunas da matriz de saída para cada linha
        mout[i] = (float*) malloc(col2 * sizeof(float));
    }

    // passa pelas colunas da segunda matriz
    for(int u = 0; u < col2; u++){
        // passa pelas linhas da primeira(e segunda) matriz
        for(int i = 0; i < lin1; i++){
            float sum_i = 0; // representa o resultado da soma das multiplicações
                             // entre as colunas da primeira matriz e as linhas
                             // da coluna u da segunda matriz

            for(int j = 0; j < col1; j++){
                // vai somando as multiplicações
                sum_i += min1[i][j]*min2[j][u];
            }
            mout[i][u] = sum_i;
        }
    }

    return mout;
}

// ==================== main ===========================================
int main(){
    // Onde m1 e m2 são as duas matrizes a serem multiplicadas
    // e m3 é a matriz da multiplicação(saída)

    float **m1, **m2, **m3;
    int lin1, col1, col2;

    // input do tamanho das matrizes
    printf("quant. de linhas e colunas para a matriz 1:\n");
    scanf("%d %d", &lin1, &col1);
    printf("quant. de colunas para a matriz 2(de linhas deve ser igual ao numero de colunas na primeira):\n");
    scanf("%d %d", &col2);

    // input das matrizes
    printf("Input para a matriz 1:\n\n");
    m1 = get_min(m1, lin1, col1);
    printf("Input para a matriz 2:\n\n");
    m2 = get_min(m2, col1, col2);

    // processamento dos dados e output
    m3 = mult_mats(m1, m2, lin1, col1, col2);
    printf("RESULTADO:\n");
    print_min(m3, lin1, col2);

    free(m1);
    free(m2);
    free(m3);
    return 0;
}