#include <stdio.h>
#include <stdlib.h>

int main() {

int largura, linha;

printf("Informe a largura maxima dos losangos.\n");
scanf("%d", &largura);

/*
   *     l = 1 b = 1
  ***    l = 2 b = 3
 *****   l = 3 b = 5
*******  l = 4 b = 7

então se a base = 2xlinha - 1, a linha é (base + 1)/2, para base de tamanho ímpar.

*/

linha = (largura + 1)/2;

printf("\n");
//primeira metade(pirâmide de cabeça pra cima)
//note que o for mais externo controla as linhas, o que significa dizer que ele controla a quebra da linha (\n)
for (int i = 1; i <= linha; i++){
    //este for controla os espaços à esquerda
    for (int j = 1; j <= linha - i; j++){
        printf(" ");
    }
    //este for imprime os asteriscos por linha. note que a quantidade de asteriscos é de 2*quantidade de linhas - 1
    for (int j = 1; j <= 2*i - 1; j++){
    printf("*");
    }
    printf("\n");
}
//segunda metade (pirâmide de cabeça para baixo)
//note que esta pirâmide deve ter uma linha a menos que a primeira metade do losango
for (int i = linha - 1; i >= 1; i--){
    for (int j = 1; j <= linha - i; j++){
        printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++){
        printf("*");
    }
    printf("\n");
}
printf("\n");
//====================================LOSANGO VAZADO================================================

/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Na primeira metade, por linha: espaços à esquerda 3  |  0 espaços entre os asteriscos
                               espaços à esquerda 2  |  1 espaços entre os asteriscos
                               espaços à esquerda 1  |  3 espaços entre os asteriscos
                               espaços à esquerda 0  |  5 espaços entre os asteriscos

Na segunda metade, por linha: espaços à esquerda 1  |  3 espaços entre os asteriscos
                              espaços à esquerda 2  |  1 espaços entre os asteriscos
                              espaços à esquerda 3  |  0 espaços entre os asteriscos

*/

//para esta implementação, vai ser preciso de um contador auxiliar para controlar os espaços entre asteriscos

int count = 1;

for (int i = 1; i <= linha; i++){

    if (i == 1){
        for(int j = 1; j <= linha - i; j++){
        printf(" ");
    }
    printf("*\n");
    continue;
    }

    for(int j = 1; j <= linha - i; j++){
        printf(" ");
    }
    printf("*");
    for(int j = 1; j <= count; j++){
        printf(" ");
    }
    printf("*\n");
    count += 2;
}

if (largura%2==0){
    largura -= 1;
    //printf("largura = %d", largura);
}

for (int i = linha - 1; i >=1; i--){
    if (i == 1){
        for (int j = 1; j <= linha - i; j++){
            printf(" ");
        }
        printf("*\n");
        continue;
    }
    for(int j = 1; j <= linha - i; j++){
        printf(" ");
    }
    printf("*");
    for (int j = 1; j <= largura - 4 ; j++){
        printf(" ");
    }
    printf("*\n");
    largura -= 2;
}
/*
consegui fazer um paralelogramo sem querer:

for (int i = 1; i <= linha; i++){
    for(int j = 1; j <= linha - i; j++){
        printf(" ");
    }

    for(int j = 1; j <= 2*linha - 1; j++){
        printf("*");
    }
    printf("\n");
}
*/


return 0;
}
