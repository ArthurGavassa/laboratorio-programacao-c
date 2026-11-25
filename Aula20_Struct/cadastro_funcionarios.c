#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1;
    Funcionario funcionario2;
    float diferenca;

    printf("===== CADASTRO DE FUNCIONARIOS =====\n");

    printf("\n--- FUNCIONARIO 1 ---\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\n--- FUNCIONARIO 2 ---\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n===== DADOS CADASTRADOS =====\n");

    printf("\nFuncionario 1\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n", funcionario1.salario);

    printf("\nFuncionario 2\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    printf("\n===== RESULTADO =====\n");

    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("Maior salario: %s\n", funcionario1.nome);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("Maior salario: %s\n", funcionario2.nome);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }

    return 0;
}
