/*1.	Escrever um programa que leia 8 valores inteiro positivo,
um de cada vez, e encontre e escreve o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, MAIOR, CONT;
    MAIOR = 0;
    CONT = 0;
    while(CONT < 8)
    {
        printf("Digite o %d%c numero\n", CONT+1,167);//167 é o º na tabela ascii
        scanf("%d", &NUM);
        if (NUM >=0 )
        {
            if (NUM >= MAIOR)
            {
                MAIOR = NUM;
            }
            CONT++;
        }
        else
            printf("Informe um numero positivo\n");
    }
    printf("\nO maior numero e %d\n\n", MAIOR);
    system("pause");
    return 0;
}
