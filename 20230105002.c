#include <stdio.h>

// Função para ler o peso do feto em gramas e a quantidade de semanas de gestação
void lerDados(int *peso, int *semanas) {
    printf("Insira o peso do feto em gramas: ");
    scanf("%d", peso);
    printf("Insira a quantidade de semanas da gestacao: ");
    scanf("%d", semanas);
}

// Função para recomendar o tipo de parto de acordo com o peso do feto e a quantidade de semanas de gestação
void recomendarParto(int peso, int semanas) {
    if (peso < 100 || semanas < 28) {
        printf("Parto nao devera ser realizado, reavaliar clinicamente\n");
        return;
    }
    
    int meses = semanas / 4;
    
    if (peso > 2500 && meses > 7) {
        printf("Parto normal\n");
    } else if (peso > 2500 && meses <= 7) {
        printf("Parto Cesariana\n");
    } else if (peso >= 1500 && peso <= 2000 && meses > 9) {
        printf("Parto normal\n");
    } else {
        printf("Parto Cesariana\n");
    }
}

int main() {
    int peso, semanas;
    lerDados(&peso, &semanas);
    recomendarParto(peso, semanas);
    return 0;
}
