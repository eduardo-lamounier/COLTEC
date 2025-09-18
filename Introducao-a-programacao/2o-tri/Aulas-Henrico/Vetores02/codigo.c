#include<stdio.h>

void vin_sum(float vin[], int vin_size, float n, float vout[]);
void vin_mult(float vin[], int vin_size, float n, float vout[]);
void vin_inv(float vin[], int vin_size, float vout[]);
void vin_mult_pp(float vin1[], float vin2[], int vin_size, float vout[]);
void max_val(int vin[], int vin_size, int vout[]); // [val, i]

void float_get_vin(float vin[], int vin_size);
void int_get_vin(int vin[], int vin_size);

// ========================== main ===============================
int main(){
    

    return 0;
}

// ========================== funcs ==================================
void vin_sum(float vin[], int vin_size, float n, float vout[]){
    for(int i = 0; i < vin_size; i++){
        vout[i] = vin[i] + n;
    }
}

void vin_mult(float vin[], int vin_size, float n, float vout[]){
    for(int i = 0; i < vin_size; i++){
        vout[i] = vin[i] * n;
    }
}

void vin_inv(float vin[], int vin_size, float vout[]){
    for(int i = 0; i < vin_size; i++){
        vout[i] = vin[vin_size - i];
    }
}

void vin_mult_pp(float vin1[], float vin2[], int vin_size, float vout[]){
    for(int i = 0; i < vin_size; i++){
        vout[i] = vin1[i] * vin2[i];
    }
}
void max_val(int vin[], int vin_size, int maxval[]){
    // maxval[0] = valor max
    // maxval[1] = indice do valor max

    maxval[0] = vin[0];
    maxval[1] = 0;

    for(int i = 1; i < vin_size; i++){
        int cond = vin[i] > maxval[0];
        maxval[0] = cond*vin[i] + !cond*maxval[0];
        maxval[1] = cond*i + !cond*maxval[1];
    }
}

void float_get_vin(float vin[], int vin_size){
    for(int i = 0; i < vin_size; i++){
        scanf("%f", &vin[i]);
    }    
}

void int_get_vin(int vin[], int vin_size){
    for(int i = 0; i < vin_size; i++){
        scanf("%d", &vin[i]);
    }
}
