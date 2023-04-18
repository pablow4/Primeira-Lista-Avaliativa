#include <stdio.h>

int main() {
    int valores[5];
    int i, posicao_maior, posicao_menor;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    posicao_maior = 0;
    for (i = 1; i < 5; i++) {
        if (valores[i] > valores[posicao_maior]) {
            posicao_maior = i;
        }
    }

    posicao_menor = 0;
    for (i = 1; i < 5; i++) {
        if (valores[i] < valores[posicao_menor]) {
            posicao_menor = i;
        }
    }

    // Mostra as posições
    printf("Maior valor: %d, na posicao %d\n", valores[posicao_maior], posicao_maior+1);
    printf("Menor valor: %d, na posicao %d\n", valores[posicao_menor], posicao_menor+1);

    return 0;
}

