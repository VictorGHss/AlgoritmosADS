/* 2.	Faça um algoritmo para calcular e imprimir:
a)	Área de um quadrado
b)	Área de um triangulo
c)	Área de um cilindro
Para cada opção faça a leitura dos dados necessários em um procedimento.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void AREA_QUADRADO();
void AREA_TRIANGULO();
float AREA_LATERAL_CILINDRO(float R, float H);
float AREA_BASE(float RAIO);
void AREA_CILINDRO();

int main()
{
	AREA_QUADRADO();
    AREA_TRIANGULO();
    AREA_CILINDRO();
    system("pause");
    return 0;
}

void AREA_QUADRADO()
{
	float AREA, LADO;
	printf("Digite o valor do lado\n");
	scanf("%f", &LADO);
	AREA = LADO * LADO;
	printf("A area do quadrado e %.1f\n", AREA);
}

void AREA_TRIANGULO()
{
	float AREA, BASE, ALTURA;
	printf("Digite o valor da base e da altura\n");
	scanf("%f  %f", &BASE, &ALTURA);
	AREA = (BASE * ALTURA)/2;
	printf("A area do triangulo e %.1f\n", AREA);

}

float AREA_LATERAL_CILINDRO(float R, float H)
{
	float AREA_LAT;
	AREA_LAT = 2 * 3.14 * R * H;
	return AREA_LAT;
}
float AREA_BASE(float RAIO)
{
	float AR_BASE;
	AR_BASE = 3.14 * pow (RAIO,2);
	return AR_BASE;
}
void AREA_CILINDRO()
{
	float AREA, AR_LAT, AR_B, RAIO, ALTURA;
	printf("Digite o raio da base e altura do cilindro\n");
	scanf("%f  %f", &RAIO, &ALTURA);
	AR_LAT  = AREA_LATERAL_CILINDRO(RAIO, ALTURA);
	AR_B = AREA_BASE (RAIO);
	AREA = AR_LAT + 2 * AR_B;
	printf("A area do cilindro e %.1f\n", AREA);
}
