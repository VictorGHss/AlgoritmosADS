/*5.Escreva um programa que realize o cálculo do fatorial de um número inteiro e positivo informado pelo usuário.*/

#include<stdio.h>

int main()
{
    int NUM, FAT=1;
    printf("Digite um numero\n");
    scanf("%d",&NUM);
    if (NUM > 0)
    {
        while (NUM >= 2)
        {
            FAT = FAT *NUM;
            NUM--;
        }
        printf("O fatorial e %d\n", FAT);
    }
    else
        printf("Numero invaliso\n");
    return 0;
}
