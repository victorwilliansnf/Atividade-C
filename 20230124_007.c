#include <stdio.h>

void countOccurrences(int n, int results[]) {
    int freq[7] = {0}; // inicializa vetor de frequências com 0
    for (int i = 0; i < n; i++) {
        freq[results[i]]++; // incrementa a frequência da face correspondente
    }
    for (int i = 1; i <= 6; i++) {
        printf("A face %d apareceu %d vezes.\n", i, freq[i]);
    }
}

int main() {
    int n;
    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);
    int results[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o resultado do lançamento %d: ", i+1);
        scanf("%d", &results[i]);
    }
    countOccurrences(n, results);
    return 0;
}
