#include <stdio.h>
#include <stdlib.h>

void printMatrix(int *matrix, int m, int n) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(matrix + i*n + j));
        }
        printf("\n");
    }
}

void printMatrixIndex(int **matrix, int m, int n) {
    int i, j;
    printf("Matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m = 2, n = 3;
    int *matrix = (int*) malloc(m * n * sizeof(int));
    int **matrixIndex = (int**) malloc(m * sizeof(int*));
    int i, j, k = 1;

    for (i = 0; i < m; i++) {
        matrixIndex[i] = (int*) malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            *(matrix + i*n + j) = k;
            matrixIndex[i][j] = k;
            k++;
        }
    }

    printMatrix(matrix, m, n);
    printf("\n");
    printMatrixIndex(matrixIndex, m, n);

    for (i = 0; i < m; i++) {
        free(matrixIndex[i]);
    }
    free(matrix);
    free(matrixIndex);
    return 0;
}
