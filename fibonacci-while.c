#include <stdio.h>
#include <stdlib.h>

int main () {

int primeiro = 0, segundo = 1, numero, soma = 0;

printf("Informe um numero.\n");
scanf("%d", &numero);

printf("Sequencia de fibonacci até o %d: 0 1", numero);

for(int i = 1; i <=numero; i ++){

    soma = primeiro + segundo;
    if (soma > numero){
        break;
    }

    primeiro = segundo;
    segundo = soma;

    printf(" %d", soma);
}

return 0;
}
