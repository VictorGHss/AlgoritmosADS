/*11 - Fazer um programa em C que verifique se
um número é perfeito ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DIV, SOMA;
    DIV = 1;
    SOMA = 0;
    printf ("Digite um numero\n");
    scanf("%d",&NUM);
    do
    {
        if (NUM % DIV == 0)
            SOMA = SOMA + DIV;
        DIV++;
    }while (DIV < NUM);
    if (SOMA == NUM)
        printf("%d e perfeito\n",NUM);
    else
         printf("%d nao e perfeito\n",NUM);
    system("pause");
	return 0;
}
