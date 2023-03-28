#include <stdio.h>
#include <stdlib.h>

double** alocaMatriz(int m, int n) {
    double **matriz = (double **)malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++)
        matriz[i] = (double *)malloc(n * sizeof(double));
    return matriz;
}

void liberaMatriz(double **matriz, int m) {
    for (int i = 0; i < m; i++)
        free(matriz[i]);
    free(matriz);
}

void leMatriz(double **matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void somaMatrizes(double **matrizA, double **matrizB, double **matrizC, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void imprimeMatriz(double **matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;

    printf("Digite a ordem da matriz (m e n): ");
    scanf("%d %d", &m, &n);

    double **matrizA = alocaMatriz(m, n);
    double **matrizB = alocaMatriz(m, n);
    double **matrizC = alocaMatriz(m, n);

    printf("Digite os valores da matriz A:\n");
    leMatriz(matrizA, m, n);

    printf("Digite os valores da matriz B:\n");
    leMatriz(matrizB, m, n);

    somaMatrizes(matrizA, matrizB, matrizC, m, n);

    printf("Matriz resultante da soma:\n");
    imprimeMatriz(matrizC, m, n);

    liberaMatriz(matrizA, m);
    liberaMatriz(matrizB, m);
    liberaMatriz(matrizC, m);

    return 0;
}
