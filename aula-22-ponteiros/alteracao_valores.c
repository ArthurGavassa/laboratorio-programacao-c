#include <stdio.h>

int main(void) {
    int numero = 15;
    int *p = &numero;

    printf("Valor inicial: %d\n", numero);

    *p = 50;

    printf("Valor atualizado: %d\n", numero);

    return 0;
}
