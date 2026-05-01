#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Linguagem C";
    char str2[20];
    int i, j = 0;
    int tam = strlen(str) - 1;
    for (i = tam; i >= 0; i--) {
        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0';
    printf("str2 = %s \n", str2);
    return 0;
}
