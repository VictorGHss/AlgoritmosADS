#include <stdio.h>
#include <stdlib.h>

int main()
{
    int OPCAO;
    printf("Escolha:\n\t1 - mamifero\n\t2 - aves\n");
    scanf("%d",&OPCAO);
    switch(OPCAO)
    {
        case 1://mamifero
        {
            printf("Escolha:\n\t1 - quadrupede\n\t2 - bipede\n");
            scanf("%d",&OPCAO);
            switch(OPCAO)
            {
                case 1: //quadrupede
                {
                    printf("Escolha:\n\t1 - carnivoro\n\t2 - herbivoro\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("LEAO\n");
                            break;
                        case 2:
                            printf("CAVALO\n");
                            break;
                        default:
                            printf("Opcao invalida\n");
                    }
                    break;
                }
                case 2://bipede
                {
                    printf("Escolha:\n\t1 - onivoro\n\t2 - frutifero\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("HOMEM\n");
                            break;
                        case 2:
                            printf("MACACO\n");
                            break;
                        default:
                            printf("Opcao invalida\n");
                    }
                    break;
                }
                default:
                    printf("Opcao invalida\n");
            }
            break;
        }
        case 2://aves
        {
            printf("Escolha:\n\t1 - nao voadora\n\t2 - nadadora\n");
            scanf("%d",&OPCAO);
            switch(OPCAO)
            {
                case 1: //nao voadora
                {
                    printf("Escolha:\n\t1 - tropical\n\t2 - polar\n");
                    scanf("%d",&OPCAO);
                    switch(OPCAO)
                    {
                        case 1:
                            printf("AVESTRUZ\n");
                            break;
                        case 2:
                            printf("PINGUIM\n");
                            break;
                        default:
                            printf("Opcao invalida\n");
                    }
                    break;
                }
                case 2://nadadora
                {
                    printf("PATO\n");
                    break;
                }
                default:
                    printf("Opcao invalida\n");
            }
            break;
        }
        default:
            printf("Opcao invalida\n");
    }
    system("pause");
    return 0;
}
