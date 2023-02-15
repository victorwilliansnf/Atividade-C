#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lastDigitsMatch(int x, int y) {
    char xStr[100];
    char yStr[100];

    // converte x e y para strings
    sprintf(xStr, "%d", x);
    sprintf(yStr, "%d", y);

    int xLen = strlen(xStr);
    int yLen = strlen(yStr);

    // se y tem mais dígitos que x, eles não podem corresponder
    if (yLen > xLen) {
        return 0;
    }

    // compara os últimos dígitos de x com y
    int i, j;
    for (i = xLen - 1, j = yLen - 1; j >= 0; i--, j--) {
        if (xStr[i] != yStr[j]) {
            return 0;
        }
    }

    // se chegou até aqui, os últimos dígitos correspondem
    return 1;
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if (lastDigitsMatch(x, y)) {
        printf("y corresponde aos últimos dígitos de x.\n");
    } else {
        printf("y não corresponde aos últimos dígitos de x.\n");
    }
    return 0;
}
