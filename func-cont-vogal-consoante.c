#include <stdio.h>
#include <stdlib.h>

//================= assinaturas das funções ==========================
void contarLetras (char c, int* vogais, int* consoantes);

//================== main ============================================
int main() {

int vogal = 0, consoante = 0;
char letra;

do{
    printf("Digite uma letra (Digite '.' para parar.)\n");
    scanf(" %c", &letra);
    contarLetras(letra, &vogal, &consoante);
}while (letra != '.');

printf("Foram contadas %d vogal(is) e %d consoante(s).\n", vogal, consoante);

return 0;
}// fim do main

//=========================== corpos das funções =======================
void contarLetras (char c, int* vogais, int* consoantes){

//convertendo as letras maiúsculas para minúsculas. Aqui usando o código da tabela ascii
    if('A' <= c && c <= 'Z'){
        //a distância entre as letras maiúsculas e minúsculas na tabela ascii é de 32 posições
        c += 32;
    }//fim do if que converte maiúscula em minúscula

//o teste abaixo é para saber se é letra
    if('a' <= c && c <= 'z'){

        switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            (*vogais)++;
            break;
        default:
            (*consoantes)++;
        }//fim do switch para contar vogal/consoante

    }//fim da verificação se é letra

}// fim de contarLetras
