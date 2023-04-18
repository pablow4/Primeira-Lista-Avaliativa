#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;
    
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite as posicoes X e Y (entre 0 e 7):\n");
    scanf("%d %d", &x, &y);
    
    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Posicoes invalidas\n");
        return 1;
    }
    
    int soma = vetor[x] + vetor[y];
    printf("A soma dos valores das posicoes %d e %d eh %d\n", x, y, soma);
    
    return 0;
}

