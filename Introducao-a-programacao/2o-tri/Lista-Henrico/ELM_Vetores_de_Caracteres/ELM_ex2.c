#include<stdio.h>
#include<stdbool.h>

#define MAX_CHARACTERS 80 // Quant. máxima de caracteres para as strings
                          // (considerando o null terminator)

#define UPPER_LOWER_DIFF 'a' - 'A' // Representa qual a diferença entre os
                                   // decimais correspondentes aos caracteres 
                                   // minúsculos vs decimais correspondentes
                                   // aos caracteres maiúsculos na tabela ASCII
                                   // (que é 32). Vale para todos os caracteres

// ====================== Funções uppercase e lowercase =======================

/// @brief Deixa todas as letras de uma string em maiúsculo
/// @param str Uma referência à string em questão
void uppercase(char str[]){

    // Para todos os caracteres da string:
    for(int i = 0; str[i] != '\0'; i++){
        bool isLowerCase = str[i] >= 'a' && str[i] <= 'z';

        // Se o caractere atual for minúsculo, coloca ele em maiúsculo:
        if(isLowerCase) str[i] -= UPPER_LOWER_DIFF;
    }
}

/// @brief Deixa todas as letras de uma string em minúsculo
/// @param str Uma referência à string em questão
void lowercase(char str[]){
    
    // Para todos os caracteres da string:
    for(int i = 0; str[i] != '\0'; i++){
        bool isUpperCase = str[i] >= 'A' && str[i] <= 'Z';

        if(isUpperCase) str[i] += UPPER_LOWER_DIFF;
    }
}

// ================================== main ====================================
int main(int argc, char* argv[]){
    // Vai ficar em maiúsculo:
    // (Coloquei caracteres especiais para mostrar que eles não são alterados)
    char texto1[MAX_CHARACTERS] = "@Coltec"; // Equivalente a:
                                             // {'@', 'C', 'o', 'l', 't', 'e', 
                                             // 'c', '\0'};
    // Vai ficar em minúsculo:
    char texto2[MAX_CHARACTERS] = "#UFMG"; // Equivalente a: 
                                           // {'#', 'U', 'F', 'M', 'G', '\0'};

    printf("Texto 1 e 2 antes da alteracao, respectivamente:\n");
    puts(texto1);
    puts(texto2);

    // Interessante notar também que a biblioteca string.h também já tem
    // funções para ambas as operações, upper() e lower()

    uppercase(texto1);
    lowercase(texto2);
    printf("--------------------------------------------------------------\n");

    printf("Texto 1 e 2 depois da alteracao, respectivamente:\n");
    puts(texto1);
    puts(texto2);

    return 0;
}

// Nada a declarar em questão de aprendizado.