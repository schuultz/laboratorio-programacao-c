#include <stdio.h>

int main() {
    int assentos[5][8] = {0};  // todos os assentos começam disponíveis
    
    assentos[1][2] = 1;  // reserva o 3º assento da 2ª fileira

    printf("Mapa do cinema (0 = livre, 1 = ocupado):\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Fileira %d: ", i + 1);
        for (int j = 0; j < 8; j++) {
            printf("%d ", assentos[i][j]);
        }
        printf("\n");
    }

    return 0;
}