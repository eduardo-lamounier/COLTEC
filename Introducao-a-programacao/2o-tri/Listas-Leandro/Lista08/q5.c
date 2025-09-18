#include<stdio.h>

#define PRODUTOS 5
#define LOJAS 7

void get_produtos(int produtos[LOJAS][PRODUTOS]);
int loja_mprod(int produtos[LOJAS][PRODUTOS]);
int soma_prods(int loja[PRODUTOS]);

int main(){
    int produtos[LOJAS][PRODUTOS];

    get_produtos(produtos);

    printf("A loja %d e a loja com menos produtos.", loja_mprod(produtos));

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

int loja_mprod(int produtos[LOJAS][PRODUTOS]){
    int min_produtos = soma_prods(produtos[0]);
    int loja_menprod = 1;

    for(int i = 1; i < LOJAS; i++){
        int iprodutos = soma_prods(produtos[i]);
        int cond = iprodutos < min_produtos;
        min_produtos = cond*iprodutos + !cond*min_produtos;
        loja_menprod = cond*(i + 1) + !cond*loja_menprod;
    }

    return loja_menprod;
}

int soma_prods(int loja[PRODUTOS]){
    int iprodutos = 0;
    for(int j = 0; j < PRODUTOS; j++){
        iprodutos += loja[j];
    }
    return iprodutos;
}