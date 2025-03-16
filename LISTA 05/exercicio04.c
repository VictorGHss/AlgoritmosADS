/*4.Escrever um programa semelhante ao anterior que calcula as
médias aritméticas de cada intervalo e as escreve, juntamente
com o número de valores de cada intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,QUANT_INT_1, QUANT_INT_2, QUANT_FORA_INT, OPCAO,SOMA_INT_1,SOMA_INT_2,SOMA_FORA_INT;
    QUANT_INT_1 = QUANT_INT_2 = QUANT_FORA_INT = 0;
    SOMA_INT_1 = SOMA_INT_2 = SOMA_FORA_INT = 0;
    OPCAO = 0;
    while(OPCAO == 0)
    {
        printf("Digite um numero\n");
        scanf("%d", &NUM);
        if ((NUM >= 0) && (NUM <=24))
        {
            SOMA_INT_1 = SOMA_INT_1+ NUM;
            QUANT_INT_1++;
        }
        else if ((NUM >= 25) && (NUM <=50))
        {
            SOMA_INT_2 = SOMA_INT_2+ NUM;
            QUANT_INT_2++;
        }
        else
        {
            SOMA_FORA_INT = SOMA_FORA_INT + NUM;
            QUANT_FORA_INT++;
        }
        printf("Deseja continuar? 0 - Sim \n");
        scanf("%d", &OPCAO);
    }
    printf("A media de numeros no intervalo [0-24] e %.1f\n",(float)SOMA_INT_1/QUANT_INT_1);
    printf("A media de numeros no intervalo [25-50] e %.1f\n",(float)SOMA_INT_2/QUANT_INT_2);
    printf("A meda de numeros fora do intervalo e %.1f\n",(float)SOMA_FORA_INT/QUANT_FORA_INT);
    system("pause");
    return 0;
}
