#include <stdio.h>
#include <stdlib.h>

int main() {

// este problema eh para evidenciar que a linguagem C consegue comparar caracteres com inteiros, seguindo a tabela ASCII

char letra;

printf("Digite uma letra:\n");
scanf(" %c", &letra);

letra == 65? printf("Voce digitou a letra \"A\"!\n") : printf("Voce não digitou a letra \"A\".\n");

return 0;
}
