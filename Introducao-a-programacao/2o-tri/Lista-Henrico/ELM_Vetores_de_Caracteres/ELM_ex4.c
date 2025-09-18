#include<stdio.h>
#include<string.h>

#define MAX_CHARACTERS 80 // Quant. máxima de caracteres para as strings
                          // (considerando o null terminator)

// =============================== strconcat ==================================

/// @brief Concatena duas strings
/// @param str1 Uma referência à primeira string
/// @param str2 Uma referência à segunda string
/// @param strOut Uma referência à string que vai armazenar o resultado da
///               concatenação 
void strconcat(const char str1[], const char str2[], char strOut[]){
    int i, j;
    
    // Para todos os caracteres da string 1:
    for(i = 0; str1[i] != '\0'; i++){
        // Copia de str1->strOut
        strOut[i] = str1[i];
    }
    
    // Para todos os caracteres da string 2:
    // A expressão (i + j < MAX_CHARACTERS - 1) garante que a string da
    // concatenação não vai passar do tamanho limite
    for(j = 0; (str2[j] != '\0') && (i + j < MAX_CHARACTERS - 1); j++){
        // Copia de str2->strOut (começando da posição que as iterações na 
        // primeira string terminaram)
        strOut[i + j] = str2[j];
    }

    strOut[i + j] = '\0'; // Coloca o null terminator no final
}

// ================================= main =====================================
int main(int argc, char* argv[]){
    // Lembrando que essa operação poderia também ser feita usando a função
    // strcat ou strncat da string.h

    char texto1[MAX_CHARACTERS] = "Programacao eh ";
    char texto2[MAX_CHARACTERS] = "legal";
    char texto3[MAX_CHARACTERS]; // String que vai armazenar a concatenação
    
    printf("Texto 1: %s\n", texto1);
    printf("Texto 2: %s\n", texto2);

    strconcat(texto1, texto2, texto3);

    printf("Concatenacao de texto 1 e 2: %s\n", texto3);

    return 0;
}

// Nada a declarar em questão de aprendizado