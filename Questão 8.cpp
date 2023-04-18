#include <stdio.h>

int main() {
    int valores[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o primeiro valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores lidos em ordem inversa: ");
    for (i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }

    return 0;
}
