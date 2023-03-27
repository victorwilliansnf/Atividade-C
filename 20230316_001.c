#include <stdio.h>
#include <stdlib.h>

int *le_vetor(int n) {
    int *vetor = malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar o vetor.\n");
        exit(1);
    }
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void encontra_maior_menor(int *vetor, int n, int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n, *vetor, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = le_vetor(n);

    encontra_maior_menor(vetor, n, &maior, &menor);

    printf("O maior valor do vetor eh: %d\n", maior);
    printf("O menor valor do vetor eh: %d\n", menor);

    free(vetor);

    return 0;
}
