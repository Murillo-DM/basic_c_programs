#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double grados, radianes, pi = 3.1416;

    printf("Ingresa el angulo en grados:\n");
    scanf("%lf", &grados);

    radianes = grados * (pi / 180.0); //de angulo a radianes

    printf("Angulo en grados: %.4lf\n", grados);
    printf("Angulo en radianes: %.4lf\n", radianes);
    printf("Seno: %.4lf\n", sin(radianes));
    printf("Coseno: %.4lf\n", cos(radianes));
    printf("Tangente: %.4lf\n", tan(radianes));

    system ("pause");
    return 0;
}