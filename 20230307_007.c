#include <stdio.h>

void min_max(int v[], int n, int *min, int *max) {
    *min = v[0];
    *max = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] < *min) {
            *min = v[i];
        }
        if(v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {10, 5, 20, 15, 30};
    int n = 5;
    int min, max;

    min_max(v, n, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}
