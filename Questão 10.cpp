#include <stdio.h>

int main() {
    float notas[15];
    float media = 0;
    
    for(int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i]; 
    }
    
    media /= 15; 
    
    printf("A media geral das notas dos alunos e: %.2f\n", media);
    
    return 0;
}
