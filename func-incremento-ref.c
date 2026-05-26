#include <stdio.h>
#include <stdlib.h>

//==================assinaturas das funções ==========================

void incrementar (int *num);

//============== main===================
int main() {

int num = 10;

printf("numero nao incrementado: %d\n", num);

incrementar(&num);

printf("numero incrementado: %d\n", num);

return 0;
}// fim do main

//================ corpos das funções =========================

void incrementar (int *num){
    //tem que colocar o ponteiro entre parênteses para incrementar o valor, caso contrário o que vai ser incrementado é a posição no endereço de memória
    (*num)++;
}//fim da função incrementar
