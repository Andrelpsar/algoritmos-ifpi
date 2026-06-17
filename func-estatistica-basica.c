#include <stdio.h>
#include <stdlib.h>

//================== assinaturas das funções =========================
void calcularEstatisticas (int n1, int n2, int n3, int *soma, float *media, int *maior);
void fornecerNumero(int *n);
//==================== main ==========================================
int main() {
int n1, n2, n3, soma, maior;
float media;

fornecerNumero(&n1);
fornecerNumero(&n2);
fornecerNumero(&n3);

calcularEstatisticas(n1, n2, n3, &soma, &media, &maior);

printf("Numeros digitados: n1 = %d; n2 = %d; n3 = %d.\n", n1, n2, n3);
printf("\nA soma dos numeros eh: %d\nA media dos numeros eh: %.2f\nO maior numero eh: %d\n", soma, media, maior);

return 0;
}// fim do main

//=============corpos das funções =====================================
void calcularEstatisticas (int n1, int n2, int n3, int *soma, float *media, int *maior){

*soma = n1 + n2 + n3;
*media = (float)(n1 + n2 + n3)/3;

if (n1 < n2){
    int aux = n1;
    n1 = n2;
    n2 = aux;
}

if (n1 < n3){
    int aux = n1;
    n1 = n3;
    n3 = aux;
}

*maior = n1;

}//fim de calcular estatísticas

void fornecerNumero(int *n){
printf("Digite um numero:\n");
scanf("%d", n);

}//fim de fornecerNumeros
