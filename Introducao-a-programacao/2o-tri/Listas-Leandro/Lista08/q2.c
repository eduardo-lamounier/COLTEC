#include<stdio.h>

#define dim_max 10

float somatorio(int y_lenght, int x_lenght, float v[dim_max][dim_max]){
  float somatorio = 0;
  for(int i = 0; i < y_lenght; i++){
    for(int j = 0; j < x_lenght; j++){
      somatorio += v[i][j];
    }
  }
  return somatorio;
}

int main(){
  float m[dim_max][dim_max];
  int y, x;
  scanf("%d %d", &y, &x);
  for(int i = 0; i < y; i++){
    for(int j = 0; j < x; j++){
      scanf("%f", &m[i][j]);
    }
    printf("\n");
  }
  printf("%f", somatorio(y, x, m));

  return 0;
}