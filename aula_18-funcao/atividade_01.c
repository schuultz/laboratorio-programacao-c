#include <stdio.h>

void exibirMenu() {
    printf("\n--- CALCULADORA ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando...\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("Erro: divisao por zero nao e permitida!\n");
                } else {
                    printf("Resultado: %.2f\n", dividir(n1, n2));
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}