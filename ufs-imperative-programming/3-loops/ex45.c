#include <stdio.h>

int main() {
    int valor, x = 1, y;
    printf("Valor: ");
    scanf("%d", &valor);
    while (x <= valor){
        y = 1;
        while (y <= x){
            printf("%d ", y);
            y++;
        }
        printf("\n");
        x++;
    }
    return 0;
}
