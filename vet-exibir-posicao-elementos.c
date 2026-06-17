#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir_por_posicao (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[10], soma = 0;

preencher(vetor, 10);

exibir_por_posicao(vetor, 10);

return 0;
}//fim do main
//======================== corpos das funções ==============
void preencher (int vetor[], int tam){
    srand(time(NULL));
    for (int i = 0; i < tam; i++){
        vetor[i] = (rand() % 199) - 99;
    }
}//fim de preencher
void exibir_por_posicao (int vetor[], int tam){
    for (int i = 0; i < tam; i++){
        printf("Posicao [%d]: %d\n", i, vetor[i]);
    }
}//fim de exibir_por_posicao
