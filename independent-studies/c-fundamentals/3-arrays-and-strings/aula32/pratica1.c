#include <stdio.h>

int main() {
    char string1[20] = "Hello World";
    char string2[20];
    int i;
    for (i = 0; string1[i] != '\0'; i++){
        string2[i] = string1[i];
    }
    string2[i] = '\0';
    printf("String 1: %s \n", string1);
    printf("String 2: %s \n", string2);
    return 0;
}
