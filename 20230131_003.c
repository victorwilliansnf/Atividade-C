#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    fgets(data, 11, stdin);

    if (data[2] != '/' || data[5] != '/') {
        printf("Formato inválido!\n");
        return 1;
    }

    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Formato inválido!\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        if (i != 2 && i != 5 && !isdigit(data[i])) {
            printf("Formato inválido!\n");
            return 1;
        }
    }

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
