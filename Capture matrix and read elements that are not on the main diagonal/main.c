#include <stdio.h>

void main() {
    int matriz[3][3];
    int i;
    int j;
    
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("Digite um valor para a linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Os elementos da matriz, exceto na diagonal principal são: ");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
}
