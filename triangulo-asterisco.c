#include <stdio.h>
#include <stdlib.h>

int main(){

int n;

do{
    printf("Digite um numero inteiro e positivo.\n");
    scanf("%d", &n);
}while (n <= 0);

printf("\n");

for (int i = 0; i < n; i++){

   for (int j = 0; j <= i; j++){
        printf("*");
    }

printf("\n");
}

printf("\n");

for(int i = n; i >= 0; i--){
    for(int j = i; j >0; j--){
        printf("*");
    }
    printf("\n");
}
 for (int i = 1; i <= n; i++) {
        // Imprime espaços à esquerda
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Imprime asteriscos (linha i tem 2*i - 1 asteriscos)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

printf("\n");

for (int i = n; i >= 1; i--) {
        // Imprime espaços à esquerda
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Imprime asteriscos (2*i - 1 por linha)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

/*
   *     l = 1 b = 1
  ***    l = 2 b = 3
 *****   l = 3 b = 5
*******  l = 4 b = 7

então se a base = 2xlinha - 1, a linha é (base + 1)/2, para base de tamanho ímpar.

*/

return 0;
}
