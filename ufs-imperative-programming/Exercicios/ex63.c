#include <stdio.h>
#include <ctype.h>

int main() {
    const int ALUNOS = 5;
    const int QUESTOES = 5;
    char gabarito[QUESTOES], respostas[ALUNOS][QUESTOES];
    float notas[ALUNOS], nota;
    int i, j;
    printf("-> GABARITO \n");
    for (i = 0; i < QUESTOES; i++) {
        printf("Questao %d: ", i+ 1);
        scanf(" %c", &gabarito[i]);
        gabarito[i] = toupper(gabarito[i]);
    }
    printf("-> Respostas dos alunos: \n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: \n", i+1);
        nota = 0;
        for (j = 0; j < QUESTOES; j++) {
            printf("%do questao: ", j+1);
            scanf(" %c", &respostas[i][j]);
            respostas[i][j] = toupper(respostas[i][j]);
            if (gabarito[j] == respostas[i][j]) {
                nota += 0.5;
            }
        }
        notas[i] = nota;
    }
    printf("-> Relatorio com as notas de todos os alunos: \n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d -> nota: %.1f \n", i+1, notas[i]);
    }
    return 0;
}
