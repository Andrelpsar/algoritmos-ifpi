#include <stdio.h>
#include <stdlib.h>

int main() {

float watt, fatura;

do{
printf("Digite o consumo (kWh):\n");
scanf("%f", &watt);
} while (watt < 0);

if(watt <= 150){
    fatura = watt * 0.5;
} else if (watt > 150 && watt <= 500){
    fatura = watt * 0.7;
} else{
    fatura = watt * 0.9;
}

printf("O valor da fatura eh R$%.2f.\n", fatura);

return 0;
}
