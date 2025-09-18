#include<stdio.h>

// exercicios 1, 2 e 3

// Não há checagem para validar a entrada, mas seria interessante adicionar
#define lin_max 100
#define col_max 100

void fill_mat(int min[lin_max][col_max], int lin_size, int col_size, int n);
void mat_indent(int min[lin_max][col_max], int lin_size, int col_size);
void rever_mat(int min[lin_max][col_max], int lin_size, int col_size);

void print_mat(int min[lin_max][col_max], int lin_size, int col_size);

int main(){
    int lin, col, n;
    int matrix[lin_max][col_max];

    scanf("%d %d", &lin, &col);
    scanf("%d", &n);
    fill_mat(matrix, lin, col, n);

    printf("MATRIX PREENCHIDA COM N:\n");
    print_mat(matrix, lin, col);

    printf("--------------------------------------\n");

    mat_indent(matrix, lin, col);
    printf("MATRIX INDENTIDADE:\n");
    print_mat(matrix, lin, col);

    printf("--------------------------------------\n");

    rever_mat(matrix, lin, col);
    printf("MATRIX INVERTIDA:\n");
    print_mat(matrix, lin, col);

    printf("--------------------------------------\n");
    
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

void fill_mat(int min[lin_max][col_max], int lin_size, int col_size, int n){
    for(int i = 0; i < lin_size; i++){
        for(int j = 0; j < col_size; j++){
            min[i][j] = n;
        }
    }
}

void mat_indent(int min[lin_max][col_max], int lin_size, int col_size){
    fill_mat(min, lin_size, col_size, 0);
    for(int i = 0; i < lin_size; i++){
        min[i][i] = 1;
    }
}

void rever_mat(int min[lin_max][col_max], int lin_size, int col_size){
    int count = 1;
    for(int i = lin_size - 1; i >= 0; i--){
        for(int j = col_size -1 ; j >= 0; j--){
            min[i][j] = count++;
        }
    }
}