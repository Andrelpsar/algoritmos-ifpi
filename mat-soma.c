#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 2
#define COLUNA 3
//====================== assinaturas das funções ============================
void preencher_matriz_aleatoria (int matriz[][COLUNA], int linha);
void exibir_matriz (int matriz[][COLUNA], int linha);
void somar_matrizes (int matriz_1[][COLUNA], int linha_1, int matriz_2[][COLUNA], int linha_2,int matriz_resultado[][COLUNA], int linha_resultado);
//====================== main ===============================================
int main(){

int matriz_1[LINHA][COLUNA], matriz_2[LINHA][COLUNA], resultado[LINHA][COLUNA];

preencher_matriz_aleatoria(matriz_1, LINHA);
printf("Matriz 1:\n");
exibir_matriz(matriz_1, LINHA);

printf("\nPressione enter para continuar.\n");
getchar();

preencher_matriz_aleatoria(matriz_2, LINHA);
printf("Matriz 2 :\n");
exibir_matriz(matriz_2, LINHA);

somar_matrizes(matriz_1, LINHA, matriz_2, LINHA, resultado, LINHA);
printf("Matriz resultante da soma das duas primeiras matrizes:\n");
exibir_matriz(resultado, LINHA);

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
