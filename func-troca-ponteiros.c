#include <stdio.h>
#include <stdlib.h>

//===================== assinaturas das funções ===============================
void trocarValores (int* a, int* b);

//======================== main ==============================================

int main() {

int a = 100, b = 5;

printf("Valor de a eh: %d\nValor de b eh: %d\n", a, b);

trocarValores(&a, &b);

printf("\nAgora o valor de a eh: %d\nE o valor de b eh: %d\n", a, b);

return 0;
}// fim do main

//=========================== corpos das funções ===============================
void trocarValores (int* a, int* b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}// fim de trocarValores
