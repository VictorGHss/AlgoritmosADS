#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float NUM1, NUM2, MEDIA;
	printf("Digite um número\t");
    scanf("%f",&NUM1);
    printf("Digite um número\t");
    scanf("%f",&NUM2);
    MEDIA = (NUM1 + NUM2) / 2;
    printf ("A média foi %f\n", MEDIA);
    printf ("A média foi %.1f\n", MEDIA);
    printf ("A média foi %.2f\n", MEDIA);
    system("pause");
    return 0;
}
