#include <stdio.h>
#include <stdlib.h>

int main (){

int celsius = 0;

printf("Digite a temperatura em celsius.\n");
scanf("%d", &celsius);

float fahrenheit = ((celsius*9.0)/5.0) + 32;

printf("Convertendo %dº celsius para fahrenheit fica %fº.\n", celsius, fahrenheit);

return 0;
}
