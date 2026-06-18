#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
void inverter_vetor (int vetor[], int tam);
void copiar_vetor (int vetor_origem[], int tam_origem, int vetor_destino[], int tam_destino);
int comparar_vetores (int primeiro_vetor[], int tam_primeiro, int segundo_vetor[], int tam_segundo);
//================= main ===================================
int main(){

int vetor[TAM] = {5, 4, 3, 4, 5, 5, 4, 3, 4, 6}, palindromo[TAM];

//preencher(vetor, TAM);
printf("Vetor original: ");
exibir(vetor, TAM);

copiar_vetor(vetor, TAM, palindromo, TAM);
printf("Vetor copiado: ");
exibir(palindromo, TAM);

inverter_vetor(palindromo, TAM);
printf("Copia invertida: ");
exibir(palindromo, TAM);

comparar_vetores(vetor, TAM, palindromo, TAM) ? printf("O vetor original é um palindromo.\n") : printf("O vetor original não é um palindromo.\n");

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
void copiar_vetor (int vetor_origem[], int tam_origem, int vetor_destino[], int tam_destino){
    for (int i = 0; i < tam_origem; i++){
        vetor_destino[i] = vetor_origem[i];
    }
}//fim de copiar_vetor
int comparar_vetores (int primeiro_vetor[], int tam_primeiro, int segundo_vetor[], int tam_segundo){
    int sao_iguais = 1;
    for (int i = 0; i < tam_primeiro; i++){
        if(primeiro_vetor[i] != segundo_vetor[i]) sao_iguais = 0;
    }
    return sao_iguais;
}//fim de comparar_vetores
