#include <stdio.h>
#include <stdlib.h>
//=================== assinaturas das funcoes =======================
void exibirSaldo (float s);
void realizarSaque (float *s);
void realizarDeposito (float *s);
//=================== main ==========================================
int main() {

}//fim do main
//======================= corpos das funções ========================
void exibirSaldo (float s){
    printf("Saldo: %.2f", s);
}// fim de exibirSaldo
void realizarSaque (float *s){
    float valorSaque;
    printf("Informe valor do saque:\n");
    scanf("%f", &valorSaque);
    if (valorSaque > *s){
        printf("Saldo insuficiente.\n");
    }else{
        *s -= valorSaque;
    }
}// fim de realizarSaque
void realizarDeposito (float *s){
}// fim de realizarDeposito
