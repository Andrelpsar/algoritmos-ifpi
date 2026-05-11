#include <stdio.h>

int main (){

int potencia =1, digito =25, cont = 2;

for(int j = 1; j <= cont; j++){
            potencia *= digito;
        }
printf("potencia = %d", potencia);
return 0;
}
