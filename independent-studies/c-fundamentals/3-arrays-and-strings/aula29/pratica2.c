#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}}, soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma = %d \n", soma);
    return 0;
}
