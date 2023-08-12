#include <stdio.h>

void main () {
    char mensagem[100];
    int i;
    int j;
    int tamanho = 0;
    int contador_e = 0;
    int contador_a = 0;
    int contador_i = 0;
    int contador_o = 0;
    int contador_u = 0;
    
    printf("Digite um nome: ");
    scanf("%s", mensagem);
 
    for (i = 0; mensagem[i] != '\0'; i++) {
        switch (mensagem[i]) {
            case 'A':
            contador_a++;
            break;
            case 'a':
            contador_a++;
            break;
            case 'E': 
            contador_e++;
            break;
            case 'e': 
            contador_e++;
            break;
            case 'I': 
            contador_i++;
            break;
            case 'i': 
            contador_i++;
            break;
            case 'O': 
            contador_o++;
            break;
            case 'o': 
            contador_o++;
            break;
            case 'U': 
            contador_u++;
            break;
            case 'u': 
            contador_u++;
            break;
        }
    }
    printf("O número de A é %i , o de E é %i , o de I é %i , o de O é %i e o de U é %i", contador_a, contador_e, contador_i, contador_o, contador_u);
    
}
