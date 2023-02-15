#include <stdio.h>

// Função para verificar se um número é permutação de outro
int isPermutation(int a, int b) {
    int digits[10] = {0};

    // Conta a quantidade de cada dígito em a
    while (a > 0) {
        digits[a % 10]++;
        a /= 10;
    }

    // Verifica se os dígitos de b formam uma permutação dos dígitos de a
    while (b > 0) {
        digits[b % 10]--;
        b /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digits[i] != 0) {
            return 0;
        }
    }

    return 1;
}

// Função para verificar se y é um segmento de x
int isSegment(int x, int y) {
    // Transforma y em um número com a mesma quantidade de dígitos de x
    int digits = 0;
    int y_copy = y;
    while (y_copy > 0) {
        digits++;
        y_copy /= 10;
    }
    int multiplier = 1;
    for (int i = 0; i < digits; i++) {
        multiplier *= 10;
    }
    y = y * multiplier;

    // Verifica se y é um segmento de x
    while (x > 0) {
        if (x % multiplier == y) {
            // Verifica se os dígitos de y formam uma permutação dos dígitos de x
            if (isPermutation(x, y)) {
                return 1;
            }
        }
        x /= 10;
    }

    return 0;
}

// Função principal para teste
int main() {
    int x, y;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &x, &y);

    if (x < y) {
        if (isSegment(x, y)) {
            printf("y é um segmento de x.\n");
        } else {
            printf("y não é um segmento de x.\n");
        }
    } else {
        printf("x não é menor que y.\n");
    }

    return 0;
}
