#include <stdio.h>

int* numerosPares(int numeros[], int n, int *m) {
    static int pares[100]; // array estático para armazenar os pares
    *m = 0; // inicializa o comprimento da nova sequência com 0

    for (int i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            pares[*m] = numeros[i]; // adiciona o número par na nova sequência
            (*m)++; // incrementa o comprimento da nova sequência
        }
    }

    return pares; // retorna a nova sequência
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, m;
    int *pares = numerosPares(numeros, n, &m);

    printf("Sequencia original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSequencia com numeros pares: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", pares[i]);
    }

    return 0;
}
