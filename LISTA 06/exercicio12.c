/*12. Fazer um programa em C que imprima os números perfeitos
no intervalo de 1 a 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, DIV, SOMA;
    DIV = 1;
    SOMA = 0;
    NUM = 2;
    do
    {
        do
        {
            if (NUM % DIV == 0)
                SOMA = SOMA + DIV;
            DIV++;
        }while (DIV < NUM);
        if (SOMA == NUM)
            printf("%d\n",NUM);
        NUM++;
        DIV = 1;
        SOMA = 0;
    }while(NUM <= 10000000);
    system("pause");
	return 0;
}
