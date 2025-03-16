#include<stdio.h>
#include<stdlib.h>


int main()
{
    float COMPRIMENTO, LARGURA, AREA, POTENCIA;
	printf("Digite o comprimento do comodo");
    scanf("%f",&COMPRIMENTO);
    printf("Digite a largura do comodo");
    scanf("%f",&LARGURA);
    AREA = COMPRIMENTO * LARGURA;
    POTENCIA = AREA * 18;
	printf("O comodo de area %.1f m2 deve usar %.0fW\n",AREA, POTENCIA);
    system("pause");
    return 0;
}
