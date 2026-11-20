#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    int i;

    for (i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nNumero invalido. Digite um numero entre 0 e 12.\n");
    } else {
        printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));
    }

    return 0;
}
