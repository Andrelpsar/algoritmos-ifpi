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

int matriz_1[2][3], transposta[3][2];

preencher_matriz_aleatoria(matriz_1, 2);
printf("Matriz:\n");
exibir_matriz(matriz_1, 2);

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
        transposta[i][j] = matriz_1[j][i];
    }
}
printf("Matriz transposta:\n");
 for (int i = 0; i < 3; i++){
        printf("|");
        for (int j = 0; j < 2; j++){
            if (j < 2 - 1) printf("%d, ", transposta[i][j]);
            else printf("%d", transposta[i][j]);
        }
        printf("|\n");
    }

/*
[1][2][3]  [1][4]
[4][5][6]  [2][5]
           [3][6]
*/

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
