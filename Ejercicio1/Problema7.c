#include <stdio.h> //LIBRERIA
#include <stdlib.h>

int main() {
    int a, suma = 0;
    for (a = 1; a <= 30; a++) {
        suma = suma + a;
    }
    printf("La suma de los numeros del 1 al 30 es: %d\n", suma);

   system ("pause");
   return 0;
}