#include <stdio.h>

int main() {
    int nums[10];
    int i, max, pos;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    printf("O vetor digitado foi: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    max = nums[0];
    pos = 0;
    for (i = 1; i < 10; i++) {
        if (nums[i] > max) {
            max = nums[i];
            pos = i;
        }
    }

    printf("O maior elemento e %d e esta na posicao %d do vetor.\n", max, pos);

    return 0;
}
