/*11)Fazer um programa em C para calcular e imprimir
todos os números primos entre 1 e 100.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CONT, DIV, NUM;
    NUM = 1;
    CONT = 0;
    DIV = 2;
    while(NUM<=100)
    {
        while(DIV<NUM)
        {
            if(NUM % DIV == 0)
               CONT++;
            DIV++;
        }
        if(CONT==0)
           printf("%d\n",NUM);
        CONT=0;
        DIV=2;
        NUM++;
    }
    system("pause");
	return 0;
}
