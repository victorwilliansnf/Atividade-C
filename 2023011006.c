#include <stdio.h>

void decimalParaBinario(int decimal) {
    int binario[32];
    int i = 0;
    
    // Realiza a divisão sucessiva do decimal por 2
    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    // Imprime o número binário na ordem correta
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}
