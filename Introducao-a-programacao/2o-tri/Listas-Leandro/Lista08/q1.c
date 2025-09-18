#include<stdio.h>

#define dim 5

int main(){
  int m[dim][dim];
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      scanf("%d", &m[i][j]);
    }
    printf("\n");
  }

  printf("Imprimindo:\n");
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}