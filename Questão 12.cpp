#include <stdio.h>

int main() {
    int valores[5];
    int i, soma = 0, maior, menor;
    float media;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        }
        else {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }

        soma += valores[i];
    }

    media = (float) soma / 5;

    printf("Valores lidos: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMedia dos valores: %.2f", media);

    return 0;
}

