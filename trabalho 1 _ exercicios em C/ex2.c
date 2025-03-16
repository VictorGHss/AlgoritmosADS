#include <stdio.h>
#include <stdlib.h>
//A funçao main de um programa recebe dois tipos de parametros
//argc (argument count): mostra o número de argumentos passados para o programa na linha de comando.
//argv (argument vector): é um vetor de strings que contém os argumentos passados para o programa.

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s <numero1> <numero2> ... <numeroN>\n", argv[0]);
        return 1;
    }
    int soma = 0;
    for (int i = 1; i < argc; i++) {
        soma += atoi(argv[i]);
    }
    printf("A soma dos números é: %d\n", soma);
    return 0;
}

