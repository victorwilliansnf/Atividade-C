#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int n, float *media, float *desvio) {
    float soma = 0.0, somaQuadrados = 0.0;
    int i;

    // Calcula a soma e a soma dos quadrados das notas
    for (i = 0; i < n; i++) {
        soma += notas[i];
        somaQuadrados += pow(notas[i], 2);
    }

    // Calcula a média das notas
    *media = soma / n;

    // Calcula o desvio padrão das notas
    *desvio = sqrt((somaQuadrados / n) - pow(*media, 2));
}

int main() {
    int n, i;
    float *notas, media, desvio;

    // Lê a quantidade de alunos na turma
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    // Aloca dinamicamente um vetor para armazenar as notas
    notas = (float *) malloc(n * sizeof(float));

    // Lê as notas dos alunos
    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    // Calcula a média e o desvio padrão das notas
    mediaDesvio(notas, n, &media, &desvio);

    // Exibe os resultados
    printf("Média das notas: %.2f\n", media);
    printf("Desvio padrão das notas: %.2f\n", desvio);

    // Libera a memória alocada
    free(notas);

    return 0;
}
