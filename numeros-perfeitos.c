#include <stdio.h>

int main(){

int n, soma = 0;

printf("informe o limite para saber quantos numeros perfeitos\nexistem entre 1 e n:\n");
scanf("%d", &n);

for (int i = 1; i <= n; i++){
    soma = 0;
    for (int j = 1; j < i; j++){
        if (i % j == 0){
            soma += j;
        }
    }
    if (soma == i){
        printf("%d ", i);
    }
}

return 0;
}
