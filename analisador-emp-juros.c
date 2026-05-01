#include <stdio.h>
#include <stdlib.h>

int main(){

int categoria;
float valorEmprestimo, rendaMensal;

printf("Informe a renda mensal.\n");
scanf("%f", &rendaMensal);

printf("\nInforme a categoria do emprestimo.\n1- Ruim 2- Regular 3- Bom 4- Excelente.\n");
scanf("%d", &categoria);

printf("\nInforme o valor do emprestimo.\n");
scanf("%f", &valorEmprestimo);

if (rendaMensal < 1200){
    printf("Renda insuficiente. Emprestimo negado.\n");
} else {
    switch (categoria){
case 1:
    printf("Emprestimo negado: Score de credito muito baixo.\n");
    break;
case 2:
    if (valorEmprestimo <= 5 * rendaMensal){
        printf("Emprestimo aprovado! Taxa de juros de: 20%% a.a.\n");
    } else{
        printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
    }
    break;
case 3:
    if(valorEmprestimo <= 10 * rendaMensal){
        printf("Emprestimo aprovado! Taxa de juros de: 12%% a.a.\n");
    } else{
        printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
    }
    break;
case 4:
    if(valorEmprestimo <= 15 * rendaMensal){
        printf("Emprestimo aprovado! Taxa de juros de: 8%% a.a.\n");
    }else {
        printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
    }
    break;
default:
    printf("Categoria de score invalida.\n");
}
    }


return 0;
}
