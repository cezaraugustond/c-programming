#include <stdio.h>

int main() {
    int gatos, vet_experiente, vet_iniciante;
    printf("Quantidade de gatos capturados: ");
    scanf("%d", &gatos);
    vet_experiente = gatos / 4;
    vet_iniciante = gatos % 4;
    printf("Capturados %d gatos, cada veterinario experiente fica com %d castracoes, e o veterinario iniciante fica com %d castracoes. \n", gatos, vet_experiente, vet_iniciante);
    return 0;
}
