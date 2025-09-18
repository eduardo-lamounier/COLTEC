#include<stdio.h>

#define MAX_CHARACTERS 80 // Quant. máxima de caracteres para as strings
                          // (considerando o null terminator)

// ========================== Funções auxiliares =============================

/// @brief Desvia todos os caracteres começando de uma certa posição de uma
///        string uma casa à esquerda 
/// @param arr Uma referência à string em questão
/// @param begIdx A posição de início do desvio
/// @note Remove o elemento da posição de início
/// @note Incluí o null terminator no desvio, diminuindo a quantidade de 
///       elementos da string
void shiftElements(char str[], const unsigned int begIdx){
    // Para todos os elementos depois da posição de início (incluindo '\0'):
    for(int i = begIdx + 1; str[i - 1] != '\0'; i++){
        // Passa o elemento para a esquerda:
        str[i - 1] = str[i];
    }
}

// ======================== removeSpacesAndNewlines ===========================

/// @brief Remove todos os espaços e quebras de linha de uma string
/// @param str Uma referência à string em questão
void removeSpacesAndNewlines(char str[]){
    // Passa por todos os caracteres da string:
    for(int i = 0; str[i] != '\0'; i++){
        // Se for um dos caracteres que eu quero tirar, passa todos os
        // caracteres seguintes uma posição para à esquerda (o que 
        // remove o elemento na posição i)
        if(str[i] == '\n' || str[i] == ' ') shiftElements(str, i);
    }
}

// ================================= main =====================================
int main(int argc, char* argv[]){
    // Texto inicial:
    char texto[MAX_CHARACTERS] = "Estudar eh chato\nMas aprender eh legal";

    printf("Texto antes da operacao:\n");
    puts(texto);

    removeSpacesAndNewlines(texto);

    printf("Texto depois da operacao:\n");
    puts(texto);

    return 0;
}

// Nada a declarar em questão de aprendizado.