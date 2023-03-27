#include <stdio.h>

int* buscar_valor(int *inicio, int *fim, int valor) {
    while (inicio <= fim) {
        if (*inicio == valor) {
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

int main() {
    int vetor[10] = {1, 2, 3, 2, 4, 5, 6, 7, 2, 8};
    int *inicio = &vetor[0];
    int *fim = &vetor[9];
    
    int valor = 2;
    int *resultado = buscar_valor(inicio, fim, valor);
    
    while (resultado != NULL) {
        printf("Valor %d encontrado no endereco %p\n", valor, resultado);
        resultado = buscar_valor(resultado + 1, fim, valor);
    }
    
    return 0;
}
