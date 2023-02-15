#include <stdio.h>

int main() {
    int num, soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma dos cinco números é: %d\n", soma);
    return 0;
}
