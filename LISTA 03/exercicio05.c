/*5. Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa.
Para isso o usuário deverá informar o valor em uma moeda a cotação e fazer a sua
conversão. Apresente o valor convertido.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float DOLAR, VALOR;
    int OPCAO;
    printf("Escolha a sua opcao\n\t1 - converter real para dolar\n\t2 - converter dolar para real");
    scanf("%d",&OPCAO);
    printf("Digite o valor do dolar\n");
    scanf("%f",&DOLAR);
    switch(OPCAO)
    {
        case 1:
        {
            printf("Digite o valor em real\n");
            scanf("%f",&VALOR);
            printf("R$ %.2f equivale a $ %.2f\n", VALOR, VALOR*DOLAR);
            break;
        }
        case 2:
            printf("Digite o valor em dolar\n");
            scanf("%f",&VALOR);
            printf("$ %.2f equivale a R$ %.2f\n", VALOR, VALOR*DOLAR);
            break;
        default:
            printf("Opcao invalida\n");
    }
    return 0;
}
