#include <stdbool.h>

bool multiplicar_matrizes(int a[][N], int b[][N], int c[][N], int m, int n, int p) {
    // Verifica se é possível multiplicar as matrizes
    if (n != p) {
        return false;
    }

    // Multiplica as matrizes
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    return true;
}
