#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
	printf("Digite um inteiro nao nulo de tres digitos\n");
    scanf("%d" ,&NUM);
    printf("%d", NUM % 10);
    printf("%d",(NUM / 10) % 10);
    printf("%d\n\n",(NUM / 10) / 10);
    system("pause");
    return 0;
}
