#include <stdio.h>

int produtoEscalar(int x[], int y[], int n) {
    int resultado = 0;
    for (int i = 0; i < n; i++) {
        resultado += x[i] * y[i];
    }
    return resultado;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {5, 4, 3, 2, 1};
    int n = 5;

    int produto = produtoEscalar(x, y, n);

    printf("O produto escalar dos vetores x e y é: %d\n", produto);

    return 0;
}
