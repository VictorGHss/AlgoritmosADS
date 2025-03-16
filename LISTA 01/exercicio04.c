#include<stdio.h>
#include<stdlib.h>

int main()
{
	float NUM1, NUM2, SOMA, PRODUTO, DIVISAO, SUBTRACAO;
	printf("Digite um numero\n");
    scanf("%f",&NUM1);
    printf("Digite um numero\n");
    scanf("%f",&NUM2);
    SOMA = NUM1 + NUM2;
    PRODUTO = NUM1 * NUM2;
    DIVISAO = NUM1 / NUM2;
    SUBTRACAO = NUM1 - NUM2;
    printf("A soma foi %.1f \n",SOMA);
    printf("O produto foi %.1f \n",PRODUTO);
    printf("A divisao foi %1.f \n",DIVISAO);
    printf("A subtracao foi %1.f \n",SUBTRACAO);
    system("pause");
    return 0;
}
