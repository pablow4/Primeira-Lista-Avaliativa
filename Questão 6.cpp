#include <stdio.h>

int main() {
  int vetor[10], i, maior, menor;

  printf("Digite 10 valores para o vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);
  }

  maior = vetor[0];
  menor = vetor[0];
  for (i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  printf("\nMaior elemento do vetor: %d\n", maior);
  printf("Menor elemento do vetor: %d\n", menor);

  return 0;
}
