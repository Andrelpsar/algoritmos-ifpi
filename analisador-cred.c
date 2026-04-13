#include <stdio.h>
#include <stdlib.h>

int main (){

int idade;
float renda;

printf("Informe a idade do aluno.\n");
scanf("%d", &idade);

printf("Informe a renda familiar.\n");
scanf("%f", &renda);

if ((idade >= 18 && idade < 25) || renda < 3000.0){
    printf("Credito aprovado.\n");
} else {
    printf("Credito reprovado.\n");
}

return 0;
}
