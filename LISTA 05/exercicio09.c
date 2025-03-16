/*9) Escreva um programa que calcule e apresente a série de
fibonacci. A quantidade de termos a serem apresentados devem
ser informados pelo usuário. Apresente também a somatória de
todos os termos exibidos pela serie de fibonacci solicitada.
Série de Fibonacci = “1, 1, 2, 3, 5, 8, 13, 21, 34, 55”*/

#include <stdio.h>
#include <stdlib.h>

void SERIE_FIBONACCI();

//------------------------------------------------------
int main()
{
    SERIE_FIBONACCI();
    system("pause");
 	return 0;
}
//----------------------------------------------
void SERIE_FIBONACCI()
{
    int PRI, SEG, TER, QUANT, CONT;
    printf("Digite a quantidade de termos da serie\n");
    scanf("%d",&QUANT);
    PRI = 1;
    SEG = 1;
    printf("%d\t%d\t",PRI, SEG);
    CONT=2;
    while(CONT<QUANT)
    {
        TER = PRI + SEG;
        printf("%d\t", TER);
        CONT++;
        PRI= SEG;
        SEG = TER;
    }
    printf("\n\n");
}
