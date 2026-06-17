#include <stdio.h>
#include <stdlib.h>

//============ assinaturas das funções ==================
void decompor (float num, int *parteInteira, float *parteFracionaria);

//============= main ====================================
int main() {
float num, parteReal;
int parteInteira;

printf("Digite um numero real.\n");
scanf("%f", &num);

decompor(num, &parteInteira, &parteReal);

printf("Parte inteira do numero %f: %d\nParte fracionaria do numero: %f\n", num, parteInteira, parteReal);

return 0;
}// fim do main
//=================== corpos das funções ================
void decompor (float num, int *parteInteira, float *parteFracionaria){
*parteInteira = num;
*parteFracionaria = num - *parteInteira;

}//fim de decompor
