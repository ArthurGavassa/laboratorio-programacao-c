#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char curso[10];
    char copiaNome[50];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso: ");
    scanf("%9s", curso);

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nome);

    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(curso, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Nao identificado\n");
    }

    printf("Caracteres no nome: %zu\n\n", strlen(nome));

    strcpy(copiaNome, nome);

    strcat(mensagem, copiaNome);
    strcat(mensagem, "!\n");

    printf("%s", mensagem);

    return 0;
}