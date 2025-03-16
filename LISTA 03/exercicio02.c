/*2.Criar um programa para ler o preço e a categoria de um produto.
Calcular o reajuste de acordo com a categoria: se a mesma for A=50%, B=25%,
C=15% e outras 5%. Depois mostre o valor antigo, o percentual de reajuste e o valor reajustado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PRECO, PRECO_REAJ;
    char CATEGORIA;
    printf("Digite o preco do produto\n");
    scanf("%f", &PRECO);
    printf("Digite categoria do produto\n");
    fflush(stdin);
    scanf("%c", &CATEGORIA);
    switch(CATEGORIA)
    {
        case 'A':
            PRECO_REAJ = PRECO + (PRECO * 0.50);
            //PRECO_REAJ =  (PRECO * 1.50);
            printf("O preco antigo e %.1f\n", PRECO);
            printf("Teve 50%% de reajuste e o valor final foi %.1f\n", PRECO_REAJ);
            break;
        case 'B':
            PRECO_REAJ = PRECO + (PRECO * 0.25);
            printf("O preco antigo e %.1f\n", PRECO);
            printf("Teve 25%% de reajuste e o valor final foi %.1f\n", PRECO_REAJ);
            break;
        case 'C':
            PRECO_REAJ = PRECO + (PRECO * 0.15);
            printf("O preco antigo e %.1f\n", PRECO);
            printf("Teve 15%% de reajuste e o valor final foi %.1f\n", PRECO_REAJ);
            break;
        default:
            PRECO_REAJ = PRECO + (PRECO * 0.05);
            printf("O preco antigo e %.1f\n", PRECO);
            printf("Teve 5%% de reajuste e o valor final foi %.1f\n", PRECO_REAJ);
    }
    system("pause");
	return 0;
}
