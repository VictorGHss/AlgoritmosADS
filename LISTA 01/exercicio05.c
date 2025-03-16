#include<stdio.h>
#include<stdlib.h>

int main()
{
	float BASE, ALTURA, AREA;
    printf("Digite o valor da base\n");
    scanf("%f",&BASE);
    printf("Digite o valor da altura\n");
    scanf("%f",&ALTURA);
    AREA = (BASE * ALTURA)/2;
    printf("A area do triangulo e %.2f \n", AREA);
    system("pause");
    return 0;
}
