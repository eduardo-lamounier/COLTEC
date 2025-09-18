#include<stdio.h>

#define PRODUTOS 5
#define LOJAS 7

void get_produtos(int produtos[LOJAS][PRODUTOS]);
void print_tprodutos(int produtos[LOJAS][PRODUTOS]);

int main(){
    int produtos[LOJAS][PRODUTOS];

    get_produtos(produtos);
    print_tprodutos(produtos);

    return 0;
}

void get_produtos(int produtos[LOJAS][PRODUTOS]){
    for(int i = 0; i < LOJAS; i++){
        printf("=========Loja %d:==========\n", i + 1);
        for(int j = 0; j < PRODUTOS; j++){
            scanf("%d", &produtos[i][j]);
        }
        printf("\n");
    }
}

void print_tprodutos(int produtos[LOJAS][PRODUTOS]){
    for(int j = 0; j < PRODUTOS; j++){
        int jproduto = 0;
        for(int i = 0; i < LOJAS; i++){
            jproduto += produtos[i][j];
        }
        printf("Produto %d: %d\n", j + 1, jproduto);
    }
}