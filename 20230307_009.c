#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* posicoesLetra(char* str, char letra, int* tamanho) {
    int i, cont = 0;
    int* posicoes = NULL;
    *tamanho = 0;

    for(i = 0; i < strlen(str); i++) {
        if(str[i] == letra) {
            cont++;
            posicoes = realloc(posicoes, cont * sizeof(int));
            posicoes[cont-1] = i;
        }
    }

    *tamanho = cont;
    return posicoes;
}

int main() {
    char str[50], letra;
    int* posicoes, tamanho, i;

    printf("Digite uma string de caracteres: ");
    scanf("%[^\n]s", str);

    printf("Digite uma letra para buscar na string: ");
    scanf(" %c", &letra);

    posicoes = posicoesLetra(str, letra, &tamanho);

    printf("\nPosicoes onde a letra '%c' foi encontrada: ", letra);
    for(i = 0; i < tamanho; i++) {
        printf("%d ", posicoes[i]);
    }

    free(posicoes);
    return 0;
}
