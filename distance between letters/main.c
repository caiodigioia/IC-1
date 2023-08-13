#include <stdio.h>

int Distancia (char a, char b) {
    
    if (a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z') {
        int dist = 0;
        
        for (char c = a + 1; c < b; c++) {
            dist++;
        }
        return dist;
    }
    
    else {
        return 1;
    }
    
}

void main() {
    char a, b;
    
    printf("Digite o 1o caractere: ");
    scanf("%c", &a);
    
    printf("Digite o 2o caractere: ");
    scanf(" %c", &b);
    
    int resultado = Distancia(a, b);
    
    printf("A distância entre %c e %c é %i ", a, b, resultado);
}
