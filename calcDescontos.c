#include <stdio.h>

int main (){

float precoOriginal, precoFinal, valorDesconto;
char categoria;

printf("Informe o preco do produto.\n");
scanf("%f", &precoOriginal);
//printf("Valor: %f", precoOriginal);

printf("Informe a categoria do produto.\n");
scanf(" %c", &categoria);
//printf("Categoria: %c\n", categoria);

if(categoria!='A' && categoria!='B' && categoria!='C'){
    printf("Categoria invalida. Nenhum desconto aplicado.\n");
} else if(categoria == 'A'){
    valorDesconto = (precoOriginal*10)/100;
    precoFinal = precoOriginal - valorDesconto;
    printf("Valor do desconto: %.2f\nPreco final: %.2f\n", valorDesconto, precoFinal);
} else if(categoria == 'B'){
    valorDesconto = (precoOriginal*15)/100;
    precoFinal = precoOriginal - valorDesconto;
    printf("Valor do desconto: %.2f\nPreco final: %.2f\n", valorDesconto, precoFinal);
} else {
    valorDesconto = (precoOriginal*20)/100;
    precoFinal = precoOriginal - valorDesconto;
    printf("Valor do desconto: %.2f\nPreco final: %.2f\n", valorDesconto, precoFinal);
}


return 0;
}
