#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Função que imprime a palavra de trás-para-frente
void imprime_inverso(char palavra[]) {
    int i;
    for (i = strlen(palavra) - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
}

// Função que imprime a string sem vogais
void imprime_sem_vogais(char string[]) {
    int i, j;
    for (i = 0, j = 0; i < strlen(string); i++) {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {
            printf("%c", string[i]);
            j++;
        }
    }
    printf("\n");
}

// Função que transforma todos os caracteres de uma string em maiúsculos
void maiuscula(char string[]) {
    int i;
    for (i = 0; i < strlen(string); i++) {
        string[i] = toupper(string[i]);
    }
}

// Função que retorna o número de vezes que um caractere aparece na string
int conta_caractere(char string[], char caractere) {
    int i, count = 0;
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            count++;
        }
    }
    return count;
}

// Função que apaga todas as ocorrências de um caractere na string
void apaga_caractere(char string[], char caractere) {
    int i, j;
    for (i = 0, j = 0; i < strlen(string); i++) {
        if (string[i] != caractere) {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
}

// Função principal para testar as funções
int main() {
    char palavra[100], string[100], caractere;
    int dimensao1, dimensao2, dimensao3, i, j;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Palavra de tras-para-frente: ");
    imprime_inverso(palavra);
    printf("Digite uma string: ");
    scanf("%s", string);
    printf("String sem vogais: ");
    imprime_sem_vogais(string);
    printf("Digite uma string: ");
    scanf("%s", string);
    maiuscula(string);
    printf("String em maiusculas: %s\n", string);
    printf("Digite uma string e um caractere: ");
    scanf("%s %c", string, &caractere);
    printf("O caractere %c aparece %d vezes na string.\n", caractere, conta_caractere(string, caractere));
    printf("Digite uma string e um caractere: ");
    scanf("%s %c", string, &caractere);
    apaga_caractere(string, caractere);
    printf("String sem o caractere %c: %s\n", caractere, string);
    return 0;
}
