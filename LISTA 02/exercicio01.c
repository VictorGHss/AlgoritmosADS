#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float NUM1, NUM2, NUM3;
    printf("Digite tres numeros\n");
    scanf("%f %f %f", &NUM1, &NUM2, &NUM3);
    if (NUM1 > 0)
        printf("A raiz quadrada e %.1f\n", sqrt(NUM1));
    else
        printf("O quadrado e %.1f\n",pow(NUM1,2));
    if ((NUM2 > 10)&&(NUM2 <100))
        printf("Numero esta entre 10 e 100 – intervalo permitido\n");
    if(NUM3 < NUM2)
        printf("A diferenca e %.1f\n",NUM3-NUM2);
    else
        printf("Num 3 = %1f",++NUM3);
    system("pause");
	return 0;
}
