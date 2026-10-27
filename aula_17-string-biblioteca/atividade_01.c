#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];

    printf("Digite o primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") != 0 && strcmp(perfil, "COMUM") != 0) {
        printf("Perfil invalido! Use ADMIN ou COMUM.\n");
        return 1;
    }

    int tamanho = strlen(nome);

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, nome);
    if (strcmp(perfil, "ADMIN") == 0) {
        strcat(mensagem, "! Voce possui acesso total ao sistema.");
    } else {
        strcat(mensagem, "! Voce possui acesso padrao ao sistema.");
    }

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Nome (confirmacao): %s\n", confirmacao);
    printf("Perfil: %s\n", perfil);
    printf("\n%s\n", mensagem);

    return 0;
}