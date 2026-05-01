#include <stdio.h>
#include <stdlib.h>

int main() {

int n, resultado = 0;

do{
printf("Digite um numero inteiro e positivo.\n");
scanf("%d", &n);
}while (n <= 0);

for (int i = 0; i <= n; i++){

 resultado += i;
}

printf("A soma de 1 a %d eh: %d", n, resultado);

return 0;
}
