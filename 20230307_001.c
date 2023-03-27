#include <stdio.h>

void imprimir_vetor(float *inicio, float *fim) {
    while (inicio <= fim) {
        printf("%f ", *inicio);
        inicio++;
    }
    printf("\n");
}

int main() {
    float vetor1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float vetor2[] = {0.5, 1.5, 2.5, 3.5};
    float vetor3[] = {10.0, 20.0, 30.0, 40.0, 50.0, 60.0};
    
    float *inicio, *fim;
    
    // Testando a função com o vetor1
    inicio = &vetor1[1];
    fim = &vetor1[3];
    printf("Imprimindo vetor1[1..3]: ");
    imprimir_vetor(inicio, fim);
    
    // Testando a função com o vetor2
    inicio = &vetor2[0];
    fim = &vetor2[2];
    printf("Imprimindo vetor2[0..2]: ");
    imprimir_vetor(inicio, fim);
    
    // Testando a função com o vetor3
    inicio = &vetor3[2];
    fim = &vetor3[5];
    printf("Imprimindo vetor3[2..5]: ");
    imprimir_vetor(inicio, fim);
    
    return 0;
}
