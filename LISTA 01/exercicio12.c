/*Escreva um programa que leia dois n�meros que dever�o ser colocados,
respectivamente, nas vari�veis VA e VB. O programa deve, ent�o,
trocar os valores de VA por VB e vice-versa e mostrar o conte�do destas vari�veis.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{//inicio
    int VA, VB;
    printf("Digite o valor de VA\n");
    scanf("%d",&VA);
    printf("Digite o valor de VB\n");
    scanf("%d",&VB);
    VA = VA + VB;
    VB = VA - VB;
    VA = VA - VB;
    printf("VA = %d\nVB = %d\n",VA, VB);
    system("pause");
    return 0;
}//fim

