/*6) Faça um programa que calcule e escreva o valor de S:
S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include <stdio.h>
#include <stdlib.h>


//------------------------------------------------------
int main()
{
    int NUM, DEN;
    float S = 0;
    NUM = 1;
    DEN = 1;
    while(DEN <= 50)
    {
        S = S + (float)NUM/DEN;
        printf("%d/%d  ",NUM,DEN);
        NUM = NUM + 2;//NUM+=2
        DEN++; //DEN = DEN +1

    }
    printf("\n\nA soma foi %.1f\n",S);
    system("pause");
 	return 0;
}
//----------------------------------------------
