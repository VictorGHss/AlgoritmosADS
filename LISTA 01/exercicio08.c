#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float X, Y, POT;
    printf("Digite o valor de X\n");
    scanf("%f",&X);
    printf("Digite o valor de Y\n");
    scanf("%f",&Y);
    POT = pow(X,Y); //a linguagem C o comando é pow(X,Y)
	printf("A potencia %.0f ^ %.0f = %.1f\n", X, Y, POT);
    system("pause");
    return 0;
}
