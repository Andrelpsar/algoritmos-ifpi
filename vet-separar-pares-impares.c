#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[TAM], vetor_pares[TAM], vetor_impares[TAM], indice_par = 0, indice_impar = 0;

preencher(vetor, TAM);
printf("Vetor original: ");
exibir(vetor, TAM);

for (int i = 0; i < TAM; i++){
    if(vetor[i] % 2 == 0){
        vetor_pares[indice_par] = vetor[i];
        indice_par++;
    } else{
        vetor_impares[indice_impar] = vetor[i];
        indice_impar++;
    }
}

printf("Vetor com elementos pares: ");
exibir(vetor_pares, indice_par);

printf("Vetor com elementos impares: ");
exibir(vetor_impares, indice_impar);

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
