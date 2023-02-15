#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 9; i++) { // laço externo para percorrer as linhas da tabuada
        for (j = 1; j <= 10; j++) { // laço interno para percorrer as colunas da tabuada
            printf("%d x %d = %d\n", i, j, i*j); // imprime o resultado da multiplicação
        }
        printf("\n"); // imprime uma linha em branco para separar as tabuadas
    }
    return 0;
}
