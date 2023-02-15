#include <stdio.h>

int main() {
    // Inicializando as matrizes
    int A[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int B[3][5] = {{15, 14, 13, 12, 11}, {10, 9, 8, 7, 6}, {5, 4, 3, 2, 1}};
    int C[3][5];
    int i, j;

    // Calculando a soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprimindo a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
