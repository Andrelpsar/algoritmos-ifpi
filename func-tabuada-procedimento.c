#include <stdio.h>
#include <stdlib.h>

//============ assinaturas das funcões =====================
void imprimirTabuada (int num);

//================== main =============================

int main (){

int num;

printf("Forneca um numero para ver a tabuada dele de 1 até 10: ");
scanf("%d", &num);

imprimirTabuada(num);

return 0;
} //=======================fim do main ====================

//========================== corpos das funções =========================

void imprimirTabuada (int num){

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
