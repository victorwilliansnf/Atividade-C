#include <stdio.h>

#define LIN 5
#define COL 5

int main() {
    int mat[LIN][COL] = { {1, 2, 3, 4, 5},
                          {6, 7, 8, 9, 10},
                          {11, 12, 13, 14, 15},
                          {16, 17, 18, 19, 20},
                          {21, 22, 23, 24, 25} };
    int i, j, somaLinha4 = 0, somaCol2 = 0;
    
    printf("Matriz:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal principal: ");
    for (i = 0; i < LIN; i++) {
        printf("%d ", mat[i][i]);
    }
    
    printf("\nDiagonal secundaria: ");
    for (i = 0; i < LIN; i++) {
        printf("%d ", mat[i][LIN-1-i]);
    }
    
    for (j = 0; j < COL; j++) {
        somaLinha4 += mat[3][j];
        somaCol2 += mat[j][1];
    }
    printf("\nSoma da linha 4: %d", somaLinha4);
    printf("\nSoma da coluna 2: %d", somaCol2);
    
    printf("\nMatriz sem a diagonal principal:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (i != j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
