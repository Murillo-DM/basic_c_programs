#include <stdio.h>
#include <stdlib.h>

int main() {
   int suma = 0, a = 20;

    while (a <= 100) {
    if (a % 2 == 0) { 
    suma = suma + a; 
    }
    a = a + 1; 
    }
    printf("La suma de los numeros pares entre 20 y 100 incluyendolos, es: %d\n", suma);

system ("pause");
    return 0;
}
