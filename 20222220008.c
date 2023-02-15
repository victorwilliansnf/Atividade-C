#include <stdio.h>

int main() {
    int continuar = 1;
    float notas[3][3];
    
    while (continuar) {
        // Solicita as notas do próximo aluno
        printf("Insira as notas do aluno:\n");
        for (int i = 0; i < 3; i++) {
            printf("Nota %d: ", i+1);
            scanf("%f", &notas[i][0]);
            notas[i][1] += notas[i][0];
        }
        notas[0][2]++; // Contador de alunos
        
        // Pergunta se deseja inserir notas de outro aluno
        printf("Deseja inserir as notas de outro aluno? (1 - sim / 0 - não): ");
        scanf("%d", &continuar);
    }
    
    // Calcula as médias
    for (int i = 0; i < 3; i++) {
        notas[i][1] /= notas[0][2];
    }
    
    // Encontra as maiores e menores notas
    float maiores[2] = {0, 0}, menores[2] = {10, 10};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (notas[i][j] > maiores[j]) {
                maiores[j] = notas[i][j];
            }
            if (notas[i][j] < menores[j]) {
                menores[j] = notas[i][j];
            }
        }
    }
    
    // Mostra os resultados
    printf("Maior nota no primeiro exercício: %.2f\n", maiores[0]);
    printf("Menor nota no primeiro exercício: %.2f\n", menores[0]);
    printf("Maior nota no segundo exercício: %.2f\n", maiores[1]);
    printf("Menor nota no segundo exercício: %.2f\n", menores[1]);
    printf("Maior nota no terceiro exercício: %.2f\n", maiores[2]);
    printf("Menor nota no terceiro exercício: %.2f\n", menores[2]);
    printf("Maior média: %.2f\n", maiores[1]);
    printf("Menor média: %.2f\n", menores[1]);
    
    return 0;
}
