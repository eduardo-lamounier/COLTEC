#include<stdio.h>

int main(int argc, char **argv){
    char *fileName = "flashcard.txt";
    FILE *arq = fopen(fileName, "r");

    if(arq == NULL){
        printf("DEU PAU!");
        return 1;
    }

    char line[100];
    while(fgets(line, 300, arq) != NULL){
        puts(line); // Mostra a pergunta
        getchar(); // Espera por qualquer tecla antes de mostrar a resposta
        if(fgets(line, 300, arq) == NULL) break;
        puts(line); // Mostra a resposta da pergunta anterior
        getchar(); // Espera por qualquer tecla antes de ir para a próxima
                   // pergunta 
    }

    fclose(arq);
    return 0;
}