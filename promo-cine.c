#include <stdio.h>
#include <stdlib.h>

int main() {

const entrada = 20.0;
double valorFinal;
int idade, ehTerca;

printf("Informe a idade da pessoa que comprou o ingresso:\n");
scanf("%d", &idade);
printf("Eh terca-feira? 1- sim 2- nao\n");
scanf("%d", &ehTerca);

printf("A idade da pessoa eh: %d anos.\n", idade);
ehTerca == 1? printf("Hoje eh terca!\n") : printf("Hoje nao eh terca.\n");

if ((idade <12 || idade > 65) || ehTerca == 1){
    valorFinal = entrada * 0.5;
}else{
    valorFinal = entrada;
}

printf("O valor do ingresso eh R$%.2lf\n", valorFinal);

return 0;
}
