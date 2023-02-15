#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, len;
    int is_palindrome = 1;
    
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    len = strlen(str) - 1;  // desconta o caractere '\n' da entrada
    
    // converte a string para letras minúsculas e remove caracteres de pontuação e espaço
    for (i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        } else {
            for (j = i; j < len; j++) {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
    
    // verifica se a string é um palíndromo
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
    
    return 0;
}
