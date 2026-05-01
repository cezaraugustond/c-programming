#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6;
    printf("Media = %.2f \n", media);
    if (media >= 7){
        printf("Situacao do aluno: APROVADO \n");
    } else {
        if (media >= 5){
            printf("Situacao do aluno: EM RECUPERACAO \n");
        } else {
            printf("Situacao do aluno: REPROVADO \n");
        }
    }
    return 0;
}
