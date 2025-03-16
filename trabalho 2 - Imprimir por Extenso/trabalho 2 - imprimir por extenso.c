#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirPorExtenso(float numero, FILE *arquivo_saida, int limparArquivo) {

    void imprimirAteDezenove(int num, FILE *arquivo_saida) {
        switch (num) {
            case 0: fprintf(arquivo_saida, "zero"); break;
            case 1: fprintf(arquivo_saida, "um"); break;
            case 2: fprintf(arquivo_saida, "dois"); break;
            case 3: fprintf(arquivo_saida, "tres"); break;
            case 4: fprintf(arquivo_saida, "quatro"); break;
            case 5: fprintf(arquivo_saida, "cinco"); break;
            case 6: fprintf(arquivo_saida, "seis"); break;
            case 7: fprintf(arquivo_saida, "sete"); break;
            case 8: fprintf(arquivo_saida, "oito"); break;
            case 9: fprintf(arquivo_saida, "nove"); break;
            case 10: fprintf(arquivo_saida, "dez"); break;
            case 11: fprintf(arquivo_saida, "onze"); break;
            case 12: fprintf(arquivo_saida, "doze"); break;
            case 13: fprintf(arquivo_saida, "treze"); break;
            case 14: fprintf(arquivo_saida, "quatorze"); break;
            case 15: fprintf(arquivo_saida, "quinze"); break;
            case 16: fprintf(arquivo_saida, "dezesseis"); break;
            case 17: fprintf(arquivo_saida, "dezessete"); break;
            case 18: fprintf(arquivo_saida, "dezoito"); break;
            case 19: fprintf(arquivo_saida, "dezenove"); break;
        }
    }

    void imprimirDezena(int num, FILE *arquivo_saida) {
        switch (num) {
            case 2: fprintf(arquivo_saida, "vinte"); break;
            case 3: fprintf(arquivo_saida, "trinta"); break;
            case 4: fprintf(arquivo_saida, "quarenta"); break;
            case 5: fprintf(arquivo_saida, "cinquenta"); break;
            case 6: fprintf(arquivo_saida, "sessenta"); break;
            case 7: fprintf(arquivo_saida, "setenta"); break;
            case 8: fprintf(arquivo_saida, "oitenta"); break;
            case 9: fprintf(arquivo_saida, "noventa"); break;
        }
    }

    void imprimirCentena(int num, FILE *arquivo_saida) {
        switch (num) {
            case 1: fprintf(arquivo_saida, "cento"); break;
            case 2: fprintf(arquivo_saida, "duzentos"); break;
            case 3: fprintf(arquivo_saida, "trezentos"); break;
            case 4: fprintf(arquivo_saida, "quatrocentos"); break;
            case 5: fprintf(arquivo_saida, "quinhentos"); break;
            case 6: fprintf(arquivo_saida, "seiscentos"); break;
            case 7: fprintf(arquivo_saida, "setecentos"); break;
            case 8: fprintf(arquivo_saida, "oitocentos"); break;
            case 9: fprintf(arquivo_saida, "novecentos"); break;
        }
    }

    void imprimirMilhar(int num, FILE *arquivo_saida) {
        if (num >= 1000) {
            if (num / 1000 == 1) {
                fprintf(arquivo_saida, "mil");
            } else {
                imprimirAteDezenove(num / 1000, arquivo_saida);
                fprintf(arquivo_saida, " mil");
            }
            num %= 1000;
            if (num >= 100) {
                fprintf(arquivo_saida, " ");
            }
        }
        if (num >= 100) {
            imprimirCentena(num / 100, arquivo_saida);
            fprintf(arquivo_saida, " ");
            num %= 100;
            if (num > 0) {
                fprintf(arquivo_saida, "e ");
            }
        }
        if (num >= 20) {
            imprimirDezena(num / 10, arquivo_saida);
            fprintf(arquivo_saida, " ");
            num %= 10;
            if (num > 0) {
                fprintf(arquivo_saida, "e ");
            }
        }
        if (num >= 1 && num <= 9) {
            imprimirAteDezenove(num, arquivo_saida);
        }
    }

    if (limparArquivo) {
        freopen(NULL, "w", arquivo_saida);
    }

    int parteInteira = (int)numero;
    int parteDecimal = (int)((numero - parteInteira) * 100);

    if (numero < 0 || numero > 10000.00) {
        fprintf(arquivo_saida, "Numero fora do intervalo permitido.");
        return;
    }

    fseek(arquivo_saida, 0, SEEK_SET);

    imprimirMilhar(parteInteira, arquivo_saida);
    fprintf(arquivo_saida, " reais");

    if (parteDecimal > 0) {
        if (parteDecimal >= 10 && parteDecimal <= 19) {
            fprintf(arquivo_saida, " e ");
            imprimirAteDezenove(parteDecimal, arquivo_saida);
        } else {
            if (parteDecimal >= 10) {
                fprintf(arquivo_saida, " e ");
                imprimirDezena(parteDecimal / 10, arquivo_saida);
                if (parteDecimal % 10 != 0) {
                    fprintf(arquivo_saida, " e ");
                    imprimirAteDezenove(parteDecimal % 10, arquivo_saida);
                }
            } else {
                fprintf(arquivo_saida, " e ");
                imprimirAteDezenove(parteDecimal, arquivo_saida);
            }
        }
        fprintf(arquivo_saida, " centavos");
    }

    fprintf(arquivo_saida, "\n");
}

void imprimirArquivoEmTela() {
    FILE *arquivo_entrada;
    char caractere;

    arquivo_entrada = fopen("valor_por_extenso.txt", "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    printf("\nConteudo do arquivo 'valor_por_extenso.txt':\n\n");
    while ((caractere = fgetc(arquivo_entrada)) != EOF) {
        printf("%c", caractere);
    }
    printf("\n");

    fclose(arquivo_entrada);
}

int main() {
    setlocale(LC_ALL, "C");

    FILE *arquivo_saida;
    float numero;
    int opcao;

    arquivo_saida = fopen("valor_por_extenso.txt", "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao abrir o arquivo de saida.\n");
        return 1;
    }

    do {
        printf("\nMenu:\n");
        printf("1 - Escrever um numero por extenso\n");
        printf("2 - Imprimir todos os numeros do arquivo em tela\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o valor (limite de 10000.00): ");
                scanf("%f", &numero);
                imprimirPorExtenso(numero, arquivo_saida, 0);
                printf("O valor por extenso foi adicionado ao arquivo 'valor_por_extenso.txt'\n,");
                fflush(arquivo_saida);
                fseek(arquivo_saida, 0, SEEK_END);
                break;
            case 2:
                imprimirArquivoEmTela();
                break;
            case 3:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpcao invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }
    } while (opcao != 3);

    fclose(arquivo_saida);

    return 0;
}
