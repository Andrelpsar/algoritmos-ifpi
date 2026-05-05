#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(NULL));

int numero = rand() % 100;
int palpite;

printf("%d\n", numero);

printf("Advinhe qual eh o numero. \n");


for (int i = 5; i > 0; i--){

scanf("%d", &palpite);

    if(palpite > numero){
        printf("Seu palpite foi maior que o numero.\n");
    }else if (palpite < numero){
        printf("Seu palpite foi menor que o numero.\n");
    } else {
        printf("Parabens, voce venceu. Batatas fritas.\n");
        break;
    }

    if (i == 1){
    printf("Voce nao advinhou, o numero era %d", numero);
    }
}


return 0;
}
