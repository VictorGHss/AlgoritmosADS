/*5.Escreva um programa que realize o c�lculo do fatorial de um n�mero inteiro e positivo informado pelo usu�rio.*/

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
