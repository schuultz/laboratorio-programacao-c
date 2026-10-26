#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {4, 9, 2},
        {7, 15, 3},
        {8, 1, 6}
    };
    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}