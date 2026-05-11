#include <stdio.h>
#include <stdlib.h>


int main (){

int countMagnetico = 0,countRadiacao = 0, valor;

do{

printf("Digite um valor.\nDigite um numero negativo para sair.\n");
scanf("%d", &valor);

if (valor < 0)
    break;

if(valor % 2 == 0){
    countMagnetico++;
} else{
    countRadiacao++;
}

}while (1); //fim do while

printf("Pulsos magneticos: %d.\nPulsos radioativos: %d.\n", countMagnetico, countRadiacao);

return 0;
}
