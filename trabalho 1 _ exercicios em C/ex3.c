#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void exemploBreak() {
    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            printf("Saída do break interrompendo o comando for\n", setlocale(LC_ALL, "Portuguese"));
            break;
        }
        printf("Entre com o %do valor: ", i, setlocale(LC_ALL, "Portuguese"));
    }
}

void exemploContinue() {
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("Número ímpar: %d\n", i, setlocale(LC_ALL, "Portuguese"));
    }
}

int exemploReturn() {
    int a = 5, b = 3;
    return a + b;
}

void exemploGoto() {
    int i = 0;
    loop:
    if (i < 5) {
        printf("Valor de i: %d\n", i);
        i++;
        goto loop;
    }
}

void exemploExit() {
    printf("Exemplo da função exit()\n", setlocale(LC_ALL, "Portuguese"));
    exit(0);
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1 - Exemplo comando break\n");
        printf("2 - Exemplo comando continue\n");
        printf("3 - Exemplo comando return\n");
        printf("4 - Exemplo comando goto\n");
        printf("5 - Exemplo função exit\n", setlocale(LC_ALL, "Portuguese"));
        printf("6 - Sair\n");
        printf("Escolha uma opção: ", setlocale(LC_ALL, "Portuguese"));
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exemploBreak();
                break;
            case 2:
                exemploContinue();
                break;
            case 3:
                printf("Resultado da função return: %d\n", exemploReturn()), setlocale(LC_ALL, "Portuguese");
                break;
            case 4:
                exemploGoto();
                break;
            case 5:
                exemploExit();
                break;
            case 6:
                printf("Indo ali...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 6);

    return 0;
}
