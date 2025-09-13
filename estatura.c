#include <stdio.h>

int main() {
    int n, i;
    float estatura, suma = 0.0, media;

    printf("¿Cuántas personas? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Estatura de la persona %d (en metros): ", i);
        scanf("%f", &estatura);
        suma += estatura;
    }

    media = suma / n;
    printf("La estatura media es: %.2f metros\n", media);

    return 0;
}