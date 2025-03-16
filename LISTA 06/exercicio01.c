/*1. Escrever um programa que lê 5 conjuntos de 2 valores,
 o primeiro representando o número de um aluno e o segundo
 representando a sua altura em centímetros. Encontrar o aluno
 mais alto e o mais baixo e escrever seus números, suas alturas
 e uma mensagem dizendo se é o mais alto ou o mais baixo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int RA, ALTURA, CONT, MAIOR_ALT, MENOR_ALT, RA_MAIOR_ALT, RA_MENOR_ALT;
    CONT = 0;
    MAIOR_ALT = 0;//pessoa mais baixa do mundo 60cm
    MENOR_ALT = 260;// pessoa maior no mundo 250cm
    do
    {
        printf("Digite o RA do aluno\n");
        scanf("%d", &RA);
        do
        {
            printf("Digite a altura\n");
            scanf("%d", &ALTURA);
            if((ALTURA <= 0)||(ALTURA > 260))
                printf("Valor invalido, digite novamente\n");
        }while((ALTURA <= 0)||(ALTURA > 260));
        if (ALTURA > MAIOR_ALT)
        {
            MAIOR_ALT = ALTURA;
            RA_MAIOR_ALT = RA;
        }
        if (ALTURA < MENOR_ALT)
        {
            MENOR_ALT = ALTURA;
            RA_MENOR_ALT = RA;
        }
        CONT++;
    }while(CONT<5);
    printf("O aluno %d tem %d cm e e o mais alto da turma\n", RA_MAIOR_ALT, MAIOR_ALT);
    printf("O aluno %d tem %d cm e e o mais baixo da turma\n", RA_MENOR_ALT, MENOR_ALT);
    system("pause");
	return 0;
}
