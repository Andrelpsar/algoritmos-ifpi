#include <stdio.h>
#include <stdlib.h>

int main() {

int opcao;
float num1, num2, resultado;

do{
printf("Escolha uma opcao:\n1- Soma 2- Subtracao 3- Multiplicacao 4- Divisao\n");
scanf("%d", &opcao);

if(opcao < 1 || opcao > 4)
    printf("Opcao invalida. Digite novamente.\n");

}while(opcao < 1 || opcao > 4);

printf("\nDigite o primeiro operando:\n");
scanf("%f", &num1);

printf("\nDigite o segundo operando:\n");
scanf("%f", &num2);

switch(opcao){
case 1:
    resultado = num1 + num2;
    printf("Operacao de soma:\n%.1f + %.1f = %.1f", num1, num2, resultado);
    break;
case 2:
    resultado = num1 - num2;
    printf("Operacao de subtracao:\n%.1f - %.1f = %.1f", num1, num2, resultado);
    break;
case 3:
    resultado = num1 * num2;
    printf("Operacao de multiplicacao:\n%.1f * %.1f = %.1f", num1, num2, resultado);
    break;
case 4:
    if(num2 != 0){
    resultado = num1 / num2;
    printf("Operacao de divisao:\n%.2f/%.2f = %.2f", num1, num2, resultado);
    } else{
        printf("Operacao escolhida: divisao.\nPara esta operacao, o segundo operando nao pode ser 0.\n");
        do{
        printf("Digite o novo valor do segundo operando.\n");
        scanf("%f", &num2);
        }while(num2 == 0);
        resultado = num1 / num2;
        printf("Operacao de divisao:\n%.2f/%.2f = %.2f", num1, num2, resultado);
    }
    break;
}

return 0;
}
