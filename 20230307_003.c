#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';
    
    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;
    
    printf("Valor do inteiro antes da modificacao: %d\n", inteiro);
    printf("Valor do real antes da modificacao: %f\n", real);
    printf("Valor do caractere antes da modificacao: %c\n", caractere);
    
    *p_inteiro = 20;
    *p_real = 2.71;
    *p_caractere = 'B';
    
    printf("Valor do inteiro apos a modificacao: %d\n", inteiro);
    printf("Valor do real apos a modificacao: %f\n", real);
    printf("Valor do caractere apos a modificacao: %c\n", caractere);
    
    return 0;
}
