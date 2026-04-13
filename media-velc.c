#include <stdio.h>
#include <stdlib.h>

int main (){

printf("\"Teste para aparecer aspas no print\"\n");

int distancia = 0, tempo = 0;

printf("Informe a distancia total percorrida.\n");
scanf("%d", &distancia);

printf("Informe o tempo transcorrido.\n");
scanf("%d", &tempo);

float velocidade = (float)distancia/tempo;

printf("A velocidade eh de %.2fkm\\h", velocidade);


return 0;
}
