#include <stdio.h>
#include <stdlib.h>

int main(){

int numero, soma = 0, cont = 0, potencia = 1;

printf("Digite um numero positivo.\n");
scanf("%d", &numero);
/*
//verifica se a entrada é um número e esse número é positivo
while (scanf("%d", &numero) != 1 || numero <= 0){
    //limpa o buffer pra quebra de linha
    while (getchar() != '\n');

    printf("Digite um numero positivo.\n");
} //fim da verificação de entrada
*/
//printf("numero = %d\n", numero);

//contador de digitos

 //fim do contados de digitos

//laço para iterar sobre todos os valores até o numero
for (int i = 1; i <= numero; i++){
    soma = 0;
    cont = 0;

    int aux = i;

    while(aux > 0){
        cont++;
        aux /= 10;
        }

    aux = i;
    for(int k = 1; k <= i; k++){
        int digito = aux%10;
        //printf("digito %d\n", digito);
        potencia = 1;
        for(int j = 1; j <= cont; j++){
            potencia *= digito;
        }
        soma += potencia;
        //printf("potencia %d soma %d\n", potencia, soma);
        aux /= 10;
    }

    if (soma == i){
        printf("%d ", i);
    }
}// fim do laço para iterar sobre o numero

return 0;
}// fim do main
