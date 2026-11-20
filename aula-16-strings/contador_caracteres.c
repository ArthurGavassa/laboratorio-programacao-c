#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra possui %d caracteres.\n", contador);

    return 0;
}