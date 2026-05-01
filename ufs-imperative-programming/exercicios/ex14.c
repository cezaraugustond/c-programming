#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    nota3 = (42 - (nota1 * 1) - (nota2 * 2)) / 3;
    printf("Para ter um media = 7, a nota 3 deve ser => %.2f \n", nota3);
    return 0;
}
