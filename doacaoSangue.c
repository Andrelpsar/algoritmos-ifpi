#include <stdio.h>

int main (){

int idade;
float peso;

printf("Informe a sua idade:\n");

printf("idade: %d\n", idade);

printf("Informe seu peso:\n");
scanf("%f", &peso);

if((idade >= 18 && idade <=69) && peso >= 50){
    printf("Voce pode doar sangue!\n");
}else{
    printf("Voce NAO pode doar sangue.\n");
}

return 0;
}
