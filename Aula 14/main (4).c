#include <stdio.h>

int main(void) {

    int matriz[3][3] = {
        {12, 45, 7},
        {89, 23, 56},
        {34, 91, 18}
    };
    
    int maiorValor = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
    }

    printf("O maior valor armazenado na matriz e: %d\n", maiorValor);
    return 0;
}