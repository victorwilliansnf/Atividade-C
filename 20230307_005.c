#include <stdio.h>

int ordena(int *a, int *b, int *c) {
    int temp;
    int trocou = 0;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
        trocou = 1;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
        trocou = 1;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
        trocou = 1;
    }

    if (*a == *b && *b == *c) {
        return 1;
    }

    return trocou;
}

int main() {
    int a, b, c;
    int iguais;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    iguais = ordena(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    if (iguais) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}
