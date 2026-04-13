#include <stdio.h>
#include <stdlib.h>

int main (){

int produto, pago, notaDeDez;
float troco;

printf("Informe o valor do produto.\n");
scanf("%d", &produto);

printf("Informe o valor pago.\n");
scanf("%d", &pago);

printf("O valor do produto eh R$%d e o valor pago foi de R$%d.\n", produto, pago);

if (pago > produto){
    troco = pago - produto;
    printf("O valor do troco eh de R$%.2f.\n", troco);
    if(troco >= 10){
        notaDeDez = troco/10;
        printf("Caixa, utilize %d notas de R$10,00 no troco.\n", notaDeDez);
    }
}
if(pago < produto){
    int diferenca = produto - pago;
    printf("Valor insuficiente. Faltam R$%.2f.\n", diferenca);
}

return 0;
}
