#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int SEXO;
    float PESO, ALTURA;
    printf("Digite a sua altura\n");
    scanf("%f", &ALTURA);
    printf("Digite o sexo: 1 - masculino ou 0 - feminino\n");
    scanf("%d", &SEXO);
    if (SEXO == 1)
    {
        PESO = (72.7 * ALTURA)-58;
        printf("O peso ideal e %.1f\n", PESO);
    }
    else if(SEXO == 0)
    {
        PESO = (62.1* ALTURA)-44.7;
        printf("O peso ideal e %.1f\n", PESO);
    }
    else
        printf("Opcao invalida\n");
    system("pause");
	return 0;
}
