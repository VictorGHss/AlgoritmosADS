#include<stdio.h>
#include<stdlib.h>


int main()
{
    float NUM1, NUM2, MEDIA;
	printf("Digite um n%cmero\t",163);
    scanf("%f",&NUM1);
    printf("Digite um n\xA3mero\t");// usar o valor em hexadecimal \x<COD-HEX>, exemplo \xA3 = ú
    scanf("%f",&NUM2);
    MEDIA = (NUM1 + NUM2) / 2;
    printf ("A m%cdia foi %f\n", 130,MEDIA);//decimal o 130 equivale a letra é
    printf ("A media foi %.1f\n", MEDIA);
    printf ("A media foi %.2f\n", MEDIA);
    system("pause");
    return 0;
}
