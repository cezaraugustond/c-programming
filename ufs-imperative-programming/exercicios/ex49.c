#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[21], palavra2[21], palavra3[21];
    printf("Palavra 1: ");
    scanf("%s", palavra1);
    printf("Palavra 2: ");
    scanf("%s", palavra2);
    printf("Palavra 3: ");
    scanf("%s", palavra3);
    printf("Palavras ordenadas alfabeticamentes: ");
    if (strcmp(palavra1, palavra2) < 0 && strcmp(palavra1, palavra3) < 0) {
        if (strcmp(palavra2, palavra3) < 0) {
            printf("%s, %s, %s \n", palavra1, palavra2, palavra3);
        } else {
            printf("%s, %s, %s \n",palavra1, palavra3, palavra2);
        }
    }
    if (strcmp(palavra2, palavra1) < 0 && strcmp(palavra2, palavra3) < 0) {
        if (strcmp(palavra1, palavra3) < 0) {
            printf("%s, %s, %s \n", palavra2, palavra1, palavra3);
        } else {
            printf("%s, %s, %s \n", palavra2, palavra3, palavra1);
        }
    }
    if (strcmp(palavra3, palavra1) < 0 && strcmp(palavra3, palavra2) < 0) {
        if (strcmp(palavra1, palavra2) < 0) {
            printf("%s, %s, %s \n", palavra3, palavra1, palavra2);
        } else {
            printf("%s, %s, %s \n", palavra3, palavra2, palavra1);
        }
    }
    return 0;
}
