#include<stdio.h>

int fibonacci(int *fib, int n){
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main(void){
    int v1_size;
    printf("Digite a quantidade de elementos para o vetor 1: ");
    scanf("%d", &v1_size);

    int v1[v1_size];
    for(int i = 0; i < v1_size; i++){
        scanf("%d", &v1[i]);
    }
    int v1_inv[v1_size];

    for(int i = 0; i < v1_size; i++){
        v1_inv[i] = v1[v1_size - i - 1];
    }

    int val_min = v1[0];
    for(int i = 1; i < v1_size; i++){
        val_min = v1[i] < val_min? v1[i] : val_min;
    }

    int somatorio = 0;
    for(int i = 0; i < v1_size; i++){
        somatorio += v1[i];
    }

    int n;
    printf("Digite a quantidade N de números para substituir pelos números da sequência de fibonnaci: ");
    scanf("%d", &n);

    int fib[v1_size];
    for(int i = 0; i < v1_size; i++){
        fib[i] = v1[i];
    }

    fibonacci(fib, n);

    for(int i = 0; i < n; i++){
        v1[i] = fib[i];
    }
    
    printf("v1 invertida:\n");
    for(int i = 0; i < v1_size; i++){
        printf("%d ", v1_inv[i]);
    }
    printf("\nval mín de v1 = %d\n", val_min);
    printf("somatório = %d\n", somatorio);
    printf("v1 com fibonacii:\n");
    for(int i = 0; i < v1_size; i++){
        printf("%d ", fib[i]);
    }

    printf("\n\n");
    return 0; 
}