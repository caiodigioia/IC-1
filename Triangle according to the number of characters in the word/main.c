#include <stdio.h>

void main() {
    int tamanho = 0;
    int i;
    int j;
    char palavra[100];
    printf("Escolha uma palavra: ");
    scanf("%s", palavra);
    
    // contar o tamanho da palavra
    
    for (i = 0; palavra[i] != '\0'; i++) {
        tamanho++;
    }
    
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j <= i; j++) {
            printf("%s ", palavra);
        }
        printf("\n");
    }
}

