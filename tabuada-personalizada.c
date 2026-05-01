#include <stdio.h>
#include <stdlib.h>

int main() {

int n, resultado;

printf("Digite um numero inteiro.\n");
scanf("%d", &n);

for (int i = 1; i <= 10; i++){

    printf("%d x %d = %d\n", n, i, resultado = n * i);
}

return 0;
}
