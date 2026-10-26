#include <stdio.h>

int main() {
    char palavra[100];
    int quantidade;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (quantidade = 0; palavra[quantidade] != '\0'; quantidade++) {
    }

    printf("Quantidade de letras: %d\n", quantidade);

    return 0;
}