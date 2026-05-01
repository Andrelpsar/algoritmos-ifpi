#include <stdio.h>
#include <stdlib.h>

int main() {

int opcao;
float operando1, operando2, resultado;

do{
    printf("\nEscolha uma operacao:\n");
    printf("1- Soma 2- Subtracao 3- Multiplicacao 4- Divisao 5- Sair\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("Operacao escolhida: soma.\n");

        printf("Digite o primeiro operando.\n");
        scanf("%f", &operando1);
        printf("Digite o segundo operando.\n");
        scanf("%f", &operando2);

        resultado = operando1 + operando2;
        printf("%.1f + %.1f = %.1f\n", operando1, operando2, resultado);
        break;
    case 2:
        printf("Operacao escolhida: subtracao.\n");

        printf("Digite o primeiro operando.\n");
        scanf("%f", &operando1);
        printf("Digite o segundo operando.\n");
        scanf("%f", &operando2);

        resultado = operando1 - operando2;
        printf("%.1f - %.1f = %.1f\n", operando1, operando2, resultado);
        break;
    case 3:
        printf("Operacao escolhida: multiplicacao.\n");

        printf("Digite o primeiro operando.\n");
        scanf("%f", &operando1);
        printf("Digite o segundo operando.\n");
        scanf("%f", &operando2);

        resultado = operando1 * operando2;
        printf("%.1f * %.1f = %.1f\n", operando1, operando2, resultado);
        break;
    case 4:
        printf("Operacao escolhida: divisao.\n");

        printf("Digite o primeiro operando.\n");
        scanf("%f", &operando1);
        printf("Digite o segundo operando.\n");
        scanf("%f", &operando2);

        if (operando2 == 0){
            do{
            printf("Operando 2 = 0. Por favor, escolha outro valor.\n");
            scanf("%f", &operando2);
            }while (operando2 == 0);
        }

        resultado = operando1/operando2;
        printf("%.1f/%.1f = %.1f\n", operando1, operando2, resultado);
        break;
    case 5:
        printf("Programa finalizado.\n");
        break;
    default:
        printf("Opcao invalida. Por favor, escolha uma das opcoes abaixo.\n");
    }

} while (opcao != 5);

return 0;
}
