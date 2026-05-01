#include <stdio.h>
#include <stdlib.h>

int main() {

int n, ehprimo;

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

    for (int j = 1; j <= i; j++){

    }

}

return 0;
}
