/*9. Uma universidade deseja fazer um levantamento a respeito de seu
 concurso vestibular. Para três cursos, é fornecido o seguinte conjunto
de valores:
a) o código do curso;
b) número de vagas;
c) número de candidatos do sexo masculino;
d) número de candidatos do sexo feminino.
e) O último conjunto, para indicar fim de dados, contém o código do
curso igual a zero. Fazer um programa que:
Calcule e escreva, para cada curso, o número de candidatos por vaga
e a porcentagem de candidatos do sexo feminino (escreva também o
código correspondente do curso);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char SEXO;
    int COD_CURSO;//curso 1, 2 e 3
    int CONT_F_CURSO1=0,CONT_F_CURSO2=0,CONT_F_CURSO3=0;
    int CONT_M_CURSO1=0,CONT_M_CURSO2=0,CONT_M_CURSO3=0;
    int VAGA_CURSO1 = 3;
    int VAGA_CURSO2 = 2;
    int VAGA_CURSO3 = 4;
    do
    {
        printf("---------------------------\n");
        do
        {
            printf("Digite o codigo do curso\n");
            scanf("%d", &COD_CURSO);//1
            if((COD_CURSO<0)||(COD_CURSO>=4))
                printf("Voce informou errado e precisa digitar novamente\n");
        }while((COD_CURSO<0)||(COD_CURSO>=4));
        do
        {
            printf("Digite o sexo\n");
            fflush(stdin);
            scanf("%c", &SEXO);//f
            if((SEXO != 'f')&&(SEXO != 'F')&&(SEXO != 'm')&&(SEXO != 'M'))
              printf("Voce informou errado e precisa digitar novamente\n");
        }while((SEXO!='f')&&(SEXO!='F')&&(SEXO!='m')&&(SEXO!='M'));

        if ((SEXO == 'f')||(SEXO == 'F'))
        {
            if (COD_CURSO == 1)
                CONT_F_CURSO1++;
            else if(COD_CURSO == 2)
                CONT_F_CURSO2++;
            else if(COD_CURSO == 3)
                CONT_F_CURSO3++;
        }
        else
        {
            if (COD_CURSO == 1)
                CONT_M_CURSO1++;
            else if(COD_CURSO == 2)
                CONT_M_CURSO2++;
            else if(COD_CURSO == 3)
                CONT_M_CURSO3++;
        }
    }while(COD_CURSO != 0);
    printf("O curso 1 possui %d candidatos\n", (CONT_F_CURSO1+ CONT_M_CURSO1));
    printf("O curso 2 possui %d candidatos\n", (CONT_F_CURSO2+ CONT_M_CURSO2));
    printf("O curso 3 possui %d candidatos\n", (CONT_F_CURSO3+ CONT_M_CURSO3));
    printf("Candidatos por vaga do curso 1 e %.1f\n", (float)(CONT_F_CURSO1+ CONT_M_CURSO1)/VAGA_CURSO1);
    printf("Candidatos por vaga do curso 2 e %.1f\n", (float)(CONT_F_CURSO2+ CONT_M_CURSO2)/VAGA_CURSO2);
    printf("Candidatos por vaga do curso 3 e %.1f\n", (float)(CONT_F_CURSO3+ CONT_M_CURSO3)/VAGA_CURSO3);
    printf("Percentual candidatos feminino do curso 1 e %d %%\n",(CONT_F_CURSO1*100)/(CONT_F_CURSO1+ CONT_M_CURSO1));
    printf("Percentual candidatos feminino do curso 2 e %d %%\n",(CONT_F_CURSO2*100)/(CONT_F_CURSO2+ CONT_M_CURSO2));
    printf("Percentual candidatos feminino do curso 3 e %d %%\n",(CONT_F_CURSO3*100)/(CONT_F_CURSO3+ CONT_M_CURSO3));
    system("pause");
	return 0;
}
