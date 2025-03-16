#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_FUNCIONARIOS 50
#define MAX_DIAS_TRABALHADOS 31
#define MAX_MESES 12

typedef struct {
    int id;
    char nome[100];
    float valorHora;
    int horasTrabalhadas[MAX_MESES][MAX_DIAS_TRABALHADOS];
} FUNCIONARIO;

FUNCIONARIO funcionarios[MAX_FUNCIONARIOS];

void inicializarFuncionarios();
int encontrarFuncionario(char* nome);
int encontrarFuncionarioPorID(int id);
void cadastrarFuncionario();
void inserirHorasTrabalhadas();
void calcularSalario();
void listarFuncionarios();
void alterarInformacoesFuncionario();
void excluirFuncionario();
int gerarNovoID();
void removerCaracteresEspeciais(char* str);

int main() {
    int opcao;
    inicializarFuncionarios();

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar Funcionario\n");
        printf("2 - Inserir Horas Trabalhadas\n");
        printf("3 - Calcular Salario\n");
        printf("4 - Listar Funcionarios\n");
        printf("5 - Alterar Informacoes do Funcionario\n");
        printf("6 - Excluir Funcionario\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1:
                cadastrarFuncionario();
                break;
            case 2:
                inserirHorasTrabalhadas();
                break;
            case 3:
                calcularSalario();
                break;
            case 4:
                listarFuncionarios();
                break;
            case 5:
                alterarInformacoesFuncionario();
                break;
            case 6:
                excluirFuncionario();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}

void inicializarFuncionarios() {
    for(int i = 0; i < MAX_FUNCIONARIOS; i++) {
        funcionarios[i].id = -1;
        strcpy(funcionarios[i].nome, "");
        funcionarios[i].valorHora = 0.0;
        for(int mes = 0; mes < MAX_MESES; mes++) {
            for(int dia = 0; dia < MAX_DIAS_TRABALHADOS; dia++) {
                funcionarios[i].horasTrabalhadas[mes][dia] = 0;
            }
        }
    }
}

int encontrarFuncionario(char* nome) {
    for(int i = 0; i < MAX_FUNCIONARIOS; i++) {
        if(strcmp(funcionarios[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

int encontrarFuncionarioPorID(int id) {
    for(int i = 0; i < MAX_FUNCIONARIOS; i++) {
        if(funcionarios[i].id == id) {
            return i;
        }
    }
    return -1;
}

void cadastrarFuncionario() {
    for(int i = 0; i < MAX_FUNCIONARIOS; i++) {
        if(funcionarios[i].id == -1) {
            funcionarios[i].id = gerarNovoID();
            printf("Digite o nome do funcionario: ");
            fgets(funcionarios[i].nome, 100, stdin);
            funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = 0;
            removerCaracteresEspeciais(funcionarios[i].nome);
            printf("Digite o valor da hora do funcionario: ");
            scanf("%f", &funcionarios[i].valorHora);
            getchar();
            printf("Funcionario cadastrado com sucesso com ID %d!\n", funcionarios[i].id);
            return;
        }
    }
    printf("Nao ha espaco para cadastrar mais funcionarios.\n");
}

void inserirHorasTrabalhadas() {
    int opcaoBusca;
    int id = -1;
    char nome[100] = "";
    printf("Deseja buscar por:\n1 - ID\n2 - Nome\nEscolha uma opcao: ");
    scanf("%d", &opcaoBusca);
    getchar();

    int indice = -1;
    if (opcaoBusca == 1) {
        printf("Digite o ID do funcionario: ");
        scanf("%d", &id);
        indice = encontrarFuncionarioPorID(id);
    } else if (opcaoBusca == 2) {
        printf("Digite o nome do funcionario: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = 0;
        removerCaracteresEspeciais(nome);
        indice = encontrarFuncionario(nome);
    } else {
        printf("Opcao invalida!\n");
        return;
    }

    if(indice == -1) {
        printf("Funcionario nao encontrado!\n");
        return;
    }

    int mes, dia, horas;
    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12) {
        printf("Mes invalido!\n");
        return;
    }
    mes -= 1;

    printf("Digite o dia trabalhado (1-31): ");
    scanf("%d", &dia);
    if(dia < 1 || dia > 31) {
        printf("Dia invalido!\n");
        return;
    }
    dia -= 1;

    printf("Digite a quantidade de horas trabalhadas no dia %d: ", dia + 1);
    scanf("%d", &horas);
    if(horas < 0 || horas > 24) {
        printf("Horas trabalhadas devem ser entre 0 e 24!\n");
        return;
    }

    funcionarios[indice].horasTrabalhadas[mes][dia] = horas;
    printf("Horas trabalhadas cadastradas com sucesso!\n");
}

void calcularSalario() {
    int opcaoBusca;
    int id = -1;
    char nome[100] = "";
    printf("Deseja buscar por:\n1 - ID\n2 - Nome\nEscolha uma opcao: ");
    scanf("%d", &opcaoBusca);
    getchar();

    int indice = -1;
    if (opcaoBusca == 1) {
        printf("Digite o ID do funcionario: ");
        scanf("%d", &id);
        indice = encontrarFuncionarioPorID(id);
    } else if (opcaoBusca == 2) {
        printf("Digite o nome do funcionario: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = 0;
        removerCaracteresEspeciais(nome);
        indice = encontrarFuncionario(nome);
    } else {
        printf("Opcao invalida!\n");
        return;
    }

    if(indice == -1) {
        printf("Funcionario nao encontrado!\n");
        return;
    }

    int mes;
    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12) {
        printf("Mes invalido!\n");
        return;
    }
    mes -= 1;

    int diasNoMes = (mes == 1) ? 28 : 31;
    if(mes == 3 || mes == 5 || mes == 8 || mes == 10) diasNoMes = 30;

    float salario = 0.0;
    for(int i = 0; i < diasNoMes; i++) {
        salario += funcionarios[indice].horasTrabalhadas[mes][i] * funcionarios[indice].valorHora;
    }
    printf("O salario do funcionario %s no mes %d foi de: R$%.2f\n", funcionarios[indice].nome, mes + 1, salario);
}

void listarFuncionarios() {
    printf("Funcionarios cadastrados:\n");
    for(int i = 0; i < MAX_FUNCIONARIOS; i++) {
        if(funcionarios[i].id != -1) {
            printf("ID: %d, Nome: %s, Valor Hora: R$%.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].valorHora);
        }
    }
}

void alterarInformacoesFuncionario() {
    int opcaoBusca;
    int id = -1;
    char nome[100] = "";
    printf("Deseja buscar por:\n1 - ID\n2 - Nome\nEscolha uma opcao: ");
    scanf("%d", &opcaoBusca);
    getchar();

    int indice = -1;
    if (opcaoBusca == 1) {
        printf("Digite o ID do funcionario: ");
        scanf("%d", &id);
        indice = encontrarFuncionarioPorID(id);
    } else if (opcaoBusca == 2) {
        printf("Digite o nome do funcionario: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = 0;
        removerCaracteresEspeciais(nome);
        indice = encontrarFuncionario(nome);
    } else {
        printf("Opcao invalida!\n");
        return;
    }

    if(indice == -1) {
        printf("Funcionario nao encontrado!\n");
        return;
    }

    printf("Digite o novo valor da hora do funcionario: ");
    scanf("%f", &funcionarios[indice].valorHora);
    printf("Informacoes alteradas com sucesso!\n");
}

void excluirFuncionario() {
    int opcaoBusca;
    int id = -1;
    char nome[100] = "";
    printf("Deseja buscar por:\n1 - ID\n2 - Nome\nEscolha uma opcao: ");
    scanf("%d", &opcaoBusca);
    getchar();

    int indice = -1;
    if (opcaoBusca == 1) {
        printf("Digite o ID do funcionario: ");
        scanf("%d", &id);
        indice = encontrarFuncionarioPorID(id);
    } else if (opcaoBusca == 2) {
        printf("Digite o nome do funcionario: ");
        fgets(nome, 100, stdin);
        nome[strcspn(nome, "\n")] = 0;
        removerCaracteresEspeciais(nome);
        indice = encontrarFuncionario(nome);
    } else {
        printf("Opcao invalida!\n");
        return;
    }

    if(indice == -1) {
        printf("Funcionario nao encontrado!\n");
        return;
    }

    funcionarios[indice].id = -1;
    strcpy(funcionarios[indice].nome, "");
    funcionarios[indice].valorHora = 0.0;
    for(int mes = 0; mes < MAX_MESES; mes++) {
        for(int dia = 0; dia < MAX_DIAS_TRABALHADOS; dia++) {
            funcionarios[indice].horasTrabalhadas[mes][dia] = 0;
        }
    }
    printf("Funcionario excluido com sucesso!\n");
}

int gerarNovoID() {
    static int proximoID = 1;
    return proximoID++;
}

void removerCaracteresEspeciais(char* str) {
    char* src = str;
    char* dst = str;

    while (*src) {
        if (isascii(*src) && isprint(*src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}
