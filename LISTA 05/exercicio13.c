/*13.	Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada escola. Cada aluno fornecia a sua série (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0). Fazer um programa que leia os dados, calcule e imprima:
1.	A quantidade de alunos que está na terceira série;
2.	A maior quantidade de livros lidos por um aluno que está na quarta série;
3.	A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int SERIE, QNT_LIVRO, GOSTAM_REDACAO, QNT_ALUNO_TER, MAIOR_LIVRO_QUAR, QNT_ALUN_TER, QNT_ALUN_TER_N_RED, OPCAO;
    QNT_ALUNO_TER = 0;
    MAIOR_LIVRO_QUAR = 0;
	OPCAO = 1;
	while (OPCAO != 0)
    {
        printf("Escolha a sua serie: 1 - Primeira, 2 - Segunda,  3 - Terceira ou 4 - Quarta\n");
        scanf("%d", &SERIE);
        printf("Digite a quantidade de livros que voce leu por mes\n");
        scanf("%d", &QNT_LIVRO);
        printf("Voce gosta de fazer redacaoo 1 - Sim ou 0 - Nao\n");
        scanf("%d", &GOSTAM_REDACAO );
        printf("Deseja entrevistar outro aluno 1 - Sim ou 0 - Nao\n");
        scanf("%d", &OPCAO);
        if (SERIE == 3)
            QNT_ALUNO_TER++;
        if (SERIE == 4)
        {
            if(QNT_LIVRO > MAIOR_LIVRO_QUAR)
                MAIOR_LIVRO_QUAR = QNT_LIVRO;
        }
        if((SERIE == 3) && (GOSTAM_REDACAO == 0))
            QNT_ALUN_TER_N_RED++;
    }
    printf("\nA quantidade de alunos que esa na terceira serie e %d", QNT_ALUNO_TER);
    printf("\nA maior quantidade de livros lidos por um aluno que esta na quarta serie e %d", MAIOR_LIVRO_QUAR);
    printf("\nA porcentagem de alunos que não gostam de fazer redacao e que estao na terceira serie e %.1f%%\n\n", ((float)QNT_ALUN_TER_N_RED / QNT_ALUNO_TER)* 100);
	system("pause");
	return 0;
}

