#include <stdio.h>
#include <stdlib.h>

int main (){

int opcao;

printf("\nEscolha uma opcao:\n1- Financeiro 2- Suporte Tecnico 3- Alteracao de Plano 4- Falar com Atendente\n");
scanf("%d", &opcao);

switch(opcao){

case 1:
    printf("Escolhida a opcao financeiro.\n");
    break;
case 2:
    printf("Escolhida a opcao suporte tecnico.\n");
    break;
case 3:
    printf("Escolhida a opcao alteracao de plano.\n");
    break;
case 4:
    printf("Escolhida a opcao falar com atendente.\n");
    break;
default:
    printf("Opcao invalida.\n");
}

return 0;
}
