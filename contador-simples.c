#include <stdio.h>
#include <stdlib.h>

int main() {

int n;

printf("Digite um numero inteiro:\n");
scanf("%d", &n);
printf("\n");

for(int i = 1; i <= n; i++){
    printf("%d\n", i);
}

return 0;
}
