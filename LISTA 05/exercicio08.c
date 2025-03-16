/* 8Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser calculado pela
 soma dos valores de uma série infinita, como mostrado abaixo:
Fazer um programa em C que calcule este número (e) considerando apenas as 15 (quinze) primeiras parcelas.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double FATORIAL(int NUM);

int main()
{
    int NUM = 0;
    double S = 0;
    while (NUM <15)
    {
        S = S + 1/FATORIAL(NUM);
        printf("+ %d/%d!\t", 1,NUM);
        NUM++;
    }
    printf("\n\nA soma foi %f\n", S);
  	return 0;
}
//-----------------------------
double FATORIAL(int NUM)
{
   //printf("O fatorial do num %d e",NUM);
   double FAT=1;
   while(NUM>0)
   {
       FAT=FAT*NUM;
       NUM--;
   }
   //printf("fatorial %.0f\n",FAT);
   return(FAT);
}
