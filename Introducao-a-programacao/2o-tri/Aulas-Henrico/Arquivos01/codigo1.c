#include<stdio.h>

#define TEXT_LENGTH 69
#define MAX_ERROR_TRIES 5

FILE *openFile(char *fileName, char *mode){
    FILE *file = fopen(fileName, "w");

    for(int try = 0; file == NULL && try <= MAX_ERROR_TRIES; try++){
        file = fopen(fileName, mode);
    }

    return file;
}

int main(int argc, char **argv){
    char nomeDoArquivo[] = "exposed-do-peterson";
    char texto[TEXT_LENGTH];
    FILE *arq = openFile(nomeDoArquivo, "w");
    if(arq == NULL){
        printf("DEU PAU ATÉ COM AS TENTATIVAS EXTRAS\n");
        return 1; 
    }

    fprintf(stdin, "\nEscreva um texto para jogar no arquivo:\n");
    fgets(texto, TEXT_LENGTH + 1, stdin);

    fprintf(arq,"%s\n", texto);

    // Fechando o arquivo
    fclose(arq);  

    // Reabrindo o arquivo para adicionar mais texto
    arq = openFile(nomeDoArquivo, "a");
    if(arq == NULL){
        printf("DEU PAU ATÉ COM AS TENTATIVAS EXTRAS\n");
        return 1; 
    }

    fgets(texto, TEXT_LENGTH + 1, stdin);
    fprintf(arq, "%s\n", texto);

    fclose(arq);

    // Leitura do arquivo
    arq = openFile(nomeDoArquivo, "r");
    if(arq == NULL){
        printf("DEU PAU ATÉ COM AS TENTATIVAS EXTRAS\n");
        return 1; 
    }

    char linha[TEXT_LENGTH] = "teste";
    while(fgets(linha, 100, arq)){
        printf("%s", linha);
    }

    fclose(arq);

    return 0;
}