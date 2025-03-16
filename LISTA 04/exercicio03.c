/*3.Faça um algoritmo para calcular o valor da diagonal de um paralelepípedo de lados a, b, c:

para este exercício utilize dois procedimentos: um para encontrar L e outro para D.
.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CALCULAR_DIAGONAL(float L, float C)
{
	float D;
	D = sqrt(pow(L,2)+pow(C,2));
	return D;
}

float CALCULAR_LADO(float A, float B)
{
	float L;
	L = sqrt(pow(A,2)+pow(B,2));
	return L;
}


int main()
{
	float A, B, C, LADO;
    printf("Digite os tres lados de um paralelepipedo\n");
    scanf("%f %f %f", &A, &B, &C);
    LADO = CALCULAR_LADO(A, B);
    printf("A diagonal do paralelepipedo e %.1f\n", CALCULAR_DIAGONAL(LADO, C));
    system("pause");
    return 0;
}

