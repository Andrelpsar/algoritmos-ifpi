#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
//================= assinaturas das funções ================
void preencher (int vetor[], int tam);
void exibir (int vetor[], int tam);
void inverter_vetor (int vetor[], int tam);
void copiar_vetor (int vetor_origem[], int tam_origem, int vetor_destino[], int tam_destino);
void remover_elemento (int vetor[], int tam, int indice);
void ordenar_crescente (int vetor[], int tam);
int comparar_vetores (int primeiro_vetor[], int tam_primeiro, int segundo_vetor[], int tam_segundo);
int encontrar_maior (int vetor[], int tam);
//================= main ===================================
int main(){

int vetor[TAM];

preencher(vetor, TAM);
printf("Vetor original: ");
exibir(vetor, TAM);

ordenar_crescente(vetor, TAM);
printf("Vetor ordenado de forma crescente: ");
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
void copiar_vetor (int vetor_origem[], int tam_origem, int vetor_destino[], int tam_destino){
    for (int i = 0; i < tam_origem; i++){
        vetor_destino[i] = vetor_origem[i];
    }
}//fim de copiar_vetor
int comparar_vetores (int primeiro_vetor[], int tam_primeiro, int segundo_vetor[], int tam_segundo){
    int sao_iguais = 1;
    for (int i = 0; i < tam_primeiro; i++){
        if(primeiro_vetor[i] != segundo_vetor[i]) return sao_iguais = 0;
    }
    return sao_iguais;
}//fim de comparar_vetores
void remover_elemento (int vetor[], int tam, int indice){
    for (int i = indice; i < tam; i ++){
        if(indice != (tam -1)) vetor[i] = vetor[(i + 1)];
    }
}//fim de remover_elemento
void ordenar_crescente (int vetor[], int tam){
    for (int i = 0; i < tam; i++){
        for (int j = i + 1; j < tam; j++){
            if (vetor[i] > vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}//fim de ordenar_crescente
int encontrar_maior (int vetor[], int tam){
    int maior = vetor[0];
    for (int i = 1; i < tam; i++){
        if(vetor[i] > maior) maior = vetor[i];
    }
    return maior;
}// encontrar_maior

