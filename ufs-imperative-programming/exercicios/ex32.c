#include <stdio.h>

int main() {
    printf("Os 30 primeiros numeros impares a partir de 51: \n");
    for (int i = 0; i < 30; i++) {
        printf("%d \n", 51 + i * 2);
    }
    return 0;
}
