#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor do numero: %d\n", numero);
    printf("Endereco da variavel numero: %p\n", (void *)&numero);

    return 0;
}
