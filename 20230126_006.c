#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j;
    int matriz[MAX_SIZE][MAX_SIZE];
    int soma_diagonal_principal = 0, soma_diagonal_secundaria = 0;
    int soma_linha[MAX_SIZE] = {0}, soma_coluna[MAX_SIZE] = {0};

    printf("Informe o tamanho da matriz quadrada (n x n): ");
    scanf("%d", &n);

    // Leitura da matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Informe o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo das somas
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            soma_linha[i] += matriz[i][j];
            soma_coluna[j] += matriz[i][j];
            if (i == j) soma_diagonal_principal += matriz[i][j];
            if (i+j == n-1) soma_diagonal_secundaria += matriz[i][j];
        }
    }

    // Verificação se é um quadrado mágico
    int soma = soma_linha[0];
    for (i = 0; i < n; i++) {
        if (soma_linha[i] != soma || soma_coluna[i] != soma) {
            printf("Nao e um quadrado magico.\n");
            return 0;
        }
    }
    if (soma_diagonal_principal != soma || soma_diagonal_secundaria != soma) {
        printf("Nao e um quadrado magico.\n");
        return 0;
    }

    printf("E um quadrado magico.\n");
    return 0;
}
