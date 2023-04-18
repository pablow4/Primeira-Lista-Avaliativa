#include <stdio.h>

int main() {
    float vetor1[10], vetor2[10];
    int i;

    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor1[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    printf("Vetor 1: ");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor2[i]);
    }

    return 0;
}

