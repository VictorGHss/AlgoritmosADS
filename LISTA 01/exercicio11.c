#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NOTA1, NOTA2, PESO1, PESO2, MEDIA;
	printf ("Digite duas notas\n");
    scanf ("%f %f",&NOTA1, &NOTA2);
    printf ("Digite dois pesos\n");
    scanf ("%f %f", &PESO1, &PESO2);
    MEDIA = ((NOTA1 * PESO1) + (NOTA2 * PESO2)) / (PESO1 + PESO2);
    printf ("A media ponderada foi %.1f\n\n", MEDIA);
    system("pause");
    return 0;
}
