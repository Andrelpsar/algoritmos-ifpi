#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 9
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
void inverter_vetor (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[TAM];

preencher(vetor, TAM);
printf("Vetor original: ");
exibir(vetor, TAM);

inverter_vetor(vetor, TAM);
printf("Vetor invertido: ");
exibir(vetor, TAM);

return 0;
}//fim do main
//======================== corpos das funções ==============
void preencher (int vetor[], int tam){
    srand(time(NULL));
    for (int i = 0; i < tam; i++){
        vetor[i] = (rand() % 199) - 99;
    }
}//fim de preencher
void exibir (int vetor[], int tam){
    printf("[");
    for (int i = 0; i < tam; i++){
        if (i < tam -1) printf("%d, ", vetor[i]);
        else printf("%d]", vetor[i]);
    }
    printf("\n");
}//fim de exibir
void inverter_vetor (int vetor[], int tam){
    for (int i = 0; i < tam/2; i++){
        int aux = vetor[(tam - 1) - i];
        vetor[(tam - 1) - i] = vetor[i];
        vetor[i] = aux;
    }
}//fim de inverter_vetor
/* [0][1][2][3]
   [3][2][1][0]
   */
