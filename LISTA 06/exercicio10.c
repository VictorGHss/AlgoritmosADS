/*10. Um cinema que possui capacidade de 100 lugares
está sempre com ocupação total. Certo dia
cada espectador respondeu a um questionário, no qual constava:
- sua idade;
- sua opinião em relação ao filme, segundo:
ótimo= *****
bom= ****
regular= ***
ruim= **
péssimo= *
Elabore um programa que, lendo estes dados, calcule e imprima:
- a quantidade de respostas ótimo;
- a diferença percentual entre respostas bom e regular;
- a média de idade das pessoas que responderam ruim;
- a percentagem de respostas péssimo e a maior idade que
utilizou esta opção;
- a diferença de idade entre a maior idade que respondeu ótimo
e a maior idade que respondeu ruim.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int QUANT_PESSOA = 100;
    int CONT=0, QNT, IDADE, OPCAO, CONT_OTIMO=0, CONT_BOM=0,CONT_RUIM=0, CONT_REG=0, CONT_PESSIMO=0;
    int IDADE_PESSOA_RUIM=0;
    do
    {
        printf("Digite a quantidade de pessoas entrevistadas\n");
        scanf("%d", &QNT);
        if(QNT>100)
            printf("Voce precisa informar uma quantidade valida\n");
    }while(QNT>100);
    while(CONT<QNT)
    {
        printf("Digite sua idade\n");
        scanf("%d",&IDADE);
        printf("Escolha opcao:\n\t1 - otimo\n\t2 - bom\n\t3 - regular\n\t4 - ruim\n\t5 - pessimo\n");
        scanf("%d",&OPCAO);
        switch(OPCAO)
        {
            case 1: //otimo
                CONT_OTIMO++;
                break;
            case 2:
                CONT_BOM++;
                break;
            case 3:
                CONT_REG++;
                break;
            case 4:
                CONT_RUIM++;
                IDADE_PESSOA_RUIM = IDADE_PESSOA_RUIM + IDADE;
                break;
            case 5:
                CONT_PESSIMO++;
                break;
            default:
                printf("Opcao invalida\n");
        }
        CONT++;
    }
    printf("A quantidade de respostas otimo eh %d\n",CONT_OTIMO);
    //printf("A diferença percentual entre respostas bom e regular eh %d");
    printf("A media de idade das pessoas que responderam ruim eh %.1f\n",(float)IDADE_PESSOA_RUIM/CONT_RUIM++);
    return 0;
}
