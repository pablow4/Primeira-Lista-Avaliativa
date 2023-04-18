#include <stdio.h>

int main() {
    int numeros[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite um numero inteiro par: ");
        scanf("%d", &numeros[i]);

        while (numeros[i] % 2 != 0) {
            printf("Digite um numero inteiro par: ");
            scanf("%d", &numeros[i]);
        }
    }

    printf("\nOs numeros digitados em ordem inversa sao:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
