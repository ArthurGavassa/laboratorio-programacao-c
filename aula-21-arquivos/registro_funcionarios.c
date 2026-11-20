#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int quantidade;
    int caractere;

    printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\n--- CADASTRO DE FUNCIONARIO %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "FUNCIONARIO: %s\n", f.nome);
        fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
        fprintf(arquivo, "Horas extras: %d\n", f.horasExtras);
        fprintf(arquivo, "----------------------------------------\n");
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nDados salvos em funcionarios.txt\n");

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("\nNenhum funcionario cadastrado.\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}
