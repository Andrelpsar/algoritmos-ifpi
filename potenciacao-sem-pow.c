#include <stdio.h>
#include <stdlib.h>

int main(){

int base, expoente, resultado = 1;

printf("Informe o valor da base.\n");
scanf("%d", &base);

do{
printf("Informe o valor do expoente.\nEste valor nao pode ser negativo.\n");
scanf("%d", &expoente);
} while (expoente < 0);

for (int i = 0; i < expoente; i++){
    if(expoente == 0){
        resultado = 1;
    }
    resultado *= base;
}

printf("%d elevado a %d eh igual a %d", base, expoente, resultado);

return 0;
}
