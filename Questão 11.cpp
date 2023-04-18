#include <stdio.h>

int main() {
    float numeros[10];
    int i, negativos = 0;
    float somaPositivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero real: ");
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            negativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %f\n", somaPositivos);

    return 0;
}

