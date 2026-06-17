#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define TAM 10
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
int encontrar_maior (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[TAM] = {5, 3, 1, 4}, segundo_maior = -99;

preencher(vetor, TAM);
printf("Vetor original: ");
exibir(vetor, TAM);

printf("Maior: %d\n", encontrar_maior(vetor, TAM));

for (int i = 1; i < TAM; i++){
    if (vetor[i] < encontrar_maior(vetor, TAM) && vetor[i] > segundo_maior) segundo_maior = vetor[i];
}

printf("Segundo maior numero do vetor eh: %d", segundo_maior);

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
int encontrar_maior (int vetor[], int tam){
    int maior = vetor[0];
    for (int i = 1; i < tam; i++){
        if(vetor[i] > maior) maior = vetor[i];
    }
    return maior;
}// encontrar_maior
