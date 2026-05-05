#include <stdio.h>
#include <stdlib.h>

int main() {

int n, contPrimo = 0, contDivisores = 0;

printf("Programa para identificar quantos numeros primos existem entre 1 e o numero n.\n");
printf("\nForneca o numero n.\n");
printf("(n deve ser inteiro e maior que 0.)\n");
scanf("%d", &n);

if(n <= 0){
    do{
        printf("n deve ser maior que zero!\n");
        scanf("%d", &n);
    }while (n <= 0);
}

for (int i = 1; i <= n; i++){

    for (int j = 1; j <= n; j++){
        if (i % j == 0){
            contDivisores++;
        }
    }
    if (contDivisores == 2){
        contPrimo++;
        printf("%d eh primo.\n", i);
    }
    contDivisores = 0;
}

printf("O numero de numeros primos entre 1 e %d eh %d.\n", n, contPrimo);

return 0;
}
