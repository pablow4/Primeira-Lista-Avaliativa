#include <stdio.h>

int main() {
  int vetor[10];
  int i, pares = 0;

  printf("Digite 10 numeros:\n");
  for(i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
    if(vetor[i] % 2 == 0) {
      pares++;
    }
  }

  printf("\nO vetor possui %d valores pares.\n", pares);

  return 0;
}
