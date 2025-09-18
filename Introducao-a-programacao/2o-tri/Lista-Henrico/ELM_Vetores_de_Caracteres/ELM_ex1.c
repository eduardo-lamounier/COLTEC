/*
QUESTÕES:
-------------------------------------------------------------------------------
A) Conta quantos caracteres, com exceção do null terminator (\0) estão
presentes em uma string passada como argumento
-------------------------------------------------------------------------------
B) Sim, existe uma diferença entre contar a quantidade de elementos em uma
string pré-definida e uma digitada pelo usuário: a string digitada pelo
usuário tem sempre 1 caractere a mais se tal string tiver uma quantidade de
caracteres menor que os (MAX_CHARACTERS - 1) que são lidos por fgets (o que dá 
espaço para esse "caractere fantasma" aparecer na string).
-------------------------------------------------------------------------------
C) Na verdade, por causa de estudos anteriores, eu já sei a resposta. Acontece
que a função fgets termina a leitura de dados quando um dos seguintes eventos
acontecem:
    1. A quantidade máxima de caracteres passadas como argumento já foi
atingida (considerando o null terminator que precisa ser adicionado depois);
    2. O EOF (fim do arquivo - End of file) é alcançado - não sei muito sobre
isso, mas acho que o nome diz muito sobre;
    3. A leitura detecta uma quebra de linha (\n)

É essa terceira condição que nós dá aquele problema. Quando o usuário faz a
quebra de linha, o input finaliza mas armazena o '\n' junto dos outros
caracteres se houver espaço, ou seja, uma leitura "Ola" fica:
"Ola\n" ou ['O', 'l', 'a', '\n', '\0']
             ^    ^    ^     ^
             1    2    3    <4> <- Quatro caracteres no total!


O efeito que isso tem é que um caractere que nós inicialmente não percebemos
aparenta ter "brotado" na nossa string.

Um teste para visualizar isso é usar esse loop depois da entrada do texto:

for(int i = 0; texto3[i] != '\0'; i++){
    printf("Caractere %d: %c.\n", i, texto3[i]);
}

Esse ponto final depois do caractere nos deixa visualizar que o caractere extra
na entrada é realmente o '\n', visto que esse ponto acaba indo uma linha para
baixo.

É interessante notar, porém, que se a quantidade de caracteres que o usuário 
digitar já for o limite ditado pela função fgets (considerando o null
terminator), então esse '\n' acaba não aparecendo por faltar espaço
-------------------------------------------------------------------------------
*/

#include<stdio.h>

#define MAX_CHARACTERS 80 // Quant. máxima de caracteres para as strings
                          // (considerando o null terminator)

// Função presente na questão: ================================================
int mystrlen(const char str[]){
    int n = 0;
    while(str[n] != '\0') n++;

    return n;
}
// ============================================================================

int main(int argc, char* argv[]){
    char texto1[MAX_CHARACTERS] = "Hello"; // Equivalente a:
                                           // {'H', 'e', 'l', 'l', 'o', '\0'};
    char texto2[MAX_CHARACTERS] = "World"; // Equivalente a: 
                                           // {'W', 'o', 'r', 'l', 'd', '\0'};
    char texto3[MAX_CHARACTERS];
    fgets(texto3, MAX_CHARACTERS, stdin); // Faz o input da string 3

    printf("Tamanho das strings (desconsiderando o null terminator):\n");
    printf("Texto 1 tem %d caracteres.\n", mystrlen(texto1));
    printf("Texto 2 tem %d caracteres.\n", mystrlen(texto2));
    printf("Texto 3 tem %d caracteres.\n", mystrlen(texto3));

    return 0;
}

// Nada a declarar em questão de aprendizado.