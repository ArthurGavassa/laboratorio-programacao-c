#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[20];
    char copiaProduto[50];
    char descricao[100] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);
    printf("Categoria: ");
    scanf("%19s", categoria);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produto);
    
    printf("Caracteres: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n\n");
    } else {
        printf("Categoria: Desconhecida\n\n");
    }

    strcpy(copiaProduto, produto);

    strcat(descricao, copiaProduto);

    printf("Descricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}