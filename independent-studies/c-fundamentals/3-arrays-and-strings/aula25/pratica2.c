#include <stdio.h>
#define N 5

int main() {
    float notas[N], media = 0.0;
    int i;
    for (i = 0; i < N; i++){
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media /= N;
    printf("\n");
    printf("Media = %.2f \n", media);
    printf("\n");
    printf("-> Alunos acima da media: \n");
    for (i = 0; i < N; i++){
        if (notas[i] > media)
            printf("Aluno %d: %.2f \n", i+1, notas[i]);
    }
    return 0;
}
