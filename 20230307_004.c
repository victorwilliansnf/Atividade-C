#include <stdio.h>

int main() {
    int array[8];
    int *ptr;
    int i;
    
    printf("Digite 8 numeros inteiros:\n");
    
    ptr = array;
    
    for(i = 0; i < 8; i++) {
        scanf("%d", ptr);
        
        if (*ptr % 2 == 0) {
            printf("Endereco da posicao %d: %p\n", i, ptr);
        }
        
        ptr++;
    }
    
    ptr = array;
    
    printf("Valores do array (dobro):\n");
    
    for(i = 0; i < 8; i++) {
        printf("%d ", *ptr * 2);
        ptr++;
    }
    
    return 0;
}
