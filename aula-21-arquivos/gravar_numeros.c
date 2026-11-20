#include <stdio.h>

int main(void) {
    FILE *arquivo;
    int numero;

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);

        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    printf("\n===== NUMEROS ARMAZENADOS =====\n");

    for (int i = 0; i < 5; i++) {
        fscanf(arquivo, "%d", &numero);
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}
