#include<stdio.h>

#define dim_max 100

void get_vin(float vin[dim_max], int vin_size);
void get_min(float min[dim_max][dim_max], int min_size);
void mult_matbyvec(float min[dim_max][dim_max], float vin[dim_max], int minvin_size, float vout[dim_max]);
void print_vin(float vin[dim_max], int vin_size);

// ===================== main ==========================================
int main(){
    float m[dim_max][dim_max];
    float v1[dim_max], v2[dim_max];
    int n;

    scanf("%d", &n);
    get_min(m, n);
    get_vin(v1, n);

    mult_matbyvec(m, v1, n, v2);

    print_vin(v2, n);

    return 0;
}

// ======================== funcs =======================================
void print_vin(float vin[dim_max], int vin_size){
    printf("============Imprimindo vetor===========\n");
    for(int i = 0; i < vin_size; i++){
        printf("%f ", vin[i]);
    }
}

void get_vin(float vin[dim_max], int vin_size){
    printf("============Input do vetor============:\n");
    for(int i = 0; i < vin_size; i++){
        scanf("%f", &vin[i]);
    }    
}

void get_min(float min[dim_max][dim_max], int min_size){
    printf("============Input da matrix============:\n");
    for(int i = 0; i < min_size; i++){
        printf("Coluna %d:\n", i);
        for(int j = 0; j < min_size; j++){
            scanf("%f", &min[i][j]);
        }
        printf("\n");
    }    
}

void mult_matbyvec(float min[dim_max][dim_max], float vin[dim_max], int minvin_size, float vout[dim_max]){
    for(int j = 0; j < minvin_size; j++){
        int jsum = 0;
        for(int i = 0; i < minvin_size; i++){
            jsum += min[i][j]*vin[i];
        }
        vout[j] = jsum;
    }
}