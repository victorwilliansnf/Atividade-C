#include <stdio.h>

int somaArrays(int *arr1, int *arr2, int *arr3, int tam1, int tam2) {
    if (tam1 != tam2) {
        return 0; // retorna zero se o tamanho dos arrays for diferente
    }
    for (int i = 0; i < tam1; i++) {
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i); // soma os elementos correspondentes
    }
    return 1; // retorna um se a soma for realizada com sucesso
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[3];
    
    int tam1 = sizeof(arr1) / sizeof(int);
    int tam2 = sizeof(arr2) / sizeof(int);
    
    if (somaArrays(arr1, arr2, arr3, tam1, tam2)) {
        printf("Resultado da soma dos arrays: ");
        for (int i = 0; i < tam1; i++) {
            printf("%d ", *(arr3 + i));
        }
        printf("\n");
    } else {
        printf("Os arrays possuem tamanhos diferentes\n");
    }
    
    return 0;
}
