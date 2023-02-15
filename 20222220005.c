#include <stdio.h>

int main() {
    int num, maior, menor;
    for (int i = 1; i <= 20; i++) {
        do {
            printf("Digite o %dº número (não negativo): ", i);
            scanf("%d", &num);
        } while (num < 0); // repete a leitura do número enquanto ele for negativo
        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    printf("O maior número lido é: %d\n", maior);
    printf("O menor número lido é: %d\n", menor);
    return 0;
}
