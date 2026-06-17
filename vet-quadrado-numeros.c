#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
void quadrado (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[10];

preencher(vetor, 10);
printf("Vetor original: ");
exibir(vetor, 10);

quadrado(vetor, 10);
printf("Vetor com cada elemento elevado ao quadrado: ");
exibir(vetor, 10);

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
void quadrado (int vetor[], int tam){
    for (int i = 0; i < tam; i++){
        vetor[i] *= vetor[i];
    }
}//fim de quadrado
