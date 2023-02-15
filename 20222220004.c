#include <stdio.h>

int main() {
    int num, maior, menor;
    for (int i = 1; i <= 20; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        if (i == 1) { // se for o primeiro número lido, ele é atribuído tanto à variável maior quanto à variável menor
            maior = num;
            menor = num;
        } else { // se não for o primeiro número lido, ele é comparado com os valores atuais de maior e menor
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

