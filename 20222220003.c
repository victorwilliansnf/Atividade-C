#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 1; i <= 50; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        if (num % 2 != 0 && num >= 100 && num <= 200) { // se o número lido for ímpar e estiver entre 100 e 200
            soma += num;
        }
    }
    printf("A soma dos números ímpares entre 100 e 200 é: %d\n", soma);
    return 0;
}
