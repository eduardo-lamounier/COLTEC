#include<stdio.h>

int main(){
    printf("\n\n-------------------------------------");

    float x, y;
    float z;

    printf("Digite o primeiro valor:");
    scanf("%f", &x);

    printf("Digite o segundo valor:");
    scanf("%f", &y);

    if(y != 0){
        z = x / y;
        printf("O resultado da divisão é igual a %f ", z);
    }else{
        printf("Denominador igual a zero.");
    }
    printf("\n\n------------------------------------");
    return 0;
}