#include <stdio.h>

int main() {
    int dose1, inter_anos, dose2, dose3, dose4;
    printf("Ano da primeira dose: ");
    scanf("%d", &dose1);
    printf("Periodicidade da vacina: ");
    scanf("%d", &inter_anos);
    dose2 = dose1 + inter_anos;
    dose3 = dose2 + inter_anos;
    dose4 = dose3 + inter_anos;
    printf("Com a primeira dose sendo no ano de %d, as proximas tres dose serao em %d, %d e %d", dose1, dose2, dose3, dose4);
    return 0;
}
