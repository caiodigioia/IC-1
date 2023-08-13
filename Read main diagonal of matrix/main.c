#include <stdio.h>

void main() {
    int matriz[4][4];
    int i, j;

    // Ler os elementos da matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite a posição da linha %i e da coluna %i: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir os elementos da diagonal principal
    printf("Elementos da diagonal principal:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

}


