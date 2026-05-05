#include <stdio.h>
#include <string.h>

int main() {
    char matriculas[5][12];
    int contador = 0;
    for (int i = 0; i < 5; i++) {
        printf("Matricula do aluno %d: ", i+1);
        fgets(matriculas[i], sizeof(matriculas[i]), stdin);
        matriculas[i][strcspn(matriculas[i], "\n")] = '\0';
    }
    for (int i = 0; i < 5; i ++) {
        if (matriculas[i][2] == '1' && matriculas[i][3] == '5' && matriculas[i][4] == '9' && matriculas[i][5] == '7'){
            contador++;
        }
    }
    printf("Quantidade de alunos que ingressaram em 2015 no curso agroecologia: %d alunos. \n", contador);
    return 0;
}
