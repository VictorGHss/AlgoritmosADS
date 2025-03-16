#include <stdlib.h>

//programa para mostrar tipos de dados e taqmmanho

int main() {
    printf("Tamanho dos dados em bytes:\n");

    printf("Sem modificadores:\n");
    printf("char: %lu bytes\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));

    printf("\nCom modificadores:\n");
    printf("long int: %lu bytes\n", sizeof(long int));
    printf("short int: %lu bytes\n", sizeof(short int));
    printf("unsigned char: %lu bytes\n", sizeof(unsigned char));
    printf("signed char: %lu bytes\n", sizeof(signed char));
    printf("unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("signed int: %lu bytes\n", sizeof(signed int));
    printf("long double: %lu bytes\n", sizeof(long double));

    return 0;
}
