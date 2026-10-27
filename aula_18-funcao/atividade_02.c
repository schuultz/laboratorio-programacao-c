#include <stdio.h>

float maiorPreco(float a, float b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    float preco1, preco2;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);
    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("O maior preco e: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}