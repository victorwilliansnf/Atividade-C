#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DESLOCAMENTO 3

char* codificaCesar(char* texto);

int main() {
    char texto[1000];

    // Lê o texto a ser codificado
    printf("Digite o texto a ser codificado: ");
    fgets(texto, 1000, stdin);

    // Remove o caractere de quebra de linha adicionado pelo fgets
    texto[strcspn(texto, "\n")] = '\0';

    // Codifica o texto
    char* textoCodificado = codificaCesar(texto);

    // Imprime o texto codificado
    printf("Texto codificado: %s\n", textoCodificado);

    // Libera a memória alocada para o texto codificado
    free(textoCodificado);

    return 0;
}

char* codificaCesar(char* texto) {
    int tamanhoTexto = strlen(texto);
    char* textoCodificado = (char*) malloc((tamanhoTexto + 1) * sizeof(char));

    for (int i = 0; i < tamanhoTexto; i++) {
        if (isalpha(texto[i])) {
            if (islower(texto[i])) {
                textoCodificado[i] = ((texto[i] - 'a' + DESLOCAMENTO) % 26) + 'a';
            } else {
                textoCodificado[i] = ((texto[i] - 'A' + DESLOCAMENTO) % 26) + 'A';
            }
        } else {
            textoCodificado[i] = texto[i];
        }
    }

    textoCodificado[tamanhoTexto] = '\0';

    return textoCodificado;
}
