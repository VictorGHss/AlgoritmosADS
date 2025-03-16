/*6. Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa.
Para isso o usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão.
Apresente o valor convertido. Para realizar as conversões utilize funções especificas.*/
#include <stdio.h>
#include <stdlib.h>

void CONVERTER_REAL_DOLAR(float valor_cotacao);
void CONVERTER_DOLAR_REAL(float valor_cotacao);


void CONVERTER_REAL_DOLAR(float valor_cotacao)
{
    float reais, conversao;
    printf("Informe o valor em reais para converter em dolar\n");
	scanf("%f",&reais);
    conversao = (float)reais/valor_cotacao;
    printf("%.1f reais equivalem a %.2f dolares\n", reais, conversao);
}
//--------------------------------
void CONVERTER_DOLAR_REAL(float valor_cotacao)
{
     float dolar, conversao;
     printf("Informe o valor em dolar para converter em reais\n");
	 scanf("%f",&dolar);
     conversao  = dolar*valor_cotacao;
     printf("%.1f dolares equivalem a %.2f reais\n", dolar, conversao);
}
//---------------------------------
int main()
{
    float cotacao;
	int opcao;
	printf("Digite o valor da cotacao do dolar:\n");
	scanf("%f",&cotacao);
    printf("Escolha uma das conversões: <1> Real para Dolar; <2> Dolar para Real");
    scanf("%d",&opcao);
    switch(opcao)
	{
		case 1:
		    CONVERTER_REAL_DOLAR(cotacao);
		    break;
        case 2:
            CONVERTER_DOLAR_REAL(cotacao);
            break;
        default:
            printf("Opção inválida!\n");
	}
    system("pause");
    return 0;
}
