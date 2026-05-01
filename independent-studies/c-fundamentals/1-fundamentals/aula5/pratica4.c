#include <stdio.h>

int main(){
    int x = 833;
    float f1, f2 = 5.25;
    f1 = x;
    printf("f1 = %f \n", f1);
    x = f2;
    // Exibe apenas a parte inteira
    printf("x = %d \n", x);
    return 0;
}
