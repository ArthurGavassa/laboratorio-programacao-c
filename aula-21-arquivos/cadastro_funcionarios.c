#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade;

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
        printf("\n--- FUNCIONARIO %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Matricula: %d\n", matricula);
        fprintf(arquivo, "----------------------------------------\n");
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
    } else {
        printf("\nDados gravados com sucesso em funcionarios.txt\n");
    }

    return 0;
}
