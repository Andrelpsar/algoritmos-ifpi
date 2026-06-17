#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//============ assinaturas das funções ==============================
int calcularRaizes (float a, float b, float c, float *x1, float *x2);
//============ main =================================================
int main() {
float a, b, c, x1, x2;

printf("Programa para calcular equacao de segundo grau (ax² + bx + c = 0)\n");
printf("\nForneca o valor de a:\n");
scanf("%f", &a);
printf("Forneca o valor de b:\n");
scanf("%f", &b);
printf("Forneca o valor de c:\n");
scanf("%f", &c);

if (calcularRaizes(a, b, c, &x1, &x2) == 0){
    printf("\nA equacao nao possui raizes reais.\n");
}
if (calcularRaizes(a, b, c, &x1, &x2) == 1){
    printf("\nA equacao possui uma raiz real: %.2f\n", x1);
}
if (calcularRaizes(a, b, c, &x1, &x2) == 2){
    printf("\nA equacao possui duas raizes reais: x1 = %.2f x2 = %.2f\n", x1, x2);
}

return 0;
}// fim do main
//====================== corpos das funções ===========================
int calcularRaizes (float a, float b, float c, float *x1, float *x2){
    /*
    a*pow(x, 2) + b*x + c = 0
    delta = pow(b, 2) - 4*a*c
    *x1 = (-b + sqrt(delta))/2a
    *x2 = (-b - sqrt(delta))/2a
    */
    float delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
        return 0;
    if (delta == 0){
        *x1 = -b/(2 * a);
        *x2 = *x1;
        return 1;
    }else {
        *x1 = (-b + sqrt(delta))/(2 * a);
        *x2 = (-b - sqrt(delta))/(2 * a);
        return 2;
    }
}// fim de calcularRaizes
