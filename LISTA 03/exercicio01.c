/*1.Fazer um programa para ler a primeira letra do estado civil de uma pessoa (S - solteiro, C - casado, V- viúvo,
D- divorciado) e mostrar uma mensagem com a descrição. Considere letras maiúsculas e minúsculas.
Mostre mensagem de erro, se necessário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ESTADO_CIVIL;
    printf("Escolha a opcao:\n");
    printf("\n\tS - Solteiro\n\tC - Casado\n\tV - Viuvo\n\tD - Divorciado\n");
    fflush(stdin);
    scanf("%c", &ESTADO_CIVIL);
    switch(ESTADO_CIVIL)
    {
        case 's':
        case 'S':
            printf("Solteiro\n");
            break;
        case 'c':
        case 'C':
            printf("Casado\n");
            break;
        case 'v':
        case 'V':
            printf("Viuvo\n");
            break;
        case 'd':
        case 'D':
            printf("Divorciado\n");
            break;
        default:
            printf("Opcao invalida\n");
    }
    system("pause");
	return 0;
}
