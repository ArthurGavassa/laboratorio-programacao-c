#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *p = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: %d\n", i + 1, *(p + i));
    }

    return 0;
}
