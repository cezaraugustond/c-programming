#include <stdio.h>

struct ponto2D {
    int x, y;
};

struct ponto3D {
    int x, y, z;
};

int main() {
    struct ponto2D p2;
    struct ponto3D p3;
    printf("Ponto x no 2D: ");
    scanf("%d", &p2.x);
    printf("Ponto y no 2D: ");
    scanf("%d", &p2.y);
    printf("Ponto x no 3D: ");
    scanf("%d", &p3.x);
    printf("Ponto y no 2D: ");
    scanf("%d", &p3.y);
    printf("Ponto z no 2D: ");
    scanf("%d", &p3.z);
    printf("PONTOS NO 2D: \n");
    printf("-> x = %d \n-> y = %d \n", p2.x, p2.y);
    printf("PONTOS NO 3D: \n");
    printf("-> x = %d \n-> y = %d \n-> z = %d", p3.x, p3.y, p3.z);
    return 0;
}
