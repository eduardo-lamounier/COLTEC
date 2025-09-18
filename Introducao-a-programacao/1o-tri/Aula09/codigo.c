#include<stdio.h>

int getC(int a, int b){
    return !a || !b; // Trocar a expressão para cada teste
    //     _ _
    // C = A+B
}

int main(){
    int a, b;
    
    for(a = 0; a <= 1; a++){
        for(b = 0; b <= 1; b++){
            int c = getC(a, b);
            printf("A = %d | B = %d | C = %d\n",a, b, c);
        }
    }

    printf("\n\n-------------------------------------------------------------------");
    return 0;
}