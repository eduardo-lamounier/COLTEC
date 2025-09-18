#include<stdio.h>
#include<stdlib.h>

void printPosElem(int arr[], int len){
    printf("Elementos positivos: ");
    for(int i = 0; i < len; i++){
        // Se o valor for positivo, o imprime:
        if(arr[i] > 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printNegElem(int arr[], int len){
    printf("Elementos negativos: ");
    for(int i = 0; i < len; i++){
        // Se o valor for negativo, o imprime:
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    int length = 4; // Quantidade de elementos alocados no array
    int input; // Valor lido do teclado
    int writePos = 0; // Posição que o novo elemento vai ser adicionado
    // Ponteiro apontando para o início do array:
    int *arr = (int*) malloc(length * sizeof(int));

    do{
        // Enquanto o input for diferente de zero:
        scanf("%d", &input);

        if(writePos > length - 1){
            // Se a posição onde o elemento vai ser adicionado passar dos
            // limites do array, faz uma realocação da memória adicionando
            // memória para mais 2 números inteiros
            length += 2;
            arr = (int*) realloc(arr, length * sizeof(int));
        }

        arr[writePos++] = input; // Adiciona o elemento lido no teclado
    }while(input != 0);
    
    // Imprime os elementos negativos e positivos do array, respectivamente:
    printNegElem(arr, writePos);
    printPosElem(arr, writePos);

    // Liberação de memória:
    free(arr);
    return 0;
}