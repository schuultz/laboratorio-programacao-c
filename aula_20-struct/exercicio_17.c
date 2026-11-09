#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1, funcionario2;

    printf("=== Cadastro do Funcionario 1 ===\n");
    printf("Nome: ");
    fgets(funcionario1.nome, sizeof(funcionario1.nome), stdin);
    funcionario1.nome[strcspn(funcionario1.nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);
    getchar();

    printf("\n=== Cadastro do Funcionario 2 ===\n");
    printf("Nome: ");
    fgets(funcionario2.nome, sizeof(funcionario2.nome), stdin);
    funcionario2.nome[strcspn(funcionario2.nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n=== Dados Cadastrados ===\n");
    printf("Funcionario 1: %s, %d anos, R$ %.2f\n",
           funcionario1.nome, funcionario1.idade, funcionario1.salario);
    printf("Funcionario 2: %s, %d anos, R$ %.2f\n",
           funcionario2.nome, funcionario2.idade, funcionario2.salario);

    printf("\n=== Resultado ===\n");
    if (funcionario1.salario > funcionario2.salario) {
        printf("Maior salario: %s (R$ %.2f)\n",
               funcionario1.nome, funcionario1.salario);
        printf("Diferenca salarial: R$ %.2f\n",
               funcionario1.salario - funcionario2.salario);
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("Maior salario: %s (R$ %.2f)\n",
               funcionario2.nome, funcionario2.salario);
        printf("Diferenca salarial: R$ %.2f\n",
               funcionario2.salario - funcionario1.salario);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }

    return 0;
}