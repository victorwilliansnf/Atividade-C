#include <stdio.h>
#include <stdlib.h>

// Função para ler um inteiro do teclado garantido que ele esteja dentro do intervalo [min, max]
int scanIntIntervalo(int min, int max) {
    int num;
    do {
        printf("Insira um inteiro entre %d e %d: ", min, max);
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}

// Função para calcular o percentual: 100*valor/total
float percentual(int valor, int total) {
    return 100.0 * valor / total;
}

// Função que retorna o valor absoluto da diferença entre dois números reais
float absdif(int a, int b) {
    return abs(a - b);
}

int main() {
    int x, y, maior, menor;
    float perc, dif;

    x = scanIntIntervalo(0, 1000);
    y = scanIntIntervalo(0, 1000);

    if (x > y) {
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }

    perc = percentual(menor, maior);
    dif = absdif(maior, menor);

    printf("O percentual do menor em relação ao maior é: %.2f%%\n", perc);
    printf("O módulo da diferença entre o maior e o menor é: %.2f\n", dif);

    return 0;
}
