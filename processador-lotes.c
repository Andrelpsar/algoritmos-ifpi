#include <stdio.h>
#include <stdlib.h>

int main (){

int nota, soma = 0;
// o contador foi declarado com float, pois no "else" para mostrar que não teve nota válida inserida, estava dando float exception.
float media, contador = 0;

printf("Digite as notas do aluno.\nSomente notas iguais ou menores que 100\nDigite um numero negativo para finalizar o programa.\n");

while (1){

    scanf("%d", &nota);

    if(nota < 0){
        printf("Numero negativo. Programa finalizado.\n");
        break;
    }

    if(nota > 100){
        continue;
    }
    soma += nota;
    contador++;

}

media = soma/contador;

if (contador > 0){
printf("\nA media das %.0f notas do aluno eh igual a %.2f.\n", contador, media);
} else{
    //escolhi mostrar o contador aqui pra verificar que as notas acima de 100 estavam sendo puladas na iteraçao.
    printf("\nNumero de notas válidas inseridas = %.0f.\n", contador);
}

return 0;
}
