#include <stdio.h>

int lerNumeroPar() {
    int n;
    do {
        printf("Digite um numero par: ");
        scanf("%d", &n);
    } while (n % 2 != 0);
    return n;
}

int ehNumeroPerfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma == n;
}

int main() {
    int n = lerNumeroPar();
    if (ehNumeroPerfeito(n)) {
        printf("%d eh um numero perfeito\n", n);
    } else {
        printf("%d nao eh um numero perfeito\n", n);
    }
    return 0;
}
