#include <stdio.h>

int main() {
    int x1, x2 = 9;
    float f1, f2;
    x1 = x2 / 2;
    printf("x1 = %d \n", x1);
    f1 = x2 / 2; // 9 / 2 = 4 (inteiro), depois convertido para float → 4.0
    printf("f1 = %f \n", f1); 
    f2 = x2 / 2.0; // 9 / 2.0 → 4.5 (divisão real)
    printf("f2 = %f \n", f2);
    return 0;
}
