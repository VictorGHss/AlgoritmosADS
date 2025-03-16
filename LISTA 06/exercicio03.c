/*3. Fazer um programa que:
a)	leia o valor de X de uma unidade de entrada;
b)	calcule e escreva o valor do seguinte somatório:

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int EXP, DEN, X;
    float  SOMA;
    EXP = 25;
    DEN = 1;
    SOMA = 0;
    printf("Digite o valor de X\n");
    scanf("%d",&X);
    do
    {
        if (DEN % 2 == 0)
        {
            SOMA = SOMA -(pow(X,EXP))/DEN;
            printf(" - ");
        }
        else
        {
            SOMA = SOMA +(pow(X,EXP))/DEN;
            printf(" + ");
        }
        printf("(%d^%d)/%d",X, EXP,DEN);
        EXP--;
        DEN++;
    }while(DEN<=25);
    printf("\n\nSoma = %.2f\n\n", SOMA);
    system("pause");
	return 0;
}
