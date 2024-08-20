#include <stdio.h>
#include <stdlib.h>

int digito(char c) {
    return (c >= '0' && c <= '9'); //en el sistema decimal hay diez digitos: 0, 1, 2, 3, 4, 5, 6, 7, 8 y 9
}
int main() {
    char c;

    printf("Ingresa un caracter: ");
    scanf(" %c", &c);  
    if (digito(c)) {
        printf("El caracter '%c' es un digito.\n", c);
    } else {
        printf("El caracter '%c' no es un digito.\n", c);
    }
    system ("pause");
    return 0;
}
 