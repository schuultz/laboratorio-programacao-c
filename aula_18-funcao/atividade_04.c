#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main() {
    int inicial, final;

    printf("Digite a quantidade inicial de produtos: ");
    scanf("%d", &inicial);

    final = dobro(inicial);

    printf("\nQuantidade inicial: %d\n", inicial);
    printf("Quantidade final (dobro): %d\n", final);

    return 0;
}