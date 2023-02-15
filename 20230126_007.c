#include <stdio.h>

#define MAX_N 100
#define MAX_K 100

int main() {
    int A[MAX_N][MAX_N];
    int m, n, k;
    scanf("%d", &n); // lê o tamanho da matriz quadrada
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]); // lê a matriz A
        }
    }
    scanf("%d", &m); // lê o número de itinerários
    for (int i = 0; i < m; i++) {
        int custo_total = 0;
        scanf("%d", &k); // lê o número de cidades no itinerário
        int cidade_atual, cidade_anterior;
        scanf("%d", &cidade_atual); // lê a primeira cidade
        for (int j = 1; j < k; j++) {
            cidade_anterior = cidade_atual;
            scanf("%d", &cidade_atual); // lê a próxima cidade
            custo_total += A[cidade_anterior - 1][cidade_atual - 1]; // soma o custo de transporte entre as cidades
        }
        printf("Custo total do itinerário %d: %d\n", i + 1, custo_total);
    }
    return 0;
}
