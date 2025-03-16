/*3. Perguntar ao usuário se ele deseja calcular a área de um:
a.	triângulo
b.	circulo
c.	cubo
d.	cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int OPCAO;
    const float PI = 3.14;
    float BASE, ALTURA,AREA, AR_LAT, AR_B, RAIO, MEDIDA_ARESTA;
    printf("Escolha:\n\t1 - Area do Triangulo\n\t2 - Area do Circulo\n\t3 - Area do Cubo\n\t4 - Area do Cilindro\n");
    scanf("%d",&OPCAO);
    switch(OPCAO)
    {
        case 1:
        {
            printf("Digite o valor da base\n");
            scanf("%f",&BASE);
            printf("Digite o valor da altura\n");
            scanf("%f",&ALTURA);
            AREA = (BASE *ALTURA)/2;
            printf("A area do triangulo e %.1f\n", AREA);
            break;
        }
        case 2:
            printf("Digite o raio\n");
            scanf("%f", &BASE);
            AREA = PI * (BASE * BASE);
            printf("A area do circulo e %.1f\n", AREA);
            break;
        case 3:
            printf("Digite a medida da aresta\n");
            scanf("%f",&MEDIDA_ARESTA);
            AREA = 6 * pow(MEDIDA_ARESTA,2);
            printf("A area do cubo e %.1f\n",AREA);
            break;
        case 4:
            printf("Digite o raio da base e altura do cilindro");
            scanf("%f  %f", &RAIO, &ALTURA);
            AR_LAT = 2 * PI * RAIO * ALTURA;
            AR_B = PI * pow (RAIO,2);
            AREA = AR_LAT + 2 * AR_B;
            printf("A area do cilindro e %.1f", AREA);
            break;
        default:
            printf("Voce informou uma opcao invalida!\n\n");
    }
 	return 0;
}
