#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char copiaNome[50];
    char mensagem[100] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome); 
    printf("Digite seu perfil: ");
    scanf("%19s", perfil); 

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

  
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    } else {
        printf("Perfil: Desconhecido\n");
    }

    strcpy(copiaNome, nome);

    strcat(mensagem, copiaNome);
    strcat(mensagem, "!\n");

    printf("\n%s", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}