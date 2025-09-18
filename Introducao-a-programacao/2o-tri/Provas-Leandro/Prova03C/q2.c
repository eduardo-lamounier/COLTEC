#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CARACTERES 30 // Quantidade máxima de caracteres nas strings

void printCities(char **cidades, int len){
    printf("\nNome das cidades:\n");
    for(int i = 0; i < len; i++){
        // Imprime cada nome de cidade
        printf("%s\n", cidades[i]);
    }
}

void freeStringArray(char **arr, int len){
    for(int i = 0; i < len; i++){
        // Libera a memória alocada por cada string (cada nome de cidade)
        free(arr[i]);
    }
    // Libera o array de strings:
    free(arr);
}

int main(int argc, char *argv[]){
    int len; // Quantidade de nomes de cidades
    char **cidades; // Array dos nomes das cidades

    // Lê a quantidade de nome de cidades que vão ser lidas
    scanf("%d%*c", &len);
    
    cidades = (char**) malloc(len * sizeof(char*));

    for(int i = 0; i < len; i++){
        // Para cada nome de cidade, faz o input para uma string e armazena
        // o endereço de início da string na sua respectiva posição no
        // array de strings:
        char *nome_da_cidade = (char*) malloc((MAX_CARACTERES + 1) * sizeof(char));
        fgets(nome_da_cidade, MAX_CARACTERES + 1, stdin);
        // Realoca para economizar memória (aloca apenas a quantidade exata de caracteres):
        nome_da_cidade = (char*) realloc(nome_da_cidade, (strlen(nome_da_cidade) + 1) * sizeof(char));
        cidades[i] = nome_da_cidade;
    }

    // Imprime as cidades lidas:
    printCities(cidades, len);

    // Liberação da memória:
    freeStringArray(cidades, len);
    cidades = NULL;
    return 0;
}