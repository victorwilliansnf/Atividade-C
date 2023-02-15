#include <stdio.h>

int main() {
    int i, j;
    float nota, media, maiorNota[3], menorNota[3], maiorMedia = 0, menorMedia = 10;
    for (i = 1; i <= 3; i++) { // laço externo para percorrer os exercícios
        maiorNota[i-1] = 0;
        menorNota[i-1] = 10;
        for (j = 1; j <= 10; j++) { // laço interno para percorrer os alunos
            printf("Digite a nota do %dº aluno no %dº exercício: ", j, i);
            scanf("%f", &nota);
            if (nota > maiorNota[i-1]) {
                maiorNota[i-1] = nota;
            }
            if (nota < menorNota[i-1]) {
                menorNota[i-1] = nota;
            }
            media += nota;
        }
        media /= 10;
        printf("\nMaior nota do %dº exercício: %.2f\n", i, maiorNota[i-1]);
        printf("Menor nota do %dº exercício: %.2f\n", i, menorNota[i-1]);
        if (media > maiorMedia) {
            maiorMedia = media;
        }
        if (media < menorMedia) {
            menorMedia = media;
        }
    }
    printf("\nMaior média final: %.2f\n", maiorMedia);
    printf("Menor média final: %.2f\n", menorMedia);
    return 0;
}
