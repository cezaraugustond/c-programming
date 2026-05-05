#include <stdio.h>

int main() {
    int dias, cont = 0;
    printf("Quantidade de dias: ");
    scanf("%d", &dias);
    for(int i = dias; i >= 30; i -= 30)
        cont++;
    printf("%d dias tem %d meses completos. \n", dias, cont);
    return 0;
}
