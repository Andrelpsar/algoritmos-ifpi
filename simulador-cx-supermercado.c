#include <stdio.h>
#include <stdlib.h>

int main (){

float precoProduto = -1, soma = 0;
int cont = 0, opcao = 1, cliente = 0;

while (opcao == 1){
    soma = 0;
    cont = 0;
    do{

        do {
            printf("Digite o preco do produto.\nDigite 0 para terminar de comprar.\n");
            scanf("%f", &precoProduto);
        }while (precoProduto < 0);

        if(precoProduto != 0){
        cont ++;
        soma += precoProduto;
        }
    }while (precoProduto != 0);

    if (soma !=0){
    cliente++;
    printf("Para o cliente %d\nQuantidade de produtos: %d\nValor: R$%.2f\n",cliente, cont, soma);
    }

    printf("Digite 1 para cadastrar as compras do próximo cliente.\n");
    scanf("%d", &opcao);
}

printf("\nPrograma Finalizado.\nQuantida de clientes atendidos: %d.\n", cliente);

return 0;
}
