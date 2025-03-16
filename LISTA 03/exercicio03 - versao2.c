/*3. Perguntar ao usuário se ele deseja calcular a área de um:
a.	triângulo
b.	circulo
c.	cubo
d.	cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//prototipo das funções
void AREA_TRIANGULO();
void AREA_CIRCULO();
void AREA_CUBO();
void AREA_CILINDRO();
float AREA_BASE(float RAIO);
float AREA_LATERAL_CILINDRO(float R, float H);
void MENU();


void AREA_TRIANGULO()
{
    float BASE, ALTURA, AREA;
    printf("Digite a base\n");
    scanf("%f",&BASE);
    printf("Digite a altura\n");
    scanf("%f",&ALTURA);
    AREA = (BASE * ALTURA)/2;
    printf("A area do triangulo e %.1f\n",AREA);
}


void AREA_CUBO()
{
    float AREA, MEDIDA_ARESTA;
    printf("Digite a medida da aresta\n");
    scanf("%f",&MEDIDA_ARESTA);
    AREA = 6 * pow(MEDIDA_ARESTA,2);
    printf("A area do cubo e %.1f\n",AREA);
}

void AREA_CIRCULO()
{
    float AREA, RAIO;
    const float PI = 3.14;
    printf("Digite o raio");
    scanf("%f",&RAIO);
    AREA = PI * pow(RAIO,2);
    printf("A area do circulo e %.1f\n",AREA);
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
	printf("Digite o raio da base e altura do cilindro");
	scanf("%f  %f", &RAIO, &ALTURA);
	AR_LAT  = AREA_LATERAL_CILINDRO(RAIO, ALTURA);
	AR_B = AREA_BASE (RAIO);
	AREA = AR_LAT + 2 * AR_B;
	printf("A area do cilindro e %.1f", AREA);
}


void MENU()
{
    int OPCAO;
    printf("Escolha:\n\t1 - Area triangulo\n\t2 - Area circulo\n\t3 - Area cubo\n\t4 - Area cilindro\n\t5 - Sair\n");
    scanf("%d",&OPCAO);
    switch(OPCAO)
    {
        case 1:
            AREA_TRIANGULO();
            break;
        case 2:
            AREA_CIRCULO();
            break;
        case 3:
            AREA_CUBO();
            break;
        case 4:
            AREA_CILINDRO();
            break;
        case 5:
            printf("Encerrando o programa\n");
            break;
        default:
            printf("Opcao invalida");
    }
}

int main()
{
    MENU();
    return 0;
}
