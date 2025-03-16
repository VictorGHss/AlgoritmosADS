/*7.Fulano tem 1,50 metro e cresce 2 centímetros por ano,
enquanto Ciclano tem 1,10 metro e cresce 3 centímetros por ano.
Construa um programa que calcule e imprima quantos anos
serão necessários para que Ciclano seja maior que Fulano.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float FULANO, CICLANO;
    int ANOS;
    FULANO = 1.50;
    CICLANO = 1.10;
    ANOS = 0;
    do
    {
        FULANO = FULANO + 0.02;
        CICLANO = CICLANO + 0.03;
        ANOS++;
    }while (FULANO >= CICLANO);
    printf("Serao necessarios %d anos para que Fulano seja maior que Ciclano\n", ANOS);
    system("pause");
	return 0;
}
