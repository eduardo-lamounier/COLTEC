#include<stdio.h>
#include<stdlib.h>

float **newMatrix(int row, int col){
    float **matrix = (float**) malloc(row * sizeof(float*));

    for(int i = 0; i < row; i++){
        matrix[i] = (float*) malloc(col * sizeof(float));
    }

    return matrix;
}

int main(int argc, char *argv[]){
    float **mat;
    int n, // linhas
    m; // colunas

    scanf("%d %d", &n, &m);

    mat = newMatrix(n, m);

    printf("%p\n", mat);
    
    for(int i = 0; i < n; i++){
        printf("%p\n", mat[i]);
    }

    // Liberação da memória:
    for(int i = 0; i < n; i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}