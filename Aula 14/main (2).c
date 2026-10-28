#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nMedias dos alunos:\n");
    
    for (int i = 0; i < 3; i++) {
        float somaNotas = 0;
        for (int j = 0; j < 2; j++) {
            somaNotas += notas[i][j];
        }
        float media = somaNotas / 2.0;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }

    return 0;
}
