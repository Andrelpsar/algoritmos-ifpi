#include <stdio.h>
#include <stdlib.h>

int main(){

int n, par = 0;

do{
printf("Digite um numero inteiro positivo.\n");
scanf("%d", &n);
}while (n <= 0);

for (int i = 1; i <= n; i++){

    if (i%2 == 0){
        printf("%d\n", i);
        par++;
    }else{
        continue;
    }
}

printf("Quantidade de numeros pares: %d", par);

return 0;
}
