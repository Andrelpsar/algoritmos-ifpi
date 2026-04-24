#include <stdio.h>
#include <stdlib.h>

int main() {

int nota;

do{
printf("Insira a nota do estudante:\n");
scanf("%d", &nota);
} while (nota < 0 || nota > 100);

// note que o comando switch aceita int, char e expressoes que resultem em resultados inteiros.
switch (nota/10){
case 10:
    printf("Estudante com nota %d, conceito A+!\n", nota);
    break;
case 9:
    printf("Estudante com nota %d, conceito A!\n", nota);
    break;
case 8:
    printf("Estudante com nota %d, conceito B!\n", nota);
    break;
case 7:
    printf("Estudante com nota %d, conceito C.\n", nota);
    break;
case 6:
    printf("Estudante com nota %d, conceito D.\n", nota);
    break;
default:
    printf("Estudante com nota %d, conceito F.\n", nota);
}

return 0;
}
