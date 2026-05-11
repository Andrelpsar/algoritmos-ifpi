#include <stdio.h>
#include <stdlib.h>

int main (){

int quantSetor, cont = 0;
float temp, maiorTemp;

printf("Informe a quantidade de setores.\n");
scanf("%d", &quantSetor);

for (int i = 1; i <= quantSetor; i++){
    temp = -998;
    maiorTemp = -998;

    while (1){
        printf("Informe a temperatura do setor.\nDigite -999 para sair.\n");
        scanf("%f", &temp);
        if(temp == -999){
            break;
        }
        if(temp >= maiorTemp){
            maiorTemp = temp;
        }
    }
    printf("A maior temperatura do setor %d eh %.2f.\n", i, maiorTemp);

    if(maiorTemp > 0.0){
        printf("Status: Setor Apto para Terraformação.\n");
        cont++;
    } else {
        printf("Setor inospito.\n");
    }

}//fim do for

printf("Quantidade total de setores que foram considerados aptos: %d.\n", cont);

return 0;
}
