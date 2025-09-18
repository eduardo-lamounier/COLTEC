/* Questão 03) Implemente as seguintes funções para manipulação de uma 
lista de nomes alocada dinamicamente:  

 char** criarListaNomes(int numNomes);  
Esta função deve receber o número de nomes que a lista irá armazenar. Ela deve
 alocar dinamicamente um array de ponteiros para caracteres com o tamanho 
 especificado. Retorne o ponteiro para o início desse array.  

  void preencherNomes(char** lista, int numNomes);  
Esta função deve receber o array de ponteiros e a quantidade de nomes. Para 
cada posição, ela deve solicitar ao usuário que digite um nome, alocar 
dinamicamente o espaço exato necessário para a string, copiar o nome para o 
novo espaço alocado e armazenar o ponteiro na posição correta do array.  

 int contarNomesComPrefixo(char** lista, int numNomes, char* prefixo);  Esta
 função deve receber a lista de nomes, a quantidade de nomes e uma  string de 
 prefixo. Ela deve percorrer a lista e contar quantos nomes  começam com o 
 prefixo fornecido. Retorne a contagem total.  

No programa principal, peça ao usuário a quantidade de nomes que ele  deseja
inserir. Crie a lista com a função apropriada, preencha-a com  nomes e, em 
seguida, peça ao usuário um prefixo para a busca (por exemplo,  "Ana"). 
Chame a função contarNomesComPrefixo e exiba o resultado. 
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX_CARACTERES 80

char **criarListaNomes(int numNomes){
    char **nomes = (char**) malloc(numNomes * sizeof(char*));

    return nomes;
}

void preencherNomes(char** lista, int numNomes){
    for(int i = 0; i < numNomes; i++){
        char *nome = (char*) malloc((MAX_CARACTERES + 1) * sizeof(char));
        fgets(nome, MAX_CARACTERES + 1, stdin);
        nome = realloc(nome, (strlen(nome) + 1) * sizeof(char));
        lista[i] = nome;
    }
}

int contarNomesComPrefixo(char** lista, int numNomes, char* prefixo){
    
}

int main(int argc, char *argv[]){


    return 0;
}