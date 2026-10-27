#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char categoria[20];
    char copia[50];
    char descricao[100];

    printf("Digite o nome do produto: ");
    scanf("%49s", nome);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") != 0 && strcmp(categoria, "PERIFERICO") != 0) {
        printf("Categoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    int tamanho = strlen(nome);

    strcpy(copia, nome);

    strcpy(descricao, "Produto: ");
    strcat(descricao, nome);

    printf("\n--- RESUMO DO CADASTRO ---\n");
    printf("Nome: %s\n", nome);
    printf("Caracteres no nome: %d\n", tamanho);
    printf("Copia do nome: %s\n", copia);
    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: HARDWARE (componentes internos)\n");
    } else {
        printf("Categoria: PERIFERICO (dispositivos externos)\n");
    }
    printf("Descricao: %s\n", descricao);

    return 0;
}