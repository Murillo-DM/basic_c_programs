#include <stdio.h>
#include <stdlib.h>

double calcularMedia(int n) {
    double suma = 0.0, numero;

    for (int a = 0; a < n; a++) {
        printf("Ingrese el numero %d: ", a + 1);
        scanf("%lf", &numero);
        suma += numero;
    }
    return suma / n;
}
int main() {
    int n;

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("El numero de elementos debe ser mayor que 0\n");
        return 1;
    }
    double media = calcularMedia(n);
    printf("La media de los numeros ingresados es: %.2f\n", media);

    system ("pause");
    return 0;
}
