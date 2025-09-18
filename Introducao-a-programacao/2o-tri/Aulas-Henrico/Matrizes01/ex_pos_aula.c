#include<stdio.h>

// exercicios 4 e 5

#define lin_max 100
#define col_max 100

void transp_mat(int min[lin_max][col_max], int mout[col_max][lin_max], int lin_size, int col_size);

void print_mat(int min[lin_max][col_max], int lin_size, int col_size);
void inp_mat(int min[lin_max][col_max], int lin_size, int col_size);

int main(){
    int matrix1[lin_max][col_max], matrix2[col_max][lin_max];
    int lin, col;
    scanf("%d %d", &lin, &col);
    inp_mat(matrix1, lin, col);
    transp_mat(matrix1, matrix2, lin, col);
    
    printf("MATRIX TRANSPOSTA:\n");
    print_mat(matrix2, col, lin);

    return 0;
}

void print_mat(int min[lin_max][col_max], int lin_size, int col_size){
    for(int i = 0; i < lin_size; i++){
        for(int j = 0; j < col_size; j++){
            printf("%d\t", min[i][j]);
        }
        printf("\n");
    }
    
}

void inp_mat(int min[lin_max][col_max], int lin_size, int col_size){
    for(int i = 0; i < lin_size; i++){
        for(int j = 0; j < col_size; j++){
            scanf("%d", &min[i][j]);
        }
        printf("\n");
    }
}

void transp_mat(int min[lin_max][col_max], int mout[col_max][lin_max], int lin_size, int col_size){
    for(int i = 0; i < lin_size; i++){
        for(int j = 0; j < col_size; j++){
            mout[j][i] = min[i][j];
        }
    }
}