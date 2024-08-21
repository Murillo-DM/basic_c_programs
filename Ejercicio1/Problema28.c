#include <stdio.h>
#include <stdlib.h>
#define MAX 9000 //los cuatro primeros numeros perfectos son 6, 28, 496 y 8128

int esPerfecto(int num) {
    int sumaDivisores = 0;
    for (int a = 1; a <= num / 2; a++) { //calcular la suma de los divisores propios de los numero
        if (num % a == 0) {
            sumaDivisores += a;
        }
    }
    return sumaDivisores == num; //la suma de los divisores es igual al numero
}
void numerosPerfectos(int max) { //void es una funcion que no regresa ningun valor 
    printf("numeros perfectos menores que %d:\n", max);
    for (int a = 1; a < max; a++) {
        if (esPerfecto(a)) {
            printf("%d\n", a);
        }
    }
}
int main() {
    numerosPerfectos(MAX);

    system ("pause");
    return 0;
}
