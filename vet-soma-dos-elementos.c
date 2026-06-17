#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
void soma_elementos (int vetor[], int tam, int *soma);
//================= main ===================================
int main(){

int vetor[10], soma = 0;

preencher(vetor, 10);
printf("Vetor original: ");
exibir(vetor, 10);

soma_elementos(vetor, 10, &soma);
printf("Soma dos elementos eh: %d", soma);


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
void soma_elementos (int vetor[], int tam, int *soma){
    for (int i = 0; i < tam; i++){
        *soma += vetor[i];
    }
}//fim de soma_elementos
