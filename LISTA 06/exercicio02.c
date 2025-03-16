/*2.Fazer um programa que calcule e escreva a soma dos
50 primeiros termos da seguinte série:

    S= 1000/1 – 997/2 + 994/3 -991/4 ...
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DEN, CONT;
    float  SOMA;
    CONT = 0;
    NUM = 1000;
    DEN = 1;
    SOMA = 0;
    do
    {
        if (DEN % 2 == 0)
        {
            SOMA -= NUM/DEN;//SOMA = SOMA - NUM/DEN;
            printf(" - ");
        }
        else
        {
            SOMA += NUM/DEN;//SOMA = SOMA + NUM/DEN;
            printf(" + ");
        }
        printf("%d/%d",NUM,DEN);
        NUM-=3;//NUM= NUM - 3;
        DEN++;
        CONT++;
    }while(CONT<50);
    printf("\n\nSoma = %.2f\n\n", SOMA);
    system("pause");
	return 0;
}
