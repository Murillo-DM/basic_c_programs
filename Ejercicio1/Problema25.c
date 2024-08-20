#include <stdio.h>
#include <stdlib.h>

int sumarImpares(int n) {
    int suma = 0, numeroImpar = 1;
    for (int i = 0; i < n; i++) {
        suma += numeroImpar;
        numeroImpar += 2;
    }
    return suma;
}
int main() {
    int n = 30, resultado = sumarImpares(n); 
   
    printf("La suma de los primeros %d numeros impares es: %d\n", resultado);

    system ("pause");
    return 0;
}

