/*4.	Elabore um algoritmo que, apresente um menu, com as seguintes op��es:
a.	Calcular a m�dia aritm�tica
b.	Calcular a m�dia harm�nica
c.	Calcular a m�dia geom�trica.
Conforme a op��o do usu�rio realize a opera��o selecionada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prot�tipo das fun��es
void MEDIA_ARIT(float N1, float N2);
void MEDIA_GEO(float NUM1, float NUM2);
void MEDIA_HAR(float NUM1, float NUM2);


 int main()
{
	float NUM1,NUM2;
	int OPCAO;
	printf("Digite dois valores");
	scanf("%f %f", &NUM1, &NUM2);
	printf("Escolha a sua opcao:\n\t1 - Calcular media aritmetica\n\t2 - Calcular a media geometrica \n\t3 - Calcular a media harmonica\n");
	scanf("%d", &OPCAO);
	switch (OPCAO)
	{
        case 1:
            MEDIA_ARIT(NUM1, NUM2);
            break;
        case 2:
        {
            MEDIA_GEO(NUM1, NUM2);
            break;
        }
        case 3:
            MEDIA_HAR(NUM1, NUM2);
            break;
        default:
            printf("Opcao invalida\n");
	}
    system("pause");
    return 0;
}

void MEDIA_ARIT(float N1, float N2)
{
	float RES;
	RES = (N1 + N2) / 2;
	printf("A media aritmetica e %.2f\n", RES);
}

void MEDIA_HAR(float NUM1, float NUM2)
{
	float RES;
	RES = 2 / ((1/NUM1)+(1/NUM2));
	printf("A media harmonica e %.2f\n", RES);
}

void MEDIA_GEO(float NUM1, float NUM2)
{
    float RES;
	RES = pow((NUM1*NUM2),(float)1/2);
	printf("A media geometrica e %.2f\n", RES);
}
