#include <stdio.h>

void main() {
    int tamanho = 0;
    char nome[100];
    int i;
    printf("Digite um nome: ");
    scanf("%s", nome);
    
    for (i = 0; nome[i] != '\0'; i++) {
        tamanho++;
    }
    
    for (i = tamanho; i >= 0; i--) {
        printf("%c", nome[i]);
    }
}
