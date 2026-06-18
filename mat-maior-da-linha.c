#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 5
#define COLUNA 5
//====================== assinaturas das funções ============================
void preencher_matriz_aleatoria (int matriz[][COLUNA], int linha);
void exibir_matriz (int matriz[][COLUNA], int linha);
void somar_matrizes (int matriz_1[][COLUNA], int linha_1, int matriz_2[][COLUNA], int linha_2,int matriz_resultado[][COLUNA], int linha_resultado);
void exibir_maior_elemento_linha (int matriz[][COLUNA], int linha);
int encontrar_maior_elemento_linha (int matriz[][COLUNA], int linha);
//====================== main ===============================================
int main(){

int matriz_1[LINHA][COLUNA];

preencher_matriz_aleatoria(matriz_1, LINHA);
printf("Matriz:\n");
exibir_matriz(matriz_1, LINHA);

exibir_maior_elemento_linha(matriz_1, LINHA);

return 0;
}//fim do main
//======================= corpos das funções ================================
void preencher_matriz_aleatoria (int matriz[][COLUNA], int linha){
    srand(time(NULL));
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < COLUNA; j++){
            matriz[i][j] = (rand() % 199) - 99;
        }
    }
}//fim de preencher_matriz_aleatoria
void exibir_matriz (int matriz[][COLUNA], int linha){
    for (int i = 0; i < linha; i++){
        printf("|");
        for (int j = 0; j < COLUNA; j++){
            if (j < COLUNA - 1) printf("%d, ", matriz[i][j]);
            else printf("%d", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}//fim de exibir_matriz
void somar_matrizes (int matriz_1[][COLUNA], int linha_1, int matriz_2[][COLUNA], int linha_2,int matriz_resultado[][COLUNA], int linha_resultado){
    for(int i = 0; i < linha_resultado; i++){
        for (int j = 0; j < COLUNA; j++){
            matriz_resultado[i][j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }
}//fim de somar_matrizes
void exibir_maior_elemento_linha (int matriz[][COLUNA], int linha){
    for (int i = 0; i < linha; i++){
        printf("Maior elemento da linha %d eh: %d\n", i + 1, encontrar_maior_elemento_linha(matriz, i));
    }
}//fim de exibir_maior_elemento_linha
int encontrar_maior_elemento_linha (int matriz[][COLUNA], int linha){
    int maior = -99;
    for(int i = 0; i < COLUNA; i++){
        if(maior < matriz[linha][i]) maior = matriz[linha][i];
    }
    return maior;
}//fim de encontrar_maior_elemento_linha
