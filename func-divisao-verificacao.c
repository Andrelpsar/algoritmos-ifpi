#include <stdio.h>
#include <stdlib.h>

//===============assinaturas das funções================
float divisaoSegura (float dividendo, float divisor, int* sucesso);

//===================== main ==========================

int main (){

float dividendo, divisor;
int sucesso;

printf("Forneca dois numeros:\nPrimeiro um dividendo:\n");
scanf("%f", &dividendo);
printf("Agora forneca um divisor:\n");
scanf("%f", &divisor);

float resultado = divisaoSegura(dividendo, divisor, &sucesso);

if (sucesso == 1){
    printf("O resultado da divisao entre %.2f e %.2f eh %.2f", dividendo, divisor, resultado);
} else{
    printf("Erro. Divisao por %d.", sucesso);
}

return 0;
}// fim do main

//=================== corpo das funções =================

float divisaoSegura (float dividendo, float divisor, int* sucesso){

    if (divisor != 0){
        *sucesso = 1;
        return dividendo / divisor;
    }else {
        *sucesso = 0;
        return 0;
    }
}
