#include <stdio.h>

int main() {
    float notas[3], alunos[3];
    for (int i = 0; i < 3; i++){
        printf("--- Aluno %d --- \n", i+1);
        float soma = 0.0;
        for (int j = 0; j < 3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[j]);
            soma += notas[j];
        }
        alunos[i] = soma / 3.0;
    }
    printf("\n");
    printf("-> Medias dos alunos: \n");
    for (int i = 0; i < 3; i++){
        printf("Aluno %d: media = %.2f \n", i+1, alunos[i]);
    }
    return 0;
}
