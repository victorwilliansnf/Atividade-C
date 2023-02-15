#include <stdio.h>

int main() {
    int matriz[3][3];
    int x;
    int i, j;
    int encontrado = 0;

    // lê a matriz 3x3
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // lê o valor x
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);

    // busca o valor x na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                printf("\nO valor %d foi encontrado na posicao [%d][%d].\n", x, i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("\nO valor %d nao foi encontrado na matriz.\n", x);
    }

    return 0;
}
