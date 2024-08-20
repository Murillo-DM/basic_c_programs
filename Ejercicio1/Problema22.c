#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double r, a, x, y;
 
    printf("Ingrese el radio: ");
    scanf("%lf", &r);
    printf("Ingrese el angulo en radianes: ");
    scanf("%lf", &a);

    x = r * cos(a);
    y = r * sin(a);

    printf("Las coordenadas cartesianas son:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    system ("pause");
    return 0;
}