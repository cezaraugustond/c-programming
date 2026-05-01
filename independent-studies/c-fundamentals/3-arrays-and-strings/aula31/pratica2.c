#include <stdio.h>

int main() {
    char palavra[20] = "Oitenta";
    printf("Palavra: %s \n", palavra);
    palavra[2] = '\0';
    printf("Palavra: %s \n", palavra);
    return 0;
}
