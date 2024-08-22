#include <stdio.h>
#include <stdlib.h>

void CambiarBase(int n, int b) {
    if (b < 2 || b > 10) {
        printf("La base debe estar entre 2 y 10\n");
        return;
    }
    if (n < 0) {
        printf("El numero debe ser un entero positivo\n");
        return;
    }
    char resultado[32]; //32 digitos debido a que el mayor numero ingresado puede ser 2,147,483,648
    int a = 0;
    if (n == 0) {
        printf("Es 0\n");
        return;
    } 
    while (n > 0) {
        int residuo = n % b;
        resultado[a++] = residuo + '0'; 
        n = n / b;
    }
    printf("La representación en base %d es: ", b);
    for (int c = a - 1; c >= 0; c--) { //se ponen los digitos a la inversa para que de el resultado
        printf("%c", resultado[c]);
    }
    printf("\n");
}
int main() {
    int numero, base;

    printf("Ingrese el numero entero positivo: ");
    scanf("%d", &numero);
    printf("Ingrese la base (2-10): "); //desde la base binaria a la base decimal 
    scanf("%d", &base);
    CambiarBase(numero, base);

    system ("pause");
    return 0;
}


