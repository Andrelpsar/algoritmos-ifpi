#include <stdio.h>
#include <stdlib.h>


int main () {

int nivelEnergia, soma = 0;
float media;

for (int i = 0; i < 8; i++){

do{
printf("Informe o nivel de energia do emissor.\n");
scanf("%d", &nivelEnergia);
}while (nivelEnergia > 100 || nivelEnergia < 0);

if (nivelEnergia < 20){
    printf("Alerta critico: Emissor comprometido! Risco de despressurizacao!\n");
}

soma += nivelEnergia;

}

media = (float)soma/8;

printf("Media geral do campo de forca: %.2f.\n", media);

return 0;
}
