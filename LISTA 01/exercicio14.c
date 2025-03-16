/*14. Desenvolva uma aplicação que receba a idade de um indivíduo em dias e
mostre-a expressa em anos, meses e dias.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IDADE_DIA, DIAS, MESES, ANOS;
	printf("Digite a sua idade em dias\n");
    scanf("%d" ,&IDADE_DIA);
    ANOS = IDADE_DIA / 365;
    MESES = (IDADE_DIA % 365)/30;
    DIAS = (IDADE_DIA % 365)%30;
    printf("\nVoce tem %d anos %d meses e %d dias\n\n", ANOS, MESES, DIAS);
    system("pause");
    return 0;
}
