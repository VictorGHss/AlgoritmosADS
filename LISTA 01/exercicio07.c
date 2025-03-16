#include <stdio.h>
#include <stdlib.h>

int main()
{
    float COMPRIMENTO, LARGURA, ALTURA, VOLUME;
    printf("Digite o comprimento da caixa\n");
    scanf("%f",&COMPRIMENTO);
    printf("Digite a largura da caixa\n");
    scanf("%f",&LARGURA);
    printf("Digite a altura da caixa\n");
    scanf("%f",&ALTURA);
    VOLUME = COMPRIMENTO * LARGURA * ALTURA;
    printf("O volume da caixa retangular e %.1f\n", VOLUME);
    system("pause");
    return 0;
}
