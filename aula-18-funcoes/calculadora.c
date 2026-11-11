#include <stdio.h>

void exibirMenu(void) {
    printf("===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
    printf("Escolha uma opcao: ");
}

float somar(float n1, float n2) {
    return n1 + n2;
}

float subtrair(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2) {
    return n1 * n2;
}

float dividir(float n1, float n2) {
    return n1 / n2;
}

int main(void) {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nPrimeiro numero: ");
            scanf("%f", &n1);
            printf("Segundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                printf("\nResultado: %.2f\n\n", somar(n1, n2));
                break;
            case 2:
                printf("\nResultado: %.2f\n\n", subtrair(n1, n2));
                break;
            case 3:
                printf("\nResultado: %.2f\n\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("\nErro: nao e possivel dividir por zero.\n\n");
                } else {
                    printf("\nResultado: %.2f\n\n", dividir(n1, n2));
                }
                break;
            case 0:
                printf("\nPrograma encerrado.\n");
                break;
            default:
                printf("\nOpcao invalida.\n\n");
        }
    } while (opcao != 0);

    return 0;
}
