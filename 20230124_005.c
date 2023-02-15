#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

void sequencia_fatorial(int n, int seq[]) {
    for (int i = 0; i < n; i++) {
        seq[i] = fatorial(seq[i]);
    }
}

int main() {
    int n = 3;
    int seq[] = {2, 5, 7};

    printf("Sequência original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    printf("\n");

    sequencia_fatorial(n, seq);

    printf("Sequência final: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    printf("\n");

    return 0;
}
