#include <stdio.h>
#include <stdlib.h>

int main(){

int n, fatorial = 1;

do{
printf("Escreva um numero inteiro e nao negativo.\n");
scanf("%d", &n);
} while (n < 0);

for(int i = 1; i <= n; i++){

if (n == 0){
    printf("O! = 1");
    break;
}

fatorial *= i;
}

printf("%d! eh igual a %d", n, fatorial);

return 0;
}
