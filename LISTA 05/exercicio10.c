/*10. Fazer um programa em C que leia um número inteiro e positivo e verifique
se esse número é primo ou não é primo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CONT, DIV, NUM;
    printf("Digite um numero\n");
    scanf("%d", &NUM);
    CONT = 0;
    DIV = 2;
    while(DIV<NUM)
    {
            if(NUM % DIV == 0)
               CONT++;
            DIV++;
    }
    if(CONT==0)
        printf("%d e primo\n",NUM);
    else
        printf("%d nao e primo\n",NUM);
    system("pause");
	return 0;
}
