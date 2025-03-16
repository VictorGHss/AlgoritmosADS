#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IDADE;
    printf("Digite a sua idade\n");
    scanf("%d", &IDADE);
    if ((IDADE >= 1)&&(IDADE <=13))
        printf("Crianca\n");
    else if((IDADE > 13)&&(IDADE <= 20))
        printf("Adolescente\n");
    else if((IDADE > 20)&&(IDADE <= 50))
        printf("Adulto\n");
    else if(IDADE > 50)
        printf("Idosa\n");
    else
        printf("Opcao invalida\n");
    system("pause");
	return 0;
}
