// A questão 6 eu preferi não fazer porque seria uma trabalheira, não por ser
// difícil, mas por ter que fazer muitas funções etc

// Ela seria, porém, até bem tranquila de resolver com certa paciência
// ============================================================================

// Onde foi usado funções da biblioteca string.h como strlen e memmove
// poderiam ser substituídas por funções de outras questões, mas não
// queria poluir o código implementando essas funções

#include<stdio.h>
#include<string.h>

// Vou estar usando essa string (totalmente arbitrária):
// "<no-word-here/>"
// para simbolizar o fim do array de strings (ou matriz de caracteres),
// como o null terminator faz para strings
#define WORDS_ARRAY_ENDING "<no-word-here/>"

#define MAX_CHARACTERS 80 // Quant. máxima de caracteres para as strings
                          // (considerando o null terminator)
#define MAX_WORDS 15 // Quant. máxima de palavras no array de strings
                     // (considerando a string de fim do array)

// ============================== separarPalavras =============================

/// @brief Separa uma string base nas ocorrências de espaços e transforma em 
///        sub-strings
/// @param text Uma referência à string base que vai ser divida
/// @param words A matriz de caracteres (Array de strings) para armazenar
///              as palavras (sub-strings) da string base
void separateWords(const char text[], char words[][MAX_CHARACTERS]){
    int i, j = 0; // Index dos caracteres e das palavras, respectivamente
    int last_i = -1; // A posição final da última sub-string (considerar como
                     // -1 faz com que a primeira divisão seja na posição 0
                     // para cima)
    
    // Para todos os caracteres em 'text' (enquanto a quantidade de
    // sub-strings não passar do limite MAX_WORDS considerando a string de fim 
    // de array):
    int len = strlen(text);
    for(i = 0; (i < len + 1) && (j < MAX_WORDS - 1); i++){

        if(text[i] == ' ' || text[i] == '\0'){
            // Copia os caracteres entre last_i e i para o array das palavras
            // na posição j atual (incrementa j logo em seguida)
            // text + last_i + 1 retorna um ponteiro que aponta para 
            // (last_i + 1) casas após o endereço de início (equivalente a
            // &text[last_i + 1]):
            memmove(words[j], text + last_i + 1, i - last_i + 2);

            words[j][i - last_i] = '\0'; // Delimita o final dessa sub-string
                                         // como sendo a posição do espaço
            last_i = i; // Para as próximas ocorrências de um espaço em branco,
                        // A divisão deve acontecer uma posição depois dessa

            j++; // Passa para a próxima palavra
        }
    }
    
    // Coloca a string de fim do array de palavras:
    memmove(words[j], WORDS_ARRAY_ENDING, strlen(WORDS_ARRAY_ENDING) + 1);
}

// ================================== main ====================================
int main(int argc, char* argv[]){
    char texto1[MAX_CHARACTERS] = "Eu nao gosto de portugues.";
    char texto2[MAX_CHARACTERS] = "Eu gosto de IP.";

    // Matriz de caracteres para armazenar as palavras nas duas strings:
    char palavrasTexto1[MAX_WORDS][MAX_CHARACTERS] = {"<no-word-here/>"};
    char palavrasTexto2[MAX_WORDS][MAX_CHARACTERS] = {"<no-word-here/>"};

    // Primeira maneira - função própria:
    separateWords(texto1, palavrasTexto1);

    // Imprimindo todas as palavras:
    printf("Palavras do texto 1:\n");
    // Imprime a palavra enquanto a palavra na posição i
    // não for "<no-word-here/>" (strcmp retorna 0 quando for)
    for(int i = 0; strcmp(palavrasTexto1[i], WORDS_ARRAY_ENDING) != 0; i++){
        puts(palavrasTexto1[i]);
    }

    printf("--------------------------------------------------------------\n");

    // ========================================================================
    // Segunda maneira - função de string.h:
    // char *strtok(char *str, const char *delimiters);
    
    // Informações sobre a função:
    // 1. Divide a string apontada por str em sub-strings, e retorna a primeira
    // 2. A divisão acontece na primeira ocorrência de um caractere presente na
    // string de delimitadores
    // 3. Quando str é NULL, a divisão acontece na segunda sub-string da 
    // divisão da string base da chamada anterior
    // 4. Quando nenhum caractere presente na string de delimitadores é 
    // encontrado, retorna NULL

    // Inclusive eu estudei essa função para poder usar na OBI, mas vai acabar
    // sendo importante no nosso jogo de campo minado (para os comandos)
    // ========================================================================

    int i; // Posição dos caracteres
    char *token = strtok(texto2, " "); // Primeira sub-string
    // Enquanto for possível dividir a string e não chegar no final:
    for(i = 0; (token != NULL) && (i < MAX_WORDS - 1); i++){
        // Copia a sub-string (token) que representa a palavra para o array
        // de strings:
        memmove(palavrasTexto2[i], token, strlen(token) + 1);
        // A sub-string passa a ser uma nova divisão na segunda sub-string:
        token = strtok(NULL, " ");
    }

    // Coloca a string de fim do array de palavras:
    memmove(palavrasTexto2[i], WORDS_ARRAY_ENDING, strlen(WORDS_ARRAY_ENDING) + 1);

    // Imprimindo todas as palavras:
    printf("Palavras do texto 2:\n");
    // Imprime a palavra enquanto não chegar no limite de palavras, ou quando a
    // palavra na posição for "<no-word-here/>" (strcmp retorna 0 quando for)
    for(int i = 0; strcmp(palavrasTexto2[i], WORDS_ARRAY_ENDING) != 0; i++){
        puts(palavrasTexto2[i]);
    }

    return 0;
}

// Quanto ao aprendizado, devo dizer que não aprendi de fato nada novo. Mas foi
// com certeza uma boa prática (sem falar que essa ideia de colocar uma string
// para simbolizar o fim do array de strings foi uma ideia que eu tive na hora
// e que acabou sendo bem útil)

// Devo dizer, porém, que achei um código bem feio e difícil de ler. Se
// possível, gostaria de dicas para comentar esse tipo de código