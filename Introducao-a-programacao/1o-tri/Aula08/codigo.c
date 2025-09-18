#include<stdio.h>

int main(){
    int var1, var2, varAux;
    printf("Digite o valor da variavel 1: ");
    scanf("%d", &var1);
    printf("Digite o valor da variavel 2: ");
    scanf("%d", &var2);

    varAux = var1; // variavel auxiliar pega o valor da var1 emprestado
    var1 = var2; // var1 pega o valor da var2
    var2 = varAux; // var2 pega o valor da variavel auxiliar(que era o valor da var1)

    printf("var1 = %d | var2 = %d\n\n", var1, var2);
}