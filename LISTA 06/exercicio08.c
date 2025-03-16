/*8. Uma certa firma fez uma pesquisa de mercado para saber se
as pessoas gostaram ou não de um novo produto lançado no mercado.
Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou não).
Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um programa
que calcule e escreva:
- o número de pessoas que responderam sim;
- o número de pessoas que responderam não;
- a porcentagem de pessoas do sexo feminino que responderam sim;
- a porcentagem de pessoas do sexo masculino que responderam não.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SEXO,GOSTOU_PROD,QUANT_FEM,QUANT_MAS, CONT_PES_SIM, CONT_PES_NAO, CONT;
    CONT = 0;
    QUANT_FEM = 0;
    QUANT_MAS = 0;
    CONT_PES_SIM = 0;
    CONT_PES_NAO=0;
    do
    {
        do
        {
            printf("Digite o sexo 0 - masculino ou 1 - feminino\n");
            scanf("%d",&SEXO);
            if((SEXO!= 0)&&(SEXO!= 1))
                printf("Digite sua resposta novamente\n");
        }while((SEXO!= 0)&&(SEXO!= 1));
        do
        {
            printf("Voce gostou do produto: 0 - sim ou 1 - nao\n");
            scanf("%d", &GOSTOU_PROD);
            if((GOSTOU_PROD!= 0)&&(GOSTOU_PROD!= 1))
                printf("Digite sua resposta novamente\n");
        }while((GOSTOU_PROD!= 0)&&(GOSTOU_PROD!= 1));
        if (GOSTOU_PROD == 0)
            CONT_PES_SIM++;
        else
            CONT_PES_NAO++;
        if((SEXO == 1)&&(GOSTOU_PROD==0))
            QUANT_FEM++;
        if((SEXO == 0)&&(GOSTOU_PROD==1))
            QUANT_MAS++;
        CONT++;
    }while(CONT < 5);
    printf("O numero de pessoas que responderam sim foi %d\n",CONT_PES_SIM);
    printf("O numero de pessoas que responderam nao foi %d\n",CONT_PES_NAO);
    printf("A porcentagem de pessoas do sexo feminino que responderam sim foi %.1f%%\n",((float)QUANT_FEM/CONT)*100);
    printf("A porcentagem de pessoas do sexo masculino que responderam nao foi %.1f%%\n",((float)QUANT_MAS/CONT)*100);
    system("pause");
	return 0;
}
