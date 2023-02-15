#include <stdio.h>

// Função que calcula a quantidade de vezes que um dígito d aparece no número n
int count_digit(int n, int d) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == d) {
            count++;
        }
        n /= 10;
    }
    return count;
}

// Função que verifica se o número a é uma permutação do número b
int is_permutation(int a, int b) {
    // Contagem dos dígitos nos dois números
    int count_a[10] = {0};
    int count_b[10] = {0};
    
    // Calcular a contagem de dígitos nos dois números
    while (a > 0) {
        count_a[a % 10]++;
        a /= 10;
    }
    
    while (b > 0) {
        count_b[b % 10]++;
        b /= 10;
    }
    
    // Comparar a contagem de dígitos
    for (int i = 0; i < 10; i++) {
        if (count_a[i] != count_b[i]) {
            return 0; // não é permutação
        }
    }
    return 1; // é permutação
}

int main() {
    int a = 12345;
    int b = 54321;
    
    if (is_permutation(a, b)) {
        printf("%d é uma permutação de %d\n", a, b);
    } else {
        printf("%d não é uma permutação de %d\n", a, b);
    }
    
    return 0;
}
