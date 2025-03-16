/*1. Fa�a um algoritmo para ler, calcular e escrever a m�dia entre tr�s n�meros conforme as op��es abaixo:
a) A m�dia aritm�tica dada pela f�rmula: 	a + b + c
                                            3

b) A m�dia harm�nica dada pela f�rmula:	    3____
                                        1 + 1 + 1
                                        a    b    c

c) A m�dia geom�trica dada pela f�rmula:

Para cada op��o crie um procedimento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//prot�tipo das fun��es
void MEDIA_ARIT(float N1, float N2, float N3);
void MEDIA_GEO(float NUM1, float NUM2, float NUM3);
void MEDIA_HAR(float NUM1, float NUM2, float NUM3);


 int main()
{
	float A, B, C;
	printf("Digite tres valores\n");
	scanf("%f %f %f", &A, &B, &C);
    MEDIA_ARIT(A,B,C);
    MEDIA_GEO(A,B,C);
    MEDIA_HAR(A,B,C);
    system("pause");
    return 0;
}

void MEDIA_ARIT(float N1, float N2, float N3)
{
	float RES;
	RES = (N1 + N2 + N3) / 3;
	printf("A media aritmetica e %.1f\n", RES);
}

void MEDIA_HAR(float NUM1, float NUM2, float NUM3)
{
	float RES;
	RES = 3 / (((float)1/NUM1)+((float)1/NUM2)+((float)1/NUM3));
	printf("A media harmonica e %.1f\n", RES);
}

void MEDIA_GEO(float NUM1, float NUM2, float NUM3)
{
    float RES;
	RES = pow((NUM1*NUM2*NUM3),(float)1/3);
	printf("A media geometrica e %.1f\n", RES);
}
