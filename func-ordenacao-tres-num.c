#include <stdio.h>
#include <stdlib.h>
//============= assinaturas das funções ========================
void ordenar3 (int *a, int *b, int *c);
void fornecerNum (int *num);
void trocar (int **a, int **b);
//============ main ============================================
int main() {
int a, b, c;

fornecerNum(&a);
fornecerNum(&b);
fornecerNum(&c);

printf("\nNumeros fornecidos: %d %d %d\n", a, b, c);

ordenar3(&a, &b, &c);

printf("\nNumeros ordenados de forma crescente: %d %d %d\n", a, b, c);

return 0;
}// fim do main
//====================== corpos das funções ====================
void ordenar3 (int *a, int *b, int *c){
// a < b <c
if (*a > *b){
    trocar(&a, &b);
}
if (*b > *c){
    trocar(&b, &c);
}
if (*a > *b){
    trocar(&a, &b);
}
} //fim de ordenar3
void fornecerNum (int *num){
    printf("Forneca um numero:\n");
    scanf("%d", num);
}//fim de fornecerNum
void trocar (int **a, int **b){
    int aux = **a;
    **a = **b;
    **b = aux;
}//fim de trocar
