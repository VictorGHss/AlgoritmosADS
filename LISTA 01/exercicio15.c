/*15.Dado um numero inteiro que representa uma quantidade de segundos, determinar o seu valor equivalente
em horas, minutos e segundos. Se a quantidade de segundos for insuficiente para dar um valor em horas, o valor
em horas deve ser 0 (zero). A mesma observação vale em relação aos minutos e segundos.
Por exemplo:
   3.600 segundos = 1 hora, 0 minutos, 0 segundos.
    3.500 segundos = 0 horas, 58 minutos e 20 segundos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VALOR, HORA, MINUTO, SEGUNDO;
	printf("Informe o valor em segundos\n");
    scanf("%d" ,&VALOR);
    HORA = VALOR / 3600;
    MINUTO = (VALOR % 3600)/60;
    SEGUNDO =(VALOR % 3600) % 60;
    printf("\nHora(s) = %d\tMinuto(s) = %d\tSegundo(s) = %d\n",HORA, MINUTO, SEGUNDO);
    system("pause");
    return 0;
}


