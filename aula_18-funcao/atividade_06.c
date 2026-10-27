#include <stdio.h>

int calcularFatorial(int n) {
    int resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero entre 0 e 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Numero invalido! Use um valor entre 0 e 12.\n");
        return 1;
    }

    printf("%d! = %d\n", numero, calcularFatorial(numero));

    return 0;
}