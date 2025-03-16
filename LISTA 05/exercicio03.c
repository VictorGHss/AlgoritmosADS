/*3.Escrever um programa que lê um número não conhecido de valores,
um de cada vez, e conta quantos deles estão
em cada um dos intervalos:  [0-24], [25-50] e fora deste intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,QUANT_INT_1, QUANT_INT_2, QUANT_FORA_INT, OPCAO;
    QUANT_INT_1 = QUANT_INT_2 = QUANT_FORA_INT = 0;
    OPCAO = 0;
    while(OPCAO == 0)
    {
        printf("Digite um numero\n");
        scanf("%d", &NUM);
        if ((NUM >= 0) && (NUM <=24))
            QUANT_INT_1++;
        else if ((NUM >= 25) && (NUM <=50))
            QUANT_INT_2++;
        else
           QUANT_FORA_INT++;
        printf("Deseja continuar? 0 - Sim \n");
        scanf("%d", &OPCAO);
    }
    printf("A quantidade de numeros no intervalo [0-24] e %d\n",QUANT_INT_1);
    printf("A quantidade de numeros no intervalo [25-50] e %d\n",QUANT_INT_2);
    printf("A quantidade de numeros fora do intervalo e %d\n",QUANT_FORA_INT);
    system("pause");
    return 0;
}
