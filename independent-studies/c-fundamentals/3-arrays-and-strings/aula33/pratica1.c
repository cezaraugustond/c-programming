#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Linguagem C";
    int tamanho = strlen(str) - 1;
    for (int i = tamanho; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
