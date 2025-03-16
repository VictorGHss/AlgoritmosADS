/*2. Escrever um programa que gera os números de 1000 a 1999
 e escrever aqueles que divididos por 11 onde o resto da divisão é igual a 5.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    NUM = 1000;
    while(NUM <= 1999)
    {
        if (NUM % 11 == 5)
            printf("%d\t", NUM);
        NUM++;
    }
    system("pause");
    return 0;
}
